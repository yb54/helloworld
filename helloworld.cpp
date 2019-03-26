#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::cin;    

//typedef bitset<8> BYTE;

bool checkUserAge(int age) 
{
    return age>= 18 ? true : false;
}

void drawChar(char ch = ('#')) {

    for (int i=1; i<=5; i++) {
        for (int j=1; j<= 6-i; j++){
            cout << ch;
        }
        
        cout << "\n";    
    }
}

int main (int argc, char *argv[]) {

   
    // print message to console
    
    cout << "Hello World\n";

    const float myfloat = 20.25f;
    cout << myfloat << endl <<endl;

    // Check user age
    int age = 0;
    cout << "Enter you age\n";    
    cin >> age;

    if (checkUserAge(age) == true)
    {
        cout << "Welcome\n";
        drawChar('$');
    }
    else
    {
        cout << "GoodBye\n";
        drawChar();                
    }
  
    return 0;

}
