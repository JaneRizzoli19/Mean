#include <iostream>
#include <vector>

using namespace std;

// Program which takes number of values and a sequence from the user and returns the mean
// Eg:3 11.2 1.1 123.2
// n is the number of values in the sequence and sequence is the vector containing the values

double findMean(vector<double> v) {
	double sum{0.0};
	for (int i = 0; i < v.size() ; i++) {
		sum += v.at(i);
	}
	return sum/int(v.size());
}

int main() {

	int n{0};
	cin >> n;
	
	vector<double> sequence;
	double number{0.0}; 

	for (int i = 0; i < n ; i++) {
		cin >> number;
		sequence.push_back(number);
	}
	
	cout << findMean(sequence); 
}