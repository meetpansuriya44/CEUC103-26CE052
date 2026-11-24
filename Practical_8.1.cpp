#include<iostream>
#include<iomanip>
using namespace std;

// Function Prototypes
void displayHeader();
void acceptStudentDetails(char enroll[],char name[],char branch[],int &sem,int marks[]);
void calculateAcademicResult(int marks[],int &total,float &percentage,char &grade,char &result);
void displayStudentReport(char enroll[],char name[],char branch[],int sem,int total,float percentage,char grade,char result);

int main()
{
    // Variable Declarations
    char enroll[20],name[50],branch[20];
    int sem,marks[5],total;
    float percentage;
    char grade,result;

    // Display Header
    displayHeader();

    // Accept Student Details
    acceptStudentDetails(enroll,name,branch,sem,marks);

    // Calculate Result
    calculateAcademicResult(marks,total,percentage,grade,result);

    // Display Report
    displayStudentReport(enroll,name,branch,sem,total,percentage,grade,result);

    cout<<"\nProgram Executed Successfully Using User-defined Functions.";

    return 0;
}

// Function to Display Heading
void displayHeader()
{
    cout<<"********************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"********************************************"<<endl;
}

// Function to Accept Student Details
void acceptStudentDetails(char enroll[],char name[],char branch[],int &sem,int marks[])
{
    cout<<"\n----------- Student Registration -----------"<<endl;

    cout<<"Enter Enrollment Number : ";
    cin.getline(enroll,20);

    cout<<"Enter Student Name : ";
    cin.getline(name,50);

    cout<<"Enter Branch : ";
    cin.getline(branch,20);

    cout<<"Enter Semester : ";
    cin>>sem;

    cout<<"\nEnter Marks"<<endl;

    // Input Marks of 5 Subjects
    for(int i=0;i<5;i++)
    {
        cout<<"Subject "<<i+1<<" : ";
        cin>>marks[i];
    }
}

// Function to Calculate Total, Percentage, Grade and Result
void calculateAcademicResult(int marks[],int &total,float &percentage,char &grade,char &result)
{
    total=0;

    // Calculate Total Marks
    for(int i=0;i<5;i++)
    {
        total=total+marks[i];
    }

    // Calculate Percentage
    percentage=total/5.0;

    // Assign Grade
    if(percentage>=90)
        grade='A';
    else if(percentage>=80)
        grade='B';
    else if(percentage>=70)
        grade='C';
    else if(percentage>=60)
        grade='D';
    else
        grade='F';

    // Check Pass or Fail
    if(percentage>=40)
        result='P';
    else
        result='F';
}

// Function to Display Student Report
void displayStudentReport(char enroll[],char name[],char branch[],int sem,int total,float percentage,char grade,char result)
{
    cout<<"\n--------------------------------------------"<<endl;
    cout<<"Academic Report"<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<"Enrollment Number : "<<enroll<<endl;
    cout<<"Student Name : "<<name<<endl;
    cout<<"Branch : "<<branch<<endl;
    cout<<"Semester : "<<sem<<endl;
    cout<<"Total Marks : "<<total<<endl;

    cout<<fixed<<setprecision(2)<<"Percentage : "<<percentage<<"%"<<endl;

    cout<<"Grade : "<<grade<<endl;

    // Display Final Result
    if(result=='P')
        cout<<"Result : PASS"<<endl;
    else
        cout<<"Result : FAIL"<<endl;

    cout<<"--------------------------------------------"<<endl;
}
