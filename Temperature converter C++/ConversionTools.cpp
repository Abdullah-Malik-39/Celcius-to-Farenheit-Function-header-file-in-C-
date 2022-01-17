#include<iostream>
#include "temperature.h"
using namespace std;
int main()
{
    float F=0,C=0;
    cout<<"  Conversion App!  "<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Conversion F to C\n";
    cout<<"Enter degrees F : ";
    cin>>F;
    C = ftoc(F);
    cout<<"C = "<<C<<endl<<endl;
    cout<<"Conversion C to F\n";
    cout<<"Enter degrees C : ";
    cin>>C;
    F = ctof(C);
    cout<<"F = "<<F<<endl;
    return 0;
}