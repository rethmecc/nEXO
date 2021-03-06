#include <math.h>
void Plots(char type){
   if (type=='T'){
      TCanvas* Time = new TCanvas("Time","Time",1000,600);
      TGraphErrors* PE=new TGraphErrors ("PEPlots.txt");
      PE->SetTitle("500MHz ADC with PMT");
      PE->SetLineColor(4);
      PE->SetLineWidth(1);
      PE->SetMarkerStyle(3);
      PE->SetMarkerColor(4);
      TGraphErrors* PG=new TGraphErrors ("PGPlots.txt");
      PG->SetTitle("500MHz ADC with Pulse Gen");
      PG->SetLineColor(3);
      PG->SetLineWidth(1);
      PG->SetMarkerStyle(3);
      PG->SetMarkerColor(3);
      TGraphErrors* old=new TGraphErrors ("250Plot.txt");
      old->SetTitle("250MHz ADC with PMT");
      old->SetLineColor(2);
      old->SetLineWidth(1);
      old->SetMarkerStyle(3);
      old->SetMarkerColor(2);
      TGraphErrors* At250MHz=new TGraphErrors ("At250MHzPlot.txt");
      At250MHz->SetTitle("500MHz ADC @ 250MHzwith Pulse Gen");
      At250MHz->SetLineColor(5);
      At250MHz->SetLineWidth(1);
      At250MHz->SetMarkerStyle(3);
      At250MHz->SetMarkerColor(5);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(PE);
      mg->Add(PG);
      mg->Add(old);
      mg->Add(At250MHz);
      mg->SetTitle(";PE;Timing Resolution (ns)");
      mg->Draw("AP");
//      mg->GetXaxis()->SetLimits(0,4.675);
//      mg->GetYaxis()->SetRangeUser(0,0.8);
      Time->Update();
      Time->BuildLegend(0.52,0.69,0.9,0.9);
   }
   if (type=='P'){
      TCanvas* plot = new TCanvas("plot","plot",1000,600);
      TGraphErrors* p1=new TGraphErrors ("p1.txt");
      p1->SetTitle("p1");
      p1->SetLineColor(1);
      p1->SetLineWidth(1);
      p1->SetMarkerStyle(3);
      p1->SetMarkerColor(1);
      TGraphErrors* p2=new TGraphErrors ("p2.txt");
      p2->SetTitle("p2");
      p2->SetLineColor(2);
      p2->SetLineWidth(1);
      p2->SetMarkerStyle(3);
      p2->SetMarkerColor(2);
      TMultiGraph* mg = new TMultiGraph();
//       mg->Add(p1);
      mg->Add(p2);
      mg->Draw("AP");
      plot->Update();
      plot->BuildLegend(0.84,0.84,0.9,0.9);
   }
   if (type=='F'){
      TCanvas* FitMethods = new TCanvas("FitMethods","FitMethods",1000,600);
      TGraphErrors* GEF=new TGraphErrors ("gausexpoFIX.txt");
      GEF->SetTitle("Gaussian exponential with fixed parameters");
      GEF->SetLineColor(2);
      GEF->SetLineWidth(1);
      GEF->SetMarkerStyle(3);
      GEF->SetMarkerColor(2);
      TGraphErrors* GE=new TGraphErrors ("gausexpo.txt");
      GE->SetTitle("Gaussian exponential with unfixed parameters");
      GE->SetLineColor(3);
      GE->SetLineWidth(1);
      GE->SetMarkerStyle(3);
      GE->SetMarkerColor(3);
      TGraphErrors* G=new TGraphErrors ("gaus.txt");
      G->SetTitle("Gaussian");
      G->SetLineColor(4);
      G->SetLineWidth(1);
      G->SetMarkerStyle(3);
      G->SetMarkerColor(4);
      TGraphErrors* RE=new TGraphErrors ("edge.txt");
      RE->SetTitle("Rising edge");
      RE->SetLineColor(5);
      RE->SetLineWidth(1);
      RE->SetMarkerStyle(3);
      RE->SetMarkerColor(5);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(GEF);
      mg->Add(GE);
      mg->Add(G);
      mg->Add(RE);
      mg->SetTitle(";PE;Timing Resolution (ns)");
      mg->Draw("AP");
      FitMethods->Update();
      FitMethods->BuildLegend(0.52,0.69,0.9,0.9);
   }
   if (type=='H'){
      TCanvas* ScopeHist = new TCanvas("ScopeHist","ScopeHist",1000,600);
      TGraphErrors* hist1=new TGraphErrors ("F1f1_26V_-25C_63.5V_minimum00000.txt");
      hist1->SetTitle("hist1");
      hist1->SetLineColor(2);
      hist1->SetLineWidth(1);
      hist1->SetMarkerStyle(3);
      hist1->SetMarkerColor(2);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(hist1);
      mg->SetTitle(";Counts;Time (us)");
      mg->Draw("AB");
      //mg->GetXaxis()->SetLimits(0,4.675);
      //mg->GetYaxis()->SetRangeUser(0,0.8);
      ScopeHist->Update();
      ScopeHist->BuildLegend(0.72,0.80,0.9,0.9);
   }
   if (type=='O'){
      TCanvas* OV = new TCanvas("OV","OV",1000,600);
      TGraphErrors* VUV3=new TGraphErrors ("PEVUV3.txt");
      VUV3->SetTitle("VUV3_1");
      VUV3->SetLineColor(2);
      VUV3->SetLineWidth(1);
      VUV3->SetMarkerStyle(3);
      VUV3->SetMarkerColor(2);
      TGraphErrors* Coated1=new TGraphErrors ("PECoated1.txt");
      Coated1->SetTitle("Coated1");
      Coated1->SetLineColor(6);
      Coated1->SetLineWidth(1);
      Coated1->SetMarkerStyle(3);
      Coated1->SetMarkerColor(6);
      TGraphErrors* Coated2=new TGraphErrors ("PECoated2.txt");
      Coated2->SetTitle("Coated2");
      Coated2->SetLineColor(4);
      Coated2->SetLineWidth(1);
      Coated2->SetMarkerStyle(3);
      Coated2->SetMarkerColor(4);
      TGraphErrors* Coated3=new TGraphErrors ("PECoated3.txt");
      Coated3->SetTitle("Coated3");
      Coated3->SetLineColor(41);
      Coated3->SetLineWidth(1);
      Coated3->SetMarkerStyle(3);
      Coated3->SetMarkerColor(41);
      TGraphErrors* Coated4=new TGraphErrors ("PECoated4.txt");
      Coated4->SetTitle("Coated4");
      Coated4->SetLineColor(46);
      Coated4->SetLineWidth(1);
      Coated4->SetMarkerStyle(3);
      Coated4->SetMarkerColor(46);
      TGraphErrors* Coated5=new TGraphErrors ("PECoated5.txt");
      Coated5->SetTitle("Coated5");
      Coated5->SetLineColor(5);
      Coated5->SetLineWidth(1);
      Coated5->SetMarkerStyle(3);
      Coated5->SetMarkerColor(5);
      TGraphErrors* Coated6=new TGraphErrors ("PECoated6.txt");
      Coated6->SetTitle("Coated6");
      Coated6->SetLineColor(3);
      Coated6->SetLineWidth(1);
      Coated6->SetMarkerStyle(3);
      Coated6->SetMarkerColor(3);
      TGraphErrors* Coated7=new TGraphErrors ("PECoated7.txt");
      Coated7->SetTitle("Coated7");
      Coated7->SetLineColor(38);
      Coated7->SetLineWidth(1);
      Coated7->SetMarkerStyle(3);
      Coated7->SetMarkerColor(38);
      TGraphErrors* Coated8=new TGraphErrors ("PECoated8.txt");
      Coated8->SetTitle("Coated8");
      Coated8->SetLineColor(32);
      Coated8->SetLineWidth(1);
      Coated8->SetMarkerStyle(3);
      Coated8->SetMarkerColor(32);
      TGraphErrors* Coated9=new TGraphErrors ("PECoated9.txt");
      Coated9->SetTitle("Coated9");
      Coated9->SetLineColor(28);
      Coated9->SetLineWidth(1);
      Coated9->SetMarkerStyle(3);
      Coated9->SetMarkerColor(28);
      TGraphErrors* MEG=new TGraphErrors ("PEMEG.txt");
      MEG->SetTitle("MEG");
      MEG->SetLineColor(1);
      MEG->SetLineWidth(1);
      MEG->SetMarkerStyle(3);
      MEG->SetMarkerColor(1);
      TGraphErrors* MEG_2=new TGraphErrors ("PEMEG_2.txt");
      MEG_2->SetTitle("MEG_2");
      MEG_2->SetLineColor(29);
      MEG_2->SetLineWidth(1);
      MEG_2->SetMarkerStyle(3);
      MEG_2->SetMarkerColor(29);
      TGraphErrors* VUV3_2=new TGraphErrors ("PEVUV3_2.txt");
      VUV3_2->SetTitle("VUV3_2");
      VUV3_2->SetLineColor(8);
      VUV3_2->SetLineWidth(1);
      VUV3_2->SetMarkerStyle(3);
      VUV3_2->SetMarkerColor(8);
      TGraphErrors* VUV3_3=new TGraphErrors ("PEVUV3_3.txt");
      VUV3_3->SetTitle("VUV3_3");
      VUV3_3->SetLineColor(9);
      VUV3_3->SetLineWidth(1);
      VUV3_3->SetMarkerStyle(3);
      VUV3_3->SetMarkerColor(9);
      TGraphErrors* VUV3_4=new TGraphErrors ("PEVUV3_4.txt");
      VUV3_4->SetTitle("VUV3_4");
      VUV3_4->SetLineColor(11);
      VUV3_4->SetLineWidth(1);
      VUV3_4->SetMarkerStyle(3);
      VUV3_4->SetMarkerColor(11);
      TGraphErrors* VUV3_5=new TGraphErrors ("PEVUV3_5.txt");
      VUV3_5->SetTitle("VUV3_5");
      VUV3_5->SetLineColor(12);
      VUV3_5->SetLineWidth(1);
      VUV3_5->SetMarkerStyle(3);
      VUV3_5->SetMarkerColor(12);
      TGraphErrors* VUV3_4Norm=new TGraphErrors ("PEVUV3_4Norm.txt");
      VUV3_4Norm->SetTitle("VUV3_4Norm");
      VUV3_4Norm->SetLineColor(46);
      VUV3_4Norm->SetLineWidth(1);
      VUV3_4Norm->SetMarkerStyle(3);
      VUV3_4Norm->SetMarkerColor(46);
      TGraphErrors* VUV3_5Norm=new TGraphErrors ("PEVUV3_5Norm.txt");
      VUV3_5Norm->SetTitle("VUV3_5Norm");
      VUV3_5Norm->SetLineColor(7);
      VUV3_5Norm->SetLineWidth(1);
      VUV3_5Norm->SetMarkerStyle(3);
      VUV3_5Norm->SetMarkerColor(7);
      TGraphErrors* VUV3_6=new TGraphErrors ("PEVUV3_6.txt");
      VUV3_6->SetTitle("VUV3_6");
      VUV3_6->SetLineColor(6);
      VUV3_6->SetLineWidth(1);
      VUV3_6->SetMarkerStyle(3);
      VUV3_6->SetMarkerColor(6);
      TGraphErrors* VUV3_7=new TGraphErrors ("PEVUV3_7.txt");
      VUV3_7->SetTitle("VUV3_7");
      VUV3_7->SetLineColor(5);
      VUV3_7->SetLineWidth(1);
      VUV3_7->SetMarkerStyle(3);
      VUV3_7->SetMarkerColor(5);
      TGraphErrors* VUV3_8=new TGraphErrors ("PEVUV3_8.txt");
      VUV3_8->SetTitle("VUV3_8");
      VUV3_8->SetLineColor(1);
      VUV3_8->SetLineWidth(1);
      VUV3_8->SetMarkerStyle(3);
      VUV3_8->SetMarkerColor(1);
      TGraphErrors* VUV3_9=new TGraphErrors ("PEVUV3_9.txt");
      VUV3_9->SetTitle("VUV3_9");
      VUV3_9->SetLineColor(7);
      VUV3_9->SetLineWidth(1);
      VUV3_9->SetMarkerStyle(3);
      VUV3_9->SetMarkerColor(7);
      TGraphErrors* VUV3_10=new TGraphErrors ("PEVUV3_10.txt");
      VUV3_10->SetTitle("VUV3_10");
      VUV3_10->SetLineColor(4);
      VUV3_10->SetLineWidth(1);
      VUV3_10->SetMarkerStyle(3);
      VUV3_10->SetMarkerColor(4);
      TGraphErrors* VUV3_11=new TGraphErrors ("PEVUV3_11.txt");
      VUV3_11->SetTitle("VUV3_11");
      VUV3_11->SetLineColor(46);
      VUV3_11->SetLineWidth(1);
      VUV3_11->SetMarkerStyle(3);
      VUV3_11->SetMarkerColor(46);
      TGraphErrors* VUV3_12=new TGraphErrors ("PEVUV3_12.txt");
      VUV3_12->SetTitle("VUV3_12");
      VUV3_12->SetLineColor(30);
      VUV3_12->SetLineWidth(1);
      VUV3_12->SetMarkerStyle(3);
      VUV3_12->SetMarkerColor(30);
      TMultiGraph* mg = new TMultiGraph();
//       mg->Add(VUV3);
//       mg->Add(VUV3_2);
      mg->Add(VUV3_3);
//       mg->Add(VUV3_4);
//       mg->Add(VUV3_5);
//       mg->Add(VUV3_6);
//       mg->Add(VUV3_7);
//       mg->Add(VUV3_8);
//       mg->Add(VUV3_9);
//       mg->Add(VUV3_10);
//       mg->Add(VUV3_11);
//       mg->Add(VUV3_12);
//       mg->Add(VUV3_4Norm);
//       mg->Add(VUV3_5Norm);
      mg->Add(MEG);
//       mg->Add(MEG_2);
      mg->Add(Coated1);
      mg->Add(Coated2);
      mg->Add(Coated3);
      mg->Add(Coated4);
      mg->Add(Coated5);
      mg->Add(Coated6);
      mg->Add(Coated7);
      mg->Add(Coated8);
      mg->Add(Coated9);
      mg->SetTitle(";OV (V);<PE> (#mus^{-1})");
      mg->Draw("AP");
      mg->GetXaxis()->SetLimits(0,12);
      mg->GetYaxis()->SetRangeUser(0,0.6);
      OV->Update();
      OV->BuildLegend(0.8,0.10,0.9,0.3);
   }
   if (type=='D'){
      TCanvas* DN = new TCanvas("DN","DN",1000,600);
      DN->SetLogy();
      TGraphErrors* MEG=new TGraphErrors ("DNMEG.txt");
      MEG->SetTitle("MEG");
      MEG->SetLineColor(2);
      MEG->SetLineWidth(1);
      MEG->SetMarkerStyle(3);
      MEG->SetMarkerColor(2);
      TGraphErrors* VUV3=new TGraphErrors ("DNVUV3.txt");
      VUV3->SetTitle("VUV3");
      VUV3->SetLineColor(4);
      VUV3->SetLineWidth(1);
      VUV3->SetMarkerStyle(3);
      VUV3->SetMarkerColor(4);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(MEG);
      mg->Add(VUV3);
      mg->SetTitle(";Temp (C);<DN> (KHz)");
      mg->Draw("AP");
//       mg->GetXaxis()->SetLimits(-0.1,2.6);
      mg->GetYaxis()->SetRangeUser(1,50000);
      DN->Update();
      DN->BuildLegend(0.1,0.84,0.16,0.9);
   }
   if (type=='C'){
      TCanvas* CT = new TCanvas("CT","CT",1000,600);
      TGraphErrors* MEG=new TGraphErrors ("CTMEG.txt");
      MEG->SetTitle("MEG");
      MEG->SetLineColor(1);
      MEG->SetLineWidth(1);
      MEG->SetMarkerStyle(3);
      MEG->SetMarkerColor(1);
      TGraphErrors* VUV3=new TGraphErrors ("CTVUV3.txt");
      VUV3->SetTitle("VUV3");
      VUV3->SetLineColor(2);
      VUV3->SetLineWidth(1);
      VUV3->SetMarkerStyle(3);
      VUV3->SetMarkerColor(2);
      TGraphErrors* Coated1=new TGraphErrors ("CTCoated1.txt");
      Coated1->SetTitle("Coated1");
      Coated1->SetLineColor(6);
      Coated1->SetLineWidth(1);
      Coated1->SetMarkerStyle(3);
      Coated1->SetMarkerColor(6);
      TGraphErrors* Coated4=new TGraphErrors ("CTCoated4.txt");
      Coated4->SetTitle("Coated4");
      Coated4->SetLineColor(46);
      Coated4->SetLineWidth(1);
      Coated4->SetMarkerStyle(3);
      Coated4->SetMarkerColor(46);
      TGraphErrors* Coated2=new TGraphErrors ("CTCoated2.txt");
      Coated2->SetTitle("Coated2");
      Coated2->SetLineColor(4);
      Coated2->SetLineWidth(1);
      Coated2->SetMarkerStyle(3);
      Coated2->SetMarkerColor(4);
      TGraphErrors* Coated5=new TGraphErrors ("CTCoated5.txt");
      Coated5->SetTitle("Coated5");
      Coated5->SetLineColor(5);
      Coated5->SetLineWidth(1);
      Coated5->SetMarkerStyle(3);
      Coated5->SetMarkerColor(5);
      TGraphErrors* Coated6=new TGraphErrors ("CTCoated6.txt");
      Coated6->SetTitle("Coated6");
      Coated6->SetLineColor(3);
      Coated6->SetLineWidth(1);
      Coated6->SetMarkerStyle(3);
      Coated6->SetMarkerColor(3);
      TGraphErrors* Coated7=new TGraphErrors ("CTCoated7.txt");
      Coated7->SetTitle("Coated7");
      Coated7->SetLineColor(38);
      Coated7->SetLineWidth(1);
      Coated7->SetMarkerStyle(3);
      Coated7->SetMarkerColor(38);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(Coated1);
      mg->Add(Coated2);
      mg->Add(Coated4);
      mg->Add(Coated5);
      mg->Add(Coated6);
      mg->Add(Coated7);
      mg->Add(MEG);
      mg->Add(VUV3);
      mg->SetTitle(";Overvoltage (V);<CT>");
      mg->Draw("AP");
      mg->GetXaxis()->SetLimits(0,12);
      mg->GetYaxis()->SetRangeUser(0,1.2);
      CT->Update();
      CT->BuildLegend(0.84,0.66,0.9,0.9);
   }
   if (type=='N'){
      TCanvas* NPE = new TCanvas("NPE","NPE",1000,600);
      TGraphErrors* NormRun=new TGraphErrors ("PENormRun.txt");
      NormRun->SetTitle("Norm. Det.");
      NormRun->SetLineColor(4);
      NormRun->SetLineWidth(1);
      NormRun->SetMarkerStyle(3);
      NormRun->SetMarkerColor(4);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(NormRun);
      mg->SetTitle(";Run;<PE> (#mus^{-1})");
      mg->Draw("AP");
      mg->GetYaxis()->SetRangeUser(0,1.3);
      NPE->Update();
      NPE->BuildLegend(0.84,0.84,0.9,0.9);
   }
   if (type=='G'){
      TCanvas* GN = new TCanvas("GN","GN",1000,600);
      TGraphErrors* PE1=new TGraphErrors ("GainNorm1PE.txt");
      PE1->SetTitle("1PE");
      PE1->SetLineColor(1);
      PE1->SetLineWidth(1);
      PE1->SetMarkerStyle(3);
      PE1->SetMarkerColor(1);
      TGraphErrors* PE2=new TGraphErrors ("GainNorm2PE.txt");
      PE2->SetTitle("2PE");
      PE2->SetLineColor(2);
      PE2->SetLineWidth(1);
      PE2->SetMarkerStyle(3);
      PE2->SetMarkerColor(2);
      TGraphErrors* PE3=new TGraphErrors ("GainNorm3PE.txt");
      PE3->SetTitle("3PE");
      PE3->SetLineColor(3);
      PE3->SetLineWidth(1);
      PE3->SetMarkerStyle(3);
      PE3->SetMarkerColor(3);
      TGraphErrors* PE4=new TGraphErrors ("GainNorm4PE.txt");
      PE4->SetTitle("4PE");
      PE4->SetLineColor(4);
      PE4->SetLineWidth(1);
      PE4->SetMarkerStyle(3);
      PE4->SetMarkerColor(4);
      TGraphErrors* PE5=new TGraphErrors ("GainNorm5PE.txt");
      PE5->SetTitle("5PE");
      PE5->SetLineColor(5);
      PE5->SetLineWidth(1);
      PE5->SetMarkerStyle(3);
      PE5->SetMarkerColor(5);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(PE1);
      mg->Add(PE2);
      mg->Add(PE3);
      mg->Add(PE4);
      mg->Add(PE5);
      mg->SetTitle(";OV (V);Amplitude (V)");
      mg->Draw("AP");
//       mg->GetYaxis()->SetRangeUser(0,1.3);
      GN->Update();
      GN->BuildLegend(0.1,0.1,0.16,0.3);
   }
   if (type=='g'){
      TCanvas* gn = new TCanvas("gn","gn",1000,600);
      TGraphErrors* PE1=new TGraphErrors ("GainNorm1PETP.txt");
      PE1->SetTitle("1PE");
      PE1->SetLineColor(1);
      PE1->SetLineWidth(1);
      PE1->SetMarkerStyle(3);
      PE1->SetMarkerColor(1);
      TGraphErrors* PE2=new TGraphErrors ("GainNorm2PETP.txt");
      PE2->SetTitle("2PE");
      PE2->SetLineColor(2);
      PE2->SetLineWidth(1);
      PE2->SetMarkerStyle(3);
      PE2->SetMarkerColor(2);
      TGraphErrors* PE3=new TGraphErrors ("GainNorm3PETP.txt");
      PE3->SetTitle("3PE");
      PE3->SetLineColor(3);
      PE3->SetLineWidth(1);
      PE3->SetMarkerStyle(3);
      PE3->SetMarkerColor(3);
      TGraphErrors* PE4=new TGraphErrors ("GainNorm4PETP.txt");
      PE4->SetTitle("4PE");
      PE4->SetLineColor(4);
      PE4->SetLineWidth(1);
      PE4->SetMarkerStyle(3);
      PE4->SetMarkerColor(4);
      TGraphErrors* PE5=new TGraphErrors ("GainNorm5PETP.txt");
      PE5->SetTitle("5PE");
      PE5->SetLineColor(5);
      PE5->SetLineWidth(1);
      PE5->SetMarkerStyle(3);
      PE5->SetMarkerColor(5);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(PE1);
      mg->Add(PE2);
      mg->Add(PE3);
      mg->Add(PE4);
      mg->Add(PE5);
      mg->SetTitle(";Amplitude (V);OV (V)");
      mg->Draw("AP");
      mg->GetYaxis()->SetRangeUser(64.5,66.6);
      mg->GetXaxis()->SetRangeUser(0,0.19);
      gn->Update();
      gn->BuildLegend(0.84,0.1,0.9,0.3);
   }
   if (type=='b'){
      TCanvas* bv = new TCanvas("bv","bv",1000,600);
      TGraphErrors* VUV3=new TGraphErrors ("GainVUV3TP.txt");
      VUV3->SetTitle("VUV3");
      VUV3->SetLineColor(2);
      VUV3->SetLineWidth(1);
      VUV3->SetMarkerStyle(3);
      VUV3->SetMarkerColor(2);
      TGraphErrors* Coated1=new TGraphErrors ("GainCoated1TP.txt");
      Coated1->SetTitle("Coated1");
      Coated1->SetLineColor(6);
      Coated1->SetLineWidth(1);
      Coated1->SetMarkerStyle(3);
      Coated1->SetMarkerColor(6);
      TGraphErrors* Coated2=new TGraphErrors ("GainCoated2TP.txt");
      Coated2->SetTitle("Coated2");
      Coated2->SetLineColor(4);
      Coated2->SetLineWidth(1);
      Coated2->SetMarkerStyle(3);
      Coated2->SetMarkerColor(4);
      TGraphErrors* Coated3=new TGraphErrors ("GainCoated3TP.txt");
      Coated3->SetTitle("Coated3");
      Coated3->SetLineColor(41);
      Coated3->SetLineWidth(1);
      Coated3->SetMarkerStyle(3);
      Coated3->SetMarkerColor(41);
      TGraphErrors* Coated4=new TGraphErrors ("GainCoated4TP.txt");
      Coated4->SetTitle("Coated4");
      Coated4->SetLineColor(46);
      Coated4->SetLineWidth(1);
      Coated4->SetMarkerStyle(3);
      Coated4->SetMarkerColor(46);
      TGraphErrors* Coated5=new TGraphErrors ("GainCoated5TP.txt");
      Coated5->SetTitle("Coated5");
      Coated5->SetLineColor(5);
      Coated5->SetLineWidth(1);
      Coated5->SetMarkerStyle(3);
      Coated5->SetMarkerColor(5);
      TGraphErrors* Coated6=new TGraphErrors ("GainCoated6TP.txt");
      Coated6->SetTitle("Coated6");
      Coated6->SetLineColor(3);
      Coated6->SetLineWidth(1);
      Coated6->SetMarkerStyle(3);
      Coated6->SetMarkerColor(3);
      TGraphErrors* Coated7=new TGraphErrors ("GainCoated7TP.txt");
      Coated7->SetTitle("Coated7");
      Coated7->SetLineColor(38);
      Coated7->SetLineWidth(1);
      Coated7->SetMarkerStyle(3);
      Coated7->SetMarkerColor(38);
      TGraphErrors* Coated8=new TGraphErrors ("GainCoated8TP.txt");
      Coated8->SetTitle("Coated8");
      Coated8->SetLineColor(32);
      Coated8->SetLineWidth(1);
      Coated8->SetMarkerStyle(3);
      Coated8->SetMarkerColor(32);
      TGraphErrors* Coated9=new TGraphErrors ("GainCoated9TP.txt");
      Coated9->SetTitle("Coated9");
      Coated9->SetLineColor(28);
      Coated9->SetLineWidth(1);
      Coated9->SetMarkerStyle(3);
      Coated9->SetMarkerColor(28);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(VUV3);
      mg->Add(Coated1);
      mg->Add(Coated2);
      mg->Add(Coated3);
      mg->Add(Coated4);
      mg->Add(Coated5);
      mg->Add(Coated6);
      mg->Add(Coated7);
      mg->Add(Coated8);
      mg->Add(Coated9);
      mg->SetTitle(";Amplitude (V);Voltage (V)");
      mg->Draw("AP");
//       mg->GetYaxis()->SetRangeUser(0,1.3);
      bv->Update();
      bv->BuildLegend(0.84,0.66,0.9,0.9);
   }
   if (type=='n'){
      TCanvas* nPE = new TCanvas("nPE","nPE",1000,600);
      TGraphErrors* Norm=new TGraphErrors ("PENorm.txt");
      Norm->SetTitle("Norm. Det.");
      Norm->SetLineColor(4);
      Norm->SetLineWidth(1);
      Norm->SetMarkerStyle(3);
      Norm->SetMarkerColor(4);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(Norm);
      mg->SetTitle(";OV (V); <PE> (#mus^{-1})");
      mg->Draw("AP");
//       mg->GetYaxis()->SetRangeUser(0,0.5);
      nPE->Update();
      nPE->BuildLegend(0.84,0.84,0.9,0.9);
   }
   if (type=='B'){
      TCanvas* BV = new TCanvas("BV","BV",1000,600);
      TGraphErrors* VUV3=new TGraphErrors ("GainVUV3.txt");
      VUV3->SetTitle("VUV3 (-100C)");
      VUV3->SetLineColor(2);
      VUV3->SetLineWidth(1);
      VUV3->SetMarkerStyle(3);
      VUV3->SetMarkerColor(2);
      TGraphErrors* Coated1=new TGraphErrors ("GainCoated1.txt");
      Coated1->SetTitle("Coated1 (-100C)");
      Coated1->SetLineColor(6);
      Coated1->SetLineWidth(1);
      Coated1->SetMarkerStyle(3);
      Coated1->SetMarkerColor(6);
      TGraphErrors* Coated2=new TGraphErrors ("GainCoated2.txt");
      Coated2->SetTitle("Coated2 (-100C)");
      Coated2->SetLineColor(4);
      Coated2->SetLineWidth(1);
      Coated2->SetMarkerStyle(3);
      Coated2->SetMarkerColor(4);
      TGraphErrors* Coated4=new TGraphErrors ("GainCoated4.txt");
      Coated4->SetTitle("Coated4 (-20C)");
      Coated4->SetLineColor(46);
      Coated4->SetLineWidth(1);
      Coated4->SetMarkerStyle(3);
      Coated4->SetMarkerColor(46);
      TGraphErrors* Coated5=new TGraphErrors ("GainCoated5.txt");
      Coated5->SetTitle("Coated5 (-20C)");
      Coated5->SetLineColor(5);
      Coated5->SetLineWidth(1);
      Coated5->SetMarkerStyle(3);
      Coated5->SetMarkerColor(5);
      TGraphErrors* Coated6=new TGraphErrors ("GainCoated6.txt");
      Coated6->SetTitle("Coated6 (-20C)");
      Coated6->SetLineColor(3);
      Coated6->SetLineWidth(1);
      Coated6->SetMarkerStyle(3);
      Coated6->SetMarkerColor(3);
      TGraphErrors* Coated7=new TGraphErrors ("GainCoated7.txt");
      Coated7->SetTitle("Coated7 (-20C)");
      Coated7->SetLineColor(38);
      Coated7->SetLineWidth(1);
      Coated7->SetMarkerStyle(3);
      Coated7->SetMarkerColor(38);
      TMultiGraph* mg = new TMultiGraph();
      mg->Add(VUV3);
      mg->Add(Coated1);
      mg->Add(Coated2);
      mg->Add(Coated4);
      mg->Add(Coated5);
      mg->Add(Coated6);
      mg->Add(Coated7);
      mg->SetTitle(";Voltage (V);Amplitude (V)");
      mg->Draw("AP");
//       mg->GetYaxis()->SetRangeUser(0,1.3);
      BV->Update();
      BV->BuildLegend(0.8,0.66,0.9,0.9);
   }
 /*  if (type=='t'){
      TCanvas* tg = new TCanvas("tg","tg",1000,600);
      TGraphErrors* gainTop=new TGraphErrors ("GainTopVUV2.txt");
      gainTop->SetTitle("Top VUV2 (-100C)");
      gainTop->SetLineColor(2);
      gainTop->SetLineWidth(1);
      gainTop->SetMarkerStyle(3);
      gainTop->SetMarkerColor(2);
      TGraphErrors* gainBottomVUV3=new TGraphErrors ("GainBottomVUV3.txt");
      gainBottomVUV3->SetTitle("Bottom VUV3 (-100C)");
      gainBottomVUV3->SetLineColor(4);
      gainBottomVUV3->SetLineWidth(1);
      gainBottomVUV3->SetMarkerStyle(3);
      gainBottomVUV3->SetMarkerColor(4);
      mg->Add(gainTop);
      mg->Add(gainBottomVUV3);
      mg->SetTitle(";Time (m);Amplitude (V)");
      mg->Draw("AP");
//       mg->GetYaxis()->SetRangeUser(0,1.3);
      tg->Update();
      tg->BuildLegend(0.8,0.66,0.9,0.9);
   }
   if (type=='T'){
      TCanvas* TG = new TCanvas("TG","TG",1000,600);
      TGraphErrors* PETop=new TGraphErrors ("PETopVUV2.txt");
      PETop->SetTitle("Top VUV2 (-100C)");
      PETop->SetLineColor(2);
      PETop->SetLineWidth(1);
      PETop->SetMarkerStyle(3);
      PETop->SetMarkerColor(2);
      TGraphErrors* PEBottomVUV3=new TGraphErrors ("PEBottomVUV3.txt");
      PEBottomVUV3->SetTitle("Bottom VUV3 (-100C)");
      PEBottomVUV3->SetLineColor(4);
      PEBottomVUV3->SetLineWidth(1);
      PEBottomVUV3->SetMarkerStyle(3);
      PEBottomVUV3->SetMarkerColor(4);
      mg->Add(PETop);
      mg->Add(PEBottomVUV3);
      mg->SetTitle(";Time (m);Amplitude (V)");
      mg->Draw("AP");
//       mg->GetYaxis()->SetRangeUser(0,1.3);
      TG->Update();
      TG->BuildLegend(0.8,0.66,0.9,0.9);
   }*/
}