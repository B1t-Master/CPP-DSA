// Use a loop for a user to continually input 5 values to populate an array.
// Calculates and displays the average of the values input into the array.

using namespace std;
#include <iostream>

int main(){
    int i = 0;
    int values[5];
    double sum;
    cout << "Enter 5 numbers to calculate their avaerage"<<endl;
    while (i<6){
        cout<< "Enter the " << i << "th number: " <<endl;
        cin>> values[i];
        sum+=values[i];
        i++;
    }

    cout<< "The average is: "<<sum/5;
    return 0;

}