#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <typeinfo>

using namespace std;


template <typename t>
t add(t a, t b) {
	cout << typeid(t).name() << endl;
	return (a + b);
}


template <typename t>
void debug(vector<t> collection) {
	for (auto i : collection) {
		cout << i << endl;
	}
}



int main()
{
	cout << add(4, 7) << endl;

	float a = 4.4;
	float b = 8.4;
	cout << add(a, b) << endl;

	cout << add(1.2342342342342344, 5.3453453454353453453) << endl;


	// fill with 9's
	vector<int> myNumbs(20, 9);

	debug(myNumbs);


	// fill with e's
	vector<char> myChars(30, 'e');
	debug(myChars);


	// fill with true's
	vector<bool> myBools(12, true);
	debug(myBools);





}
