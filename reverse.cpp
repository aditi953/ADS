//program for finding gcd of two number using reccursion
//profram to reverse the given number using recursion
#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    if(n<10){
        return n;
    }
     
    int x=n%10;
  int temp=n/10;
 temp=(x*10)+temp;
    return temp;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
}