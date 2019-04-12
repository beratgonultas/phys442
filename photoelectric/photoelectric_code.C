{
  c1 = new TCanvas("c1","A graph with error bars");
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);
   const Int_t n = 18; //number of data points
   Double_t x[n]  ={}; //x values
  
   Double_t y[n] = {}; //y values

   
   Double_t ex[n] ={}; //error of x values
   
   Double_t ey[n] = {}; //error of y values

   
   gr = new TGraphErrors(n,x,y,ex,ey);
   gr->SetTitle("");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("AP");
   
   TF1 *f = new TF1("f","pol1",0,1);
   f->SetParameters(1, 1);
   f->SetLineColor(kRed+0);
   gr->Fit("f","R");
   gStyle->SetOptStat(111110);
   gStyle->SetOptFit(1111);
   //gr->GetXaxis()->SetLimits(0, 300);
   //gr->GetYaxis()->SetLimits( 0, 0.01);
   return c1;
}
