#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m=n/2;
    int c=0;

    for(int i=2;i<=m;i++){
        if(n%i==0){
            
            c++;
        }
        }
    if(c>0){
        cout<<"NOT A PRIME NO"<<endl;
    }
    else{
        cout<<"PRIME NUMBER"<<endl;
    }
        
        
    return 0;
    }