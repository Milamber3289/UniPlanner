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
	assessment_items.push_back(new Assessment());
	int assessment_count = assessment_items.size();
	assessment_items.at(assessment_count-1)->set_name(input_name);
}

string Subject::get_assessment_name(int assessment_number){
	return assessment_items.at(assessment_number)->get_name();	
}