/* The following is pseudocode for a program being designed. Write the C++ program
equivalent of the same.

 BEGIN
  SET x TO 0, y TO 20
  REPEAT
      SUBTRACT 4 FROM y
     ADD 2/y TO x
  UNTIL
      y IS LESS THAN 6
  DISPLAY x
END
*/

using namespace std;
#include <iostream>

int main(){
    float x = 0;
    float y = 20;

    while (y>5){
        x=x+2/y;
        y--;
    }

    cout<<x;
    return 0;

}