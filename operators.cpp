// Divyansh Rastogi
// 23070123048

#include <iostream>
#include<string>
using namespace std;
int main() {
    int a,b,w,x,y,z,r;
    cout<< "enter the first no :";
    cin >> a;
    cout << "\n enter the second no.:";
    cin >> b;
    w = a+b;
    cout << "\naddition is :" << w;
    x = a-b;
    cout << "\nsubtraction is :" << x;
    y = a*b;
    cout << "\nmultiplication is :" << y;
    z = a/b;
    cout << "\ndivision is :" << z;
    r = a%b;
    cout << "\nmodule is :" << r;

    return 0;
}
/* OUTPUT :-
enter the first no :55

enter the second no.:5

addition is :60
subtraction is :50
multiplication is :275
division is :11
module is :0*/
