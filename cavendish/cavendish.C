{
	d0 = new TGraph("damp.txt_out.csv","%lg%lg", ",");
	d0->SetTitle(";Time(s); Voltage(V)");

	 TF1 *f = new TF1("fpois","[0]*cos([1]*x+[2])*exp([4]*x)+[3]",2500,3000);
	 fpois->SetParameters(0.175, 0.03, 0, -2.7);
	 d0->Fit("fpois");
	  gStyle->SetOptStat(111110);
	  gStyle->SetOptFit(1111);

	d0->Draw("AP");
}
