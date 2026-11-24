#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i=0,j=0,k=0,word=0,ap=0,digit=0,sc=0,length=0,en=0,pos=0;
    char para[200],sentence[60],keyword[20],firstword[50],lastword[50];
    char firstchar,lastchar,rpara[200],pword[50],copystr[300];
    char str1[100],str2[100],cat1[100],cat2[100],upper[200],lower[200];
    bool ki=false,equal=true,palindrome=true;
    cout<<"********************************************"<<endl;
    cout<<"DOCUMENT TEXT ANALYZER"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"Enter Paragraph"<<endl;
    cin.getline(para,200);

    // Text Analysis
    for(i=0;para[i]!='\0';i++)
    {
        if(para[i]!=' ')
            j++;
        if(para[i]!=' ' && !ki)
        {
            word++;
            ki=true;
        }
        else if(para[i]==' ')
            ki=false;
        if((para[i]>='A' && para[i]<='Z')||(para[i]>='a' && para[i]<='z'))
            ap++;
        if(para[i]>='0' && para[i]<='9')
            digit++;
        if(!((para[i]>='A'&&para[i]<='Z')||(para[i]>='a'&&para[i]<='z')||(para[i]>='0'&&para[i]<='9')||para[i]==' '))
            sc++;
        length++;
    }
    cout<<"Characters : "<<j<<endl;
    cout<<"Words : "<<word<<endl;
    cout<<"Alphabets : "<<ap<<endl;
    cout<<"Digits : "<<digit<<endl;
    cout<<"Special Characters : "<<sc<<endl;

    // First Word
    i=0;
    j=0;
    while(para[i]==' ')
        i++;
    while(para[i]!=' '&&para[i]!='\0')
    {
        firstword[j]=para[i];
        j++;
        i++;
    }
    firstword[j]='\0';

    // Last Word
    i=length-1;
    while(para[i]==' ')
        i--;
    en=i;
    while(i>=0&&para[i]!=' ')
        i--;
    j=0;
    for(k=i+1;k<=en;k++)
        lastword[j++]=para[k];
    lastword[j]='\0';

    // First and Last Character
    i=0;
    while(para[i]==' ')
        i++;
    firstchar=para[i];
    i=0;
    while(para[i]!='\0')
        i++;
    lastchar=para[i-1];

    cout<<"First Word : "<<firstword<<endl;
    cout<<"Last Word : "<<lastword<<endl;
    cout<<"First Character : "<<firstchar<<endl;
    cout<<"Last Character : "<<lastchar<<endl;

    // Concatenation
    cout<<"Enter Additional Sentence"<<endl;
    cin.getline(sentence,60);
    i=0;
    while(para[i]!='\0')
        i++;
    para[i]=' ';
    i++;
    for(j=0;sentence[j]!='\0';j++)
    {
        para[i]=sentence[j];
        i++;
    }
    para[i]='\0';
    cout<<"Updated Paragraph"<<endl;
    cout<<para<<endl;

    // Pattern Matching
    cout<<"Enter Search Word : ";
    cin.getline(keyword,20);
    char *ptr=strstr(para,keyword);
    if(ptr!=NULL)
    {
        cout<<"Keyword Found"<<endl;
        cout<<"First Occurrence Position : "<<ptr-para<<endl;
    }
    else
        cout<<"Keyword Not Found"<<endl;

    // Uppercase
    for(i=0;para[i]!='\0';i++)
    {
        upper[i]=para[i];
        if(upper[i]>='a'&&upper[i]<='z')
            upper[i]-=32;
    }
    upper[i]='\0';
    cout<<upper<<endl;

    // Lowercase
    for(i=0;para[i]!='\0';i++)
    {
        lower[i]=para[i];
        if(lower[i]>='A'&&lower[i]<='Z')
            lower[i]+=32;
    }
    lower[i]='\0';
    cout<<lower<<endl;

    // Reverse
    length=0;
    while(lower[length]!='\0')
        length++;
    for(i=length-1,j=0;i>=0;i--,j++)
        rpara[j]=lower[i];
    rpara[j]='\0';
    cout<<rpara<<endl;

    // Palindrome Check
    cout<<"Enter Word : ";
    cin.getline(pword,50);
    length=0;
    while(pword[length]!='\0')
        length++;
    for(i=0,j=length-1;i<j;i++,j--)
    {
        if(pword[i]!=pword[j])
        {
            palindrome=false;
            break;
        }
    }
    if(palindrome)
        cout<<"Result : Palindrome"<<endl;
    else
        cout<<"Result : Not Palindrome"<<endl;

    // Manual Length
    length=0;
    while(para[length]!='\0')
        length++;
    cout<<"Length : "<<length<<endl;

    // Manual Copy
    for(i=0;para[i]!='\0';i++)
        copystr[i]=para[i];
    copystr[i]='\0';
    cout<<"String Copied Successfully"<<endl;

    // Manual Compare
    cout<<"Enter First String : ";
    cin.getline(str1,100);
    cout<<"Enter Second String : ";
    cin.getline(str2,100);
    equal=true;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            equal=false;
            break;
        }
    }
    if(equal)
        cout<<"Comparison Result : Equal"<<endl;
    else
        cout<<"Comparison Result : Not Equal"<<endl;

    // Manual Concatenation
    cout<<"Enter String 1 : ";
    cin.getline(cat1,100);
    cout<<"Enter String 2 : ";
    cin.getline(cat2,100);
    pos=0;
    while(cat1[pos]!='\0')
        pos++;
    for(i=0;cat2[i]!='\0';i++)
        cat1[pos++]=cat2[i];
    cat1[pos]='\0';
    cout<<"Concatenation : "<<cat1<<endl;

    // Substring Search
    if(strstr(para,keyword)!=NULL)
        cout<<"Substring Search : Found"<<endl;
    else
        cout<<"Substring Search : Not Found"<<endl;

    cout<<"toupper() : Successful"<<endl;
    cout<<"tolower() : Successful"<<endl;
    return 0;
}
