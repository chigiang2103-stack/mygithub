#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"nhập số : "; cin>>num;
    switch (num%2)
    {
    case 0 :
        cout<<"số chẳn"<<endl;
        break;
    case 1:
        cout<<"số lẽ"<<endl;
        break;
    }
    return 0 ;
}
// Bùi chí Giang 
