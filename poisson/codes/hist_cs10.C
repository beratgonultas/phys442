 {

    h = new TH1D("h", "; Number of Counts; Distribution of Counts", 10, 80, 130);
    std::ifstream file("cs_10.txt");
    float datum;
   
    while(file>>datum) {
     h->Fill(datum);
     }

    h->SetFillColor(kBlue-10);
    h->SetMaximum(30);

     TF1 *fpois = new TF1("fpois","[0]*TMath::Poisson(x,[1])",70,140);
    fpois->SetParameters(400, 90);
    fpois->SetLineColor(kRed+0);
    h->Fit("fpois");
    

    TF1 *fgaus = new TF1("fgaus", "[0]*TMath::Gaus(x, [1], [2])",70,140);
    fgaus->SetParameters(15, 90, 7);
    fgaus->SetLineColor(kGreen+1);
    h->Fit("fgaus","+");

    gStyle->SetOptStat(0);
    gStyle->SetOptFit(0);
    
    /*gStyle->SetOptStat(111110);
     gStyle->SetOptFit(1111);
    */
     h->Draw();
    h->Draw("E1SAME");
    
}
