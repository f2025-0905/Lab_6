#include <iostream>
using namespace std;

int main() {
    string passWord;
    bool isTrue = true;
    
    
    do {
        cout << "Enter Password: ";
        cin >> passWord;
        
        if (passWord == "Python123"){
            isTrue = false;
            cout << "Password is correct\n";
        } else{
            isTrue = true;
            cout << "Password is incorrect\n";
        }
        
    } while (isTrue == true);
   
   
    return 0;
}