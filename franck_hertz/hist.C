 {

    h = new TH1D("h", ";E1;Counts", 9, 4.8, 5.50);
    std::ifstream file("fr.txt");
    float datum;
   
    while(file>>datum) {
     h->Fill(datum);
     }

    h->SetFillColor(kBlue-10);
    h->SetMaximum(25);

    TF1 *fgaus = new TF1("fgaus", "[0]*TMath::Gaus(x, [1], [2])",0,25);
    fgaus->SetParameters(20, 7, 1);
    fgaus->SetLineColor(kGreen+1);
    h->Fit("fgaus");

    gStyle->SetOptStat(0);
    gStyle->SetOptFit(0);
    
    /*gStyle->SetOptStat(111110);
     gStyle->SetOptFit(1111);
    */
    h->Draw();
    h->Draw("SAME");
    
}
