#include<iostream>
using namespace std; 
int main() {
    int n ; 
    cout <<"nhập n : "; cin>> n;
    int f1,f2,fn;
        f1=f2=1;
        cout << "dãy fibo : " <<f1 <<f2 ;
        while (f1 + f2 < n ) {
            fn=f2 +f1;
            f1=f2;
            cout << fn <<" ";
            f2=fn;
        }
    }
    // bcg





