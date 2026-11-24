#include<iostream>
using namespace std;

int main()
{
    // Declare Variables Of Different Data Types
    int num=25,i;
    char ch='A';
    float marks=85.60;

    // Declare Address Variables
    int *pnum=&num;
    char *pch=&ch;
    float *pmarks=&marks;

    // Declare Array
    int arr[5]={10,20,30,40,50};

    cout<<"=====MEMORY ADDRESS EXPLORER====="<<endl;

    // Display Variable Information
    cout<<"\nInteger Value="<<num<<endl;
    cout<<"Memory Address="<<&num<<endl;
    cout<<"\nCharacter Value="<<ch<<endl;
    cout<<"Memory Address="<<(void*)&ch<<endl;
    cout<<"\nFloating Value="<<marks<<endl;
    cout<<"Memory Address="<<&marks<<endl;

    // Indirect Referencing
    cout<<"\nIndirect Referencing"<<endl;
    cout<<"Stored Value="<<*pnum<<endl;
    *pnum=30;
    cout<<"Modified Value="<<*pnum<<endl;
    cout<<"Updated Original Value="<<num<<endl;

    // Display Array Using Index
    cout<<"\nArray Using Index"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    // Display Array Using Address-Based Access
    cout<<"\n\nArray Using Address-Based Access"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*(arr+i)<<" ";
    }

    // Observation
    cout<<"\n\nObservation"<<endl;
    cout<<"Both Approaches Access Same Values"<<endl;

    return 0;
}
