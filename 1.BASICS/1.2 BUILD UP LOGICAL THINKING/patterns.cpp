#include <iostream>
using namespace std;


void pattern1(int n)
{
    /*  
*     
**    
***   
****  
*****
    */

 for(int i=1;i<=n;i++)
 {
    //Stars
     for(int j=1;j<=i;j++)
     {
         cout<<"*";
     }
     for(int j=0;j<=n-i;j++)
     {
        cout<<" ";
     }
     cout<<"\n";
 }
}
void pattern2(int n)
{
/*
+++++
+++++
+++++
+++++
+++++
*/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"+";
        }
        cout<<"\n";
    }
}
void pattern3(int n)
{
    /*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern4(int n)
{
/*
1
22
333
4444
55555
*/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}
void pattern5(int n)
{
/*
*****
****
***
**
*
*/
 for(int i=n;i>=0;i--)
 {
  for(int j=1;j<=i;j++)
  {
    cout<<"*";
  }
  cout<<"\n";
 }
}
void pattern6(int n)
{
    /*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
 for(int i=n;i>0;i--)
 {
   for(int j=1;j<=i;j++)
   {
       cout<<j<<" ";
   }
   cout<<"\n";
 }
}
void pattern7(int n)
{
/*

  *  
 ***
*****

*/

    for(int i=1;i<=n;i++)
    {
    //spaces
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    //stars
    for(int k=1;k<=(2*i)-1;k++)
    {
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    cout<<"\n";
    }
    
}
void pattern8(int n)
{
/*
*****
 *** 
  *  
*/ 
    for(int i=n;i>=0;i--)
    {
        //spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        
        cout<<"\n";
    }
}
void pattern9(int n)
{
/*
  *  
 *** 
*****
*****
 *** 
  *  

*/
    pattern7(n);
    pattern8(n);
}
void pattern10(int n)
{
/*

*   
**
***
**
*

*/
    pattern1(n);
    for(int i=n;i>=0;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
         cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern11(int n)
{
/*
1
01
101
0101
10101

alternative way to do this:
void pattern11(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << ((i + j) % 2);
        }
        cout << "\n";
    }
}
*/
    int num=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            {
                num=0;
            }
            else num=1;
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                if(num==0)cout<<"1";
                else cout<<"0";
            }
            else cout<<num;
        }
        cout<<"\n";
    }
}
void pattern12(int n)
{
/*
    1        1
    12      21
    123    321
    1234  4321
    1234554321
*/
    for(int i=1; i<=n; i++)
    {
        // Left side numbers
        for(int j=1; j<=i; j++)
            cout << j;
        // Spaces
        for(int j=1; j<=2*(n-i); j++)
            cout << " ";
        // Right side numbers
        for(int j=i; j>=1; j--)
            cout << j;
        cout << "\n";
    }

}

int main()
{
    int n;
    cout<<"Enter the n ";
    cin>>n;
    pattern12(n);

    return 0;
}