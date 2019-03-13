{
   c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);
   // c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);
   const Int_t n = 9;
   Double_t x[n]  = {0.1736481777, 0.3420201433, 0.5, 0.6427876097, 0.7660444431,0.8660254038,0.9396926208,0.984807753,1};
   Double_t y[n]  = {31,43,48,70,119,107,131,176,188};
   Double_t ex[n] = {0,0,0,0,0,0,0,0,0};
   Double_t ey[n] = {5.5677643628,6.5574385243,6.9282032303,8.3666002653,10.9087121146,10.3440804328,11.4455231423,13.2664991614,13.7113092008};
   gr = new TGraphErrors(n,x,y,ex,ey);
   gr->SetTitle(";sin(angle/2);dN");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("AP");
   
   TF1 *f = new TF1("f","[0]*x+[1]",0,200);
   f->SetParameters(1, 1);
   f->SetLineColor(kRed+0);
   gr->Fit("f");
   gStyle->SetOptStat(111110);
   gStyle->SetOptFit(1111);
   return c1;
}
