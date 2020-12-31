#pragma once
#include "GUI\GUI.h"
#include "Actions\Action.h"
#include "Rules.h"
#include "StudyPlan/StudyPlan.h"
#include <iostream>
#include<sstream>
using namespace std;


//The maestro class for the application

class Registrar
{
	GUI *pGUI;	//pointer to GUI 
	Rules RegRules;	//Registration rules
	StudyPlan *pSPlan;
	

public:
	Registrar();
	GUI* getGUI() const;
	StudyPlan* getSPlan() const;// function that return pointer on studyplan
	Action* CreateRequiredAction();
	bool ExecuteAction(Action*);
	void UpdateInterface();
	StudyPlan* getStudyPlay() const;
	void LoadCatalog();
	vector<CourseInfo> getCourseCatalog();
	CourseInfo getCourseInfo(string code);
	void Run();

	~Registrar();
};

