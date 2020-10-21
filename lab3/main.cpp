#include <iostream>
#include <basicMath.h>

using namespace std;

int main(){
    float a;
    float b;
    float res;
    int choice;
    cout << "Enter 2 numbers, then choose an operation" << "\n";

    cout << "First number: "; cin >> a;
    cout << "Second number: "; cin >> b;
    cout << "Option: 1 - add; \n 2 - sub; \n 3 - mul; \n 4 - div: "; cin >> choice;

    switch(choice){
        case 1:
            res = sum(a,b);
            cout <<  res;
            break;
        case 2:
            res = sub(a,b);
            cout << res;
            break;
        case 3:
            res = mul(a,b);
            cout << res;
            break;
        case 4:
            res = div(a,b);
            cout << res;
            break;
        
        default:
            cout << "Try again" << "\n";
            break;

    }

    return 0;
}