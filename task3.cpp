#include<iostream>
using namespace std;
int main() {
    int profit , hh;
    cout<<"nhập doanh thu = "; cin>>profit;
    if (profit <= 100 ) {
        hh = profit*5/100 ;
        cout <<"hoa hồng = "<<hh<<endl;
    }
    else if (profit<=300 && profit >100){
        hh=profit*10/100;
        cout<<"hoa hồng = " <<hh<<endl;
    }
    else {
        hh=profit*20/100;
        cout<<"hoa hồng = "<<hh<<endl;
    }
    return 0;
}