#ifndef Assessment_H
#define Assessment_H
#include<string>
class assessment{
	public:
		//default constructor
		assessment();

		//constructor setting intial value for assessment_name
		assessment(string);
		
		//constructor setting intial value for assessment weighting
		assessment(double);
		
		//constructor setting name and intial value for assessment weighting
		assessment(string, double);
		
		//setter for assessment name
		void set_name(string);
		
		//setter for assessment weighting
		void set_weight(double);
		
		//returns assessment name
		string get_name();
		
		//returns assessment weighting
		double get_weight();
		
		//returns score
		double get_score();

		//returns grade contribution (weighting * score)
		double get_grade_contribution();
		
	private:
		
		//name to help user differentiate between assessment items
		string assessment_name;
		
		//weighting of the assignment relative to others in the course (all weightings should total 100
		double weighting;
		
		//score on assessment item
		double score_percent;
	
}
#endif
