 {

    h = new TH1D("h", "; t; Counts", 10, 0, 5);
    std::ifstream file("part3_1.txt");
    float datum;
   
    while(file>>datum) {
    h->Fill(datum);
    }

    h->SetFillColor(kBlue-10);
    h->SetMaximum(40);

    TF1 *f = new TF1("f","[0]*exp(-[1]*x)*x*pow([1],2)",0,25);
    f->SetParameters(1, 1);
    f->SetLineColor(kRed+0);
    h->Fit("f");
    
    

    /*gStyle->SetOptStat(0);
    gStyle->SetOptFit(0);
    */
    gStyle->SetOptStat(111110);
    gStyle->SetOptFit(1111);
    
    h->Draw();
    h->Draw("E1SAME");
    
}
