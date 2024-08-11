AIM :- <br>
To study and implement operators in cpp <br>

Theory :-<br>
Operators are symbols in C++ that manipulate variables and values.<br> Boolean expressions are evaluated by logical operators ({&&}, {||}, {!}) which return true or false. <br> In addition to producing boolean results, relational operators ({=={, {!=}, {{, {>}, {=}, {>=}) compare two values.<br> Basic mathematical operations are carried out using arithmetic operators ({+}, {-}, {*}, {/}, {%}). For conditional statements to maintain control flow, logical operators are essential. <br> In decision-making structures, comparison of values requires the use of relational operators. The foundation of computations are arithmetic operators. <br> Combining these operators allows for the creation of sophisticated expressions and control structures, which makes C++ an effective language for a wide range of programming jobs, from simple arithmetic computations to complex logical comparisons and conditions.<br>

Code :-<br>
```
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
```
conclusion : - in this experiment we learnt to use the basic operators like arithematic, functional and logical. <br>
