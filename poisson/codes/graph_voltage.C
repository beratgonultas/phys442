 {

   g = new TGraph("hv.txt");
   g->SetMarkerStyle(21);
   g->SetTitle(";HV(Volts);Count");
   g->Draw("AP");
    
}
