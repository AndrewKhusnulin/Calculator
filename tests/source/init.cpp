#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 10.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float a = 9.0;
    float b = 1;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 8.0 );
}
SCENARIO("calculator mult", "[mult]") {
    float a = 9.0;
    float b = 1.0;   
    double rv = mult( a, b );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator div", "[div]") {
    float a = 9.0;
    float b = 1;
    
    double rv = *div( a, b );
    
	REQUIRE( rv == 9);
}
SCENARIO("calculator pow", "[pow]") {
    float a = 2.0;
    double rv = pow( a );    
	REQUIRE( rv == 16 );
}
SCENARIO("calculator sqrt1", "[sqrt1]") {
    double a = 0.0;    
    double rv = *sqrt1(a);    
	REQUIRE( rv == 0.0);
}
SCENARIO("calculator sqrt1.1", "[sqrt1]") {
    double a = -3;
    long double *rv = sqrt1(a);
	REQUIRE( rv == nullptr );
    delete rv;
}
SCENARIO("Calculator div.1", "[div]") {
    float a = 8;
    float b = 0;	
    double *rv = div( a, b );
	REQUIRE( rv == nullptr );
    delete rv;
}
