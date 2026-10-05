//program for finding factorial of a number using reccursion 
//program for finding nth fibonacci number using recursion and inmproving its run time to save stack operation
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
   else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main() {
	int n;
	cin>>n;
	int ans=fibo(n);
	cout<<ans;

}
