// template function

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T maxof(const T& a, const T& b) {
    return (a > b ? a : b);
}

// This is for the argument deduction example
template <typename T>
void printv(const vector<T>& v) {
    if (v.empty()) return;
    for (const T& i : v) cout << i << " ";
    cout << endl;
}
// This is for the argument deduction example


int main() {
    int a = 7;
    int b = 9;

    // maxof function of type int is generated at the compile time
    cout << "max is " << maxof<int>(a, b) << endl;
    cout << "max is " << maxof<short int>(a, b) << endl;
    cout << "max is " << maxof<long int>(a, b) << endl;


    // This is for the argument deduction example
    vector<int> v1 = { 1,2,3,4,5 };
    vector<string>v2 = { "one","two","three","four","five" };
    printv<int>(v1);
    printv<string>(v2);
}