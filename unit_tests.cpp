#include<string>
#include<iostream>
#include "assessment.h"

int main(){
	
	assessment item1;
	item1.set_name("Assignment 1");
	item1.set_weight(12.5);
	cout<<item1.get_name()<<endl;
	cout<<item1.get_weight()<<endl;	
	
	assessment item2("Assignment 2",20.0);
	cout<<item2.get_name()<<endl;
	cout<<item2.get_weight()<<endl;	
	
	
}

using namespace std;