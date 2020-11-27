#include "ActionAddNotes.h"
#include"Registrar.h"
#include"GUI/GUI.h"
#include "GUI/Drawable.h"
#include<iostream>
#include<fstream>
using namespace std;
ActionAddNotes::ActionAddNotes(Registrar* p) :Action(p) 
{
}
bool ActionAddNotes::Execute() {
	fstream outFile("D:\\Notes.txt",ios::app);
	GUI* pGUI = pReg->getGUI();
	if (outFile.is_open()) {
		pGUI->PrintMsg("Write Notes:");
		string notes = pGUI->GetSrting();
		outFile << "This is my notes:\n";
		outFile <<notes<<"\n";
		
	}
	
	outFile.close();
	return true;
}
ActionAddNotes::~ActionAddNotes() {};
