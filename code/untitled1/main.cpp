#include<bits/stdc++.h>
using namespace std;

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
