{TFile fileOutput1("ds_Tot_Width.root","recreate");

TH1F* h_Tot_Width_1=new TH1F("h_Tot_Width_1","Total Width of ds",800,2,3.3);
TH1F* h_Tot_Width_2=new TH1F("h_Tot_Width_2","Total Width of ds",800,2,3.3);
TH1F* h_Tot_Width_3=new TH1F("h_Tot_Width_3","Total Width of ds",800,2,3.3);
TH1F* h_Tot_Width_4=new TH1F("h_Tot_Width_4","Total Width of ds",800,2,3.3);

std::unique_ptr<TFile> file1( TFile::Open("ds_BW_sigma_pi_branch.root") );
if (!file1 || file1->IsZombie()) {
   std::cerr << "Error opening file" << endl;
   exit(-1);
}
//std::unique_ptr<TH1> ds_Decuplet_1(file1->Get<TH1>("ds_proton_pi_Sigma_pi"));
TH1F* ds_Decuplet_1=(TH1F*)(file1->Get<TH1>("ds_proton_pi_Sigma_pi"));

std::unique_ptr<TFile> file2( TFile::Open("ds_BW_Lambda_pi_branch.root") );
if (!file2 || file2->IsZombie()) {
   std::cerr << "Error opening file" << endl;
   exit(-1);
}
//std::unique_ptr<TH1> ds_Decuplet_2(file2->Get<TH1>("ds_proton_pi_Lambda_pi"));
TH1F* ds_Decuplet_2=(TH1F*)(file2->Get<TH1>("ds_proton_pi_Lambda_pi"));

std::unique_ptr<TFile> file3( TFile::Open("Oct_dist.root") );
if (!file3 || file3->IsZombie()) {
   std::cerr << "Error opening file" << endl;
   exit(-1);
}
TH1F* ds_Octet_1=(TH1F*)(file3->Get<TH1>("ds_Octet_N_Lambda_1D"));

std::unique_ptr<TFile> file4( TFile::Open("Oct_dist.root") );
if (!file4 || file4->IsZombie()) {
   std::cerr << "Error opening file" << endl;
   exit(-1);
}
TH1F* ds_Octet_2=(TH1F*)(file4->Get<TH1>("ds_Octet_N_Sigma_1D"));
//ds_Decuplet_1->Add(ds_Decuplet_2);
h_Tot_Width_1->Add(ds_Decuplet_1);
h_Tot_Width_1->Add(ds_Decuplet_2);
h_Tot_Width_1->Add(ds_Octet_1);
h_Tot_Width_1->Add(ds_Octet_2);

h_Tot_Width_2->Add(ds_Decuplet_1);
h_Tot_Width_2->Add(ds_Octet_2);
h_Tot_Width_2->Add(ds_Octet_1);

h_Tot_Width_3->Add(ds_Decuplet_1);
h_Tot_Width_3->Add(ds_Octet_1);

h_Tot_Width_4->Add(ds_Decuplet_1);

fileOutput1.Write();

TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);
h_Tot_Width_1->SetTitle("Total Width vs Mass Plot of ds;Mass[GeV/c^{2}];\\Gamma  [GeV]");
h_Tot_Width_1->SetLineColor(2);
h_Tot_Width_1->Draw("HIST");
h_Tot_Width_2->SetLineColor(8);
h_Tot_Width_2->Draw("HIST same c");
h_Tot_Width_3->SetLineColor(4);
h_Tot_Width_3->Draw("HIST same c");
h_Tot_Width_4->SetLineColor(1);
h_Tot_Width_4->Draw("HIST same c");
/*
TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);
ds_Decuplet_1->SetTitle("ds Total Width; Mass [GeV/c^{2}]; Width [GeV]");
//ds_Decuplet_1->Add(h_Tot_Width);
//h_Tot_Width->Draw();
ds_Decuplet_1->Draw("HIST");
//void SetistLineColor(Color_t color = 25);
ds_Decuplet_2->Draw("hist same c");
ds_Octet_1->Draw("SAME");
ds_Octet_2->Draw("SAME");
*/
}// END OF CODE
