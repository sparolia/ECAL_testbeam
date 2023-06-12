#include <iostream>
#include <ostream>
#include <cmath>
#include <TMath.h>
#include <TRandom2.h>
#include <TH1.h>
#include <TH1D.h>
#include <TCanvas.h>
#include <TStyle.h>
#include <fstream>
#include <string>
#include <TFile.h>
#include <TArrayD.h>
#include <TTree.h>
#include <TLorentzVector.h>
#include <math.h>
#include <TLegend.h>

void dataframe(){
  ROOT::EnableImplicitMT(); // Tell ROOT you want to go parallel
  TChain chain("digi");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15145/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15146/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15153/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15158/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15175/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15183/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15190/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15199/*.root");
  chain.Add("/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15208/*.root");
  ROOT::RDataFrame d(chain); // Interface to TTree and TChain
  //ROOT::RDataFrame d("digi", "1.root"); // Interface to TTree and TChain
  //ROOT::RDataFrame d("digi", "/eos/cms/store/group/dpg_ecal/comm_ecal/upgrade/testbeam/ECALTB_H4_Oct2021/LowPurity/ntuples_fit100GeV/15145/*.root"); // Interface to TTree and TChain
  auto h = d.Define("var","time_max[MCP2-MCP1]")
    .Define("amp","amp_max[MCP1]")
    .Histo2D({"hist", "2D histogram of time(MCP2-MCP1) Vs amp_max MCP1", 100, 0, 3000, 100, 0, 800},"amp","var"); // This books the (lazy) filling of a histogram

  auto c1 = new TCanvas("c", "c", 500,500);
  c1->cd();
  h->SetTitle("2D histo of time difference vs amp_max");
  h->GetXaxis()->SetTitle("ampl");
  h->GetYaxis()->SetTitle("Time difference");
  h->Draw(); // Event loop is run here, upon first access to a result
  c1->Show();
  c1->SaveAs("time_max_amp_mcp1_2.png");
}
