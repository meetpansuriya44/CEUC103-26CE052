#include<iostream>
using namespace std;

int globalVar=100;

void displayMessage()
{
    cout<<"\nFunctionwithoutParametersandwithoutReturnValue"<<endl;
}

int getNumber()
{
    return 50;
}

void displaySquare(int num)
{
    cout<<"Square="<<num*num<<endl;
}

int addNumbers(int a,int b)
{
    return a+b;
}

void callByValue(int num)
{
    num=num+10;
    cout<<"InsideCallbyValue="<<num<<endl;
}

void callByReference(int &num)
{
    num=num+10;
    cout<<"InsideCallbyReference="<<num<<endl;
}

void scopeDemo()
{
    int localVar=50;

    cout<<"\nInsideFunction"<<endl;
    cout<<"LocalVariable="<<localVar<<endl;
    cout<<"GlobalVariable="<<globalVar<<endl;
}

void displayStudent(string name)
{
    cout<<"\nStudentName:"<<name<<endl;
}

void displayStudent(string name,float cgpa)
{
    cout<<"\nStudentName:"<<name<<endl;
    cout<<"CGPA:"<<cgpa<<endl;
}

void displayStudent(string name,float cgpa,string contact)
{
    cout<<"\nStudentName:"<<name<<endl;
    cout<<"CGPA:"<<cgpa<<endl;
    cout<<"Contact:"<<contact<<endl;
}

int main()
{
    int num;
    int a,b;
    string name,contact;
    float cgpa;

    cout<<"=====PARTA:FUNCTIONDESIGN====="<<endl;
    displayMessage();
    cout<<"ReturnedValue="<<getNumber()<<endl;
    cout<<"\nEnterNumber:";
    cin>>num;
    displaySquare(num);
    cout<<"\nEnterTwoNumbers:";
    cin>>a>>b;
    cout<<"Addition="<<addNumbers(a,b)<<endl;

    cout<<"\n=====PARTB:PARAMETERPASSING====="<<endl;
    cout<<"OriginalValue="<<num<<endl;
    callByValue(num);
    cout<<"AfterCallbyValue="<<num<<endl;
    callByReference(num);
    cout<<"AfterCallbyReference="<<num<<endl;
  
    cout<<"\n=====PARTC:SCOPEANDVISIBILITY====="<<endl;
    scopeDemo();
    cout<<"\nOutsideFunction"<<endl;
    cout<<"GlobalVariable="<<globalVar<<endl;

    cout<<"\n=====PARTD:FUNCTIONOVERLOADING====="<<endl;
    cout<<"\nEnterStudentName:";
    cin>>name;
    cout<<"EnterCGPA:";
    cin>>cgpa;
    cout<<"EnterContactNumber:";
    cin>>contact;

    displayStudent(name);
    displayStudent(name,cgpa);
    displayStudent(name,cgpa,contact);

    return 0;
}
