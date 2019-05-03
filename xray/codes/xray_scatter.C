{
	d0 = new TGraphErrors("calibration.csv","%lg%lg%lg%lg", ",");
	d0->SetTitle(";Theta experimantal; Theta theoretical");
	
        TF1 *pol1 = new TF1("pol1", "pol1",0,20);
        pol1->SetParameters(0, 1 );
        pol1->SetLineColor(kGreen+1);
        d0->Fit("pol1");

	d0->Draw("AP");
}
