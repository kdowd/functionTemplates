#include <iostream>
#include <typeinfo>

using namespace std;


// traditional overloading
int add(int a, int b) {
	cout << "++++++ " << endl;
	return (a + b);
}

float add(float a, float b) {
	return (a + b);
}




int main()
{
	cout << add(4, 7) << endl;
	float a = 4.4;
	float b = 8.4;
	cout << add(a, b) << endl;

	// try a double

}
