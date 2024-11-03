#include <iostream>
#include <typeinfo>

using namespace std;


// overloading
//int add(int a, int b) {
//	cout << "++++++ " << endl;
//	return (a + b);
//}
//
//float add(float a, float b) {
//	return (a + b);
//}


template <typename t>
t add(t a, t b) {
	cout << typeid(t).name() << endl;
	return (a + b);
}



int main()
{
	cout << add(4, 7) << endl;
	float a = 4.4;
	float b = 8.4;
	cout << add(a, b) << endl;

	cout << add(1.2342342342342344, 5.3453453454353453453) << endl;

}
