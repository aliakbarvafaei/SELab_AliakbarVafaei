#include<bits/stdc++.h>
using namespace std;
//  edit file
//  edit file 2

void swap(int *x,int *y)
{
    int *temp=new int;
    *temp=*x;
    *x=*y;
    *y=*temp;
}

int main()
{
   int x=10,y=5;

   swap(&x,&y);

   cout<<x<<" "<<y<<endl;

   return 0;
}
