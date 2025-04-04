{TFile fileOutput1("delta_test.root","recreate");

TH2D* delta_width=new TH2D("delta_width","Width vs Mass Plot for delta decay",200,1,1.6,200,0,0.2); //bins originally 200
TH2D* delta_dist=new TH2D("delta_dist","Distribution for delta decay",200,1,1.6,200,0,1);
TH1D* delta_dist_charged_1D=new TH1D("delta_dist_1D","Distribution for delta decay (1D)",200,1,1.6);
TRandom3 rndgen;

Int_t nevents=10000000;
Int_t Percentage=nevents/100;

TLorentzVector delta;
TLorentzVector *proton, *pi;
TLorentzVector  copy_proton, copy_pi;
TVector3 Boost_delta;

Double_t Phasespace_Weight_1;

TLorentzVector V1;

TGenPhaseSpace Vertex_1;

double_t delta_mass, Width;

Double_t Masses_0[1] = {delta_mass};
Double_t Masses_1[2] = {0.939,0.139};

  for (Long64_t i=0;i<nevents;i++){

    //Counter shows percentage of simulated events completed
    if(i % Percentage == 0){
      fprintf (stderr, "%lld\r", i/Percentage);
      fflush (stderr);
    }

    Checker_Called:

    delta_mass = rndgen.Rndm()+Masses_1[1]+Masses_1[0];
    Masses_0[0] = delta_mass;

    delta.SetXYZM(0,0,0,delta_mass);

    V1=delta;
    Vertex_1.SetDecay(V1,2,Masses_1);
    Phasespace_Weight_1=Vertex_1.Generate();
    proton=Vertex_1.GetDecay(0);
    pi=Vertex_1.GetDecay(1);

  //  cout<<proton->Rho()<<endl;

//Calculating Width each time
    double_t Form_factor = TMath::Power(6.3,2)/(1+(TMath::Power(6.3,2)*(TMath::Power(pi->Rho(),2))));
    Width = TMath::Power(0.84,2)*TMath::Power(pi->Rho(),3)*Form_factor;
//    cout<<Masses_1[0]+Masses_1[1]<<endl;

//    double_t BW = (0.12*0.12*0.25)/(TMath::Power((/*Masses_1[0]+Masses_1[1]*/delta_mass-1.232),2)+(0.25*Width*Width));

    double_t BW = (Width*Width*0.25)/(TMath::Power((delta_mass-1.232),2)+(0.25*0.12*0.12));

    delta_dist->Fill(delta_mass,BW);
    delta_width->Fill(delta_mass,Width);

  } //End of loop }

//CREATING THE 1D Histogram
  double Val=0.01, bin_val; //For testing purposes
  for (Long64_t j=1;j<201;j++){
    for(Long64_t k=1;k<201;k++){
      if(delta_dist->GetBinContent(j,k)>Val){
        bin_val = delta_dist->GetYaxis()->GetBinCenter(k);
        delta_dist_1D->SetBinContent(j,bin_val);
      }
    }
  }

/*
TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);

delta_width-> SetTitle("Width Vs Mass Delta Decay (Proton #pi^{0} branch); Mass [GeV/c^{2}]; Width [GeV/c^{2}]");

delta_width->Draw("");
*/
TCanvas* c2 = new TCanvas("c2","stacked hists",5,5,1000,1000);

delta_dist-> SetTitle("Distribution Delta Decay (Proton #pi^{+-} branch); Mass [GeV/c^{2}]; BW Value");

delta_dist->Draw("");

TCanvas* c3 = new TCanvas("c3","stacked hists",5,5,1000,1000);

delta_dist_1D-> SetTitle("Distribution Delta Decay (Proton #pi^{+-} branch, 1D); Mass [GeV/c^{2}]; Weight");

delta_dist_1D->Draw("");


//} //End of code }

