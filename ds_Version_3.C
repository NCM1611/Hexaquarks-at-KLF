{ TFile fileOutput1("Kaon_Lambda_Output_test.root","recreate");

////////////////////////////////////////
//CREATION OF HISTOGRAMS FOR DATA
////////////////////////////////////////

//ds and First decay particles

TH2D* h_ds=new TH2D("h_ds","Angular dependence of ds",200,0,11,200,0,180);

TH2D* h_delta_plus=new TH2D("h_delta_plus","Angular dependence of #Delta^{+}",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero=new TH2D("h_ex_Sigma_zero","Angular dependence of #Sigma^{*0}",200,0,11,200,0,180);

TH2D* h_delta_zero=new TH2D("h_delta_zero","Angular dependence of #Delta^{0}",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus=new TH2D("h_ex_Sigma_plus","Angular dependence of #Sigma^{*+}",200,0,11,200,0,180);

TH2D* h_delta_two_plus=new TH2D("h_delta_two_plus","Angular dependence of #Delta^{++}",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus=new TH2D("h_ex_Sigma_minus","Angular dependence of #Sigma^{*-}",200,0,11,200,0,180);

//Second Decay Particles
//delta plus sigma zero
TH2D* h_delta_plus_proton=new TH2D("h_delta_plus_proton","Angular dependence of Proton (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_pi_zero=new TH2D("h_delta_plus_pi_zero","Angular dependence of #pi^{0} (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_neutron=new TH2D("h_delta_plus_neutron","Angular dependence of Neutron (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_pi_plus=new TH2D("h_delta_plus_pi_plus","Angular dependence of #pi^{+} (#Delta^{+} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_zero_Sigma_plus=new TH2D("h_ex_Sigma_zero_Sigma_plus","Angular dependence of #Sigma^{+} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_minus=new TH2D("h_ex_Sigma_zero_pi_minus","Angular dependence of #pi^{-} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_Sigma_minus=new TH2D("h_ex_Sigma_zero_Sigma_minus","Angular dependence of #Sigma^{-} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_plus=new TH2D("h_ex_Sigma_zero_pi_plus","Angular dependence of #Sigma^{+} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_Lambda=new TH2D("h_ex_Sigma_zero_Lambda","Angular dependence of #Lambda^{0} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_zero=new TH2D("h_ex_Sigma_zero_pi_zero","Angular dependence of #pi^{0} (#Sigma^{*0} branch)",200,0,11,200,0,180);

//delta zero sigma plus
TH2D* h_delta_zero_proton=new TH2D("h_delta_zero_proton","Angular dependence of Proton (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_pi_minus=new TH2D("h_delta_zero_pi_minus","Angular dependence of #pi^{-} (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_neutron=new TH2D("h_delta_zero_neutron","Angular dependence of Neutron (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_pi_zero=new TH2D("h_delta_zero_pi_zero","Angular dependence of #pi^{0} (#Delta^{0} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_plus_Sigma_plus=new TH2D("h_ex_Sigma_plus_Sigma_plus","Angular dependence of #Sigma^{+} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_zero=new TH2D("h_ex_Sigma_plus_pi_zero","Angular dependence of #pi^{0} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_Sigma_zero=new TH2D("h_ex_Sigma_plus_Sigma_zero","Angular dependence of #Sigma^{0} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_plus=new TH2D("h_ex_Sigma_plus_pi_plus","Angular dependence of #Sigma^{+} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_Lambda=new TH2D("h_ex_Sigma_plus_Lambda","Angular dependence of #Lambda^{0} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_plus_2=new TH2D("h_ex_Sigma_plus_pi_plus_2","Angular dependence of #pi^{+} (#Sigma^{*+} branch)",200,0,11,200,0,180);

//Delta double plus sigma minus
TH2D* h_delta_double_plus_proton=new TH2D("h_double_delta_plus_proton","Angular dependence of Proton (#Delta^{++} branch)",200,0,11,200,0,180);
TH2D* h_delta_double_plus_pi_plus=new TH2D("h_double_delta_plus_pi_zero","Angular dependence of #pi^{+} (#Delta^{++} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_minus_Sigma_zero=new TH2D("h_ex_Sigma_minus_Sigma_zero","Angular dependence of #Sigma^{0} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_minus=new TH2D("h_ex_Sigma_minus_pi_minus","Angular dependence of #pi^{-} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_Sigma_minus=new TH2D("h_ex_Sigma_minus_Sigma_minus","Angular dependence of #Sigma^{-} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_zero=new TH2D("h_ex_Sigma_minus_pi_zero","Angular dependence of #pi^{0} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_Lambda=new TH2D("h_ex_Sigma_minus_Lambda","Angular dependence of #Lambda^{0} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_minus_2=new TH2D("h_ex_Sigma_minus_pi_minus_2","Angular dependence of #pi^{-} (#Sigma^{*-} branch)",200,0,11,200,0,180);

//WITH DETECTOR CUTS
TH2D* h_delta_plus_proton_det=new TH2D("h_delta_plus_proton_det","Angular dependence of Proton with cuts (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_pi_zero_det=new TH2D("h_delta_plus_pi_zero_det","Angular dependence of #pi^{0} with cuts (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_neutron_det=new TH2D("h_delta_plus_neutron_det","Angular dependence of Neutron with cuts (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_pi_plus_det=new TH2D("h_delta_plus_pi_plus_det","Angular dependence of #pi^{+} with cuts (#Delta^{+} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_zero_Sigma_plus_det=new TH2D("h_ex_Sigma_zero_Sigma_plus_det","Angular dependence of #Sigma^{+} with cuts (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_minus_det=new TH2D("h_ex_Sigma_zero_pi_minus_det","Angular dependence of #pi^{-} with cuts (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_Sigma_minus_det=new TH2D("h_ex_Sigma_zero_Sigma_minus_det","Angular dependence of #Sigma^{-} with cuts (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_plus_det=new TH2D("h_ex_Sigma_zero_pi_plus_det","Angular dependence of #Sigma^{+} with cuts (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_Lambda_det=new TH2D("h_ex_Sigma_zero_Lambda_det","Angular dependence of #Lambda^{0} with cuts (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_zero_det=new TH2D("h_ex_Sigma_zero_pi_zero_det","Angular dependence of #pi^{0} with cuts (#Sigma^{*0} branch)",200,0,11,200,0,180);

//delta zero sigma plus
TH2D* h_delta_zero_proton_det=new TH2D("h_delta_zero_proton_det","Angular dependence of Proton with cuts (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_pi_minus_det=new TH2D("h_delta_zero_pi_minus_det","Angular dependence of #pi^{-} with cuts (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_neutron_det=new TH2D("h_delta_zero_neutron_det","Angular dependence of Neutron with cuts (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_pi_zero_det=new TH2D("h_delta_zero_pi_zero_det","Angular dependence of #pi^{0} with cuts (#Delta^{0} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_plus_Sigma_plus_det=new TH2D("h_ex_Sigma_plus_Sigma_plus_det","Angular dependence of #Sigma^{+} with cuts (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_zero_det=new TH2D("h_ex_Sigma_plus_pi_zero_det","Angular dependence of #pi^{0} with cuts (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_Sigma_zero_det=new TH2D("h_ex_Sigma_plus_Sigma_zero_det","Angular dependence of #Sigma^{0} with cuts (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_plus_det=new TH2D("h_ex_Sigma_plus_pi_plus_det","Angular dependence of #Sigma^{+} with cuts (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_Lambda_det=new TH2D("h_ex_Sigma_plus_Lambda_det","Angular dependence of #Lambda^{0} with cuts (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_plus_2_det=new TH2D("h_ex_Sigma_plus_pi_plus_2_det","Angular dependence of #pi^{+} with cuts (#Sigma^{*+} branch)",200,0,11,200,0,180);

//Delta double plus sigma minus
TH2D* h_delta_double_plus_proton_det=new TH2D("h_double_delta_plus_proton_det","Angular dependence of Proton with cuts (#Delta^{++} branch)",200,0,11,200,0,180);
TH2D* h_delta_double_plus_pi_plus_det=new TH2D("h_double_delta_plus_pi_zero_det","Angular dependence of #pi^{+} with cuts (#Delta^{++} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_minus_Sigma_zero_det=new TH2D("h_ex_Sigma_minus_Sigma_zero_det","Angular dependence of #Sigma^{0} with cuts (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_minus_det=new TH2D("h_ex_Sigma_minus_pi_minus_det","Angular dependence of #pi^{-} with cuts (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_Sigma_minus_det=new TH2D("h_ex_Sigma_minus_Sigma_minus_det","Angular dependence of #Sigma^{-} with cuts (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_zero_det=new TH2D("h_ex_Sigma_minus_pi_zero_det","Angular dependence of #pi^{0} with cuts (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_Lambda_det=new TH2D("h_ex_Sigma_minus_Lambda_det","Angular dependence of #Lambda^{0} with cuts (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_minus_2_det=new TH2D("h_ex_Sigma_minus_pi_minus_2_det","Angular dependence of #pi^{-} with cuts (#Sigma^{*-} branch)",200,0,11,200,0,180);

//ACCEPTANCE PLOTS
TH2D* h_delta_plus_proton_Acceptance=new TH2D("h_delta_plus_proton_Acceptance","Acceptance of Proton (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_pi_zero_Acceptance=new TH2D("h_delta_plus_pi_zero_Acceptance","Acceptance of #pi^{0} (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_neutron_Acceptance=new TH2D("h_delta_plus_neutron_Acceptance","Acceptance of Neutron (#Delta^{+} branch)",200,0,11,200,0,180);
TH2D* h_delta_plus_pi_plus_Acceptance=new TH2D("h_delta_plus_pi_plus_Acceptance","Acceptance of #pi^{+} (#Delta^{+} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_zero_Sigma_plus_Acceptance=new TH2D("h_ex_Sigma_zero_Sigma_plus_Acceptance","Acceptance of #Sigma^{+} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_minus_Acceptance=new TH2D("h_ex_Sigma_zero_pi_minus_Acceptance","Acceptance of #pi^{-} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_Sigma_minus_Acceptance=new TH2D("h_ex_Sigma_zero_Sigma_minus_Acceptance","Acceptance of #Sigma^{-} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_plus_Acceptance=new TH2D("h_ex_Sigma_zero_pi_plus_Acceptance","Acceptance of #Sigma^{+} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_Lambda_Acceptance=new TH2D("h_ex_Sigma_zero_Lambda_Acceptance","Acceptance of #Lambda^{0} (#Sigma^{*0} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_zero_pi_zero_Acceptance=new TH2D("h_ex_Sigma_zero_pi_zero_Acceptance","Acceptance of #pi^{0} (#Sigma^{*0} branch)",200,0,11,200,0,180);

//delta zero sigma plus
TH2D* h_delta_zero_proton_Acceptance=new TH2D("h_delta_zero_proton_Acceptance","Acceptance of Proton (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_pi_minus_Acceptance=new TH2D("h_delta_zero_pi_minus_Acceptance","Acceptance of #pi^{-} (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_neutron_Acceptance=new TH2D("h_delta_zero_neutron_Acceptance","Acceptance of Neutron (#Delta^{0} branch)",200,0,11,200,0,180);
TH2D* h_delta_zero_pi_zero_Acceptance=new TH2D("h_delta_zero_pi_zero_Acceptance","Acceptance of #pi^{0} (#Delta^{0} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_plus_Sigma_plus_Acceptance=new TH2D("h_ex_Sigma_plus_Sigma_plus_Acceptance","Acceptance of #Sigma^{+} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_zero_Acceptance=new TH2D("h_ex_Sigma_plus_pi_zero_Acceptance","Acceptance of #pi^{0} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_Sigma_zero_Acceptance=new TH2D("h_ex_Sigma_plus_Sigma_zero_Acceptance","Acceptance of #Sigma^{0} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_plus_Acceptance=new TH2D("h_ex_Sigma_plus_pi_plus_Acceptance","Acceptance of #Sigma^{+} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_Lambda_Acceptance=new TH2D("h_ex_Sigma_plus_Lambda_Acceptance","Acceptance of #Lambda^{0} (#Sigma^{*+} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_plus_pi_plus_2_Acceptance=new TH2D("h_ex_Sigma_plus_pi_plus_2_Acceptance","Acceptance of #pi^{+} (#Sigma^{*+} branch)",200,0,11,200,0,180);

//Delta double plus sigma minus
TH2D* h_delta_double_plus_proton_Acceptance=new TH2D("h_double_delta_plus_proton_Acceptance","Acceptance of Proton (#Delta^{++} branch)",200,0,11,200,0,180);
TH2D* h_delta_double_plus_pi_plus_Acceptance=new TH2D("h_double_delta_plus_pi_zero_Acceptance","Acceptance of #pi^{+} (#Delta^{++} branch)",200,0,11,200,0,180);

TH2D* h_ex_Sigma_minus_Sigma_zero_Acceptance=new TH2D("h_ex_Sigma_minus_Sigma_zero_Acceptance","Acceptance of #Sigma^{0} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_minus_Acceptance=new TH2D("h_ex_Sigma_minus_pi_minus_Acceptance","Acceptance of #pi^{-} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_Sigma_minus_Acceptance=new TH2D("h_ex_Sigma_minus_Sigma_minus_Acceptance","Acceptance of #Sigma^{-} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_zero_Acceptance=new TH2D("h_ex_Sigma_minus_pi_zero_Acceptance","Acceptance of #pi^{0} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_Lambda_Acceptance=new TH2D("h_ex_Sigma_minus_Lambda_Acceptance","Acceptance of #Lambda^{0} (#Sigma^{*-} branch)",200,0,11,200,0,180);
TH2D* h_ex_Sigma_minus_pi_minus_2_Acceptance=new TH2D("h_ex_Sigma_minus_pi_minus_2_Acceptance","Acceptance of #pi^{-} (#Sigma^{*-} branch)",200,0,11,200,0,180);

///////////////////////////////////////
//////////////READING IN HISTOGRAMS FOR MOMENTUM AND MASS DISTRIBUTIONS/////////////////////////
//Read in Momentum Histogram of the beam into the code
  std::unique_ptr<TFile> file( TFile::Open("MomentumHist.root") );
  if (!file || file->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> hist(file->Get<TH1>("h24p"));

  TRandom3 rndgen;
  TRandom3 r;

//BW HISTOGRAMS FOR DELTA, SIGMA AND DS MASSES/////////////////////////////////////////

  std::unique_ptr<TFile> file1( TFile::Open("delta_proton_pi_zero_1D.root") ); //Delta -> Nucleon + pi^0
  if (!file1 || file1->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> delta_dist_p_pi_0(file1->Get<TH1>("delta_dist_1D"));

  std::unique_ptr<TFile> file2( TFile::Open("delta_proton_pi_charged.root") ); //Delta -> Nucleon + pi^+-
  if (!file2 || file2->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> delta_dist_p_pi_charged(file2->Get<TH1>("delta_dist_1D"));

  std::unique_ptr<TFile> file3( TFile::Open("Sigma_plus_dist.root") ); //Sigma -> Lambda + pi^+-
  if (!file3 || file3->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> Sigma_dist_Lambda_pi_charged(file3->Get<TH1>("Sigma_plus_dist_1D"));

  std::unique_ptr<TFile> file4( TFile::Open("Sigma_Lambda_pi_zero.root") ); //Sigma -> Lambda + pi^0
  if (!file4 || file4->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> Sigma_dist_Lambda_pi_zero(file4->Get<TH1>("Sigma_plus_dist_1D"));

  std::unique_ptr<TFile> file5( TFile::Open("Sigma_sigma_plus_pi_zero.root") ); //Sigma -> Sigma+ + pi^0
  if (!file5 || file5->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> Sigma_dist_sigma_plus_pi_zero(file5->Get<TH1>("Sigma_plus_Sigma_pi_1D"));

  std::unique_ptr<TFile> file6( TFile::Open("Sigma_sigma_plus_pi_charged.root") ); //Sigma -> Sigma+ + pi^0
  if (!file6 || file6->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> Sigma_dist_sigma_plus_pi_charged(file6->Get<TH1>("Sigma_plus_Sigma_pi_1D"));

  std::unique_ptr<TFile> file7( TFile::Open("Sigma_sigma_minus_pi_charged.root") ); //Sigma -> Sigma- + pi^+-
  if (!file7 || file7->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> Sigma_dist_sigma_minus_pi_charged(file7->Get<TH1>("Sigma_minus_Sigma_pi_1D"));

  std::unique_ptr<TFile> file8( TFile::Open("Sigma_sigma_minus_pi_zero.root") ); //Sigma -> Sigma- + pi^0
  if (!file8 || file8->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> Sigma_dist_sigma_minus_pi_zero(file8->Get<TH1>("Sigma_minus_Sigma_pi_1D"));

  std::unique_ptr<TFile> file9( TFile::Open("Sigma_sigma_zero_pi_charged.root") ); //Sigma -> Sigma0 + pi^+-
  if (!file9 || file9->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> Sigma_dist_sigma_zero_pi_charged(file9->Get<TH1>("Sigma_zero_Sigma_pi_1D"));

//DS DISTRIBUTIONS
  std::unique_ptr<TFile> file10( TFile::Open("ds_BW_sigma_pi_branch.root") ); //Sigma -> Sigma- + pi^0
  if (!file10 || file10->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> ds_dist_sigma_pi(file10->Get<TH1>("ds_proton_pi_Sigma_pi"));

  std::unique_ptr<TFile> file11( TFile::Open("ds_BW_Lambda_pi_branch.root") ); //Sigma -> Sigma0 + pi^+-
  if (!file11 || file11->IsZombie()) {
     std::cerr << "Error opening file" << endl;
     exit(-1);
  }
  std::unique_ptr<TH1> ds_dist_lambda_pi(file11->Get<TH1>("ds_proton_pi_Lambda_pi"));

 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // Creating particles and terms

  // How many events to simulate and percentage completed
  Int_t nevents=1000000; //Initial val = 100000
  Int_t Percentage=nevents/100;

  // Creating TLorentzVectors of particles
  TLorentzVector Beam, Target; // Beam and target
  TLorentzVector *ds; //ds particle produced from beam and target

  TLorentzVector *delta_plus,*ex_Sigma_zero,*delta_zero,*ex_Sigma_plus,*delta_double_plus,*ex_Sigma_minus; // 1st decay products
  TLorentzVector copy_delta_plus,copy_ex_Sigma_zero,copy_delta_zero,copy_ex_Sigma_plus,copy_delta_double_plus,copy_ex_Sigma_minus; //Copies of 1st decay products

  TLorentzVector *delta_plus_proton,*delta_plus_pi_zero,*delta_plus_neutron,*delta_plus_pi_plus,*ex_Sigma_zero_sigma_plus,
                 *ex_Sigma_zero_pi_minus,*ex_Sigma_zero_sigma_minus,*ex_Sigma_zero_pi_plus,*ex_Sigma_zero_Lambda,*ex_Sigma_zero_pi_zero; //2nd decay products (1ST SET)
  TLorentzVector copy_delta_plus_proton,copy_delta_plus_pi_zero,copy_delta_plus_neutron,copy_delta_plus_pi_plus,copy_ex_Sigma_zero_sigma_plus,
                 copy_ex_Sigma_zero_pi_minus,copy_ex_Sigma_zero_sigma_minus,copy_ex_Sigma_zero_pi_plus,copy_ex_Sigma_zero_Lambda,copy_ex_Sigma_zero_pi_zero; //Copies of 2nd decay products

  TLorentzVector *delta_zero_proton,*delta_zero_pi_minus,*delta_zero_neutron,*delta_zero_pi_zero,*ex_Sigma_plus_sigma_plus,
                 *ex_Sigma_plus_pi_zero,*ex_Sigma_plus_sigma_zero,*ex_Sigma_plus_pi_plus,*ex_Sigma_plus_Lambda,*ex_Sigma_plus_pi_plus_2; //2nd decay products (2ND SET)
  TLorentzVector copy_delta_zero_proton,copy_delta_zero_pi_minus,copy_delta_zero_neutron,copy_delta_zero_pi_zero,copy_ex_Sigma_plus_sigma_plus,
                 copy_ex_Sigma_plus_pi_zero,copy_ex_Sigma_plus_sigma_zero,copy_ex_Sigma_plus_pi_plus,copy_ex_Sigma_plus_Lambda,copy_ex_Sigma_plus_pi_plus_2; //Copies of 2nd decay products

  TLorentzVector *delta_double_plus_proton,*delta_double_plus_pi_zero,*delta_double_plus_neutron,*delta_double_plus_pi_plus,*ex_Sigma_minus_sigma_minus,
                 *ex_Sigma_minus_pi_zero,*ex_Sigma_minus_sigma_zero,*ex_Sigma_minus_pi_minus,*ex_Sigma_minus_Lambda,*ex_Sigma_minus_pi_minus_2; //2nd decay products (3RD SET)
  TLorentzVector copy_delta_double_plus_proton,copy_delta_double_plus_pi_zero,copy_delta_double_plus_neutron,copy_delta_double_plus_pi_plus,copy_ex_Sigma_minus_sigma_minus,
                 copy_ex_Sigma_minus_pi_zero,copy_ex_Sigma_minus_sigma_zero,copy_ex_Sigma_minus_pi_minus,copy_ex_Sigma_minus_Lambda,copy_ex_Sigma_minus_pi_minus_2; //Copies of 2nd decay products

  TVector3 Boost_delta, Boost_sigma, Boost_ds; //Boost Vector to be used to calculate the AM weighting
  // q is momentum transfer from beam to target, used to calculate q^2 weight
  TLorentzVector q;

  // Making Weights
  Double_t Phasespace_Weight_1;
  Double_t Phasespace_Weight_2;
  Double_t Phasespace_Weight_3;
  Double_t Phasespace_Weight_4;
  Double_t qWeight;

  double_t Kaon_momentum;

  // Setting TLorentzVectors for beam and target in GeV (Px,Py,Pz,E)
  Target.SetXYZM(0,0,0,1.87654); //TARGET DEUTRERON WITH M=2*Proton mass

  // Defining initial vertex and masses of particles and Lorentz Vectors
  TLorentzVector V1;//Beam + Target into ds;
  TLorentzVector V2;//ds into delta sigma
  TLorentzVector V3;//Delta decay
  TLorentzVector V4;//Sigma decay

  double delta_mass, sigma_mass,ds_mass; //Masses to be randomly generated each itteration using BW distribution.
  Double_t Masses_0[2] = {ds_mass};//ds particle mass
  Double_t Masses_1[2] = {delta_mass,sigma_mass}; // delta,sigma*

  Double_t Masses_2[2] = {0.939,0.139}; //Proton pi plus/minus  PROTON AND NEUTRON MASSES ARE 939 AND 938 MEV
  Double_t Masses_3[2] = {0.939,0.134}; //Proton pi zero
  Double_t Masses_4[2] = {0.938,0.139}; //Neutron pi plus/minus
  Double_t Masses_5[2] = {0.938,0.134}; //Neutron pi zero

  Double_t Masses_6[2] = {1.189,0.139}; //Sigma plus pi plus/minus
  Double_t Masses_7[2] = {1.197,0.139}; //Sigma minus pi plus/minus
  Double_t Masses_8[2] = {1.192,0.139}; //Sigma zero pi plus/minus
  Double_t Masses_9[2] = {1.189,0.134}; //Sigma plus pi zero
  Double_t Masses_10[2] = {1.197,0.134}; //Sigma minus pi zero

  Double_t Masses_11[2] = {1.115,0.134}; //Lambda pi zero
  Double_t Masses_12[2] = {1.115,0.139}; //Lambda pi plus/minus

 // Creating decay vertices
  TGenPhaseSpace Vertex_1, Vertex_2, Vertex_3, Vertex_4;

  double_t AM_Weighting_ds, AM_Weighting_delta, AM_Weighting_Sigma;
  double Pi = TMath::Pi();
  double random_1,random_2, random_3, random_4;
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // Loop over events

  // Looping over simulated events
  for (Long64_t i=0;i<nevents;i++){

    // Counter, shows percentage of simulated events completed
    if (i % Percentage == 0){
      fprintf (stderr, "%lld\r", i/Percentage);
      fflush (stderr);
    }

    //Random Number generation to choose the pathways in the decay
    random_1 = r.Rndm(); //What delta sigma charge branch is chosen
    random_2 = r.Rndm(); //What secondary decay path is chosen for each delta sigma particle
    random_3 = r.Rndm(); //Extra for sigma branching ratios
    random_4 = r.Rndm(); //Extra for the choice of the ds mass distribution

    //BW Mass distributions, NEED TO IMPORT THE HISTOGRAMS IN FIRST FOR ALL OF THEM
    if(random_1<=0.33){ //Delta plus sigma zero
      if(random_2<0.33){ //proton pi zero
        delta_mass = delta_dist_p_pi_0->GetRandom();
      }
      if(random_2>=0.33){ //Neutron pi plus
        delta_mass = delta_dist_p_pi_charged->GetRandom(); //
      }
      if(random_3<0.117){ //Sigma into sigma pi
	if(random_2<0.5){
	  sigma_mass = Sigma_dist_sigma_plus_pi_charged->GetRandom(); //Sigma plus pi minus
	}
	if(random_2>=0.5){
	  sigma_mass = Sigma_dist_sigma_minus_pi_charged->GetRandom(); //Sigma minus pi plus
	}
      }
      if(random_3>=0.117){//Sigma into lambda pi
        sigma_mass = Sigma_dist_Lambda_pi_zero->GetRandom();//
        //cout<<sigma_mass<<endl;
      }
    }

    if(random_1>0.33 && random_1<0.5){//Delta zero sigma plus
      if(random_2<0.33){ //Proton pi minus
        delta_mass = delta_dist_p_pi_charged->GetRandom(); 
      }
      if(random_2>=0.33){ //Neutron pi zero
        delta_mass = delta_dist_p_pi_0->GetRandom();  //
      }
      if(random_3<0.117){ //Sigma into sigma pi
        if(random_2<0.5){
          sigma_mass = Sigma_dist_sigma_plus_pi_zero->GetRandom(); //Sigma plus pi zero
        }
        if(random_2>=0.5){
          sigma_mass = Sigma_dist_sigma_zero_pi_charged->GetRandom(); //Sigma zero pi plus
        }
      }
      if(random_3>=0.117){//Sigma into lambda pi
        sigma_mass = Sigma_dist_Lambda_pi_charged->GetRandom();//
        //cout<<sigma_mass<<endl;
      }
    }

    if(random_1>=0.5){ //Delta ++ sigma minus 
      delta_mass = delta_dist_p_pi_charged->GetRandom(); // Proton pi plus
      if(random_3<0.117){ //Sigma into sigma pi
        if(random_2<0.5){
          sigma_mass = Sigma_dist_sigma_zero_pi_charged->GetRandom(); //Sigma zero pi minus
        }
        if(random_2>=0.5){
          sigma_mass = Sigma_dist_sigma_minus_pi_zero->GetRandom(); //Sigma minus pi zero
        }
      }
      if(random_3>=0.117){//Sigma into lambda pi
        sigma_mass = Sigma_dist_Lambda_pi_charged->GetRandom();//
        //cout<<sigma_mass<<endl;
      }
    }

    if(random_4<0.117){
      ds_mass = ds_dist_sigma_pi->GetRandom();
    }
    if(random_4>=0.117){
      ds_mass = ds_dist_lambda_pi->GetRandom();
    }
//    delta_mass = Sigma_plus_dist->GetRandom();
//    sigma_mass = Sigma_zero_mass_dist->GetRandom();
//    ds_mass = ds_mass_dist->GetRandom();

    Masses_1[1] = sigma_mass;
    Masses_1[0] = delta_mass;
    Masses_0[0] = ds_mass; 

    Kaon_momentum = hist->GetRandom();

    Beam.SetXYZM(0,0,Kaon_momentum,0.497);
    V1=Beam+Target;

//    cout<<V1.Rho()<<endl;

    //Energy Balence Check (Redundant-Remove this)
    if(Beam[3]+Target[3] < Masses_0[0]){
//     goto Checker_Called; //Breaks loop and regerates mass values
//     cout<<i<<endl;
    }

//    cout<<Masses_0[0]<<endl;

//    Vertex_1.SetDecay(V1,2,Masses_0); //ds formed
    Phasespace_Weight_1=1.0; //Vertex_1.Generate();
//    ds=Vertex_1.GetDecay(0);
//    cout<<ds->Rho()<<endl;
//    (TLorentzVector)*ds=V1;
//cout<<"TEST 1"<<endl;
     // ds->SetPxPyPzE(V1.Px(),V1.Py(),V1.Pz(),V1.E());
//cout<<"TEST 2"<<endl;
  //FORMING THE DELTA AND SIGMA PAIR FROM THE DECAY OF ds
    V2=V1;
//cout<<V2.E()<<endl;
    Vertex_2.SetDecay(V2,2,Masses_1);
    Phasespace_Weight_2=Vertex_2.Generate();
    //cout<<Phasespace_Weight_2<<endl;
    if(random_1<=0.33){
     delta_plus=Vertex_2.GetDecay(0);
     ex_Sigma_zero=Vertex_2.GetDecay(1);
//     cout<<ex_Sigma_zero->Rho()<<endl;
    }
    if(random_1>0.33 && random_1<0.5){
      delta_zero=Vertex_2.GetDecay(0);
      ex_Sigma_plus=Vertex_2.GetDecay(1);
//      cout<<ex_Sigma_plus->Rho()<<endl;
    }
    if(random_1>=0.5){
      delta_double_plus=Vertex_2.GetDecay(0);
      ex_Sigma_minus=Vertex_2.GetDecay(1);
    }
    //DECAY OF DELTA
    //1ST SET DELTA PLUS
    if(random_1<=0.33){
      V3=(TLorentzVector)*delta_plus;
      if(random_2<=0.33){ //PROTON PI ZERO
        Vertex_3.SetDecay(V3,2,Masses_3);
	Phasespace_Weight_3=Vertex_3.Generate();
	delta_plus_proton=Vertex_3.GetDecay(0);
	delta_plus_pi_zero=Vertex_3.GetDecay(1);
      }
      if(random_2>0.33){ //NEUTRON PI PLUS
  	Vertex_3.SetDecay(V3,2,Masses_4);
	Phasespace_Weight_3=Vertex_3.Generate();
        delta_plus_neutron=Vertex_3.GetDecay(0);
	delta_plus_pi_plus=Vertex_3.GetDecay(1);
      }
    }

    //2ND SET DELTA ZERO
    if(random_1>0.33 && random_1<0.5){
      V3=(TLorentzVector)*delta_zero;
      if(random_2<=0.33){ //PROTON PI MINUS
        Vertex_3.SetDecay(V3,2,Masses_2);
        Phasespace_Weight_3=Vertex_3.Generate();
        delta_zero_proton=Vertex_3.GetDecay(0);
        delta_zero_pi_minus=Vertex_3.GetDecay(1);
      }
      if(random_2>0.33){ //NEUTRON PI ZERO
        Vertex_3.SetDecay(V3,2,Masses_5);
        Phasespace_Weight_3=Vertex_3.Generate();
        delta_zero_neutron=Vertex_3.GetDecay(0);
        delta_zero_pi_zero=Vertex_3.GetDecay(1);
//	cout<<delta_zero_pi_zero->Rho()<<endl;
      }
    }

    //3RD SET DUAL DOUBLE DELTA
    if(random_1>=0.5){
      V3=(TLorentzVector)*delta_double_plus;
        Vertex_3.SetDecay(V3,2,Masses_2);
        Phasespace_Weight_3=Vertex_3.Generate();
        delta_double_plus_proton=Vertex_3.GetDecay(0);
        delta_double_plus_pi_plus=Vertex_3.GetDecay(1);
//	cout<<Phasespace_Weight_3<<endl;
    }

    //DECAY OF EXCITED SIGMA

    //1ST SET SIGMA ZERO
    if(random_1<=0.33){
      if(random_3<0.117){ //IF THE SIGMA DECAYS TO A SIGMA PION 
//         cout<<ex_Sigma_zero->Rho()<<"FIRST"<<endl;
  //       cout<<random_2<<endl;
        V4=(TLorentzVector)*ex_Sigma_zero;
//        cout<<V4.Rho()<<endl;
//	cout<<ex_Sigma_zero->Rho()<<"SECOND"<<endl;

//	cout<< Masses_6[0]+Masses_6[1]<<"GAP"<<V4.M()<<endl;


        if(random_2<=0.5){ //Sigma plus pi minus (Sigma minus pi plus as well)
	  Vertex_4.SetDecay(V4,2,Masses_6);
          Phasespace_Weight_4=Vertex_4.Generate();
          ex_Sigma_zero_sigma_plus=Vertex_4.GetDecay(0);
          ex_Sigma_zero_pi_minus=Vertex_4.GetDecay(1);

//	  cout<<Phasespace_Weight_4<<endl;

        }
        if(random_2>0.5){ 
          Vertex_4.SetDecay(V4,2,Masses_7);
          Phasespace_Weight_4=Vertex_4.Generate();
          ex_Sigma_zero_sigma_minus=Vertex_4.GetDecay(0);
          ex_Sigma_zero_pi_plus=Vertex_4.GetDecay(1);
        }
      }

      if(random_3>=0.117){ //IF THE SIGMA DECAYS TO A LAMBDA PION
        V4=(TLorentzVector)*ex_Sigma_zero;
	Vertex_4.SetDecay(V4,2,Masses_11);

        Phasespace_Weight_4=Vertex_4.Generate();
        ex_Sigma_zero_Lambda=Vertex_4.GetDecay(0);
        ex_Sigma_zero_pi_zero=Vertex_4.GetDecay(1);
      }

    }

    //2ND SET SIGMA PLUS
    if(random_1>0.33 && random_1<0.5){
      if(random_3<0.117){
        V4=(TLorentzVector)*ex_Sigma_plus;
        if(random_2<=0.5){ //SIGMA PLUS PI ZERO
          Vertex_4.SetDecay(V4,2,Masses_9);
          Phasespace_Weight_4=Vertex_4.Generate();
          ex_Sigma_plus_sigma_plus=Vertex_4.GetDecay(0);
          ex_Sigma_plus_pi_zero=Vertex_4.GetDecay(1);
          //cout<< ex_Sigma_plus_pi_zero->Rho()<<endl;
        }
        if(random_2>0.5){ //SIGMA ZERO PI PLUS
          Vertex_4.SetDecay(V4,2,Masses_8);
          Phasespace_Weight_4=Vertex_4.Generate();
          ex_Sigma_plus_sigma_zero=Vertex_4.GetDecay(0);
          ex_Sigma_plus_pi_plus=Vertex_4.GetDecay(1);
        }
      }
      if(random_3>=0.117){ //IF THE SIGMA DECAYS TO A LAMBDA PION
          V4=(TLorentzVector)*ex_Sigma_plus;
          Vertex_4.SetDecay(V4,2,Masses_12);
          Phasespace_Weight_4=Vertex_4.Generate();
          ex_Sigma_plus_Lambda=Vertex_4.GetDecay(0);
          ex_Sigma_plus_pi_plus_2=Vertex_4.GetDecay(1);
      }
    }

    //3RD SET SIGMA MINUS
    if(random_1>=0.5){
      if(random_3<0.117){ //Sigma pi branch
         V4=(TLorentzVector)*ex_Sigma_minus;
         if(random_2<0.5){ //Sigma decays to Sigma zero pi minus
           Vertex_4.SetDecay(V4,2,Masses_8);
           Phasespace_Weight_4=Vertex_4.Generate();
           ex_Sigma_minus_sigma_zero=Vertex_4.GetDecay(0);
           ex_Sigma_minus_pi_minus=Vertex_4.GetDecay(1);
          }
        if(random_2>=0.5){ //Sigma decays to Sigma minus pi zero
          Vertex_4.SetDecay(V4,2,Masses_10);
          Phasespace_Weight_4=Vertex_4.Generate();
          ex_Sigma_minus_sigma_minus=Vertex_4.GetDecay(0);
          ex_Sigma_minus_pi_zero=Vertex_4.GetDecay(1);
        }
      }
      if(random_3>=0.117){ //Sigma Lambda pi branch
        V4=(TLorentzVector)*ex_Sigma_minus;
        Vertex_4.SetDecay(V4,2,Masses_12); //Sigma decays to Lambda zero pi minus
	Phasespace_Weight_4=Vertex_4.Generate();
	cout<<Phasespace_Weight_4<<endl;
	ex_Sigma_minus_Lambda=Vertex_4.GetDecay(0);
	ex_Sigma_minus_pi_minus_2=Vertex_4.GetDecay(1);
      }
    }

//   cout<<Phasespace_Weight_1<<Phasespace_Weight_2<<Phasespace_Weight_3<<Phasespace_Weight_4<<endl;

    /////////////////////////////////////////////////////////////
    //Calculating the boosts from the particles
    //ds Weighting calculation, dependend on the charge conjugation of delta and Sigma ////CHECK THE DS WEIGHTS AGAIN 14/3/25

    if(random_1<=0.33){ // ds Weighting from the delta plus Sigma zero branch
      Boost_ds = -1*V1.BoostVector();
      TVector3 three_ds = V1.Vect();

      copy_delta_plus.SetPxPyPzE(delta_plus->Px(),delta_plus->Py(),delta_plus->Pz(),delta_plus->E());
      copy_ex_Sigma_zero.SetPxPyPzE(ex_Sigma_zero->Px(),ex_Sigma_zero->Py(),ex_Sigma_zero->Pz(),ex_Sigma_zero->E());

      copy_delta_plus.Boost(Boost_ds);
      copy_ex_Sigma_zero.Boost(Boost_ds);

      TVector3 three_delta_plus = copy_delta_plus.Vect();
      TVector3 three_ex_Sigma_zero = copy_ex_Sigma_zero.Vect();

      double angle_ds = V1.Angle(three_delta_plus);
//      cout<<angle_ds<<endl;

      AM_Weighting_ds = 0.5*sqrt(1/Pi);
     // cout<<AM_Weighting_ds<<"BRANCH 1"<<endl;
    }
    if(random_1>0.33 && random_1<0.5){ //ds Weighting from the delta zero Sigma plus branch
      Boost_ds = -1*V1.BoostVector();
      TVector3 three_ds = V1.Vect();

      copy_delta_zero.SetPxPyPzE(delta_zero->Px(),delta_zero->Py(),delta_zero->Pz(),delta_zero->E());
      copy_ex_Sigma_plus.SetPxPyPzE(ex_Sigma_plus->Px(),ex_Sigma_plus->Py(),ex_Sigma_plus->Pz(),ex_Sigma_plus->E());

      copy_delta_zero.Boost(Boost_ds);
      copy_ex_Sigma_plus.Boost(Boost_ds);
      TVector3 three_delta_zero = copy_delta_zero.Vect();
      TVector3 three_ex_Sigma_plus = copy_ex_Sigma_plus.Vect();

      double angle_ds = V1.Angle(three_delta_zero);
     // cout<<angle_ds<<endl;

      AM_Weighting_ds = 0.5*sqrt(1/Pi);
     // cout<<AM_Weighting_ds<<"BRANCH 2"<<endl;
    }
    if(random_1>=0.5){ //ds Weighting from the delta double plus Sigma minus branch
      Boost_ds = -1*V1.BoostVector();
      TVector3 three_ds = V1.Vect();

      copy_delta_double_plus.SetPxPyPzE(delta_double_plus->Px(),delta_double_plus->Py(),delta_double_plus->Pz(),delta_double_plus->E());
      copy_ex_Sigma_minus.SetPxPyPzE(ex_Sigma_minus->Px(),ex_Sigma_minus->Py(),ex_Sigma_minus->Pz(),ex_Sigma_minus->E());

      copy_delta_double_plus.Boost(Boost_ds);
      copy_ex_Sigma_minus.Boost(Boost_ds);

      TVector3 three_delta_double_plus = copy_delta_double_plus.Vect();
      TVector3 three_ex_Sigma_minus = copy_ex_Sigma_minus.Vect();

      double angle_ds = V1.Angle(three_delta_double_plus);
   //   cout<<angle_ds<<endl;

      AM_Weighting_ds = 0.5*sqrt(1/Pi);
     // cout<<AM_Weighting_ds<<"Branch 3"<<endl;
    }

    //Delta Boost Calculation and the calculation of AM_Weighting_Delta
    if(random_1<=0.33){ // delta Weighting from the delta plus
      Boost_delta = -1*(*delta_plus).BoostVector();
      TVector3 three_delta_plus = (*delta_plus).Vect();

      if(random_2<=0.33){ //PROTON PI ZERO
        copy_delta_plus_proton.SetPxPyPzE(delta_plus_proton->Px(),delta_plus_proton->Py(),delta_plus_proton->Pz(),delta_plus_proton->E());
        copy_delta_plus_pi_zero.SetPxPyPzE(delta_plus_pi_zero->Px(),delta_plus_pi_zero->Py(),delta_plus_pi_zero->Pz(),delta_plus_pi_zero->E());

        copy_delta_plus_proton.Boost(Boost_delta);
        copy_delta_plus_pi_zero.Boost(Boost_delta);

        TVector3 three_delta_plus_proton = copy_delta_plus_proton.Vect();
        TVector3 three_delta_plus_pi_zero = copy_delta_plus_pi_zero.Vect();

        double angle_delta = (*delta_plus).Angle(three_delta_plus_proton);
       // cout<<angle_ds<<endl;

        AM_Weighting_delta = (1+3*TMath::Power(cos(angle_delta),2));
    //    cout<<AM_Weighting_delta<<"BRANCH 1 A"<<endl;
     }  

      if(random_2>0.33){ //NEUTRON PI PLUS
        copy_delta_plus_neutron.SetPxPyPzE(delta_plus_neutron->Px(),delta_plus_neutron->Py(),delta_plus_neutron->Pz(),delta_plus_neutron->E());
        copy_delta_plus_pi_plus.SetPxPyPzE(delta_plus_pi_plus->Px(),delta_plus_pi_plus->Py(),delta_plus_pi_plus->Pz(),delta_plus_pi_plus->E());

        copy_delta_plus_neutron.Boost(Boost_delta);
        copy_delta_plus_pi_plus.Boost(Boost_delta);

        TVector3 three_delta_plus_neutron = copy_delta_plus_neutron.Vect();
        TVector3 three_delta_plus_pi_plus = copy_delta_plus_pi_plus.Vect();

        double angle_delta = (*delta_plus).Angle(three_delta_plus_neutron);
       // cout<<angle_ds<<endl;

        AM_Weighting_delta = (1+3*TMath::Power(cos(angle_delta),2));
  //      cout<<AM_Weighting_delta<<"BRANCH 1 B"<<endl;
     }   

    }
    if(random_1>0.33 && random_1<0.5){ //ds Weighting from the delta zero
      Boost_delta = -1*(*delta_zero).BoostVector();
      TVector3 three_delta_zero = (*delta_zero).Vect();

      if(random_2<=0.33){ //PROTON PI MINUS
        copy_delta_zero_proton.SetPxPyPzE(delta_zero_proton->Px(),delta_zero_proton->Py(),delta_zero_proton->Pz(),delta_zero_proton->E());
        copy_delta_zero_pi_minus.SetPxPyPzE(delta_zero_pi_minus->Px(),delta_zero_pi_minus->Py(),delta_zero_pi_minus->Pz(),delta_zero_pi_minus->E());

        copy_delta_zero_proton.Boost(Boost_delta);
        copy_delta_zero_pi_minus.Boost(Boost_delta);

        TVector3 three_delta_zero_proton = copy_delta_zero_proton.Vect();
        TVector3 three_delta_zero_pi_minus = copy_delta_zero_pi_minus.Vect();

        double angle_delta = (*delta_zero).Angle(three_delta_zero_proton);
       // cout<<angle_ds<<endl;

        AM_Weighting_delta = (1+3*TMath::Power(cos(angle_delta),2));
      //  cout<<AM_Weighting_delta<<"BRANCH 2 A"<<endl;
     }  

      if(random_2>0.33){ //NEUTRON PI ZERO
        copy_delta_zero_neutron.SetPxPyPzE(delta_zero_neutron->Px(),delta_zero_neutron->Py(),delta_zero_neutron->Pz(),delta_zero_neutron->E());
        copy_delta_zero_pi_zero.SetPxPyPzE(delta_zero_pi_zero->Px(),delta_zero_pi_zero->Py(),delta_zero_pi_zero->Pz(),delta_zero_pi_zero->E());

        copy_delta_zero_neutron.Boost(Boost_delta);
        copy_delta_zero_pi_zero.Boost(Boost_delta);

        TVector3 three_delta_zero_neutron = copy_delta_zero_neutron.Vect();
        TVector3 three_delta_zero_pi_zero = copy_delta_zero_pi_zero.Vect();

        double angle_delta = (*delta_zero).Angle(three_delta_zero_neutron);
       // cout<<angle_ds<<endl;

        AM_Weighting_delta = (1+3*TMath::Power(cos(angle_delta),2));
     //   cout<<AM_Weighting_delta<<"BRANCH 2 B"<<endl;
     }   
    }

    if(random_1>=0.5){ //ds Weighting from the delta double plus
    
      Boost_delta = -1*(*delta_double_plus).BoostVector();
      TVector3 three_delta_double_plus = (*delta_double_plus).Vect();

//      cout<<"TEST"<<endl;

      copy_delta_double_plus_proton.SetPxPyPzE(delta_double_plus_proton->Px(),delta_double_plus_proton->Py(),delta_double_plus_proton->Pz(),delta_double_plus_proton->E());
      copy_delta_double_plus_pi_plus.SetPxPyPzE(delta_double_plus_pi_plus->Px(),delta_double_plus_pi_plus->Py(),delta_double_plus_pi_plus->Pz(),delta_double_plus_pi_plus->E());

      copy_delta_double_plus_proton.Boost(Boost_delta);
      copy_delta_double_plus_pi_plus.Boost(Boost_delta);

      TVector3 three_delta_double_plus_proton = copy_delta_double_plus_proton.Vect();
      TVector3 three_delta_double_plus_pi_plus = copy_delta_double_plus_pi_plus.Vect();

//      cout<<"TEST"<<endl;


      double angle_delta = (*delta_double_plus).Angle(three_delta_double_plus_proton);
//      cout<<angle_delta<<endl;

      AM_Weighting_delta = (1+3*TMath::Power(cos(angle_delta),2));
//      cout<<AM_Weighting_delta<<" "<<"BRANCH 3"<<endl; 
     }  

    //Sigma Boost Calculation and the calculation of AM_Weighting_Sigma

     if(random_1<=0.33){ // delta Weighting from the Sigma zero
      Boost_sigma = -1*(*ex_Sigma_zero).BoostVector();
      TVector3 three_ex_Sigma_zero = (*ex_Sigma_zero).Vect();

    //  cout<<ex_Sigma_zero_sigma_minus->Rho()<<endl;

      if(random_3<0.117){
        if(random_2<=0.5){ //Sigma pi 
          copy_ex_Sigma_zero_sigma_plus.SetPxPyPzE(ex_Sigma_zero_sigma_plus->Px(),ex_Sigma_zero_sigma_plus->Py(),ex_Sigma_zero_sigma_plus->Pz(),ex_Sigma_zero_sigma_plus->E());
          copy_ex_Sigma_zero_pi_minus.SetPxPyPzE(ex_Sigma_zero_pi_minus->Px(),ex_Sigma_zero_pi_minus->Py(),ex_Sigma_zero_pi_minus->Pz(),ex_Sigma_zero_pi_minus->E());

          copy_ex_Sigma_zero_sigma_plus.Boost(Boost_sigma);
          copy_ex_Sigma_zero_pi_minus.Boost(Boost_sigma);

          TVector3 three_ex_Sigma_zero_sigma_plus = copy_ex_Sigma_zero_sigma_plus.Vect();
          TVector3 three_ex_Sigma_zero_pi_minus = copy_ex_Sigma_zero_pi_minus.Vect();

          double angle_sigma = (*ex_Sigma_zero).Angle(three_ex_Sigma_zero_sigma_plus);
         // cout<<angle_ds<<endl;

          AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
          //cout<<AM_Weighting_Sigma<<"BRANCH 1 A"<<endl;
       }  

        if(random_2>0.5){ //Sigma Pi PLUS
          copy_ex_Sigma_zero_sigma_minus.SetPxPyPzE(ex_Sigma_zero_sigma_minus->Px(),ex_Sigma_zero_sigma_minus->Py(),ex_Sigma_zero_sigma_minus->Pz(),ex_Sigma_zero_sigma_minus->E());
          copy_ex_Sigma_zero_pi_plus.SetPxPyPzE(ex_Sigma_zero_pi_plus->Px(),ex_Sigma_zero_pi_plus->Py(),ex_Sigma_zero_pi_plus->Pz(),ex_Sigma_zero_pi_plus->E());

          copy_ex_Sigma_zero_sigma_minus.Boost(Boost_sigma);
          copy_ex_Sigma_zero_pi_plus.Boost(Boost_sigma);

          TVector3 three_ex_Sigma_zero_sigma_minus = copy_ex_Sigma_zero_sigma_minus.Vect();
          TVector3 three_ex_Sigma_zero_pi_plus = copy_ex_Sigma_zero_pi_plus.Vect();

          double angle_sigma = (*ex_Sigma_zero).Angle(three_ex_Sigma_zero_sigma_minus);
         // cout<<angle_ds<<endl;

          AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
          //cout<<AM_Weighting_Sigma<<"BRANCH 1 B"<<endl;
        } 
      }
      
      if(random_3>=0.117){
        copy_ex_Sigma_zero_Lambda.SetPxPyPzE(ex_Sigma_zero_Lambda->Px(),ex_Sigma_zero_Lambda->Py(),ex_Sigma_zero_Lambda->Pz(),ex_Sigma_zero_Lambda->E());
        copy_ex_Sigma_zero_pi_zero.SetPxPyPzE(ex_Sigma_zero_pi_zero->Px(),ex_Sigma_zero_pi_zero->Py(),ex_Sigma_zero_pi_zero->Pz(),ex_Sigma_zero_pi_zero->E());

        copy_ex_Sigma_zero_Lambda.Boost(Boost_sigma);
        copy_ex_Sigma_zero_pi_zero.Boost(Boost_sigma);

        TVector3 three_ex_Sigma_zero_Lambda = copy_ex_Sigma_zero_Lambda.Vect();
        TVector3 three_ex_Sigma_zero_pi_zero = copy_ex_Sigma_zero_pi_zero.Vect();

        double angle_sigma = (*ex_Sigma_zero).Angle(three_ex_Sigma_zero_Lambda);
       // cout<<angle_ds<<endl;

        AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
        //cout<<AM_Weighting_Sigma<<"BRANCH 1 C"<<endl;

      }
    }

//Boost from Branch 2 of the excited sigma particle:
     if(random_1>0.33 && random_1<0.5){ // delta Weighting from the Sigma zero
      Boost_sigma = -1*(*ex_Sigma_plus).BoostVector();
      TVector3 three_ex_Sigma_plus = (*ex_Sigma_plus).Vect();

      if(random_3<0.117){
        if(random_2<=0.5){ //Sigma pi 
          copy_ex_Sigma_plus_sigma_plus.SetPxPyPzE(ex_Sigma_plus_sigma_plus->Px(),ex_Sigma_plus_sigma_plus->Py(),ex_Sigma_plus_sigma_plus->Pz(),ex_Sigma_plus_sigma_plus->E());
          copy_ex_Sigma_plus_pi_zero.SetPxPyPzE(ex_Sigma_plus_pi_zero->Px(),ex_Sigma_plus_pi_zero->Py(),ex_Sigma_plus_pi_zero->Pz(),ex_Sigma_plus_pi_zero->E());

          copy_ex_Sigma_plus_sigma_plus.Boost(Boost_sigma);
          copy_ex_Sigma_plus_pi_zero.Boost(Boost_sigma);

          TVector3 three_ex_Sigma_plus_sigma_plus = copy_ex_Sigma_plus_sigma_plus.Vect();
          TVector3 three_ex_Sigma_plus_pi_zero = copy_ex_Sigma_plus_pi_zero.Vect();

          double angle_sigma = (*ex_Sigma_plus).Angle(three_ex_Sigma_plus_sigma_plus);
         // cout<<angle_ds<<endl;

          AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
         // cout<<AM_Weighting_Sigma<<"BRANCH 2 A"<<endl;
       }  

        if(random_2>0.5){ //Sigma Pi PLUS
          copy_ex_Sigma_plus_sigma_zero.SetPxPyPzE(ex_Sigma_plus_sigma_zero->Px(),ex_Sigma_plus_sigma_zero->Py(),ex_Sigma_plus_sigma_zero->Pz(),ex_Sigma_plus_sigma_zero->E());
          copy_ex_Sigma_plus_pi_plus.SetPxPyPzE(ex_Sigma_plus_pi_plus->Px(),ex_Sigma_plus_pi_plus->Py(),ex_Sigma_plus_pi_plus->Pz(),ex_Sigma_plus_pi_plus->E());

          copy_ex_Sigma_plus_sigma_zero.Boost(Boost_sigma);
          copy_ex_Sigma_plus_pi_plus.Boost(Boost_sigma);

          TVector3 three_ex_Sigma_plus_sigma_zero = copy_ex_Sigma_plus_sigma_zero.Vect();
          TVector3 three_ex_Sigma_plus_pi_plus = copy_ex_Sigma_plus_pi_plus.Vect();

          double angle_sigma = (*ex_Sigma_plus).Angle(three_ex_Sigma_plus_sigma_zero);
         // cout<<angle_ds<<endl;

          AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
         // cout<<AM_Weighting_Sigma<<"BRANCH 2 B"<<endl;
        } 
      }
       
      if(random_3>=0.117){
        copy_ex_Sigma_plus_Lambda.SetPxPyPzE(ex_Sigma_plus_Lambda->Px(),ex_Sigma_plus_Lambda->Py(),ex_Sigma_plus_Lambda->Pz(),ex_Sigma_plus_Lambda->E());
        copy_ex_Sigma_plus_pi_plus_2.SetPxPyPzE(ex_Sigma_plus_pi_plus_2->Px(),ex_Sigma_plus_pi_plus_2->Py(),ex_Sigma_plus_pi_plus_2->Pz(),ex_Sigma_plus_pi_plus_2->E());

        copy_ex_Sigma_plus_Lambda.Boost(Boost_sigma);
        copy_ex_Sigma_plus_pi_plus_2.Boost(Boost_sigma);

        TVector3 three_ex_Sigma_plus_Lambda = copy_ex_Sigma_plus_Lambda.Vect();
        TVector3 three_ex_Sigma_plus_pi_plus_2 = copy_ex_Sigma_plus_pi_plus_2.Vect();

        double angle_sigma = (*ex_Sigma_plus).Angle(three_ex_Sigma_plus_Lambda);
       // cout<<angle_ds<<endl;

        AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
        //cout<<AM_Weighting_Sigma<<"BRANCH 2 C"<<endl;

      }
    }



//Boost from Branch 3 of the excited sigma particle:
     if(random_1>=0.5){ // delta Weighting from the Sigma zero
      Boost_sigma = -1*(*ex_Sigma_minus).BoostVector();
      TVector3 three_ex_Sigma_minus = (*ex_Sigma_minus).Vect();

      if(random_3<0.117){
        if(random_2<=0.5){ //Sigma pi 
          copy_ex_Sigma_minus_sigma_zero.SetPxPyPzE(ex_Sigma_minus_sigma_zero->Px(),ex_Sigma_minus_sigma_zero->Py(),ex_Sigma_minus_sigma_zero->Pz(),ex_Sigma_minus_sigma_zero->E());
          copy_ex_Sigma_minus_pi_minus.SetPxPyPzE(ex_Sigma_minus_pi_minus->Px(),ex_Sigma_minus_pi_minus->Py(),ex_Sigma_minus_pi_minus->Pz(),ex_Sigma_minus_pi_minus->E());

          copy_ex_Sigma_minus_sigma_zero.Boost(Boost_sigma);
          copy_ex_Sigma_minus_pi_minus.Boost(Boost_sigma);

          TVector3 three_ex_Sigma_minus_sigma_zero = copy_ex_Sigma_minus_sigma_zero.Vect();
          TVector3 three_ex_Sigma_minus_pi_minus = copy_ex_Sigma_minus_pi_minus.Vect();

          double angle_sigma = (*ex_Sigma_minus).Angle(three_ex_Sigma_minus_sigma_zero);
         // cout<<angle_ds<<endl;

          AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
//          cout<<AM_Weighting_Sigma<<"BRANCH 3 A"<<endl;
       }  

        if(random_2>0.5){ //Sigma Pi PLUS
          copy_ex_Sigma_minus_sigma_minus.SetPxPyPzE(ex_Sigma_minus_sigma_minus->Px(),ex_Sigma_minus_sigma_minus->Py(),ex_Sigma_minus_sigma_minus->Pz(),ex_Sigma_minus_sigma_minus->E());
          copy_ex_Sigma_minus_pi_zero.SetPxPyPzE(ex_Sigma_minus_pi_zero->Px(),ex_Sigma_minus_pi_zero->Py(),ex_Sigma_minus_pi_zero->Pz(),ex_Sigma_minus_pi_zero->E());

          copy_ex_Sigma_minus_sigma_minus.Boost(Boost_sigma);
          copy_ex_Sigma_minus_pi_zero.Boost(Boost_sigma);

          TVector3 three_ex_Sigma_minus_sigma_minus = copy_ex_Sigma_minus_sigma_minus.Vect();
          TVector3 three_ex_Sigma_minus_pi_zero = copy_ex_Sigma_minus_pi_zero.Vect();

          double angle_sigma = (*ex_Sigma_minus).Angle(three_ex_Sigma_minus_sigma_minus);
         // cout<<angle_ds<<endl;

          AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
//          cout<<AM_Weighting_Sigma<<"BRANCH 3 B"<<endl;
        } 
      }
       
      if(random_3>=0.117){
        copy_ex_Sigma_minus_Lambda.SetPxPyPzE(ex_Sigma_minus_Lambda->Px(),ex_Sigma_minus_Lambda->Py(),ex_Sigma_minus_Lambda->Pz(),ex_Sigma_minus_Lambda->E());
        copy_ex_Sigma_minus_pi_minus_2.SetPxPyPzE(ex_Sigma_minus_pi_minus_2->Px(),ex_Sigma_minus_pi_minus_2->Py(),ex_Sigma_minus_pi_minus_2->Pz(),ex_Sigma_minus_pi_minus_2->E());

        copy_ex_Sigma_minus_Lambda.Boost(Boost_sigma);
        copy_ex_Sigma_minus_pi_minus_2.Boost(Boost_sigma);

        TVector3 three_ex_Sigma_minus_Lambda = copy_ex_Sigma_minus_Lambda.Vect();
        TVector3 three_ex_Sigma_minus_pi_minus_2 = copy_ex_Sigma_minus_pi_minus_2.Vect();

        double angle_sigma = (*ex_Sigma_minus).Angle(three_ex_Sigma_minus_Lambda);
       // cout<<angle_ds<<endl;

        AM_Weighting_Sigma = (1+3*TMath::Power(cos(angle_sigma),2));
//        cout<<AM_Weighting_Sigma<<"BRANCH 3 C"<<endl;

      }
    }

////////////////////////////////////////////////////////////////////////////////////////////
////////////DATA WRITING TO FILES AND GENERATION OF THE ACCEPTANCE PLOTS://////////////////

  //Writing the data to the files, one case for the application of the cuts and one without to form the acceptance plots.
  //WITH ANGLE CUTS
  if(random_1<=0.33){ //ds into delta plus sigma zero
    if(random_2<=0.33){ //delta plus into proton pi zero
       if((delta_plus_proton->Theta()>1*(2*Pi/360)&& delta_plus_proton->Theta()<10*(2*Pi/360))||
         (delta_plus_proton->Theta()>29*(2*Pi/360)&& delta_plus_proton->Theta()<132*(2*Pi/360))){ 
           if((delta_plus_pi_zero->Theta()>1*(2*Pi/360)&& delta_plus_pi_zero->Theta()<10*(2*Pi/360))||
             (delta_plus_pi_zero->Theta()>29*(2*Pi/360)&& delta_plus_pi_zero->Theta()<132*(2*Pi/360))){ 

	     h_delta_plus_proton_det->Fill(delta_plus_proton->Rho(),delta_plus_proton->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
				      AM_Weighting_ds*AM_Weighting_delta);

             h_delta_plus_pi_zero_det->Fill(delta_plus_pi_zero->Rho(),delta_plus_pi_zero->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

	   }
 	}
     }

     if(random_2>0.33){
       if((delta_plus_neutron->Theta()>1*(2*Pi/360)&& delta_plus_neutron->Theta()<10*(2*Pi/360))||
         (delta_plus_neutron->Theta()>29*(2*Pi/360)&& delta_plus_neutron->Theta()<132*(2*Pi/360))){ 
           if((delta_plus_pi_plus->Theta()>1*(2*Pi/360)&& delta_plus_pi_plus->Theta()<10*(2*Pi/360))||
             (delta_plus_pi_plus->Theta()>29*(2*Pi/360)&& delta_plus_pi_plus->Theta()<132*(2*Pi/360))){ 

             h_delta_plus_neutron_det->Fill(delta_plus_neutron->Rho(),delta_plus_neutron->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

             h_delta_plus_pi_plus_det->Fill(delta_plus_pi_plus->Rho(),delta_plus_pi_plus->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);
           }
        }
     }

     if(random_3<0.117){ //SIGMA ZERO DECAY
       if(random_2<=0.5){
         if((ex_Sigma_zero_sigma_plus->Theta()>1*(2*Pi/360)&& ex_Sigma_zero_sigma_plus->Theta()<10*(2*Pi/360))||
           (ex_Sigma_zero_sigma_plus->Theta()>29*(2*Pi/360)&& ex_Sigma_zero_sigma_plus->Theta()<132*(2*Pi/360))){ 
             if((ex_Sigma_zero_pi_minus->Theta()>1*(2*Pi/360)&& ex_Sigma_zero_pi_minus->Theta()<10*(2*Pi/360))||
               (ex_Sigma_zero_pi_minus->Theta()>29*(2*Pi/360)&& ex_Sigma_zero_pi_minus->Theta()<132*(2*Pi/360))){ 

               h_ex_Sigma_zero_Sigma_plus_det->Fill(ex_Sigma_zero_sigma_plus->Rho(),
					      ex_Sigma_zero_sigma_plus->Theta()*180/Pi,
                                              Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);

               h_ex_Sigma_zero_pi_minus_det->Fill(ex_Sigma_zero_pi_minus->Rho(),
					   ex_Sigma_zero_pi_minus->Theta()*180/Pi,
                                           Phasespace_Weight_1*Phasespace_Weight_2*
					   Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
             }
           }
        }
       if(random_2>0.5){
         if((ex_Sigma_zero_sigma_minus->Theta()>1*(2*Pi/360)&& ex_Sigma_zero_sigma_minus->Theta()<10*(2*Pi/360))||
           (ex_Sigma_zero_sigma_minus->Theta()>29*(2*Pi/360)&& ex_Sigma_zero_sigma_minus->Theta()<132*(2*Pi/360))){
             if((ex_Sigma_zero_pi_plus->Theta()>1*(2*Pi/360)&& ex_Sigma_zero_pi_plus->Theta()<10*(2*Pi/360))||
               (ex_Sigma_zero_pi_plus->Theta()>29*(2*Pi/360)&& ex_Sigma_zero_pi_plus->Theta()<132*(2*Pi/360))){

               h_ex_Sigma_zero_Sigma_minus_det->Fill(ex_Sigma_zero_sigma_minus->Rho(),
                                             ex_Sigma_zero_sigma_minus->Theta()*180/Pi,
                                             Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                             AM_Weighting_ds*AM_Weighting_Sigma);

               h_ex_Sigma_zero_pi_plus_det->Fill(ex_Sigma_zero_pi_plus->Rho(),
                                           ex_Sigma_zero_pi_plus->Theta()*180/Pi,
                                           Phasespace_Weight_1*Phasespace_Weight_2*
                                           Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
              }
            }
         }
       }
       if(random_3>=0.117){
         if((ex_Sigma_zero_Lambda->Theta()>1*(2*Pi/360)&& ex_Sigma_zero_Lambda->Theta()<10*(2*Pi/360))||
           (ex_Sigma_zero_Lambda->Theta()>29*(2*Pi/360)&& ex_Sigma_zero_Lambda->Theta()<132*(2*Pi/360))){ 
             if((ex_Sigma_zero_pi_zero->Theta()>1*(2*Pi/360)&& ex_Sigma_zero_pi_zero->Theta()<10*(2*Pi/360))||
               (ex_Sigma_zero_pi_zero->Theta()>29*(2*Pi/360)&& ex_Sigma_zero_pi_zero->Theta()<132*(2*Pi/360))){ 

               h_ex_Sigma_zero_Lambda_det->Fill(ex_Sigma_zero_Lambda->Rho(),
                                            ex_Sigma_zero_Lambda->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
//cout<<"TEST"<<endl;
               h_ex_Sigma_zero_pi_zero_det->Fill(ex_Sigma_zero_pi_zero->Rho(),
                                         ex_Sigma_zero_pi_zero->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*
                                         Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
             }
          }
        }
   }

  if(random_1>0.33 && random_1<0.5){ //ds into delta zero sigma plus
    if(random_2<=0.33){ //delta plus into proton pi zero
       if((delta_zero_proton->Theta()>1*(2*Pi/360)&& delta_zero_proton->Theta()<10*(2*Pi/360))||
         (delta_zero_proton->Theta()>29*(2*Pi/360)&& delta_zero_proton->Theta()<132*(2*Pi/360))){ 
           if((delta_zero_pi_minus->Theta()>1*(2*Pi/360)&& delta_zero_pi_minus->Theta()<10*(2*Pi/360))||
             (delta_zero_pi_minus->Theta()>29*(2*Pi/360)&& delta_zero_pi_minus->Theta()<132*(2*Pi/360))){ 

             h_delta_zero_proton_det->Fill(delta_zero_proton->Rho(),delta_zero_proton->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

             h_delta_zero_pi_minus_det->Fill(delta_zero_pi_minus->Rho(),delta_zero_pi_minus->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

           }
        }
     }

     if(random_2>0.33){
       if((delta_zero_neutron->Theta()>1*(2*Pi/360)&& delta_zero_neutron->Theta()<10*(2*Pi/360))||
         (delta_zero_neutron->Theta()>29*(2*Pi/360)&& delta_zero_neutron->Theta()<132*(2*Pi/360))){ 
           if((delta_zero_pi_zero->Theta()>1*(2*Pi/360)&& delta_zero_pi_zero->Theta()<10*(2*Pi/360))||
             (delta_zero_pi_zero->Theta()>29*(2*Pi/360)&& delta_zero_pi_zero->Theta()<132*(2*Pi/360))){ 

             h_delta_zero_neutron_det->Fill(delta_zero_neutron->Rho(),delta_zero_neutron->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

             h_delta_zero_pi_zero_det->Fill(delta_zero_pi_zero->Rho(),delta_zero_pi_zero->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);
           }
        }
     }

     if(random_3<0.117){ //SIGMA PLUS DECAY
       if(random_2<=0.5){
         if((ex_Sigma_plus_sigma_plus->Theta()>1*(2*Pi/360) && ex_Sigma_plus_sigma_plus->Theta()<10*(2*Pi/360))||
           (ex_Sigma_plus_sigma_plus->Theta()>29*(2*Pi/360) && ex_Sigma_plus_sigma_plus->Theta()<132*(2*Pi/360))){
             if((ex_Sigma_plus_pi_zero->Theta()>1*(2*Pi/360) && ex_Sigma_plus_pi_zero->Theta()<10*(2*Pi/360))||
               (ex_Sigma_plus_pi_zero->Theta()>29*(2*Pi/360) && ex_Sigma_plus_pi_zero->Theta()<132*(2*Pi/360))){

               h_ex_Sigma_plus_Sigma_plus_det->Fill(ex_Sigma_plus_sigma_plus->Rho(),
                                            ex_Sigma_plus_sigma_plus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);

               h_ex_Sigma_plus_pi_zero_det->Fill(ex_Sigma_plus_pi_zero->Rho(),
                                         ex_Sigma_plus_pi_zero->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*
                                         Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
            }
         }
      }
       if(random_2>0.5){
           if((ex_Sigma_plus_sigma_zero->Theta()>1*(2*Pi/360) && ex_Sigma_plus_sigma_zero->Theta()<10*(2*Pi/360))||
             (ex_Sigma_plus_sigma_zero->Theta()>29*(2*Pi/360) && ex_Sigma_plus_sigma_zero->Theta()<132*(2*Pi/360))){
               if((ex_Sigma_plus_pi_plus->Theta()>1*(2*Pi/360) && ex_Sigma_plus_pi_plus->Theta()<10*(2*Pi/360))||
                 (ex_Sigma_plus_pi_plus->Theta()>29*(2*Pi/360) && ex_Sigma_plus_pi_plus->Theta()<132*(2*Pi/360))){

                 h_ex_Sigma_plus_Sigma_zero_det->Fill(ex_Sigma_plus_sigma_zero->Rho(),
                                            ex_Sigma_plus_sigma_zero->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);

                 h_ex_Sigma_plus_pi_plus_det->Fill(ex_Sigma_plus_pi_plus->Rho(),
                                         ex_Sigma_plus_pi_plus->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*
                                         Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
            }
          }
       }
     }
     if(random_3>=0.117){
       if((ex_Sigma_plus_Lambda->Theta()>1*(2*Pi/360) && ex_Sigma_plus_Lambda->Theta()<10*(2*Pi/360))||
         (ex_Sigma_plus_Lambda->Theta()>29*(2*Pi/360) && ex_Sigma_plus_Lambda->Theta()<132*(2*Pi/360))){
           if((ex_Sigma_plus_pi_plus_2->Theta()>1*(2*Pi/360)&& ex_Sigma_plus_pi_plus_2->Theta()<10*(2*Pi/360))||
             (ex_Sigma_plus_pi_plus_2->Theta()>29*(2*Pi/360)&& ex_Sigma_plus_pi_plus_2->Theta()<132*(2*Pi/360))){

             h_ex_Sigma_plus_Lambda_det->Fill(ex_Sigma_plus_Lambda->Rho(),
                                            ex_Sigma_plus_Lambda->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);

             h_ex_Sigma_plus_pi_plus_2_det->Fill(ex_Sigma_plus_pi_plus_2->Rho(),
                                         ex_Sigma_plus_pi_plus_2->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*
                                         Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
           }
         }
      }
  }

//cout<<delta_double_plus_proton->Theta()<<"PROTON"<<endl;
//cout<<delta_double_plus_pi_plus->Theta()<<"PION"<<endl;

  if(random_1>=0.5){ //ds into delta double plus sigma minus 
       //delta double plus into proton pi plus              //////////////////////////REACHED HERE 20/2/2025 17:23
       if((delta_double_plus_proton->Theta()>1*(2*Pi/360)&& delta_double_plus_proton->Theta()<10*(2*Pi/360))||
         (delta_double_plus_proton->Theta()>29*(2*Pi/360)&& delta_double_plus_proton->Theta()<132*(2*Pi/360))){ 
           if((delta_double_plus_pi_plus->Theta()>1*(2*Pi/360)&& delta_double_plus_pi_plus->Theta()<10*(2*Pi/360))||
             (delta_double_plus_pi_plus->Theta()>29*(2*Pi/360)&& delta_double_plus_pi_plus->Theta()<132*(2*Pi/360))){

             h_delta_double_plus_proton_det->Fill(delta_double_plus_proton->Rho(),delta_double_plus_proton->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

             h_delta_double_plus_pi_plus_det->Fill(delta_double_plus_pi_plus->Rho(),delta_double_plus_pi_plus->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

           }
        }

     if(random_3<0.117){
       if(random_2<0.5){
         if((ex_Sigma_minus_sigma_zero->Theta()>1*(2*Pi/360) && ex_Sigma_minus_sigma_zero->Theta()<10*(2*Pi/360))||
           (ex_Sigma_minus_sigma_zero->Theta()>29*(2*Pi/360) && ex_Sigma_minus_sigma_zero->Theta()<132*(2*Pi/360))){
             if((ex_Sigma_minus_pi_minus->Theta()>1*(2*Pi/360)&& ex_Sigma_minus_pi_minus->Theta()<10*(2*Pi/360))||
               (ex_Sigma_minus_pi_minus->Theta()>29*(2*Pi/360)&& ex_Sigma_minus_pi_minus->Theta()<132*(2*Pi/360))){

               h_ex_Sigma_minus_Sigma_zero_det->Fill(ex_Sigma_minus_sigma_zero->Rho(),
                                            ex_Sigma_minus_sigma_zero->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);

               h_ex_Sigma_minus_pi_minus_det->Fill(ex_Sigma_minus_pi_minus->Rho(),
                                         ex_Sigma_minus_pi_minus->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*
                                         Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
             }
           }
         }
       if(random_2>0.5){
	     if((ex_Sigma_minus_sigma_minus->Theta()>1*(2*Pi/360) && ex_Sigma_minus_sigma_minus->Theta()<10*(2*Pi/360))||
           (ex_Sigma_minus_sigma_minus->Theta()>29*(2*Pi/360) && ex_Sigma_minus_sigma_minus->Theta()<132*(2*Pi/360))){
             if((ex_Sigma_minus_pi_zero->Theta()>1*(2*Pi/360)&& ex_Sigma_minus_pi_zero->Theta()<10*(2*Pi/360))||
               (ex_Sigma_minus_pi_zero->Theta()>29*(2*Pi/360)&& ex_Sigma_minus_pi_zero->Theta()<132*(2*Pi/360))){

               h_ex_Sigma_minus_Sigma_minus_det->Fill(ex_Sigma_minus_sigma_minus->Rho(),
                                            ex_Sigma_minus_sigma_minus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);

               h_ex_Sigma_minus_pi_zero_det->Fill(ex_Sigma_minus_pi_zero->Rho(),
                                         ex_Sigma_minus_pi_zero->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*
                                         Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
             }
           }
         }
      }
       
//cout<<"test"<<endl;
     if(random_3>=0.117){
         if((ex_Sigma_minus_Lambda->Theta()>1*(2*Pi/360) && ex_Sigma_minus_Lambda->Theta()<10*(2*Pi/360))||
           (ex_Sigma_minus_Lambda->Theta()>29*(2*Pi/360) && ex_Sigma_minus_Lambda->Theta()<132*(2*Pi/360))){
             if((ex_Sigma_minus_pi_minus_2->Theta()>1*(2*Pi/360)&& ex_Sigma_minus_pi_minus_2->Theta()<10*(2*Pi/360))||
               (ex_Sigma_minus_pi_minus_2->Theta()>29*(2*Pi/360)&& ex_Sigma_minus_pi_minus_2->Theta()<132*(2*Pi/360))){
	       //cout<<"test"<<endl;
               h_ex_Sigma_minus_Lambda_det->Fill(ex_Sigma_minus_Lambda->Rho(),
                                            ex_Sigma_minus_Lambda->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);

               h_ex_Sigma_minus_pi_minus_2_det->Fill(ex_Sigma_minus_pi_minus_2->Rho(),
                                         ex_Sigma_minus_pi_minus_2->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*
                                         Phasespace_Weight_4*AM_Weighting_ds*AM_Weighting_Sigma);
        }
      }
    }
  }

  //wITHOUT ANGLE CUTS
  if(random_1<=0.33){ //ds into delta plus sigma zero
    if(random_2<=0.33){ //delta plus into proton pi zero

             h_delta_plus_proton->Fill(delta_plus_proton->Rho(),delta_plus_proton->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

             h_delta_plus_pi_zero->Fill(delta_plus_pi_zero->Rho(),delta_plus_pi_zero->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);
      }

     if(random_2>0.33){

             h_delta_plus_neutron->Fill(delta_plus_neutron->Rho(),delta_plus_neutron->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);

             h_delta_plus_pi_plus->Fill(delta_plus_pi_plus->Rho(),delta_plus_pi_plus->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                      AM_Weighting_ds*AM_Weighting_delta);
      }

      if(random_3<0.117){
         if(random_2<=0.5){
	    h_ex_Sigma_zero_Sigma_plus->Fill(ex_Sigma_zero_sigma_plus->Rho(),ex_Sigma_zero_sigma_plus->Theta()*180/Pi,
					    Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
					    AM_Weighting_ds*AM_Weighting_Sigma);
	    h_ex_Sigma_zero_pi_minus->Fill(ex_Sigma_zero_pi_minus->Rho(),ex_Sigma_zero_pi_minus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	 }
	 if(random_2>0.5){
	    h_ex_Sigma_zero_Sigma_minus->Fill(ex_Sigma_zero_sigma_minus->Rho(),ex_Sigma_zero_sigma_minus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	    h_ex_Sigma_zero_pi_plus->Fill(ex_Sigma_zero_pi_plus->Rho(),ex_Sigma_zero_pi_plus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	 }
      }
      if(random_3>=0.117){
	  h_ex_Sigma_zero_Lambda->Fill(ex_Sigma_zero_Lambda->Rho(),ex_Sigma_zero_Lambda->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	  h_ex_Sigma_zero_pi_zero->Fill(ex_Sigma_zero_pi_zero->Rho(),ex_Sigma_zero_pi_zero->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
      }
    }

  if(random_1>0.33 && random_1<0.5){ //ds into delta zero Sigma plus
    if(random_2<=0.33){
      h_delta_zero_proton->Fill(delta_zero_proton->Rho(),delta_zero_proton->Theta()*180/Pi,
                               Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                               AM_Weighting_ds*AM_Weighting_delta);
      h_delta_zero_pi_minus->Fill(delta_zero_pi_minus->Rho(),delta_zero_pi_minus->Theta()*180/Pi,
                                  Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                  AM_Weighting_ds*AM_Weighting_delta);
    }
    if(random_2>0.33){
      h_delta_zero_neutron->Fill(delta_zero_neutron->Rho(),delta_zero_neutron->Theta()*180/Pi,
                                  Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                  AM_Weighting_ds*AM_Weighting_delta);
      h_delta_zero_pi_zero->Fill(delta_zero_pi_zero->Rho(),delta_zero_pi_zero->Theta()*180/Pi,
                                  Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                  AM_Weighting_ds*AM_Weighting_delta);
    }
    if(random_3<0.117){
      if(random_2<=0.5){
	h_ex_Sigma_plus_Sigma_plus->Fill(ex_Sigma_plus_sigma_plus->Rho(),ex_Sigma_plus_sigma_plus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	h_ex_Sigma_plus_pi_zero->Fill(ex_Sigma_plus_pi_zero->Rho(),ex_Sigma_plus_pi_zero->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
      }
      if(random_2>0.5){
	h_ex_Sigma_plus_Sigma_zero->Fill(ex_Sigma_plus_sigma_zero->Rho(),ex_Sigma_plus_sigma_zero->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	h_ex_Sigma_plus_pi_plus->Fill(ex_Sigma_plus_pi_plus->Rho(),ex_Sigma_plus_pi_plus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
      }
    }
    if(random_3>=0.117){
      h_ex_Sigma_plus_Lambda->Fill(ex_Sigma_plus_Lambda->Rho(),ex_Sigma_plus_Lambda->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
      h_ex_Sigma_plus_pi_plus_2->Fill(ex_Sigma_plus_pi_plus_2->Rho(),ex_Sigma_plus_pi_plus_2->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
    }
  }

  if(random_1>=0.5){ //ds into delta double plus Sigma minus
    h_delta_double_plus_proton->Fill(delta_double_plus_proton->Rho(),delta_double_plus_proton->Theta()*180/Pi,
                                  Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                  AM_Weighting_ds*AM_Weighting_delta);
    h_delta_double_plus_pi_plus->Fill(delta_double_plus_pi_plus->Rho(),delta_double_plus_pi_plus->Theta()*180/Pi,
                                  Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*
                                  AM_Weighting_ds*AM_Weighting_delta);
    if(random_3<0.117){
      if(random_2<0.5){
        h_ex_Sigma_minus_Sigma_zero->Fill(ex_Sigma_minus_sigma_zero->Rho(),ex_Sigma_minus_sigma_zero->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	h_ex_Sigma_minus_pi_minus->Fill(ex_Sigma_minus_pi_minus->Rho(),ex_Sigma_minus_pi_minus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
      }
      if(random_2>=0.5){
	h_ex_Sigma_minus_Sigma_minus->Fill(ex_Sigma_minus_sigma_minus->Rho(),ex_Sigma_minus_sigma_minus->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
	h_ex_Sigma_minus_pi_zero->Fill(ex_Sigma_minus_pi_zero->Rho(),ex_Sigma_minus_pi_zero->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
      }
    }
    if(random_3>=0.117){
//cout<<"test"<<endl;
      h_ex_Sigma_minus_Lambda->Fill(ex_Sigma_minus_Lambda->Rho(),ex_Sigma_minus_Lambda->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
      h_ex_Sigma_minus_pi_minus_2->Fill(ex_Sigma_minus_pi_minus_2->Rho(),ex_Sigma_minus_pi_minus_2->Theta()*180/Pi,
                                            Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_4*
                                            AM_Weighting_ds*AM_Weighting_Sigma);
    }
  }
} //END OF LOOP }

/////////////////////////////////////////////////////////////////////////////////////////////
//Plotting the files and creating the acceptance histograms

h_delta_plus_proton_Acceptance->Divide(h_delta_plus_proton_det,h_delta_plus_proton);
h_delta_plus_pi_zero_Acceptance->Divide(h_delta_plus_pi_zero_det,h_delta_plus_pi_zero);
h_delta_plus_neutron_Acceptance->Divide(h_delta_plus_neutron_det,h_delta_plus_neutron);
h_delta_plus_pi_plus_Acceptance->Divide(h_delta_plus_pi_plus_det,h_delta_plus_pi_plus);

h_ex_Sigma_zero_Sigma_plus_Acceptance->Divide(h_ex_Sigma_zero_Sigma_plus_det,h_ex_Sigma_zero_Sigma_plus);
h_ex_Sigma_zero_pi_minus_Acceptance->Divide(h_ex_Sigma_zero_pi_minus_det,h_ex_Sigma_zero_pi_minus);
h_ex_Sigma_zero_Sigma_minus_Acceptance->Divide(h_ex_Sigma_zero_Sigma_minus_det,h_ex_Sigma_zero_Sigma_minus);
h_ex_Sigma_zero_pi_plus_Acceptance->Divide(h_ex_Sigma_zero_pi_plus_det,h_ex_Sigma_zero_pi_plus);
h_ex_Sigma_zero_Lambda_Acceptance->Divide(h_ex_Sigma_zero_Lambda_det,h_ex_Sigma_zero_Lambda);
h_ex_Sigma_zero_pi_zero_Acceptance->Divide(h_ex_Sigma_zero_pi_zero_det,h_ex_Sigma_zero_pi_zero);

//Delta zero sigma plus
h_delta_zero_proton_Acceptance->Divide(h_delta_zero_proton_det,h_delta_zero_proton);
h_delta_zero_pi_minus_Acceptance->Divide(h_delta_zero_pi_minus_det,h_delta_zero_pi_minus);
h_delta_zero_neutron_Acceptance->Divide(h_delta_zero_neutron_det,h_delta_zero_neutron);
h_delta_zero_pi_zero_Acceptance->Divide(h_delta_zero_pi_zero_det,h_delta_zero_pi_zero);

h_ex_Sigma_plus_Sigma_plus_Acceptance->Divide(h_ex_Sigma_plus_Sigma_plus_det,h_ex_Sigma_plus_Sigma_plus);
h_ex_Sigma_plus_pi_zero_Acceptance->Divide(h_ex_Sigma_plus_pi_plus_det,h_ex_Sigma_plus_pi_plus);
h_ex_Sigma_plus_Sigma_zero_Acceptance->Divide(h_ex_Sigma_plus_pi_zero_det,h_ex_Sigma_plus_pi_zero);
h_ex_Sigma_plus_pi_plus_Acceptance->Divide(h_ex_Sigma_plus_pi_plus_det,h_ex_Sigma_plus_pi_plus);
h_ex_Sigma_plus_Lambda_Acceptance->Divide(h_ex_Sigma_plus_Lambda_det,h_ex_Sigma_plus_Lambda);
h_ex_Sigma_plus_pi_plus_2_Acceptance->Divide(h_ex_Sigma_plus_pi_plus_2_det,h_ex_Sigma_plus_pi_plus_2);

//Delta double plus sigma minus
h_delta_double_plus_proton_Acceptance->Divide(h_delta_double_plus_proton_det,h_delta_double_plus_proton);
h_delta_double_plus_pi_plus_Acceptance->Divide(h_delta_double_plus_pi_plus_det,h_delta_double_plus_pi_plus);

h_ex_Sigma_minus_Sigma_zero_Acceptance->Divide(h_ex_Sigma_minus_Sigma_zero_det,h_ex_Sigma_minus_Sigma_zero);
h_ex_Sigma_minus_pi_minus_Acceptance->Divide(h_ex_Sigma_minus_pi_minus_det,h_ex_Sigma_minus_pi_minus);
h_ex_Sigma_minus_Sigma_minus_Acceptance->Divide(h_ex_Sigma_minus_Sigma_minus_det,h_ex_Sigma_minus_Sigma_minus);
h_ex_Sigma_minus_pi_zero_Acceptance->Divide(h_ex_Sigma_minus_pi_zero_det,h_ex_Sigma_minus_pi_zero);
h_ex_Sigma_minus_Lambda_Acceptance->Divide(h_ex_Sigma_minus_Lambda_det,h_ex_Sigma_minus_Lambda);
h_ex_Sigma_minus_pi_minus_2_Acceptance->Divide(h_ex_Sigma_minus_pi_minus_2_det,h_ex_Sigma_minus_pi_minus_2);

//PLOTTING
//CASE 1
TCanvas* c1 = new TCanvas("c13","stacked hists",5,5,1000,1000);
h_delta_plus_proton_Acceptance->SetTitle("Acceptance of Proton (#Delta^{+} decay);Rho [GeV/c];Theta [Deg]");
h_delta_plus_proton_Acceptance->Draw("colz");

TCanvas* c2 = new TCanvas("c14","stacked hists",5,5,1000,1000);
h_delta_plus_pi_zero_Acceptance->SetTitle("Acceptance of #pi^{0} (#Delta^{+} decay);Rho [GeV/c];Theta [Deg]");
h_delta_plus_pi_zero_Acceptance->Draw("colz");

TCanvas* c3 = new TCanvas("c15","stacked hists",5,5,1000,1000);
h_delta_plus_neutron_Acceptance->SetTitle("Acceptance of Neutron (#Delta^{+} decay);Rho [GeV/c];Theta [Deg]");
h_delta_plus_neutron_Acceptance->Draw("colz");

TCanvas* c4 = new TCanvas("c16","stacked hists",5,5,1000,1000);
h_delta_plus_pi_plus_Acceptance->SetTitle("Acceptance of #pi^{+} (#Delta^{+} decay);Rho [GeV/c];Theta [Deg]");
h_delta_plus_pi_plus_Acceptance->Draw("colz");

TCanvas* c5 = new TCanvas("c17","stacked hists",5,5,1000,1000);
h_ex_Sigma_zero_Sigma_plus_Acceptance->SetTitle("Acceptance of #Sigma^{+} (#Sigma^{*0} decay);Rho [GeV/c];Theta [Deg]");
h_ex_Sigma_zero_Sigma_plus_Acceptance->Draw("colz");

TCanvas* c6 = new TCanvas("c18","stacked hists",5,5,1000,1000);
h_ex_Sigma_zero_pi_minus_Acceptance->SetTitle("Acceptance of #pi^{-} (#Sigma^{*0} decay);Rho [GeV/c];Theta [Deg]");
h_ex_Sigma_zero_pi_minus_Acceptance->Draw("colz");

TCanvas* c7 = new TCanvas("c19","stacked hists",5,5,1000,1000);
h_ex_Sigma_zero_Sigma_minus_Acceptance->SetTitle("Acceptance of #Sigma^{-} (#Sigma^{*0} decay);Rho [GeV/c];Theta [Deg]");
h_ex_Sigma_zero_Sigma_minus_Acceptance->Draw("colz");

TCanvas* c8 = new TCanvas("c20","stacked hists",5,5,1000,1000);
h_ex_Sigma_zero_pi_plus_Acceptance->SetTitle("Acceptance of #pi^{+} (#Sigma^{*0} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_zero_pi_plus_Acceptance->Draw("colz");

TCanvas* c9 = new TCanvas("c21","stacked hists",5,5,1000,1000);
h_ex_Sigma_zero_Lambda_Acceptance->SetTitle("Acceptance of #Lambda^{0} (#Sigma^{*0} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_zero_Lambda_Acceptance->Draw("colz");

TCanvas* c10 = new TCanvas("c22","stacked hists",5,5,1000,1000);
h_ex_Sigma_zero_pi_zero_Acceptance->SetTitle("Acceptance of #pi^{0} (#Sigma^{*0} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_zero_pi_zero_Acceptance->Draw("colz");

//CASE 2
TCanvas* c11 = new TCanvas("c23","stacked hists",5,5,1000,1000);
h_delta_zero_proton_Acceptance->SetTitle("Acceptance of Proton (#Delta^{0} decay);Rho [GeV/c];Theta [Deg]");
h_delta_zero_proton_Acceptance->Draw("colz");

TCanvas* c12 = new TCanvas("c24","stacked hists",5,5,1000,1000);
h_delta_zero_pi_minus_Acceptance->SetTitle("Acceptance of #pi^{-} (#Delta^{0} decay);Rho [GeV/c];Theta [Deg]");
h_delta_zero_pi_minus_Acceptance->Draw("colz");

TCanvas* c13 = new TCanvas("c25","stacked hists",5,5,1000,1000);
h_delta_zero_neutron_Acceptance->SetTitle("Acceptance of Neutron (#Delta^{0} decay);Rho [GeV/c];Theta [Deg]");
h_delta_zero_neutron_Acceptance->Draw("colz");

TCanvas* c14 = new TCanvas("c26","stacked hists",5,5,1000,1000);
h_delta_zero_pi_zero_Acceptance->SetTitle("Acceptance of #pi^{0} (#Delta^{0} decay);Rho [GeV/c];Theta [Deg]");
h_delta_zero_pi_zero_Acceptance->Draw("colz");

TCanvas* c15 = new TCanvas("c27","stacked hists",5,5,1000,1000);
h_ex_Sigma_plus_Sigma_plus_Acceptance->SetTitle("Acceptance of #Sigma^{+} (#Sigma^{*+} decay);Rho [GeV/c];Theta [Deg]");
h_ex_Sigma_plus_Sigma_plus_Acceptance->Draw("colz");

TCanvas* c16 = new TCanvas("c28","stacked hists",5,5,1000,1000);
h_ex_Sigma_plus_pi_zero_Acceptance->SetTitle("Acceptance of #pi^{0} (#Sigma^{*+} decay);Rho [GeV/c];Theta [Deg]");
h_ex_Sigma_plus_pi_zero_Acceptance->Draw("colz");

TCanvas* c17 = new TCanvas("c29","stacked hists",5,5,1000,1000);
h_ex_Sigma_plus_Sigma_zero_Acceptance->SetTitle("Acceptance of #Sigma^{0} (#Sigma^{*+} decay);Rho [GeV/c];Theta [Deg]");
h_ex_Sigma_plus_Sigma_zero_Acceptance->Draw("colz");

TCanvas* c18 = new TCanvas("c30","stacked hists",5,5,1000,1000);
h_ex_Sigma_plus_pi_plus_Acceptance->SetTitle("Acceptance of #pi^{+} (#Sigma^{*+} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_plus_pi_plus_Acceptance->Draw("colz");

TCanvas* c19 = new TCanvas("c31","stacked hists",5,5,1000,1000);
h_ex_Sigma_plus_Lambda_Acceptance->SetTitle("Acceptance of #Lambda^{0} (#Sigma^{*+} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_plus_Lambda_Acceptance->Draw("colz");

TCanvas* c20 = new TCanvas("c32","stacked hists",5,5,1000,1000);
h_ex_Sigma_plus_pi_plus_2_Acceptance->SetTitle("Acceptance of #pi^{+} (#Sigma^{*+}, #Lambda #pi branch decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_plus_pi_plus_2_Acceptance->Draw("colz");

//CASE 3
TCanvas* c21 = new TCanvas("c33","stacked hists",5,5,1000,1000);
h_delta_double_plus_proton_Acceptance->SetTitle("Acceptance of Proton (#Delta^{++} decay);Rho [GeV/c]; Theta [Deg]");
h_delta_double_plus_proton_Acceptance->Draw("colz");

TCanvas* c22 = new TCanvas("c34","stacked hists",5,5,1000,1000);
h_delta_double_plus_pi_plus_Acceptance->SetTitle("Acceptance of #pi^{+} (#Delta^{++} decay);Rho [GeV/c]; Theta [Deg]");
h_delta_double_plus_pi_plus_Acceptance->Draw("colz");

TCanvas* c23 = new TCanvas("c35","stacked hists",5,5,1000,1000);
h_ex_Sigma_minus_Sigma_minus_Acceptance->SetTitle("Acceptance of #Sigma^{-} (#Sigma^{*-} decay);Rho [Gev/c];Theta [Deg]");
h_ex_Sigma_minus_Sigma_minus_Acceptance->Draw("colz");

TCanvas* c24 = new TCanvas("c36","stacked hists",5,5,1000,1000);
h_ex_Sigma_minus_pi_zero_Acceptance->SetTitle("Acceptance of #pi^{0} (#Sigma^{*-} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_minus_pi_zero_Acceptance->Draw("colz");

TCanvas* c25 = new TCanvas("c37","stacked hists",5,5,1000,1000);
h_ex_Sigma_minus_Sigma_zero_Acceptance->SetTitle("Acceptance of #Sigma^{0} (#Sigma^{*-} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_minus_Sigma_zero_Acceptance->Draw("colz");

TCanvas* c26 = new TCanvas("c38","stacked hists",5,5,1000,1000);
h_ex_Sigma_minus_pi_minus_Acceptance->SetTitle("Acceptance of #pi^{-} (#Sigma^{*-} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_minus_pi_minus_Acceptance->Draw("colz");

TCanvas* c27 = new TCanvas("c39","stacked hists",5,5,1000,1000);
h_ex_Sigma_minus_Lambda_Acceptance->SetTitle("Acceptance of #Lambda^{0} (#Sigma^{*-} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_minus_Lambda_Acceptance->Draw("colz");

TCanvas* c28 = new TCanvas("c40","stacked hists",5,5,1000,1000);
h_ex_Sigma_minus_pi_minus_Acceptance->SetTitle("Acceptance of #pi^{-} (#Sigma^{*-} decay);Rho [GeV/c]; Theta [Deg]");
h_ex_Sigma_minus_pi_minus_Acceptance->Draw("colz");

/*
//TESTING Other Outputs just in case
TCanvas* c29 = new TCanvas("c41","stacked hists",5,5,1000,1000);
h_delta_zero_pi_minus->SetTitle("Angular dependence of #pi^{-} (#Delta^{0} decay);Rho [GeV/c]; Theta [Deg]");
h_delta_zero_pi_minus->Draw("colz");

TCanvas* c30 = new TCanvas("c42","stacked hists",5,5,1000,1000);
h_delta_zero_pi_minus_det->SetTitle("Angular Dependence with cuts of #pi^{-} (#Delta^{0} decay);Rho [GeV/c]; Theta [Deg]");
h_delta_zero_pi_minus_det->Draw("colz");
*/
//}//END OF CODE }
