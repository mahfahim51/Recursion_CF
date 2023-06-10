#include<bits/stdc++.h>
using namespace std;

int rpr(int n);
int main()
{
 int n;
 cin>>n;
 rpr(n);
}
int rpr(int n)
{
  if(n>0) 
  {
   cout<<"I love Recursion\n";
   return rpr(n-1);
  }
  else
  {
   return 0;
  }
}