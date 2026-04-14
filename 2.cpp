// Write a program that asks a user to input the radius 
// calculates the volume of a sphere (the formula for the volume is (4/3) πr3). 
// Use the inbuilt exponential function in C++ to compute (r3).

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    double radius;
    cout << "Calculate volume of a sphere"<<endl;
    cout << "radius? ";
    cin >> radius;

    double volume = pow(radius,3) * 4.0/3.0 * M_PI;
    cout << "Volume of sphere: "<< volume;
    return 0;
}