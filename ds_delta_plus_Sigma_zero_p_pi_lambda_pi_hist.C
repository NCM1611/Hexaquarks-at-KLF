{TFile fileOutput1("ds_BW_Lambda_pi_branch.root","recreate");

TH1F* ds_proton_pi_Lambda_pi_hist= new TH1F("ds_proton_pi_Lambda_pi","BW of ds",800,2,3.3);
TH1F* ds_proton_pi_Lambda_pi_hist_norm= new TH1F("ds_proton_pi_Lambda_pi_norm","BW of ds",500,2.2,3.2);

std::unique_ptr<TFile> file1( TFile::Open("delta_proton_pi_zero_1D.root") );
if (!file1 || file1->IsZombie()) {
   std::cerr << "Error opening file" << endl;
   exit(-1);
}
std::unique_ptr<TH1> delta_dist(file1->Get<TH1>("delta_dist_1D"));

std::unique_ptr<TFile> file2( TFile::Open("Sigma_plus_dist.root") );
if (!file2 || file2->IsZombie()) {
   std::cerr << "Error opening file" << endl;
   exit(-1);
}
std::unique_ptr<TH1> Sigma_dist(file2->Get<TH1>("Sigma_plus_dist_1D"));

//Num of events and percentage completed
Int_t nevents=100000;  //increased from 100000
Int_t Percentage=nevents/100;

double ds_mass;
double_t ds_Weight;
//Defining Particles
TLorentzVector ds;
TLorentzVector *proton,*pi_1,*Lambda,*pi_2;
double_t Masses_1[1] = {ds_mass/*2.474*/};
double_t Masses_2[4] = {0.939,0.139,1.115,0.134};
TLorentzVector V1;
Double_t Phasespace_Weight_1;
TGenPhaseSpace Vertex_1, Vertex_2;

TLorentzVector delta_1;
TLorentzVector Sigma_1;

TRandom3 rndgen;
TRandom3 r;

for (Long64_t i=0;i<nevents;i++){

//Counter shows percentage of simulated events completed
  if(i % Percentage == 0){
    fprintf (stderr, "%lld\r", i/Percentage);
    fflush (stderr);
  }

  ds_mass=rndgen.Rndm()+(Masses_2[0]+Masses_2[1]+Masses_2[2]+Masses_2[3]);
  Masses_1[0]=ds_mass;

  ds.SetXYZM(0,0,0,Masses_1[0]);
  V1= ds;
  Vertex_1.SetDecay(V1,4,Masses_2);
  Phasespace_Weight_1=Vertex_1.Generate();

  //cout<<"test"<<endl;

  proton=Vertex_1.GetDecay(0);
  pi_1=Vertex_1.GetDecay(1);
  Lambda=Vertex_1.GetDecay(2);
  pi_2=Vertex_1.GetDecay(3);

//  cout<<"test 2"<<endl;

  delta_1 = *proton + *pi_1;
  double_t delta_inv_mass = delta_1.M();
  //cout<<delta_inv_mass<<endl;
  double_t delta_Weight = delta_dist->Interpolate(delta_inv_mass);

  Sigma_1 = *Lambda + *pi_2;
  double_t Sigma_inv_mass = Sigma_1.M();
  double_t Sigma_Weight = Sigma_dist->Interpolate(Sigma_inv_mass);

//  cout<<"DELTA"<<delta_inv_mass<<endl;
//  cout<<"SIGMA"<<Sigma_inv_mass<<endl;

//  cout<<Sigma_inv_mass+delta_inv_mass<<endl;
//delta_1->Rho is the momentum not the proton->Rho bit. Get rid of 1/4 as it is the relative momentum of the systyem (dif between sigma and delta momentum)
// MISSED SQUARE AS WELL HENCE NO FRONT FACTOR
//Momentum of delta and Sigma are the same hence Delta_momentum^2 for q^2.
//Form factor is same for delta and sigma because of the above.

  double_t Form_factor = (0.16*0.16)/((0.16*0.16) + ((delta_1.Rho())*(delta_1.Rho())) );

//  cout<<Phasespace_Weight_1<<endl;
  ds_Weight = delta_Weight*Sigma_Weight*Phasespace_Weight_1*Form_factor;
  ds_proton_pi_Lambda_pi_hist->Fill(ds_mass,ds_Weight);

}//End of loop }

//ATTEMPT TO NORMALISE WITHOUT SCALE FUNCTION - Does not work currently, needs more work.
//  double max_a = ds_proton_pi_Lambda_pi_hist->GetMaximumBin();
//  double_t y_max = ds_proton_pi_Lambda_pi_hist->GetBinContent(max_a);

//  cout<<y_max<<"GAP"<<max_a<<endl;

  double ds_width = ds_proton_pi_Lambda_pi_hist->Interpolate(2.474);
  cout<<ds_width<<endl;
  double del_sig_width = ds_proton_pi_Lambda_pi_hist->Interpolate(1.232+1.385);
  cout<<del_sig_width<<endl;
  ds_proton_pi_Lambda_pi_hist->Scale((0.115+0.036)/del_sig_width);

fileOutput1.Write();

TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);
ds_proton_pi_Lambda_pi_hist->SetTitle("Breit-Wigner distribution of ds (p #pi^{0} #Lambda #pi^{0} branch);Masses[GeV/c^{2}];Width [Gev]");
ds_proton_pi_Lambda_pi_hist->Draw("hist"); //prev plt


}
