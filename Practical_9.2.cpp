#include<iostream>
using namespace std;

// Structure For Student Record
struct Student
{
    char enrollmentNo[20];
    char name[30];
    char branch[20];
    int semester;
    float percentage;
    char grade[5];
};

// Display Student Records Using Address-Based Access
void displayRecords(Student *s,int n)
{
    int i;
    cout<<"\nStudent Records Using Address-Based Access"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\nAddress:"<<(s+i)<<endl;
        cout<<"Enrollment Number:"<<((s+i)->enrollmentNo)<<endl;
        cout<<"Student Name:"<<((s+i)->name)<<endl;
        cout<<"Branch:"<<((s+i)->branch)<<endl;
        cout<<"Semester:"<<((s+i)->semester)<<endl;
        cout<<"Percentage:"<<((s+i)->percentage)<<endl;
        cout<<"Grade:"<<((s+i)->grade)<<endl;
    }
}

// Calculate Class Average Percentage
void classAverage(Student *s,int n)
{
    float sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum+=(s+i)->percentage;
    }
    cout<<"\nClass Average Percentage="<<sum/n<<endl;
}

// Display Highest Percentage
void highestPercentage(Student *s,int n)
{
    float highest=s->percentage;
    int i;
    for(i=1;i<n;i++)
    {
        if((s+i)->percentage>highest)
        {
            highest=(s+i)->percentage;
        }
    }
    cout<<"Highest Percentage="<<highest<<endl;
}

// Display Lowest Percentage
void lowestPercentage(Student *s,int n)
{
    float lowest=s->percentage;
    int i;
    for(i=1;i<n;i++)
    {
        if((s+i)->percentage<lowest)
        {
            lowest=(s+i)->percentage;
        }
    }
    cout<<"Lowest Percentage="<<lowest<<endl;
}

int main()
{
    int n,i;

    cout<<"Enter Number Of Students:";
    cin>>n;

    // Dynamic Memory Allocation
    Student *s=new Student[n];
    cout<<"\nDynamic Memory Allocated Successfully"<<endl;

    // Accept Student Details
    for(i=0;i<n;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Enrollment Number:";
        cin>>s[i].enrollmentNo;\
        cout<<"Student Name:";
        cin.ignore();
        cin.getline(s[i].name,30);
        cout<<"Branch:";
        cin.getline(s[i].branch,20);
        cout<<"Semester:";
        cin>>s[i].semester;
        cout<<"Percentage:";
        cin>>s[i].percentage;
        cout<<"Grade:";
        cin>>s[i].grade;
    }

    // Address-Based Traversal
    displayRecords(s,n);
    cout<<"\nAcademic Summary"<<endl;

    // Address-Based Function Access
    classAverage(s,n);
    highestPercentage(s,n);
    lowestPercentage(s,n);

    // Dynamic Memory Deallocation
    delete[] s;
    s=NULL;
    cout<<"\nDynamic Memory Released Successfully"<<endl;
    cout<<"Address Variable Reset Successfully"<<endl;

    return 0;
}
