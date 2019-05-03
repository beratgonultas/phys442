{
	d0 = new TGraph("30kv_out.csv","%lg%lg", ",");
	d0->SetTitle(";Crystal Angle(Degrees); Accumulation rate(Imp/sn)");


	d0->Draw("APL");
}
