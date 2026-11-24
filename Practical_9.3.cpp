#include<iostream>
using namespace std;

// Display Stack And Heap Memory Information
void memoryDemo()
{
    int localVar=100;
    int *heapVar=new int;
    *heapVar=250;
    cout<<"\n=====STACK MEMORY====="<<endl;
    cout<<"Value="<<localVar<<endl;
    cout<<"Address="<<&localVar<<endl;
    cout<<"\n=====HEAP MEMORY====="<<endl;
    cout<<"Value="<<*heapVar<<endl;
    cout<<"Address="<<heapVar<<endl;

    delete heapVar;
    heapVar=NULL;
}

// Demonstrate Multi-Level Referencing
void multiLevelReference()
{
    int num=50;
    int *p=&num;
    int **q=&p;
    int ***r=&q;

    cout<<"\n=====MULTI-LEVEL REFERENCING====="<<endl;
    cout<<"Original Value="<<num<<endl;
    cout<<"Single Level Address="<<p<<endl;
    cout<<"Double Level Address="<<q<<endl;
    cout<<"Triple Level Address="<<r<<endl;
    cout<<"Value Through Three Levels="<<***r<<endl;
}

// Demonstrate Memory Safety
void memorySafety()
{
    int *ptr=NULL;
    int *uninitializedPtr;
    cout<<"\n=====MEMORY SAFETY====="<<endl;
    if(ptr==NULL)
    {
        cout<<"Null Reference Safe"<<endl;
    }

    int *dynamicPtr=new int;
    *dynamicPtr=100;
    delete dynamicPtr;
    dynamicPtr=NULL;
    cout<<"Memory Released Successfully"<<endl;

    if(dynamicPtr==NULL)
    {
        cout<<"Reference Invalid"<<endl;
    }
    cout<<"Uninitialized Address Variable"<<endl;
    cout<<"Unsafe To Access"<<endl;
}

int main()
{
    cout<<"=====MEMORY ORGANIZATION ANALYZER====="<<endl;

    // Stack And Heap Memory
    memoryDemo();

    // Multi-Level Referencing
    multiLevelReference();

    // Memory Safety Demonstration
    memorySafety();

    // Observation
    cout<<"\n=====OBSERVATION====="<<endl;
    cout<<"Stack Memory Uses Local Variables"<<endl;
    cout<<"Heap Memory Uses Dynamic Allocation"<<endl;
    cout<<"Multi-Level Referencing Uses Multiple Pointers"<<endl;
    cout<<"Null References Are Safe To Check"<<endl;
    cout<<"Invalid And Uninitialized References Should Not Be Accessed"<<endl;

    return 0;
}
