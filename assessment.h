#ifndef Assessment_H
#define Assessment_H
#include<string>
using namespace std;

class Assessment{
	public:
		//default constructor
		Assessment();

		//constructor setting intial value for assessment_name
		Assessment(string);
		
		//constructor setting intial value for assessment weighting
		Assessment(double);
		
		//constructor setting name and intial value for assessment weighting
		Assessment(string, double);
		
		//setter for assessment name
		void set_name(string);
		
		//setter for assessment weighting
		void set_weight(double);
		
		//setter for assessment weighting
		void set_score(double);
		
		//returns assessment name
		string get_name();
		
		//returns assessment weighting
		double get_weight();
		
		//returns score
		double get_score();

		//returns grade contribution (score*weighting/100.00)
		double get_grade_contribution();
		
	private:
		
		//name to help user differentiate between assessment items
		string assessment_name;
		
		//weighting of the assignment relative to others in the course (all weightings should total 100
		double weighting;
		
		//score on assessment item
		double score_percent;
	
};
#endif
