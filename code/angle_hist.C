 {

    h = new TH1D("h", ";Angle(Degree);dN", 17, 10, 350);
   
    h->SetFillColor(kBlue-10);
    h->SetMaximum(130);
    h->SetBinContent(1, 25);
    h->SetBinContent(2, 19);
    h->SetBinContent(3, 27);
    h->SetBinContent(4, 40);
    h->SetBinContent(5, 49);
    h->SetBinContent(6, 49);
    h->SetBinContent(7, 62);
    h->SetBinContent(8, 109);
    h->SetBinContent(9, 94);
    h->SetBinContent(10, 67);
    h->SetBinContent(11, 69);
    h->SetBinContent(12, 58);
    h->SetBinContent(13, 70);
    h->SetBinContent(14, 30);
    h->SetBinContent(15, 21);
    h->SetBinContent(16, 24);
    h->SetBinContent(17, 6);

    gStyle->SetOptFit(0);
    gStyle->SetOptStat(0);
    h->Draw();
    h->Draw("E1SAME");
    
}
