// Write a program using functions that determines 
// whether a character input by a user is uppercase or lower case

#include <iostream>
#include <cstdlib>
using namespace std;
int checkCase(char character){
    
    if (character==toupper(character)){
        cout << "character is in upper case"<<endl;
    }

    if (character==tolower(character)){
        cout << "character is in lower case"<<endl;  
    }

    return 0;
}

int main(){
    char character ;
    cout << "Input the character"<<endl;
    cin >> character;
    checkCase(character);
    return 0;
}
