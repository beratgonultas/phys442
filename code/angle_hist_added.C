 {

    h = new TH1D("h", ";Angle(Degree);dN", 9, 10, 190);
   
    h->SetFillColor(kBlue-10);
    h->SetMaximum(220);
    h->SetBinContent(1, 31);
    h->SetBinContent(2, 43);
    h->SetBinContent(3, 48);
    h->SetBinContent(4, 70);
    h->SetBinContent(5, 119);
    h->SetBinContent(6, 107);
    h->SetBinContent(7, 131);
    h->SetBinContent(8, 176);
    h->SetBinContent(9, 188);
    
    gStyle->SetOptFit(0);
    gStyle->SetOptStat(0);
    h->Draw();
    h->Draw("E1SAME");
    
}
