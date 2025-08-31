#include<iostream>
using namespace std;

int main() {
    int n,res=0; 
    cout <<"nhập n : ";
    cin >> n; //1234 => 4321 => 4 =>40+3 =>430 + 2 => 4320 + 1
    int temp =n ;
    while (temp > 0) {
        res = temp%10 + res*10;
        temp = temp/10;
    }
    if (res == n ) {
        cout << "nice\n" ;
    }
    else {
        cout <<"fall\n";
    }

    

}