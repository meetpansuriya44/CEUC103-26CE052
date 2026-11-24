#include<iostream>
using namespace std;

// Structure For Product Information
struct ProductA
{
    int id;
    char name;
    float price;
};

struct ProductB
{
    float price;
    int id;
    char name;
};

// Union Demonstration
union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    // Structure Size Analysis
    ProductA p1;
    ProductB p2;
    cout<<"=====COMPOSITE DATA REPRESENTATION ANALYZER====="<<endl;
    cout<<"\n=====STRUCTURE ANALYSIS====="<<endl;
    cout<<"Size Of int="<<sizeof(int)<<" Bytes"<<endl;
    cout<<"Size Of char="<<sizeof(char)<<" Bytes"<<endl;
    cout<<"Size Of float="<<sizeof(float)<<" Bytes"<<endl;
    cout<<"Total Size Of ProductA="<<sizeof(p1)<<" Bytes"<<endl;
    cout<<"Total Size Of ProductB="<<sizeof(p2)<<" Bytes"<<endl;
    cout<<"\nPadding And Alignment Observed"<<endl;

    if(sizeof(p1)>sizeof(p2))
    {
        cout<<"ProductB Uses Memory More Efficiently"<<endl;
    }
    else if(sizeof(p1)<sizeof(p2))
    {
        cout<<"ProductA Uses Memory More Efficiently"<<endl;
    }
    else
    {
        cout<<"Both Structures Use Same Memory"<<endl;
    }

    // Union Demonstration
    Data d;
    cout<<"\n=====UNION ANALYSIS====="<<endl;
    d.i=120;
    cout<<"Integer Value="<<d.i<<endl;
    d.f=120.5;
    cout<<"Floating Value="<<d.f<<endl;
    d.c='X';
    cout<<"Character Value="<<d.c<<endl;
    cout<<"\nUpdating One Member Changes Other Members"<<endl;

    // Trade-Off Analysis
    cout<<"\n=====STRUCTURE VS UNION====="<<endl;
    cout<<"Structure:"<<endl;
    cout<<"Separate Memory For Every Member"<<endl;
    cout<<"Stores All Values Simultaneously"<<endl;
    cout<<"\nUnion:"<<endl;
    cout<<"Shared Memory For All Members"<<endl;
    cout<<"Stores One Value At A Time"<<endl;

    return 0;
}
