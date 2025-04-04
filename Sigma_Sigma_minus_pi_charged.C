{TFile fileOutput1("Sigma_plus_Sigma_pi.root","recreate");

TH2D* Sigma_plus_dist=new TH2D("Sigma_minus_Sigma_pi","Breit-Wigner Distribution of #Sigma^{*-} (#Sigma #pi branch)",800,1,1.8,800,0,1);
TH1D* Sigma_plus_dist_1D=new TH1D("Sigma_minus_Sigma_pi_1D","Breit-Wigner Distribution of #Sigma^{*-} (#Sigma #pi branch 1D)",800,1,1.8);
TRandom3 rndgen;

Int_t nevents=1000000;
Int_t Percentage=nevents/100;

TLorentzVector Sigma_plus;
TLorentzVector *Sigma, *pi;
TLorentzVector  copy_Sigma, copy_pi;
TVector3 Boost_Sigma;

Double_t Phasespace_Weight_1;

TLorentzVector V1;

TGenPhaseSpace Vertex_1;

double_t Sigma_mass, Width;

Double_t Masses_0[1] = {Sigma_mass};
Double_t Masses_1[2] = {1.197,0.139}; //Sigma masses average to around 1190 MeV

 for (Long64_t i=0;i<nevents;i++){

 //Counter shows percentage of simulated events completed
    if(i % Percentage == 0){
      fprintf (stderr, "%lld\r", i/Percentage);
      fflush (stderr);
    }

//    Checker_Called:

    Sigma_mass = rndgen.Rndm()+(Masses_1[0]+Masses_1[1]); //THRESHOLD + 1 GEV
    Masses_0[0] = Sigma_mass;

    Sigma_plus.SetXYZM(0,0,0,Sigma_mass);

    V1=Sigma_plus;
    Vertex_1.SetDecay(V1,2,Masses_1);
    Phasespace_Weight_1=Vertex_1.Generate();
    Sigma=Vertex_1.GetDecay(0);
    pi=Vertex_1.GetDecay(1);

//    cout<<Proton->Rho()<<endl;

//Calculating Width each time
    double_t Form_factor = TMath::Power(6.3,2)/(1+(TMath::Power(6.3,2)*(TMath::Power(pi->Rho(),2))));
    Width = TMath::Power(0.875,2)*TMath::Power(pi->Rho(),3)*Form_factor;  //Momentum dependent width
//    Sigma_plus_dist->Fill(Sigma_mass,Width);
//    cout<<Width<<endl;

//    double_t m = Masses_1[0] + Masses_1[1];

// FOR REF double_t Sigma_dist = (TMath::Power(Width,2)*0.25)/(TMath::Power(Sigma_mass-1.385,2)+(0.25*(TMath::Power(0.036,2))));

    double_t Sigma_dist = (TMath::Power(Width,2)*0.25)/(TMath::Power(Sigma_mass-1.385,2)+(0.25*(TMath::Power(Width,2))));
    Sigma_plus_dist->Fill(Sigma_mass,Sigma_dist);
    //cout<<Sigma_mass<<endl;
   // cout<<<endl;
//    cout<<Sigma_dist<<endl;

  } //End of loop }

//CREATING THE 1D Histogram
  double Val=0.01, bin_val; //For testing purposes
  for (Long64_t j=1;j<801;j++){
    for(Long64_t k=1;k<801;k++){
      if(Sigma_plus_dist->GetBinContent(j,k)>Val){
        bin_val = Sigma_plus_dist->GetYaxis()->GetBinCenter(k);
        Sigma_plus_dist_1D->SetBinContent(j,bin_val);
      }
    }
  }

fileOutput1.Write();

TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);

Sigma_plus_dist-> SetTitle("Breit-Wigner Distribution of #Sigma^{*+} (#Sigma #pi decay branch); Mass [GeV/c^{2}]; Breit-Wigner Value");
//Sigma_plus_dist-> SetTitle("Width Test Plot of #Sigma^{*+} (#Sigma #pi branch); Mass [GeV/c^2]; Width [GeV/c^2]");

Sigma_plus_dist->Draw("");

TCanvas* c2 = new TCanvas("c2","stacked hists",5,5,1000,1000);

Sigma_plus_dist_1D-> SetTitle("Breit-Wigner Distribution of #Sigma^{*-} (#Sigma - #pi +- decay branch, 1D); Mass [GeV/c^{2}]; Breit-Wigner Value");
//Sigma_plus_dist-> SetTitle("Width Test Plot of #Sigma^{*+} (#Sigma^{+} #pi^{0} branch); Mass [GeV/c^2]; Width [GeV/c^2]");

Sigma_plus_dist_1D->Draw("");


//} //End of code }
