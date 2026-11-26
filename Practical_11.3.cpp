#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int n,i,semester;
    float percentage;
    char enrollment[20],name[30],branch[20],grade[5],ch;;

    // Create File
    ofstream fout("StudentRecords.txt");
    if(!fout)
    {
        cout<<"File Creation Error"<<endl;
        return 0;
    }
    cout<<"Enter Number Of Students:";
    cin>>n;

    // Store Records
    for(i=1;i<=n;i++)
    {
        cout<<"\nStudent "<<i<<endl;
        cout<<"Enrollment:";
        cin>>enrollment;
        cout<<"Name:";
        cin>>name;
        cout<<"Branch:";
        cin>>branch;
        cout<<"Semester:";
        cin>>semester;
        cout<<"Percentage:";
        cin>>percentage;
        cout<<"Grade:";
        cin>>grade;
        fout<<enrollment<<" "<<name<<" "<<branch<<" "<<semester<<" "<<percentage<<" "<<grade<<endl;
    }

    fout.close();
    cout<<"\nRecords Stored Successfully"<<endl;

    // Read Records
    ifstream fin("StudentRecords.txt");
    if(!fin)
    {
        cout<<"Unable To Open File"<<endl;
        return 0;
    }

    cout<<"\nStudent Records"<<endl;
    while(fin>>enrollment>>name>>branch>>semester>>percentage>>grade)
    {
        cout<<enrollment<<" "<<name<<" "<<branch<<" ";
        cout<<semester<<" "<<percentage<<" "<<grade<<endl;
    }
    fin.close();

    // Backup File
    ifstream file1("StudentRecords.txt");
    ofstream file2("BackupStudentRecords.txt");

    if(!file1||!file2)
    {
        cout<<"Backup Error"<<endl;
        return 0;
    }

    while(file1.get(ch))
    {
        file2.put(ch);
    }
    file1.close();
    file2.close();
    cout<<"\nBackup Created Successfully"<<endl;

    return 0;
}
