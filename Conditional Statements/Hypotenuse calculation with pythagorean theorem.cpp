/*
Author: Tuna Girişken
Program: The Pythagorean theorem states that the sum of the squares of the sides of a right triangle is
equal to the the square of the hypotenuse. For example, if two sides of a right triangle have
lenghts of 3 and 4, then the hypotenuse must have a lenght of 5. Together the integers 3, 4 and
5 form a Pythagorean triple. There are infinete number of such triples. Given two positive
integers, m and n, where m>n, a Pythagorean triple can be generated by the following
formulas:
2 2 side1 = m − n
side2 = 2mn
2 2 hypotenuse = m + n
The triple (side1=3, side2=4, hypotenuse=5) is generated by this formula when m=2 and
n=1. Write a program that takes values for m and n as input and displays the values of the
Pythagorean triple generated by the formulas above..
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b,s1,s2,hp;

    cout<<"Enter first length"<<endl;
    cin>>b;
    cout<<"Enter second length"<<endl;
    cin>>a;

    if(a>b)
    {
        s1 = (a*a) - (b*b);
        s2 = (2*a*b);
        hp = (a*a) + (b*b);
        cout<<"Lengths of triangle: "<<s1<<"\t"<<s2<<"\t"<<endl;
        cout<<"Hypotenue is: "<<hp<<endl;
    }
    else
    {
        cout<<"Your length values are false "<<a<<endl;
    }

    return 0;
}
