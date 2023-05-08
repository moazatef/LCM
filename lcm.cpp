#include<iostream>
using namespace std;
int LCM(int a,int b);

int main(){
  int n;
  int m;
  cin>>n>>m;
  int l=LCM(n,m);// COMPUTE least common multiple for two positive integers
  cout<<l;
}

int gcd(int a,int b){
  if (b==0)
    return a;
  return gcd(b,a%b);
}

int LCM(int a,int b){
   return (a/gcd(a,b))*b;
}
