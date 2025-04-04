{TFile fileOutput1("Sigma_plus_dist.root","recreate");

TH2D* Sigma_plus_dist=new TH2D("Sigma_plus_dist","Breit-Wigner Distribution of #Sigma^{*+}",800,1,1.8,2000,0,2);

TRandom3 rndgen;

Int_t nevents=1000000;
Int_t Percentage=nevents/100;

TLorentzVector Sigma_plus;
TLorentzVector *Lambda, *pi;
TLorentzVector  copy_Lambda, copy_pi;
TVector3 Boost_Sigma;

Double_t Phasespace_Weight_1;

TLorentzVector V1;

TGenPhaseSpace Vertex_1;

double_t Sigma_mass, Width;

Double_t Masses_0[1] = {Sigma_mass};
Double_t Masses_1[2] = {1.115,0.139};

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
    Lambda=Vertex_1.GetDecay(0);
    pi=Vertex_1.GetDecay(1);

//    cout<<Proton->Rho()<<endl;

//Calculating Width each time
    double_t Form_factor = TMath::Power(6.3,2)/(1+(TMath::Power(6.3,2)*(TMath::Power(pi->Rho(),2))));
    Width = TMath::Power(0.53,2)*TMath::Power(pi->Rho(),3)*Form_factor;  //Momentum dependent width
//    cout<<Width<<endl;

//    double_t m = Masses_1[0] + Masses_1[1];

// FOR REF double_t Sigma_dist = (TMath::Power(Width,2)*0.25)/(TMath::Power(Sigma_mass-1.385,2)+(0.25*(TMath::Power(0.036,2))));

    double_t Sigma_dist = (TMath::Power(Width,2)*0.25)/(TMath::Power(Sigma_mass-1.385,2)+(0.25*(TMath::Power(Width,2))));
    Sigma_plus_dist->Fill(Sigma_mass,Sigma_dist);
    //cout<<Sigma_mass<<endl;
   // cout<<<endl;
//    cout<<Sigma_dist<<endl;

  } //End of loop }

fileOutput1.Write();

TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);

Sigma_plus_dist-> SetTitle("Breit-Wigner Distribution of #Sigma^{*+}; Mass [GeV]; Breit-Wigner Value");

Sigma_plus_dist->Draw("");

//} //End of code }
