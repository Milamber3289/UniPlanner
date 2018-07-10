#include "subject.h"

Subject::Subject(){
	set_name("no name");
}

Subject::~Subject(){
	int assessment_count = assessment_items.size();
	for(int i=0;i<assessment_count;i++){
		delete assessment_items[i];
	}
}

Subject::Subject(string input_name){
	set_name(input_name);
}

void Subject::set_name(string input_name){
	subject_name = input_name;
}

string Subject::get_name(){
	return subject_name;
}

void Subject::new_assessment(string input_name, double input_weight){
	assessment_items.push_back(new Assessment(input_name, input_weight));
}

Assessment* Subject::get_assessment(int assessment_number){
	return assessment_items.at(assessment_number);	
}

double Subject::total_weight(){
	int assessment_count = assessment_items.size();
	double sum = 0;
	for(int i=0;i<assessment_count;i++){
		sum+=assessment_items.at(i)->get_weight();
	}
	return sum;
}

double Subject::Mark(){
	int assessment_count = assessment_items.size();
	double grade_points = 0;
	double total_weight = 0;
	for(int i=0;i<assessment_count;i++){
		grade_points+=(assessment_items.at(i)->get_score()*assessment_items.at(i)->get_weight());
		total_weight+=assessment_items.at(i)->get_weight();
	}
	double Mark = grade_points/total_weight;
	return Mark;
}

double Subject::Mark_predict(){
	int assessment_count = assessment_items.size();
	double grade_points = 0;
	double completed_weight = 0;
	for(int i=0;i<assessment_count;i++){
		if(assessment_items.at(i)->get_complete()){
		grade_points+=(assessment_items.at(i)->get_score()*assessment_items.at(i)->get_weight());
		completed_weight+=assessment_items.at(i)->get_weight();
		}
	}
	double Mark = grade_points/completed_weight;
	return Mark;
}