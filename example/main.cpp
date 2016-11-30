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
    cout << pow( a ) << endl;
    cout << sq( a ) << endl;
    
    return 0;
}
