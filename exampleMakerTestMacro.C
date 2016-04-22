exampleMakerTestMacro()
{

	gROOT->LoadMacro("$STAR/StRoot/StMuDSTMaker/COMMON/macros/loadSharedLibraries.C");
	loadSharedLibraries();
	gSystem->Load("ExampleMaker");

    ExampleMaker* exMaker = new ExampleMaker();

    Int_t par1 = 5;
    Int_t par2 = 314;
    cout << TString::Format("Setting parameter 1 to %d\n", par1);
    exMaker->SetParameter1( par1 );
    cout << TString::Format("Setting parameter 2 to %d\n", par2);
    exMaker->SetParameter2( par2 );

    cout << TString::Format("Return parameter 1: %d\n", exMaker->Parameter1());
    cout << TString::Format("Return parameter 2: %d\n", exMaker->Parameter2());
}
