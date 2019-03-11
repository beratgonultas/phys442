 {

    h = new TH1D("h", "; Number of Counts; Distribution of Counts", 7, 0, 14);
    std::ifstream file("ba_1.txt");
    float datum;
   
    while(file>>datum) {
     h->Fill(datum);
     }

    h->SetFillColor(kBlue-10);
    h->SetMaximum(70);

     TF1 *fpois = new TF1("fpois","[0]*TMath::Poisson(x,[1])",0,20);
    fpois->SetParameters(20, 2);
    fpois->SetLineColor(kRed+0);
    h->Fit("fpois");
    

    TF1 *fgaus = new TF1("fgaus", "[0]*TMath::Gaus(x, [1], [2])",0,20);
    fgaus->SetParameters(10, 1, 1);
    fgaus->SetLineColor(kGreen+1);
    h->Fit("fgaus","+");
    
     gStyle->SetOptStat(0);
    gStyle->SetOptFit(0);
    /*
    gStyle->SetOptStat(111110);
     gStyle->SetOptFit(1111);
    */
     h->Draw();
    h->Draw("E1SAME");
    
}
