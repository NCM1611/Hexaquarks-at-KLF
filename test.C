{TFile fileOutput1("diss_plots.root","recreate");
TH2D* AM_Weight_Plot=new TH2D("L vs cosx","AM plots",800,-1,1,800,-10,10);
TH2D* L0 = new TH2D("L0 vs cosx","L=0",800,-1,1,800,0,1);
TH2D* L1 = new TH2D("L1 vs cosx","L=1",800,-1,1,800,-2,2);
TH2D* L2 = new TH2D("L2 vs cosx","L=2",800,-1,1,800,-2,2);

double L_0,L_1,L_2,x,z;
double Pi = TMath::Pi();
for(int y=0;y<=1200;y++){
  z = cos(y);
  L_0=0.5*TMath::Sqrt(1/Pi);
  L_1=(3*TMath::Power(z,2))-1;
  L_2=(35*TMath::Power(z,4))-(30*TMath::Power(z,2))+3;
//  cout<<y<<endl;
  L0->Fill(z,0.4+L_0);
  L1->Fill(z,0.4+(L_1*0.25*TMath::Sqrt(5/Pi)));
  L2->Fill(z,0.4+(L_2*3/16 * TMath::Sqrt(1/Pi)));
}
//cout<<L2->GetMinimum()<<endl;
TCanvas* c1 = new TCanvas("c1","stacked hists",5,5,1000,1000);
L0->SetTitle("Angular Momentum Weighting; cos(x); Angular Momentum Weighting (eV/s),L");
L0->SetMarkerColor(24);
L0->SetMarkerStyle(5);
L0->SetMarkerSize(0.5);
L0->Draw("PLC PMC");
L1->SetMarkerColor(2);
L1->SetMarkerStyle(4);
L1->SetMarkerSize(0.5);
L1->Draw("SAME");
L2->SetMarkerColor(4);
L2->SetMarkerStyle(20);
L2->SetMarkerSize(0.5);
L2->Draw("SAME");
c1->Update();
}//End of code
