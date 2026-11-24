#include<iostream>
using namespace std;

// Academic Information Structure
struct AcademicInfo
{
    int semester;
    float percentage;
    char grade[5];
};

// Contact Information Structure
struct ContactInfo
{
    char mobile[15];
    char email[40];
};

// Student Structure
struct Student
{
    char enrollmentNo[20];
    char name[30];
    char branch[20];
    AcademicInfo academic;
    ContactInfo contact;
};

// Display Student Details
void displayStudentDetails(Student *s)
{
    cout<<"\nEnrollment Number:"<<s->enrollmentNo<<endl;
    cout<<"Student Name:"<<s->name<<endl;
    cout<<"Branch:"<<s->branch<<endl;
}

// Display Academic Information
void displayAcademicInfo(Student *s)
{
    cout<<"Semester:"<<s->academic.semester<<endl;
    cout<<"Percentage:"<<s->academic.percentage<<endl;
    cout<<"Grade:"<<s->academic.grade<<endl;
}

// Update Contact Information
void updateContactInfo(Student *s)
{
    cout<<"\nEnter New Mobile Number:";
    cin>>s->contact.mobile;
    cout<<"Enter New Email:";
    cin>>s->contact.email;
}

int main()
{
    int n,i;

    cout<<"Enter Number Of Students:";
    cin>>n;

    Student s[10];

    // Accept Student Records
    for(i=0;i<n;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;

        cout<<"Enrollment Number:";
        cin>>s[i].enrollmentNo;

        cout<<"Student Name:";
        cin.ignore();
        cin.getline(s[i].name,30);

        cout<<"Branch:";
        cin.getline(s[i].branch,20);

        cout<<"Semester:";
        cin>>s[i].academic.semester;

        cout<<"Percentage:";
        cin>>s[i].academic.percentage;

        cout<<"Grade:";
        cin>>s[i].academic.grade;

        cout<<"Mobile Number:";
        cin>>s[i].contact.mobile;

        cout<<"Email:";
        cin>>s[i].contact.email;
    }

    // Display Records
    cout<<"\n=====STUDENT RECORDS====="<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        displayStudentDetails(&s[i]);
        displayAcademicInfo(&s[i]);
        cout<<"Mobile:"<<s[i].contact.mobile<<endl;
        cout<<"Email:"<<s[i].contact.email<<endl;
    }

    // Update Contact Information
    cout<<"\n=====UPDATE CONTACT INFORMATION====="<<endl;

    updateContactInfo(&s[0]);

    cout<<"\n=====UPDATED RECORD====="<<endl;

    displayStudentDetails(&s[0]);
    displayAcademicInfo(&s[0]);

    cout<<"Mobile:"<<s[0].contact.mobile<<endl;
    cout<<"Email:"<<s[0].contact.email<<endl;

    return 0;
}
