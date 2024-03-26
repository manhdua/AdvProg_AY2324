#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
int giaiThua(int n){
    if (n == 0 || n == 1) return 1;
    return n * giaiThua(n-1);
}

double myCos(double x) 
{
    double sign = -1;
    double result = 1;
    for (int i = 2; i <= 30; i += 2)
    {
        result += sign * (1 / giaiThua(i)) * pow(x, i);
        sign *= -1;
    }
    return result;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
    double sign = -1;
    double result = x;
    for (int i = 3; i <= 31; i += 2)
    {
        result += sign * (1 / giaiThua(i)) * pow(x, i);
        sign *= -1;
    }
    return result;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }

    
    return sqrt(x);
}