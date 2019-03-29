{
  c1 = new TCanvas("c1","A graph with error bars");
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);
   const Int_t n = 4; //number of data points
   Double_t x[n]  ={ , , , }; //x values
  
   Double_t y[n] = { , , , }; //y values

   
   Double_t ex[n] ={ , , , }; //error of x values
   
   Double_t ey[n] ={ , , , }; //error of y values

   
   gr = new TGraphErrors(n,x,y,ex,ey);
   gr->SetTitle(";B^2 (T);2V/r^2 (V/m^2)");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("AP");
   
   TF1 *f = new TF1("f","[1]*x+[0]",0,0.000004);
   f->SetLineColor(kRed+0);
   f->SetParameters(10000, 100000);
   gr->Fit("f");
   gStyle->SetOptStat(111110);
   gStyle->SetOptFit(1111);


   return c1;
}
