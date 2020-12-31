#include "ActionCheckValidity.h"




ActionCheckValidity::ActionCheckValidity(Registrar* pReg) :Action(pReg) {};
bool ActionCheckValidity::Execute() {

	const int difHeight = 15; //this is the difference between strings in window 

	StudyPlan* pS = pReg->getStudyPlay();
	Warnings plan = pS->getWarnings();

	 int  x = 0;
	 int y = 0;
	 // Draw strings in check report
	for (auto index = 0; index < plan.moderate.size(); index++) {
		GUI* pG = pReg->getGUI();
		pG->DrawStringModereta(plan.moderate[index], x, y + difHeight);
		y += 5;
	}
	//////// Save strings in a file 
	fstream writein("D:\\CIE-year 2\\CIE 202 _C++\\ProjectFiles\\CheckReport.txt", ios::app);
	for (int i = 0; i < plan.moderate.size(); i++) {
		writein << plan.moderate[i]<<"\n";
		
	}
	
}