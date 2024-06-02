#include <iostream>
using namespace std;

int main() {
    int a=0;
    int b=1;
    int n;
    cin >> n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=3;i<=n;i++){
        int c=b;
        b=a+b;
        a=c;
        cout<<b<<endl;
        }
        
        
    return 0;
    }
