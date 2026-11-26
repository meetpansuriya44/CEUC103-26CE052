#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100],ch;

    // Create File
    ofstream fout("Document.txt");
    cout<<"Enter Text:";
    cin.getline(data,100);
    fout<<data;
    fout.close();
    cout<<"File Created Successfully"<<endl;

    // Read File
    ifstream fin("Document.txt");

    if(!fin)
    {
        cout<<"File Not Found"<<endl;
        return 0;
    }
    cout<<"\nFile Data:"<<endl;

    while(fin.get(ch))
    {
        cout<<ch;
    }
    fin.close();

    // Copy File
    ifstream file1("Document.txt");
    ofstream file2("BackupDocument.txt");
    while(file1.get(ch))
    {
        file2.put(ch);
    }
    file1.close();
    file2.close();
    cout<<"\nBackup Created Successfully"<<endl;

    return 0;
}
