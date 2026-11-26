#include<iostream>
#include<fstream>
#include<limits.h>
using namespace std;

int g=100;

int main()
{
    int l=200,*p=new int,a,b,x=50,n=INT_MAX,*p1=&x,*p2=&x;
    *p=300;

    cout<<"Global="<<g<<endl;
    cout<<"Local="<<l<<endl;
    cout<<"Dynamic="<<*p<<endl;
    n++;
    cout<<"Overflow="<<n<<endl;

    *p1=75;
    cout<<"Aliasing="<<*p2<<endl;

    cout<<"Enter Dividend:";
    cin>>a;
    cout<<"Enter Divisor:";
    cin>>b;

    if(b==0)
    {
        cout<<"Division By Zero"<<endl;
    }
    else
    {
        cout<<"Result="<<a/b<<endl;
    }
    ifstream f("Test.txt");

    if(!f)
    {
        cout<<"File Not Found"<<endl;
    ]
    delete p;

    return 0;
}
