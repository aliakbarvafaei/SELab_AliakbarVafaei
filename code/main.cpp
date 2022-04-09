#include<bits/stdc++.h>
using namespace std;
//  edit file
//  edit file 2

// edit by mohammadhosein...

// edit2 by mohammadhosein... 

void swap(int *x,int *y)
{
    int *temp=new int;
    *temp=*x;
    *x=*y;
    *y=*temp;
}
//  add new branch
int main()
{
   int x=10,y=5;

   swap(&x,&y);

   cout<<x<<" "<<y<<endl;

   return 0;
}
