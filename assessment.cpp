

assessment::assessment{
	set_name("no name");
	set_weight(0.0);

}

assessment::assessment(double input_weight){
	set_name("no name");
	set_weight(input_weight);	
	
}

assessment::assessment(string input_name){
	set_name(input_name);
	set_weight(0.0);
	
}

assessment::assessment(string input_name, double input_weight){
	set_name(input_name);
	set_weight(input_weight);
	
}

void assessment::set_name(string input_name){
	assessment_name=input_name;
	
}

void assessment::set_weight(double input_weight){
	weighting=input_weight;
	
}

string get_name(){
	return assessment_name;
	
}

double get_weight(){
	return weighting;
	
}

/*

methods to be implemented


		//returns grade contribution (weighting * score)
		double get_grade_contribution();
		
	private:
		
		//name to help user differentiate between assessment items
		string assessment_name;
		
		//weighting of the assignment relative to others in the course (all weightings should total 100
		double weighting;
		
		//score on assessment item
		double score_percent;
	
*/