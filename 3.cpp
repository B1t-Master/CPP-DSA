// Using functions, write a program to compute the area and perimeter of a square.
// The program should ask the user to enter a number corresponding to the side length
// of the square and display the area and perimeter of the square

#include <iostream>
using namespace std;

int getSideLength(){
    int sideLength;
    cout << "Enter the side length of the square: " <<endl;
    cin >> sideLength;
    return sideLength;
}

void calculatePerimeter(int sideLength){
    int perimeter=sideLength*4;
    cout<<"The perimeter is: "<< perimeter<< endl;
}

void calculateArea(int sideLength){
    int area=sideLength*sideLength;
    cout<<"The area is: "<< area<<endl;
}

int main(){
    int sideLength = getSideLength();
    calculateArea(sideLength);
    calculatePerimeter(sideLength);
    return 0;
}

