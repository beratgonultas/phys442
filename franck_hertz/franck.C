{
	int n;
	d0 = new TGraph("data/172C-1.40U1-2.29U3.txt","%lg%lg", ",");
	d0->SetTitle(";U2 Potential(V);Current(nA)");


	d1 = new TGraph("data/172C-1.61U1-2.29U3.txt","%lg%lg");
	d1->SetTitle(";U2 Potential(V);Current(nA)");

	d2 = new TGraph("data/172C-1.76U1-2.29U3.txt","%lg%lg");
	d2->SetTitle(";U2 Potential(V);Current(nA)");


	d3 = new TGraph("data/172C-1.76U1-2.52U3.txt","%lg%lg");
	d3->SetTitle(";U2 Potential(V);Current(nA)");

	d4 = new TGraph("data/172C-1.76U1-2.71U3.txt","%lg%lg");
	d4->SetTitle(";U2 Potential(V);Current(nA)");


	d5 = new TGraph("data/172C-1.76U1-2.88U3.txt","%lg%lg");
	d5->SetTitle(";U2 Potential(V);Current(nA)");


	d6 = new TGraph("data/180C-1.76U1-2.88U3.txt","%lg%lg");
	d6->SetTitle(";U2 Potential(V);Current(nA)");

	d7 = new TGraph("data/188C-1.76U1-2.88U3.txt","%lg%lg");
	d7->SetTitle(";U2 Potential(V);Current(nA)");


	d8 = new TGraph("data/194C-1.76U1-2.88U3.txt","%lg%lg");
	d8->SetTitle(";U2 Potential(V);Current(nA)");


	d9 = new TGraph("data/208C-1.76U1-2.88U3.txt","%lg%lg");
	d9->SetTitle(";U2 Potential(V);Current(nA)");
	


	d9->Draw("AP");
}
