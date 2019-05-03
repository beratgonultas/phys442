{
  d0 = new TGraphErrors("final.csv","%lg%lg%lg%lg", ",");
	d0->SetTitle(";Frequency(1/s); Voltage(V)");
	
        TF1 *pol1 = new TF1("pol1", "pol1");
        pol1->SetParameters(0, 4E-34);
        pol1->SetLineColor(kGreen+1);
        d0->Fit("pol1");

	d0->Draw("AP");
}
