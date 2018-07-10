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
		
		//returns pointer to nth assessment where n=0 is the first assessment item
		Assessment* get_assessment(int);
		
		//returns total weight of all related assessments
		double total_weight();
		
		//returns Mark (%) for subject assuming no further assessment is completed
		double Mark();
		
		//returns predicted Mark (%) for subject assuming current performance continues
		double Mark_predict();
			
	private:
		
		//name to help user differentiate between subject items
		string subject_name;
		
		//vector of pointers to assessment items
		vector<Assessment*> assessment_items;
			
};
#endif
