#include "assessment.h"

Assessment::Assessment(){
	set_name("no name");
	set_weight(0.0);
}

Assessment::Assessment(double input_weight){
	set_name("no name");
	set_weight(input_weight);	
}

Assessment::Assessment(string input_name){
	set_name(input_name);
	set_weight(0.0);
}

Assessment::Assessment(string input_name, double input_weight){
	set_name(input_name);
	set_weight(input_weight);
}

void Assessment::set_name(string input_name){
	assessment_name=input_name;
}

void Assessment::set_weight(double input_weight){
	weighting=input_weight;
}

void Assessment::set_score(double input_score){
	score_percent=input_score;
}


string Assessment::get_name(){
	return assessment_name;
}

double Assessment::get_weight(){
	return weighting;
}

double Assessment::get_score(){
	return score_percent;
}

double Assessment::get_grade_contribution(){
	double grade_contribution = 0;
	grade_contribution = score_percent * weighting/100.00;
	return grade_contribution;
}

/*

methods to be implemented


		//returns grade contribution (weighting * score)
		double get_grade_contribution();
		
*/