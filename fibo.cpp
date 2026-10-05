//program for finding factorial of a number using reccursion 
//program for finding nth fibonacci number using recursion and inmproving its run time to save stack operation
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main() {
	int n;
	cin>>n;
	int ans=fact(n);
	cout<<ans;

}
