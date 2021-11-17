// template variables
#include <iostream>
using namespace std;

template<typename T>
T pi = T(3.1415926535897932385L);

template<typename T>
T area_of_circle(const T& r) {
	return r * r * pi<T>;
}



int main() {
	cout.precision(20);
	cout << pi<double>		<< endl;	// could be less accurate depending on the hardware used
	cout << pi<long double> << endl;	// more accurate due to higher capacity of the long double
	cout << pi<long double> << " " << area_of_circle<long double>(3) << endl;

	return 0;
}