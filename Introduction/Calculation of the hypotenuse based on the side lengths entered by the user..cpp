/*
Atuhor: tunagrskn
Program: A program that calculates the hypotenuse
according to the two side lengths entered
by the user. The cmtah library was used for
rooting.
*/
#include <iostream>
#include <math.h>
using namespace std

    int main()
{
int a,b;
cout<<"a kenar�n� giriniz: "<<endl;
cin>>a;
cout<<"b kenar�n� giriniz: "<<endl;
cin>>b;

float c = sqrt((a*a)+(b*b));
cout<<"Hipoten�s�n uzunulu�u: "<<c<<endl;

return 0;
}

