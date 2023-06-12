//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jun  7 08:54:54 2023 by ROOT version 6.28/04
// from TTree digi/digi_tree
// found on file: 1.root
//////////////////////////////////////////////////////////

#ifndef Analyse_h
#define Analyse_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Analyse {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           A1;
   Int_t           A2;
   Int_t           A3;
   Int_t           A4;
   Int_t           A5;
   Int_t           B1;
   Int_t           B2;
   Int_t           B3;
   Int_t           B4;
   Int_t           B5;
   Int_t           C1;
   Int_t           C2;
   Int_t           C3;
   Int_t           C4;
   Int_t           C5;
   Int_t           D1;
   Int_t           D2;
   Int_t           D3;
   Int_t           D4;
   Int_t           D5;
   Int_t           E1;
   Int_t           E2;
   Int_t           E3;
   Int_t           E4;
   Int_t           E5;
   Int_t           MCP1;
   Int_t           MCP2;
   Int_t           CLK;
   Int_t           CFD;
   Int_t           LED;
   ULong64_t       index;
   UInt_t          n_channels;
   UInt_t          n_timetypes;
   Float_t         gain[28];   //[n_channels]
   Float_t         pedestal[28];   //[n_channels]
   Float_t         b_charge[28];   //[n_channels]
   Float_t         b_slope[28];   //[n_channels]
   Float_t         b_rms[28];   //[n_channels]
   Float_t         time[56];   //[n_timetypes]
   Float_t         time_chi2[56];   //[n_timetypes]
   Float_t         time_error[56];   //[n_timetypes]
   Float_t         time_slope[56];   //[n_timetypes]
   Float_t         period[28];   //[n_channels]
   Float_t         maximum[28];   //[n_channels]
   Float_t         time_maximum[28];   //[n_channels]
   Float_t         amp_max[28];   //[n_channels]
   Float_t         time_max[28];   //[n_channels]
   Float_t         chi2_max[28];   //[n_channels]
   Float_t         charge_tot[28];   //[n_channels]
   Float_t         charge_sig[28];   //[n_channels]
   Float_t         fit_ampl[28];   //[n_channels]
   Float_t         fit_time[28];   //[n_channels]
   Float_t         fit_terr[28];   //[n_channels]
   Float_t         fit_chi2[28];   //[n_channels]
   Float_t         fit_period[28];   //[n_channels]
   Float_t         fit_ampl_scint[28];   //[n_channels]
   Float_t         fit_time_scint[28];   //[n_channels]
   Float_t         fit_ampl_spike[28];   //[n_channels]
   Float_t         fit_time_spike[28];   //[n_channels]
   Float_t         fit_chi2_scint_plus_spike[28];   //[n_channels]
   Bool_t          fit_converged_scint_plus_spike[28];   //[n_channels]
   Float_t         ampl_calib[28];   //[n_channels]
   Float_t         time_calib[28];   //[n_channels]

   // List of branches
   TBranch        *b_A1;   //!
   TBranch        *b_A2;   //!
   TBranch        *b_A3;   //!
   TBranch        *b_A4;   //!
   TBranch        *b_A5;   //!
   TBranch        *b_B1;   //!
   TBranch        *b_B2;   //!
   TBranch        *b_B3;   //!
   TBranch        *b_B4;   //!
   TBranch        *b_B5;   //!
   TBranch        *b_C1;   //!
   TBranch        *b_C2;   //!
   TBranch        *b_C3;   //!
   TBranch        *b_C4;   //!
   TBranch        *b_C5;   //!
   TBranch        *b_D1;   //!
   TBranch        *b_D2;   //!
   TBranch        *b_D3;   //!
   TBranch        *b_D4;   //!
   TBranch        *b_D5;   //!
   TBranch        *b_E1;   //!
   TBranch        *b_E2;   //!
   TBranch        *b_E3;   //!
   TBranch        *b_E4;   //!
   TBranch        *b_E5;   //!
   TBranch        *b_MCP1;   //!
   TBranch        *b_MCP2;   //!
   TBranch        *b_CLK;   //!
   TBranch        *b_CFD;   //!
   TBranch        *b_LED;   //!
   TBranch        *b_index;   //!
   TBranch        *b_n_channels;   //!
   TBranch        *b_n_timetypes;   //!
   TBranch        *b_gain;   //!
   TBranch        *b_pedestal;   //!
   TBranch        *b_b_charge;   //!
   TBranch        *b_b_slope;   //!
   TBranch        *b_b_rms;   //!
   TBranch        *b_time;   //!
   TBranch        *b_time_chi2;   //!
   TBranch        *b_time_error;   //!
   TBranch        *b_time_slope;   //!
   TBranch        *b_period;   //!
   TBranch        *b_maximum;   //!
   TBranch        *b_time_maximum;   //!
   TBranch        *b_amp_max;   //!
   TBranch        *b_time_max;   //!
   TBranch        *b_chi2_max;   //!
   TBranch        *b_charge_tot;   //!
   TBranch        *b_charge_sig;   //!
   TBranch        *b_fit_ampl;   //!
   TBranch        *b_fit_time;   //!
   TBranch        *b_fit_terr;   //!
   TBranch        *b_fit_chi2;   //!
   TBranch        *b_fit_period;   //!
   TBranch        *b_fit_ampl_scint;   //!
   TBranch        *b_fit_time_scint;   //!
   TBranch        *b_fit_ampl_spike;   //!
   TBranch        *b_fit_time_spike;   //!
   TBranch        *b_fit_chi2_scint_plus_spike;   //!
   TBranch        *b_fit_converged_scint_plus_spike;   //!
   TBranch        *b_ampl_calib;   //!
   TBranch        *b_time_calib;   //!

   Analyse(TTree *tree=0);
   virtual ~Analyse();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Analyse_cxx
