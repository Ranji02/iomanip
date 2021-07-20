#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    float f;
    double d;
    cout <<"Enter the value of \"f\" and \"d\":"<<endl;
    cin>>f>>d;
    cout <<"Value of f is "<<f<<endl;
    cout<<"Value of d is "<<d<<endl;
    cout <<"After using Set Precision :\n";
    cout<<fixed<<setprecision(3)<<"Value of f is "<<f<<"\n"<<setprecision(6)<<"Value of d is "<<d<<endl; 
    return 0;
}