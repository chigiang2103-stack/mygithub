#include<iostream>
using namespace std;
int main(){
    int SP , CP ;
    cout << "nhập số phút gọi = "; cin>>SP;
    if (SP<= 50 ) {
        CP=(SP*600 + 25000);
        cout<<"số tiền = "<<CP<< endl;
    }
    else if (SP<=200) {
        CP=(50*600 + (SP-50)*400)+25000;
        cout<<"số tiền = "<<CP<< endl;
    }
    else {
        CP=(50*600 + (150)*400 + (SP-200)*200)+25000;
        cout<<"số tiền = "<<CP<< endl;
    }
    return 0 ;




}