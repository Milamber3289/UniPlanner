#ifndef Subject_H
#define Subject_H
#include<string>
#include<vector>
#include "assessment.h"
using namespace std;

class Subject{
	public:
		//default constructor
		Subject();
		
		//default deconstructor
		~Subject();

		//constructor setting intial value for subject_name
		Subject(string);
		
		//setter for subject name
		void set_name(string);
		
		//returns subject name
		string get_name();

		//add a new assessment item to the subject
		void new_assessment(string, double);
		
		//returns name for nth assessment item where n=0 is the first assessment item
		string get_assessment_name(int);
		
	private:
		
		//name to help user differentiate between subject items
		string subject_name;
		
		//vector of pointers to assessment items
		vector<Assessment*> assessment_items;
	
};
#endif
