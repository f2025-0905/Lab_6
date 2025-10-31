#include <iostream>
using namespace std;

int main() {
    
    
    
    while (true){
        int num;
        cout << "Enter a number: ";
        cin >> num;
    
        int i = 1; 
        int qoutient = 1;
        
        while (i <= num/2) {
           if (num%i == 0){
           qoutient++;
           }
        i++;
        } 
    
    
       if (qoutient <= 2){
             cout << num << " is a prime number.\n";
        } else {
             cout << num << " is a composite number.\n";
            }
    }
    

    return 0;
}