Analyse::Analyse(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("1.root");
      }
      f->GetObject("digi",tree);

   }
   Init(tree);
}

Analyse::~Analyse()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Analyse::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Analyse::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Analyse::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("A1", &A1, &b_A1);
   fChain->SetBranchAddress("A2", &A2, &b_A2);
   fChain->SetBranchAddress("A3", &A3, &b_A3);
   fChain->SetBranchAddress("A4", &A4, &b_A4);
   fChain->SetBranchAddress("A5", &A5, &b_A5);
   fChain->SetBranchAddress("B1", &B1, &b_B1);
   fChain->SetBranchAddress("B2", &B2, &b_B2);
   fChain->SetBranchAddress("B3", &B3, &b_B3);
   fChain->SetBranchAddress("B4", &B4, &b_B4);
   fChain->SetBranchAddress("B5", &B5, &b_B5);
   fChain->SetBranchAddress("C1", &C1, &b_C1);
   fChain->SetBranchAddress("C2", &C2, &b_C2);
   fChain->SetBranchAddress("C3", &C3, &b_C3);
   fChain->SetBranchAddress("C4", &C4, &b_C4);
   fChain->SetBranchAddress("C5", &C5, &b_C5);
   fChain->SetBranchAddress("D1", &D1, &b_D1);
   fChain->SetBranchAddress("D2", &D2, &b_D2);
   fChain->SetBranchAddress("D3", &D3, &b_D3);
   fChain->SetBranchAddress("D4", &D4, &b_D4);
   fChain->SetBranchAddress("D5", &D5, &b_D5);
   fChain->SetBranchAddress("E1", &E1, &b_E1);
   fChain->SetBranchAddress("E2", &E2, &b_E2);
   fChain->SetBranchAddress("E3", &E3, &b_E3);
   fChain->SetBranchAddress("E4", &E4, &b_E4);
   fChain->SetBranchAddress("E5", &E5, &b_E5);
   fChain->SetBranchAddress("MCP1", &MCP1, &b_MCP1);
   fChain->SetBranchAddress("MCP2", &MCP2, &b_MCP2);
   fChain->SetBranchAddress("CLK", &CLK, &b_CLK);
   fChain->SetBranchAddress("CFD", &CFD, &b_CFD);
   fChain->SetBranchAddress("LED", &LED, &b_LED);
   fChain->SetBranchAddress("index", &index, &b_index);
   fChain->SetBranchAddress("n_channels", &n_channels, &b_n_channels);
   fChain->SetBranchAddress("n_timetypes", &n_timetypes, &b_n_timetypes);
   fChain->SetBranchAddress("gain", gain, &b_gain);
   fChain->SetBranchAddress("pedestal", pedestal, &b_pedestal);
   fChain->SetBranchAddress("b_charge", b_charge, &b_b_charge);
   fChain->SetBranchAddress("b_slope", b_slope, &b_b_slope);
   fChain->SetBranchAddress("b_rms", b_rms, &b_b_rms);
   fChain->SetBranchAddress("time", time, &b_time);
   fChain->SetBranchAddress("time_chi2", time_chi2, &b_time_chi2);
   fChain->SetBranchAddress("time_error", time_error, &b_time_error);
   fChain->SetBranchAddress("time_slope", time_slope, &b_time_slope);
   fChain->SetBranchAddress("period", period, &b_period);
   fChain->SetBranchAddress("maximum", maximum, &b_maximum);
   fChain->SetBranchAddress("time_maximum", time_maximum, &b_time_maximum);
   fChain->SetBranchAddress("amp_max", amp_max, &b_amp_max);
   fChain->SetBranchAddress("time_max", time_max, &b_time_max);
   fChain->SetBranchAddress("chi2_max", chi2_max, &b_chi2_max);
   fChain->SetBranchAddress("charge_tot", charge_tot, &b_charge_tot);
   fChain->SetBranchAddress("charge_sig", charge_sig, &b_charge_sig);
   fChain->SetBranchAddress("fit_ampl", fit_ampl, &b_fit_ampl);
   fChain->SetBranchAddress("fit_time", fit_time, &b_fit_time);
   fChain->SetBranchAddress("fit_terr", fit_terr, &b_fit_terr);
   fChain->SetBranchAddress("fit_chi2", fit_chi2, &b_fit_chi2);
   fChain->SetBranchAddress("fit_period", fit_period, &b_fit_period);
   fChain->SetBranchAddress("fit_ampl_scint", fit_ampl_scint, &b_fit_ampl_scint);
   fChain->SetBranchAddress("fit_time_scint", fit_time_scint, &b_fit_time_scint);
   fChain->SetBranchAddress("fit_ampl_spike", fit_ampl_spike, &b_fit_ampl_spike);
   fChain->SetBranchAddress("fit_time_spike", fit_time_spike, &b_fit_time_spike);
   fChain->SetBranchAddress("fit_chi2_scint_plus_spike", fit_chi2_scint_plus_spike, &b_fit_chi2_scint_plus_spike);
   fChain->SetBranchAddress("fit_converged_scint_plus_spike", fit_converged_scint_plus_spike, &b_fit_converged_scint_plus_spike);
   fChain->SetBranchAddress("ampl_calib", ampl_calib, &b_ampl_calib);
   fChain->SetBranchAddress("time_calib", time_calib, &b_time_calib);
   Notify();
}

Bool_t Analyse::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Analyse::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Analyse::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Analyse_cxx
