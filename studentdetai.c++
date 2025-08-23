#include <iostream> 
using namespace std;

int main()
{
    int rno,s1,s2,s3,total;
    double per;
    char sname[50];

    cout<<"\nEnter Student Name : ";
    cin>>sname;
    cout<<"\nEnter Roll no : ";
    cin>>rno;
    cout<<"\nEnter Marks of subjetct 1 : ";
    cin>>s1;
    cout<<"\nEnter Marks of subjetct 2 : ";
    cin>>s2;
    cout<<"\nEnter Marks of subjetct 3 : ";
    cin>>s3;
    
    total = s1+s2+s3;
    per=total/3;

    cout<<"\nStudent Name : "<<sname;
    cout<<"\nRoll No : "<<rno;
    cout<<"\nTotal : "<<total;
    cout<<"\nPercentage : "<<per;

    if (per >= 75)
         {
            cout<<"\nDistinction";
         }
         else if (per >= 60)
         {
            cout<<"\nFirst Class";
         }
         else if (per >= 50)
         {
            cout<<"\nSecond Class";
         }
         else if (per >= 40)
         {
            cout<<"\nThird Class";
         }
        else
        {
            cout<<"\nFail";
        }

        return 0;
}