// Write a program that asks the user for the number of days. The program then prints
// out the number of seconds in the number of days given.

#include <iostream>
using namespace std;

int main(){
    int num_of_days;
    cout << "Calculate the number of seconds in given days"<<endl;
    cout << "How many days? ";
    cin >> num_of_days;

    int seconds= num_of_days*86400;
    cout << "There are: " << seconds << " seconds in " << num_of_days << " days";
    return 0;
}
