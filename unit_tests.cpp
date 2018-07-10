#include<string>
#include<iostream>
#include "assessment.h"
#include "subject.h"
using namespace std;

int main(){
	
	Subject subject1("Object Oriented Programming");
	cout<<subject1.get_name()<<endl;
	subject1.new_assessment("Taxi app", 12);
	cout<<subject1.get_assessment_name(0)<<endl;
	
	Assessment item1;
	item1.set_name("Assignment 1");
	item1.set_weight(12.5);
	item1.set_score(75);
	cout<<item1.get_name()<<endl;
	cout<<item1.get_weight()<<endl;	
	cout<<item1.get_score()<<endl;
	cout<<item1.get_grade_contribution()<<endl;	
	
	Assessment item2("Assignment 2",20.0);
	item2.set_score(80);
	cout<<item2.get_name()<<endl;
	cout<<item2.get_weight()<<endl;	
	cout<<item2.get_score()<<endl;		
	cout<<item2.get_grade_contribution()<<endl;	
	
}
