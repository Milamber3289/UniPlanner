#include<string>
#include<iostream>
#include "assessment.h"
#include "subject.h"
using namespace std;

int main(){
	
	Subject subject1("Object Oriented Programming");
	cout<<subject1.get_name()<<endl;
	cout<<endl;
	subject1.new_assessment("Taxi app", 30);
	subject1.get_assessment(0)->set_score(75.5);
	cout<<"Name:"<<subject1.get_assessment(0)->get_name()<<endl;
	cout<<"Weight:"<<subject1.get_assessment(0)->get_weight()<<endl;
	cout<<"Score:"<<subject1.get_assessment(0)->get_score()<<endl;
	cout<<endl;
	
	subject1.new_assessment("Roman Numerals", 20);
	subject1.get_assessment(1)->set_score(80);
	cout<<"Name:"<<subject1.get_assessment(1)->get_name()<<endl;
	cout<<"Weight:"<<subject1.get_assessment(1)->get_weight()<<endl;
	cout<<"Score:"<<subject1.get_assessment(1)->get_score()<<endl;
	cout<<endl;
	
	subject1.new_assessment("Grade Tracker", 50);
	cout<<"Name:"<<subject1.get_assessment(2)->get_name()<<endl;
	cout<<"Weight:"<<subject1.get_assessment(2)->get_weight()<<endl;
	cout<<"Score:"<<subject1.get_assessment(2)->get_score()<<endl;
	cout<<endl;

	cout<<"Total Weight:"<<subject1.total_weight()<<endl;
	cout<<"Current GPA:"<<subject1.Mark()<<endl;
	cout<<"Forecast GPA:"<<subject1.Mark_predict()<<endl;

	cout<<"-----------------------------------------------------------------------------------"<<endl<<endl;
	
	Subject subject2("Business Analysis");
	cout<<subject2.get_name()<<endl;
	cout<<endl;
	subject2.new_assessment("Quiz", 10);
	subject2.get_assessment(0)->set_score(100);
	cout<<"Name:"<<subject2.get_assessment(0)->get_name()<<endl;
	cout<<"Weight:"<<subject2.get_assessment(0)->get_weight()<<endl;
	cout<<"Score:"<<subject2.get_assessment(0)->get_score()<<endl;
	cout<<endl;
	
	subject2.new_assessment("Racist cliche case study", 30);
	subject2.get_assessment(1)->set_score(90);
	cout<<"Name:"<<subject2.get_assessment(1)->get_name()<<endl;
	cout<<"Weight:"<<subject2.get_assessment(1)->get_weight()<<endl;
	cout<<"Score:"<<subject2.get_assessment(1)->get_score()<<endl;
	cout<<endl;
	
	subject2.new_assessment("Racist cliche case study 2", 30);
	subject2.get_assessment(1)->set_score(80);	
	cout<<"Name:"<<subject2.get_assessment(2)->get_name()<<endl;
	cout<<"Weight:"<<subject2.get_assessment(2)->get_weight()<<endl;
	cout<<"Score:"<<subject2.get_assessment(2)->get_score()<<endl;
	cout<<endl;
	
	subject2.new_assessment("Exam", 30);
	cout<<"Name:"<<subject2.get_assessment(3)->get_name()<<endl;
	cout<<"Weight:"<<subject2.get_assessment(3)->get_weight()<<endl;
	cout<<"Score:"<<subject2.get_assessment(3)->get_score()<<endl;
	cout<<endl;

	cout<<"Total Weight:"<<subject2.total_weight()<<endl;
	cout<<"Current Mark:"<<subject2.Mark()<<endl;
	cout<<"Forecast Mark:"<<subject2.Mark_predict()<<endl;		

	
}
