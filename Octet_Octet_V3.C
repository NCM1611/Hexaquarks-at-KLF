{ TFile fileOutput1("Oct_Output.root","recreate");
//RECRATION OF OCTET-OCTET ACCEPTANCE OF DS
///////////////////////////CREATION OF THE HISTOGRAMS/////////////////////////////////
//WITHOUT CUTS
TH2D* h_ds=new TH2D("h_ds","Angular dependence of ds",200,0,11,200,0,180);
//CASE 1 DS -> PROTON + LAMBDA
TH2D* h_proton=new TH2D("h_proton","Angular dependence of Proton (p + #Lambda^{0} branch)",200,0,11,200,0,180);
TH2D* h_Lambda=new TH2D("h_Lambda","Angular dependence of #Lambda^{0} (p + #Lambda^{0} branch)",200,0,11,200,0,180);
//CASE 2 DS->N + SIGMA
TH2D* h_proton_2=new TH2D("h_proton_2","Angular dependence of Proton (p + #Lambda^{0} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_zero=new TH2D("h_Sigma_zero","Angular dependence of #Sigma^{0} (N + #Sigma branch)",200,0,11,200,0,180);

TH2D* h_neutron=new TH2D("h_neutron","Angular dependence of Neutron (N+ #Sigma branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus=new TH2D("h_Sigma_plus","Angular dependence of #Sigma^{+} (N + #Sigma branch)",200,0,11,200,0,180);

//CASE 2B DECAY FROM CASE 2
TH2D* h_Sigma_zero_Lambda=new TH2D("h_Sigma_zero_Lambda","Angular dependence of #Lambda (#Sigma^{0} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_zero_Photon=new TH2D("h_Sigma_zero_photon","Angular dependence of Lambda^{0} (#Sigma%{0} branch)",200,0,11,200,0,180);

TH2D* h_Sigma_plus_proton=new TH2D("h_Sigma_plus_proton","Angular dependence of Proton (#Sigma^{+} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_pi_zero=new TH2D("h_Sigma_plus_pi_zero","Angular dependence of #pi^{0} (#Sigma^{+} branch)",200,0,11,200,0,180);

TH2D* h_Sigma_plus_neutron=new TH2D("h_Sigma_plus_neutron","Angular dependence of neutron (#Sigma^{+} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_pi_plus=new TH2D("h_Sigma_plus_pi_plus","Angular dependence of #pi^{+} (#Sigma^{+} branch)",200,0,11,200,0,180);

//WITH CUTS
//CASE 1 DS -> PROTON + LAMBDA
TH2D* h_proton_det=new TH2D("h_proton_det","Angular dependence of Proton (p + #Lambda^{0} branch)",200,0,11,200,0,180);
TH2D* h_Lambda_det=new TH2D("h_Lambda_det","Angular dependence of #Lambda^{0} (p + #Lambda^{0} branch)",200,0,11,200,0,180);
//CASE 2 DS->N + SIGMA
TH2D* h_proton_2_det=new TH2D("h_proton_2_det","Angular dependence of Proton (p + #Lambda^{0} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_zero_det=new TH2D("h_Sigma_zero_det","Angular dependence of #Sigma^{0} (N + #Sigma branch)",200,0,11,200,0,180);

TH2D* h_neutron_det=new TH2D("h_neutron_det","Angular dependence of Neutron (N+ #Sigma branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_det=new TH2D("h_Sigma_plus_det","Angular dependence of #Sigma^{+} (N + #Sigma branch)",200,0,11,200,0,180);

//CASE 2B DECAY FROM CASE 2
TH2D* h_Sigma_zero_Lambda_det=new TH2D("h_Sigma_zero_Lambda_det","Angular dependence of #Lambda (#Sigma^{0} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_zero_Photon_det=new TH2D("h_Sigma_zero_photon_det","Angular dependence of Lambda^{0} (#Sigma%{0} branch)",200,0,11,200,0,180);

TH2D* h_Sigma_plus_proton_det=new TH2D("h_Sigma_plus_proton_det","Angular dependence of Proton (#Sigma^{+} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_pi_zero_det=new TH2D("h_Sigma_plus_pi_zero_det","Angular dependence of #pi^{0} (#Sigma^{+} branch)",200,0,11,200,0,180);

TH2D* h_Sigma_plus_neutron_det=new TH2D("h_Sigma_plus_neutron_det","Angular dependence of neutron (#Sigma^{+} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_pi_plus_det=new TH2D("h_Sigma_plus_pi_plus_det","Angular dependence of #pi^{+} (#Sigma^{+} branch)",200,0,11,200,0,180);

//ACCEPTANCE PLOTS 
TH2D* h_proton_Acceptance=new TH2D("h_proton_Acceptance","Acceptance of Proton (p + #Lambda^{0} branch)",200,0,11,200,0,180);
TH2D* h_Lambda_Acceptance=new TH2D("h_Lambda_Acceptance","Acceptance of #Lambda^{0} (p + #Lambda^{0} branch)",200,0,11,200,0,180);
//CASE 2 DS->N + SIGMA
TH2D* h_proton_2_Acceptance=new TH2D("h_proton_2_Acceptance","Acceptance of Proton (p + #Lambda^{0} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_zero_Acceptance=new TH2D("h_Sigma_zero_Acceptance","Acceptance of #Sigma^{0} (N + #Sigma branch)",200,0,11,200,0,180);

TH2D* h_neutron_Acceptance=new TH2D("h_neutron_Acceptance","Acceptance of Neutron (N+ #Sigma branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_Acceptance=new TH2D("h_Sigma_plus_Acceptance","Acceptance of #Sigma^{+} (N + #Sigma branch)",200,0,11,200,0,180);

//CASE 2B DECAY FROM CASE 2
TH2D* h_Sigma_zero_Lambda_Acceptance=new TH2D("h_Sigma_zero_Lambda_Acceptance","Acceptance of #Lambda (#Sigma^{0} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_zero_Photon_Acceptance=new TH2D("h_Sigma_zero_photon_Acceptance","Acceptance of Lambda^{0} (#Sigma%{0} branch)",200,0,11,200,0,180);

TH2D* h_Sigma_plus_proton_Acceptance=new TH2D("h_Sigma_plus_proton_Acceptance","Acceptance of Proton (#Sigma^{+} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_pi_zero_Acceptance=new TH2D("h_Sigma_plus_pi_zero_Acceptance","Acceptance of #pi^{0} (#Sigma^{+} branch)",200,0,11,200,0,180);

TH2D* h_Sigma_plus_neutron_Acceptance=new TH2D("h_Sigma_plus_neutron_Acceptance","Acceptance of neutron (#Sigma^{+} branch)",200,0,11,200,0,180);
TH2D* h_Sigma_plus_pi_plus_Acceptance=new TH2D("h_Sigma_plus_pi_plus_Acceptance","Acceptance of #pi^{+} (#Sigma^{+} branch)",200,0,11,200,0,180);

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

//BW Histogram for DS MASSES/////////////
//Later removed due to alteration of Vertex 1.

///////////////////////////////////////
//Creating Particles and terms
  // How many events to simulate and percentage completed
  Int_t nevents=1000000; //Initial val = 100000
  Int_t Percentage=nevents/100;

  // Creating TLorentzVectors of particles
  TLorentzVector Beam, Target; // Beam and target
  TLorentzVector *ds; //ds particle produced from beam and target

  TLorentzVector *ds_proton, *ds_Lambda, *ds_neutron, *ds_sigma_plus, *ds_proton_2, *ds_sigma_zero; // 1st decay products
  TLorentzVector copy_ds_proton, copy_ds_Lambda, copy_ds_neutron, copy_ds_sigma_plus, copy_ds_proton_2, copy_ds_sigma_zero; //Copies of 1st decay products

  TLorentzVector *sigma_zero_Lambda, *sigma_zero_photon, *sigma_plus_proton, *sigma_plus_pi_zero, *sigma_plus_neutron, *sigma_plus_pi_plus; //2nd decay products 
  TLorentzVector copy_sigma_zero_Lambda, copy_sigma_zero_photon, copy_sigma_plus_proton, copy_sigma_plus_pi_zero, copy_sigma_plus_neutron, copy_sigma_plus_pi_plus;

  TVector3 Boost_ds; //Boost Vector to be used to calculate the AM weighting
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
  TLorentzVector V2;//ds into Proton Lambda or Nucleon Sigma
  TLorentzVector V3;// Sigma decay
  TLorentzVector V4;//Might not need this vertex

  double ds_mass; //Masses to be randomly generated each itteration using BW distribution.
  Double_t Masses_0[1] = {ds_mass};//ds particle mass

  Double_t Masses_1[2] = {0.939,1.115};//Proton Lambda
  Double_t Masses_2[2] = {0.938,1.189};//Neutron Sigma +
  Double_t Masses_3[2] = {0.939,1.192};//Proton Sigma 0

  Double_t Masses_4[2] = {1.115,0};//Lambda Photon
  Double_t Masses_5[2] = {0.939,0.134};//Proton pi zero
  Double_t Masses_6[2] = {0.938,0.139};//Neutron pi plus

 // Creating decay vertices
  TGenPhaseSpace Vertex_1, Vertex_2, Vertex_3, Vertex_4;

  double_t AM_Weighting_ds;
  double Pi = TMath::Pi();
  double random_1,random_2, random_3;

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

    Masses_0[0] = 2.7;//ds_mass technecally 2.4 but 2.7 used here for testing;

    Kaon_momentum = hist->GetRandom();

    Beam.SetXYZM(0,0,Kaon_momentum,0.497);
    V1=Beam+Target;

//    Vertex_1.SetDecay(V1,2,Masses_0); //ds formed (Need to have 2nd term be 2 otherwise crash)
    Phasespace_Weight_1=1.0;
//    ds=Vertex_1.GetDecay(0);

//  V2=(TLorentzVector)*ds;
    V2=V1; //ds replaced by V1

    //1st Decay Branch (ds decay)
    if(random_1<0.5){ //ds into Lambda proton
      Vertex_2.SetDecay(V2,2,Masses_1);
      Phasespace_Weight_2=Vertex_2.Generate();
      ds_proton=Vertex_2.GetDecay(0);
      ds_Lambda=Vertex_2.GetDecay(1);
//      cout<<"TEST A"<<"   "<<Phasespace_Weight_2<<endl; //Checking Phasespace weighting
    }

    if(random_1>=0.5){//ds into Nucleon Sigma
      if(random_2<=0.66){//Neutron Sigma Plus
        Vertex_2.SetDecay(V2,2,Masses_2);
	Phasespace_Weight_2=Vertex_2.Generate();
	ds_neutron=Vertex_2.GetDecay(0);
	ds_sigma_plus=Vertex_2.GetDecay(1);
//	cout<<"TEST B"<<"    "<<Phasespace_Weight_2<<endl;
      }
      if(random_2>0.66){//Proton Sigma zero
	Vertex_2.SetDecay(V2,2,Masses_3);
	Phasespace_Weight_2=Vertex_2.Generate();
	ds_proton_2=Vertex_2.GetDecay(0);
	ds_sigma_zero=Vertex_2.GetDecay(1);
//	cout<<"TEST C"<<"     "<<Phasespace_Weight_2<<endl;
      }
    }

    //2ND DECAY BRANCH (Sigma particles decaying)
    if(random_1>=0.5){
      if(random_2<=0.66){ //Sigma plus decay
        V3=(TLorentzVector)*ds_sigma_plus;
        if(random_3<0.5157)
          Vertex_3.SetDecay(V3,2,Masses_6);
          Phasespace_Weight_3=Vertex_3.Generate();
          sigma_plus_neutron=Vertex_3.GetDecay(0);
          sigma_plus_pi_plus=Vertex_3.GetDecay(1);
        }
        if(random_3>=0.5157){
          Vertex_3.SetDecay(V3,2,Masses_5);
          Phasespace_Weight_3=Vertex_3.Generate();
          sigma_plus_proton=Vertex_3.GetDecay(0);
          sigma_plus_pi_zero=Vertex_3.GetDecay(1);
        }
      }
      if(random_2>0.66){//Sigma zero decay
        V3=(TLorentzVector)*ds_sigma_zero;
        Vertex_3.SetDecay(V3,2,Masses_4);
        Phasespace_Weight_3=Vertex_3.Generate();
        sigma_zero_Lambda=Vertex_3.GetDecay(0);
        sigma_zero_photon=Vertex_3.GetDecay(1);
      }

////////////////CREATING THE ANGULAR MOMENTUM WEIGHTING FOR THE DS PARTICLE///////
    if(random_1<0.5){
      Boost_ds = -1*(V1).BoostVector();
      TVector3 three_ds = (V1).Vect();

      copy_ds_proton.SetPxPyPzE(ds_proton->Px(),ds_proton->Py(),ds_proton->Pz(),ds_proton->E());
      copy_ds_Lambda.SetPxPyPzE(ds_Lambda->Px(),ds_Lambda->Py(),ds_Lambda->Pz(),ds_Lambda->E());

      copy_ds_proton.Boost(Boost_ds);
      copy_ds_Lambda.Boost(Boost_ds);

      TVector3 three_ds_proton = copy_ds_proton.Vect();
      TVector3 three_ds_Lambda = copy_ds_Lambda.Vect();

      double angle_ds = (V1).Angle(three_ds_proton);
     // cout<<angle_ds<<endl; //Checking angle between decay particles

      AM_Weighting_ds = (3+35*TMath::Power(cos(angle_ds),4)+30*TMath::Power(cos(angle_ds),2));;
     // cout<<AM_Weighting_ds<<"BRANCH 1"<<endl;
    }

    if(random_1>=0.5){
      if(random_2<=0.66){
        Boost_ds = -1*(V1).BoostVector();
        TVector3 three_ds = (V1).Vect();

        copy_ds_neutron.SetPxPyPzE(ds_neutron->Px(),ds_neutron->Py(),ds_neutron->Pz(),ds_neutron->E());
        copy_ds_sigma_plus.SetPxPyPzE(ds_sigma_plus->Px(),ds_sigma_plus->Py(),ds_sigma_plus->Pz(),ds_sigma_plus->E());

        copy_ds_neutron.Boost(Boost_ds);
        copy_ds_sigma_plus.Boost(Boost_ds);

        TVector3 three_ds_neutron = copy_ds_neutron.Vect();
        TVector3 three_ds_sigma_plus = copy_ds_sigma_plus.Vect();

        double angle_ds = (V1).Angle(three_ds_neutron);
      // cout<<angle_ds<<endl;

        AM_Weighting_ds = (3+35*TMath::Power(cos(angle_ds),4)+30*TMath::Power(cos(angle_ds),2));;
        //cout<<AM_Weighting_ds<<"BRANCH 2"<<endl;
      }
      if(random_2>0.66){
        Boost_ds = -1*(V1).BoostVector();
        TVector3 three_ds = (V1).Vect();

        copy_ds_proton_2.SetPxPyPzE(ds_proton_2->Px(),ds_proton_2->Py(),ds_proton_2->Pz(),ds_proton_2->E());
        copy_ds_sigma_zero.SetPxPyPzE(ds_sigma_zero->Px(),ds_sigma_zero->Py(),ds_sigma_zero->Pz(),ds_sigma_zero->E());

        copy_ds_proton_2.Boost(Boost_ds);
        copy_ds_sigma_zero.Boost(Boost_ds);

        TVector3 three_proton_2 = copy_ds_proton_2.Vect();
        TVector3 three_sigma_zero = copy_ds_sigma_zero.Vect();

        double angle_ds = (V1).Angle(three_proton_2);
      // cout<<angle_ds<<endl;

        AM_Weighting_ds = (3+35*TMath::Power(cos(angle_ds),4)+30*TMath::Power(cos(angle_ds),2));;
        //cout<<AM_Weighting_ds<<"BRANCH 3"<<endl;
      }
    }

////////////////////////////////////////////////////////////////////////////////////////////
////////////DATA WRITING TO FILES AND GENERATION OF THE ACCEPTANCE PLOTS://////////////////

  //Writing the data to the files, one case for the application of the cuts and one without to form the acceptance plots.
  //WITH ANGLE CUTS
  if(random_1<0.5){ //ds into proton lambda
     if((ds_proton->Theta()>1*(2*Pi/360)&& ds_proton->Theta()<10*(2*Pi/360))||
       (ds_proton->Theta()>29*(2*Pi/360)&& ds_proton->Theta()<132*(2*Pi/360))){ 
         if((ds_Lambda->Theta()>1*(2*Pi/360)&& ds_Lambda->Theta()<10*(2*Pi/360))||
           (ds_Lambda->Theta()>29*(2*Pi/360)&& ds_Lambda->Theta()<132*(2*Pi/360))){ 

           h_proton_det->Fill(ds_proton->Rho(),ds_proton->Theta()*180/Pi,
                             Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);

           h_Lambda_det->Fill(ds_Lambda->Rho(),ds_Lambda->Theta()*180/Pi,
                             Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);

      }
    }
  }

  if(random_1>=0.5){//ds into Nucleon Sigma
    if(random_2<=0.66){
      if((ds_neutron->Theta()>1*(2*Pi/360)&& ds_neutron->Theta()<10*(2*Pi/360))||
        (ds_neutron->Theta()>29*(2*Pi/360)&& ds_neutron->Theta()<132*(2*Pi/360))){
        if(random_3<0.5157){ //Sigma plus decay
          if((sigma_plus_neutron->Theta()>1*(2*Pi/360)&& sigma_plus_neutron->Theta()<10*(2*Pi/360))||
          (sigma_plus_neutron->Theta()>29*(2*Pi/360)&& sigma_plus_neutron->Theta()<132*(2*Pi/360))){
            if((sigma_plus_pi_plus->Theta()>1*(2*Pi/360)&& sigma_plus_pi_plus->Theta()<10*(2*Pi/360))||
            (sigma_plus_pi_plus->Theta()>29*(2*Pi/360)&& sigma_plus_pi_plus->Theta()<132*(2*Pi/360))){

              h_neutron_det->Fill(ds_neutron->Rho(),ds_neutron->Theta()*180/Pi,
                                Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);
              h_Sigma_plus_neutron_det->Fill(sigma_plus_neutron->Rho(),sigma_plus_neutron->Theta()*180/Pi,
                                Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
              h_Sigma_plus_pi_plus_det->Fill(sigma_plus_pi_plus->Rho(),sigma_plus_pi_plus->Theta()*180/Pi,
                                Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);

            }
          }
        }
//cout<<random_3<<endl;
        if(random_3>=0.5157){
      	  if((sigma_plus_proton->Theta()>1*(2*Pi/360)&& sigma_plus_proton->Theta()<10*(2*Pi/360))||
          (sigma_plus_proton->Theta()>29*(2*Pi/360)&& sigma_plus_proton->Theta()<132*(2*Pi/360))){
            if((sigma_plus_pi_zero->Theta()>1*(2*Pi/360)&& sigma_plus_pi_zero->Theta()<10*(2*Pi/360))||
            (sigma_plus_pi_zero->Theta()>29*(2*Pi/360)&& sigma_plus_pi_zero->Theta()<132*(2*Pi/360))){

	          h_neutron_det->Fill(ds_neutron->Rho(),ds_neutron->Theta()*180/Pi,
                                      Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);
	          h_Sigma_plus_proton_det->Fill(sigma_plus_proton->Rho(),sigma_plus_proton->Theta()*180/Pi,
                                        Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
	          h_Sigma_plus_pi_zero_det->Fill(sigma_plus_pi_zero->Rho(),sigma_plus_pi_zero->Theta()*180/Pi,
                                        Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);

            }
          }
        }
      }
    }
    if(random_2>0.66){//Sigma zero decay)
      if((ds_proton_2->Theta()>1*(2*Pi/360)&& ds_proton_2->Theta()<10*(2*Pi/360))||
        (ds_proton_2->Theta()>29*(2*Pi/360)&& ds_proton_2->Theta()<132*(2*Pi/360))){
          if((sigma_zero_Lambda->Theta()>1*(2*Pi/360)&& sigma_zero_Lambda->Theta()<10*(2*Pi/360))||
            (sigma_zero_Lambda->Theta()>29*(2*Pi/360)&& sigma_zero_Lambda->Theta()<132*(2*Pi/360))){
            if((sigma_zero_photon->Theta()>1*(2*Pi/360)&& sigma_zero_photon->Theta()<10*(2*Pi/360))||
            (sigma_zero_photon->Theta()>29*(2*Pi/360)&& sigma_zero_photon->Theta()<132*(2*Pi/360))){

                h_proton_2_det->Fill(ds_proton_2->Rho(),ds_proton_2->Theta()*180/Pi,
                                Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);
    		h_Sigma_zero_Lambda_det->Fill(sigma_zero_Lambda->Rho(),sigma_zero_Lambda->Theta()*180/Pi,
                                        Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
      		h_Sigma_zero_Photon_det->Fill(sigma_zero_photon->Rho(),sigma_zero_photon->Theta()*180/Pi,
                                         Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);

          }
        }
      }
    }
  }

  ///////////////////////WITHOUT ANGLE CUTS/////////////////////////////////////////////////
  if(random_1<0.5){
     h_proton->Fill(ds_proton->Rho(),ds_proton->Theta()*180/Pi,
                   Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);

     h_Lambda->Fill(ds_Lambda->Rho(),ds_Lambda->Theta()*180/Pi,
                   Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);
  }

  if(random_1>=0.5){
    if(random_2<=0.66){
      if(random_3<0.5157){
	h_neutron->Fill(ds_neutron->Rho(),ds_neutron->Theta()*180/Pi,
                   Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);
	h_Sigma_plus_neutron->Fill(sigma_plus_neutron->Rho(),sigma_plus_neutron->Theta()*180/Pi,
                              Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
	h_Sigma_plus_pi_plus->Fill(sigma_plus_pi_plus->Rho(),sigma_plus_pi_plus->Theta()*180/Pi,
                              Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
      }
      if(random_3>=0.5157){
	h_neutron->Fill(ds_neutron->Rho(),ds_neutron->Theta()*180/Pi,
                   Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);
	h_Sigma_plus_proton->Fill(sigma_plus_proton->Rho(),sigma_plus_proton->Theta()*180/Pi,
                             Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
	h_Sigma_plus_pi_zero->Fill(sigma_plus_pi_zero->Rho(),sigma_plus_pi_zero->Theta()*180/Pi,
                              Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
      }
    }
    if(random_2>0.66){
      h_proton_2->Fill(ds_proton_2->Rho(),ds_proton_2->Theta()*180/Pi,
                   Phasespace_Weight_1*Phasespace_Weight_2*AM_Weighting_ds);
      h_Sigma_zero_Lambda->Fill(sigma_zero_Lambda->Rho(),sigma_zero_Lambda->Theta()*180/Pi,
                           Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
      h_Sigma_zero_Photon->Fill(sigma_zero_photon->Rho(),sigma_zero_photon->Theta()*180/Pi,
                           Phasespace_Weight_1*Phasespace_Weight_2*Phasespace_Weight_3*AM_Weighting_ds);
    }
  }
}//End of loop 

fileOutput1.Write();

////////////////////////////////CREATION AND PLOTTING OF ACCEPTANCE PLOTS/////////////////////////////
h_proton_Acceptance->Divide(h_proton_det,h_proton);
h_Lambda_Acceptance->Divide(h_Lambda_det,h_Lambda);
h_neutron_Acceptance->Divide(h_neutron_det,h_neutron);
h_Sigma_plus_neutron_Acceptance->Divide(h_Sigma_plus_neutron_det,h_Sigma_plus_neutron);
h_Sigma_plus_pi_plus_Acceptance->Divide(h_Sigma_plus_pi_plus_det,h_Sigma_plus_pi_plus);
h_Sigma_plus_proton_Acceptance->Divide(h_Sigma_plus_proton_det,h_Sigma_plus_proton);
h_Sigma_plus_pi_zero_Acceptance->Divide(h_Sigma_plus_pi_zero_det,h_Sigma_plus_pi_zero);
h_proton_2_Acceptance->Divide(h_proton_2_det,h_proton_2);
h_Sigma_zero_Lambda_Acceptance->Divide(h_Sigma_zero_Lambda_det,h_Sigma_zero_Lambda);
h_Sigma_zero_Photon_Acceptance->Divide(h_Sigma_zero_Photon_det,h_Sigma_zero_Photon);

TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);
h_proton_Acceptance->SetTitle("Acceptance of Proton (p + #Lambda^{0} decay);Rho [GeV/c];Theta [Deg]");
h_proton_Acceptance->Draw("colz");

TCanvas* c2 = new TCanvas("c2","stacked hists",5,5,1000,1000);
h_Lambda_Acceptance->SetTitle("Acceptance of Lambda (p + #Lambda^{0} decay);Rho [GeV/c];Theta [Deg]");
h_Lambda_Acceptance->Draw("colz");

TCanvas* c3 = new TCanvas("c3","stacked hists",5,5,1000,1000);
h_neutron_Acceptance->SetTitle("Acceptance of Neutron (N + #Sigma^{+} decay);Rho [GeV/c];Theta [Deg]");
h_neutron_Acceptance->Draw("colz");

TCanvas* c4 = new TCanvas("c4","stacked hists",5,5,1000,1000);
h_Sigma_plus_pi_plus_Acceptance->SetTitle("Acceptance of #pi^{+} (#Sigma^{+} decay);Rho [GeV/c];Theta [Deg]");
h_Sigma_plus_pi_plus_Acceptance->Draw("colz");

TCanvas* c5 = new TCanvas("c5","stacked hists",5,5,1000,1000);
h_Sigma_plus_neutron_Acceptance->SetTitle("Acceptance of Neutron (#Sigma^{+} decay);Rho [GeV/c];Theta [Deg]");
h_Sigma_plus_neutron_Acceptance->Draw("colz");

TCanvas* c6 = new TCanvas("c6","stacked hists",5,5,1000,1000);
h_Sigma_plus_proton_Acceptance->SetTitle("Acceptance of Proton (#Sigma^{+} decay);Rho [GeV/c];Theta [Deg]");
h_Sigma_plus_proton_Acceptance->Draw("colz");

TCanvas* c7 = new TCanvas("c7","stacked hists",5,5,1000,1000);
h_Sigma_plus_pi_zero_Acceptance->SetTitle("Acceptance of #pi^{0} (#Sigma^{+} decay);Rho [GeV/c];Theta [Deg]");
h_Sigma_plus_pi_zero_Acceptance->Draw("colz");

TCanvas* c8 = new TCanvas("c8","stacked hists",5,5,1000,1000);
h_proton_2_Acceptance->SetTitle("Acceptance of Proton (Proton + #Sigma^{0} decay);Rho [GeV/c];Theta [Deg]");
h_proton_2_Acceptance->Draw("colz");

TCanvas* c9 = new TCanvas("c9","stacked hists",5,5,1000,1000);
h_Sigma_zero_Lambda_Acceptance->SetTitle("Acceptance of #Lambda^{0} (#Sigma^{0} decay);Rho [GeV/c];Theta [Deg]");
h_Sigma_zero_Lambda_Acceptance->Draw("colz");

TCanvas* c10 = new TCanvas("c10","stacked hists",5,5,1000,1000);
h_Sigma_zero_Photon_Acceptance->SetTitle("Acceptance of Photon (#Sigma^{0} decay);Rho [GeV/c];Theta [Deg]");
h_Sigma_zero_Photon_Acceptance->Draw("colz");

TCanvas* c11 = new TCanvas("c11","stacked hists",5,5,1000,1000);
h_proton_2_det->SetTitle("Angular dependence of proton with cuts ;Rho [GeV/c];Theta [Deg]");
h_proton_2_det->Draw("colz");

TCanvas* c12 = new TCanvas("c12","stacked hists",5,5,1000,1000);
h_proton_2->SetTitle("Angular dependence of proton;Rho [GeV/c];Theta [Deg]");
h_proton_2->Draw("colz");
//}//END OF CODE
