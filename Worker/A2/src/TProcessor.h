#ifndef __TProcessor_h__
#define __TProcessor_h__

#include "TROOT.h"
#include "TSystem.h"
#include "TNamed.h"

//---------------------------------------------------------------------------

class TProcessor : public TNamed
{
 protected:
  Int_t Number;
  Bool_t Running;
  Char_t Macro[256];
 public:
  TProcessor();
  TProcessor(const Char_t*);
  virtual ~TProcessor();
  Bool_t GetRunning() { return Running; }
  void SetRunning(Bool_t Run) { Running = Run; }
  void SetNumber(Int_t Num){ Number = Num; }
  void SetMacro(Char_t* Mac){ strcpy(Macro, Mac); }
  void Run();

  ClassDef(TProcessor, 1)
};

//---------------------------------------------------------------------------

#endif
