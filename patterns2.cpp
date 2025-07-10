#include <iostream>
using namespace std;


void pattern13(int n)
{
/*
1
23
456
78910
1112131415
*/
    int num=1;
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=i;j++)
    {
        cout<<num;
        num++;
    }
    cout<<"\n";
 }

}
void pattern14(int n)
{
/*
A
AB
ABC
ABCD
ABCDE
*/
    char ch;
    for(int i=1;i<=n;i++)
    {
     ch='A';
     for(int j=1;j<=i;j++)
     {
        cout<<ch;
        ch++;
     }
     cout<<"\n";
    }
}
void pattern15(int n)
{
/*
ABCDE
ABCD
ABC
AB
A
*/
    char ch;
    for(int i=n;i>=1;i--)
    {
     ch='A';
     for(int j=1;j<=i;j++)
     {
        cout<<ch;
        ch++;
     }
     cout<<"\n";
    }
}
void pattern16(int n)
{
/*
A
BB
CCC
DDDD
EEEEE
*/
    char ch='A';
    for(int i=1;i<=n;i++)
    {
     
     for(int j=1;j<=i;j++)
     {
        cout<<ch;
     }
     ch++;
     cout<<"\n";
    }
}
void pattern17(int n)
{
    /*
       A   
      ABA  
     ABCBA 
    ABCDCBA
    */
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        //spaces
        for(int j=1;j<=(n-i);j++)
        {
         cout<<" ";
        }
        // Print increasing characters
        char ch = 'A';
        for(int j=1; j<=i; j++)
            cout << ch++;
        // Print decreasing characters
        ch -= 2;
        for(int j=1; j<i; j++)
            cout << ch--;
        cout << "\n";
    }
}
void pattern18(int n)
{
/*
E
DE
CDE
BCDE
ABCDE
*/
    char ch;
    for(int i=1;i<=n;i++)
    {
        ch='A'+(n-i);
        for(int j=1;j<=i;j++,ch++)
        {
         cout<<ch;
        }
        cout<<"\n";
    }
}
void pattern19(int n)
{
/*
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
 //upside
 for(int i=0;i<n;i++)
 {
    //stars
    for(int j=1;j<=n-i;j++)
    {
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*i;j++)
    {
        cout<<" ";
    }

    //stars
    for(int j=1;j<=n-i;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
 }
 //downside
 for(int i=1;i<=n;i++)
 {
    //stars
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*(n-i);j++)
    {
        cout<<" ";
    }

    //stars
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
 }
}
void pattern20(int n)
{
/*

*      *
**    **
***  ***
********
***  ***
**    **
*      *

*/
 //upside
 for(int i=1;i<=n;i++)
 {
    //stars
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*(n-i);j++)
    {
        cout<<" ";
    }

    //stars
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
 }
 //downside
 for(int i=1;i<=n-1;i++)
 {
    //stars
    for(int j=1;j<=n-i;j++)
    {
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*i;j++)
    {
        cout<<" ";
    }
    //stars
    for(int j=1;j<=n-i;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
 }
}
void pattern21(int n)
{
/*

*****
*   *
*   *
*   *
*****

*/
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i==1||i==n||j==1||j==n)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";
 }
}
void pattern22(int n)
{
/*
Enter the n 5
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
    int min_num,size=2*n-1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            min_num=min(min(i,j),min(size-i-1,size-1-j));
            cout<<n-min_num;
        }
        cout<<"\n";
    }
}
void pattern23(int n)
{
/*
Enter the n 5
FFFFFFFFF
FEEEEEEEF
FEDDDDDEF
FEDCCCDEF
FEDCBCDEF
FEDCCCDEF
FEDDDDDEF
FEEEEEEEF
FFFFFFFFF
*/
    int min_num,size=2*n-1;
    char ch='A'+n;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            min_num=min(min(i,j),min(size-i-1,size-1-j));
            cout<<(char)(ch-min_num);
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cout<<"Enter the n ";
    cin>>n;
    pattern23(n);

    return 0;
}