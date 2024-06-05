#include <iostream>
using namespace std;
int fac(int n){
    int ans=1;
    for(int i=2;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int nCr(int n , int r){
    int num=fac(n);//numerator
    int den=fac(r)*fac(n-r);//denominator
    int ans=num/den;
    return ans;
    
}

int main() {
    int a;
    int b;
     cin >> a >> b;
     int answer=nCr(a,b);
     cout<<answer<<endl;

     return 0;
    }