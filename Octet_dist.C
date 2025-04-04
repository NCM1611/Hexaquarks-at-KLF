{ TFile fileOutput1("Oct_dist.root","recreate");
TH2F* ds_N_Lambda_hist= new TH2F("ds_Octet_N_Lambda","BW of ds Octet B1",800,2,3,800,0,0.01);
TH2F* ds_N_Sigma_hist= new TH2F("ds_Octet_N_Sigma","BW of ds Octet B2",800,2,3,800,0,0.01);

TH1F* ds_N_Lambda_hist_1D= new TH1F("ds_Octet_N_Lambda_1D","BW of ds Octet B1",800,2,3.3);
TH1F* ds_N_Sigma_hist_1D= new TH1F("ds_Octet_N_Sigma_1D","BW of ds Octet B2",800,2,3.3);

TRandom3 rndgen;
TRandom3 r;
Int_t nevents=10000; //Initial val = 100000
Int_t Percentage=nevents/100;
double_t Width_1, Width_2;

for (Long64_t i=0;i<nevents;i++){
  if(i % Percentage == 0){
    fprintf (stderr, "%lld\r", i/Percentage);
    fflush (stderr);
  }

  Width_1 = 0;
  Width_2 = 0;
  double_t M_1 = 2 + r.Rndm();
  double_t M_2 = 2+ r.Rndm();
  if(M_1<2.054){
    Width_1 = 0;
  }
  if(M_1>=2.054){
    Width_1 = 0.0039;
  }
//  cout<<M_1<<"AND"<<Width_1<<endl;
  if(M_1<2.128){
    Width_2 = 0;
  }
  if(M_2>=2.128){
    Width_2 = 0.0042;
  }
  ds_N_Lambda_hist->Fill(M_1,Width_1);
  ds_N_Sigma_hist->Fill(M_2,Width_2);

  double Val=0.0001, bin_val; //For testing purposes
  for (Long64_t j=1;j<801;j++){
    for(Long64_t k=1;k<801;k++){
//      cout<< j<<"    "<<k<<endl;
      if(ds_N_Lambda_hist->GetBinContent(j,k)>Val){
        bin_val = ds_N_Lambda_hist->GetYaxis()->GetBinCenter(k);
        ds_N_Lambda_hist_1D->SetBinContent(j,bin_val);
      }
    }
  }
  double Val_2 = 0.0001, bin_val_2;
  for (Long64_t a=1;a<801;a++){
    for(Long64_t b=1;b<801;b++){
      if(ds_N_Sigma_hist->GetBinContent(a,b)>Val_2){
        bin_val_2 = ds_N_Sigma_hist->GetYaxis()->GetBinCenter(b);
        ds_N_Sigma_hist_1D->SetBinContent(a,bin_val_2);
      }
    }
  }
//cout<<"TEST"<<endl;
}//END OF LOOP

fileOutput1.Write();

TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);
ds_N_Lambda_hist->SetTitle("Breit-Wigner distribution of ds (N #Lambda branch);Masses[GeV/c^{2}];Width [Gev]");
ds_N_Lambda_hist->Draw("hist"); //prev plt

TCanvas* c2 = new TCanvas("c2","stacked hists",5,5,1000,1000);
ds_N_Sigma_hist->SetTitle("Breit-Wigner distribution of ds (N #Sigma branch);Masses[GeV/c^{2}];Width [Gev]");
ds_N_Sigma_hist->Draw("hist"); //prev plt

TCanvas* c3 = new TCanvas("c3","stacked hists",5,5,1000,1000);
ds_N_Lambda_hist_1D->SetTitle("Breit-Wigner distribution of ds (N #Lambda branch, 1D);Masses[GeV/c^{2}];Width [Gev]");
ds_N_Lambda_hist_1D->Draw("hist"); //prev plt

TCanvas* c4 = new TCanvas("c4","stacked hists",5,5,1000,1000);
ds_N_Sigma_hist_1D->SetTitle("Breit-Wigner distribution of ds (N #Sigma branch, 1D);Masses[GeV/c^{2}];Width [Gev]");
ds_N_Sigma_hist_1D->Draw("hist"); //prev plt

//}//END OF CODE
