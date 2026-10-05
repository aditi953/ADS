//tower of hanoi
#include <bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char beg,char aux,char end)
{
    if(n==1)
    {
        cout<<"move disk 1 from "<<beg<<"to"<<end<<endl;
        return;
    }
    towerofhanoi(n-1,beg,end,aux);
    cout<<"move disk"<<n<<"from"<<beg<<"to"<<end<<endl;
    towerofhanoi(n-1,aux,beg,end);
}
int main() {
	
int n;
cin>>n;
towerofhanoi(n,'A','B','C');
return 0;
}
