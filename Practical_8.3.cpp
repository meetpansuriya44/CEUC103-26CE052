#include<iostream>
using namespace std;

int factCalls=0;
int fibCalls=0;

long long factorialIterative(int n)
{
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

long long factorialRecursive(int n)
{
    factCalls++;
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorialRecursive(n-1);
}

int fibonacciRecursive(int n)
{
    fibCalls++;
    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }
    return fibonacciRecursive(n-1)+fibonacciRecursive(n-2);
}

int main()
{
    int n,termsa=0,b=1,c,i;
    cout<<"Enter Number For Factorial:";
    cin>>n;
  
    cout<<"Iterative Factorial="<<factorialIterative(n)<<endl;
    cout<<"Recursive Factorial="<<factorialRecursive(n)<<endl;

    cout<<"\nEnter Number Of Fibonacci Terms:";
    cin>>terms;

    cout<<"Iterative Fibonacci:"<<endl;

    for(i=0;i<terms;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    cout<<endl;
    cout<<"Recursive Fibonacci:"<<endl;

    for(i=0;i<terms;i++)
    {
        cout<<fibonacciRecursive(i)<<" ";
    }

    cout<<endl;
    cout<<"\nComparison"<<endl;
    cout<<"Factorial Recursive Calls="<<factCalls<<endl;
    cout<<"Fibonacci Recursive Calls="<<fibCalls<<endl;

    return 0;
}
