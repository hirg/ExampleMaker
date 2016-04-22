#ifndef ExampleMaker_hh
#define ExampleMaker_hh
#include "StMaker.h"

#ifndef St_NO_NAMESPACES
using std::string;
#endif

class ExampleMaker : public StMaker {

public:
  
    ExampleMaker();
    ~ExampleMaker() {;}

    Int_t Init();
    Int_t Make();
    Int_t Finish();
    void Clear(Option_t* option = "");

    Int_t Parameter1();
    Int_t Parameter2();
    void SetParameter1(Int_t);
    void SetParameter2(Int_t);

private:

    Int_t parameter1;
    Int_t parameter2;
  
    ClassDef(ExampleMaker,1)
};

inline Int_t ExampleMaker::Parameter1() { return parameter1; }
inline Int_t ExampleMaker::Parameter2() { return parameter2; }

inline void ExampleMaker::SetParameter1(Int_t par1) { parameter1 = par1; }
inline void ExampleMaker::SetParameter2(Int_t par2) { parameter2 = par2; }

#endif
