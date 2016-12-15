#include <iostream>

#include "calculator.hpp"
using namespace std;

int main()
{
    float a, b;
    cin >> a;
    cin >> b;
    
    cout << sum( a, b ) << endl;
    cout << sub( a, b ) << endl;
    cout << mult( a, b ) << endl;
    double *rez = div(a, b);
	if (rez) cout << *rez << endl;
	else cout << "Cant divide by zero" << endl; 
	delete rez;
    cout << pow( a ) << endl;
     long double *f = sqrt1(a);
        if (f) cout << "Корень: " << *f << endl;
        else cout << "Из отрицательного числа корень выделить нельзя." << endl;
        cout << pow1(a, b) << endl;
        delete f; 
    return 0;
}
