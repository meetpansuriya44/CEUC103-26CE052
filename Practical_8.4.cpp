#include<iostream>
using namespace std;

// Display 1 To N Using Recursion
void print1ToN(int n)
{
    if(n==0)
    {
        return;
    }

    print1ToN(n-1);
    cout<<n<<" ";
}

// Display N To 1 Using Recursion
void printNTo1(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<" ";
    printNTo1(n-1);
}

// Reverse Number Using Recursion
int reverseNumber(int n,int rev=0)
{
    if(n==0)
    {
        return rev;
    }

    return reverseNumber(n/10,rev*10+n%10);
}

// Find Sum Of Digits Using Recursion
int sumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n%10+sumOfDigits(n/10);
}

// Convert Decimal To Binary Using Recursion
void decimalToBinary(int n)
{
    if(n==0)
    {
        return;
    }

    decimalToBinary(n/2);
    cout<<n%2;
}

int main()
{
    int n,num,decimal;

    cout<<"Enter N:";
    cin>>n;

    cout<<"\nNumbers From 1 To N:"<<endl;
    print1ToN(n);

    cout<<"\n\nNumbers From N To 1:"<<endl;
    printNTo1(n);

    cout<<"\n\nEnter A Number:";
    cin>>num;

    cout<<"Reverse Number="<<reverseNumber(num)<<endl;
    cout<<"Sum Of Digits="<<sumOfDigits(num)<<endl;

    cout<<"\nEnter Decimal Number:";
    cin>>decimal;

    cout<<"Binary Number=";

    if(decimal==0)
    {
        cout<<0;
    }
    else
    {
        decimalToBinary(decimal);
    }

    cout<<endl;

    cout<<"\n=====COMPARATIVE ANALYSIS====="<<endl;
    cout<<"Recursion:Is Easy And Readable"<<endl;
    cout<<"Iteration:Is Generally Faster"<<endl;
    cout<<"Recursion:Uses Multiple Function Calls"<<endl;
    cout<<"Iteration:Uses Loops"<<endl;

    return 0;
}
