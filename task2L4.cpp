#include<iostream>
using namespace std;
int main() {
    int n;
    float s=0;
    cout<<"nhập n > 0  : ";cin>>n;
    for (int i = 1 ; i <=n ; i++) {
        s+=1.0/i ;
    }
    cout << s << endl;
}