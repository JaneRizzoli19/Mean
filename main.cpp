#include <iostream>
#include <vector>

using namespace std;

// Program which takes number of values and a sequence from the user and returns the mean
/*
Eg of sample input:
3 1.1 2.2 3.3
The output for the above will be:
2.2 
*/
// n is the number of values in the sequence and sequence is the vector containing the values

double findMean(vector<double> v) {
	double sum = 0.0;
	for (int i = 0; i < v.size() ; i++) {
		sum += v.at(i);
	}
	return sum/int(v.size());
}

int main() {

	int n = 0;
	cin >> n;
	
	vector<double> sequence;
	double number = 0.0; 

	int i = 0;
	while(i!=n) {
		cin >> number;
		sequence.push_back(number);
		i++;
	}
	
	cout << findMean(sequence); 
}
