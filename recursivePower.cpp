#include <iostream>
using namespace std;

float recursivePower(float, float);
int main(){
	float base, powerRaised, result;
	
	cout << "Please enter the base number: ";
	cin >> base;
	
	cout <<"Please enter the power number (positive integer): ";
	cin >> powerRaised;
	
	result = recursivePower(base, powerRaised);
	cout << base << "^" << powerRaised << " = " << result;
	
	return 0;
}

float recursivePower(float base, float powerRaised){
	if (powerRaised != 0)
		return (base * recursivePower(base, powerRaised - 1));
	else
		return 1;
	}
	
