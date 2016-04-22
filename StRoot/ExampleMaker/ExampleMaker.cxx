#include "ExampleMaker.h"

ClassImp(ExampleMaker)

ExampleMaker::ExampleMaker() : StMaker("ExampleMaker") {

}

Int_t ExampleMaker::Init() {
    return StMaker::Init();
}

Int_t ExampleMaker::Make() {
    return kStOK;
}

Int_t ExampleMaker::Finish() {
    return kStOK;
}

void ExampleMaker::Clear(Option_t* option) {
	StMaker::Clear(option);
}

