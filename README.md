AIM :- <br>
To study and implement operators in cpp <br>

Theory :-<br>
Operators are symbols in C++ that manipulate variables and values.<br> Boolean expressions are evaluated by logical operators ({&&}, {||}, {!}) which return true or false. <br> In addition to producing boolean results, relational operators ({=={, {!=}, {{, {>}, {=}, {>=}) compare two values.<br> Basic mathematical operations are carried out using arithmetic operators ({+}, {-}, {*}, {/}, {%}). For conditional statements to maintain control flow, logical operators are essential. <br> In decision-making structures, comparison of values requires the use of relational operators. The foundation of computations are arithmetic operators. <br> Combining these operators allows for the creation of sophisticated expressions and control structures, which makes C++ an effective language for a wide range of programming jobs, from simple arithmetic computations to complex logical comparisons and conditions.<br>

Code :-<br>
```
#include <iostream>
using namespace std;

int main() {
    int a,b,x,y,z,w,r;
    cout << "enter the number:";
    cin >> a >> b;
    x = a|b;
    cout << "\nans is :" << x;
    y = a^b;
    cout << "\nans is :" << y;
    z = a&b;
    cout << "\nans is :" << z;
    w = a << 1;
    cout << "\nans is :" << w;
    r = a >> 1;
    cout << "\nans is :" << r;

    return 0;
}
```
conclusion : - in this experiment we learnt to use the basic operators like arithematic, functional and logical. <br>
