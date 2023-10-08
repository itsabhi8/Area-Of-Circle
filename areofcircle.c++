#include<iostream>
using namespace std;
int main(){
    const float pi =3.14;
    float radius;
    cout<<"enter the radius of the circle : "<<endl;
    cin>>radius;

    float area = pi * radius * radius;
    cout<<"the area of the circle is : "<<area<<"cm square"<<endl;
    return 0;

}