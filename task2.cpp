#include<iostream>
using namespace std;
int main() {
    int a,b,c,denta;
    float x1,x2,x;
    cout<<"nhập hệ số a : "; cin>>a;
    cout<<"nhập hệ số b : "; cin>>b;
    cout<<"nhập hệ số c : "; cin>>c;
    denta = b*b - 4*a*c ;
    if (denta < 0 ) {
    cout<<"phương trình vô nghiệm"<<endl; }
    else if (denta ==0) {
    cout<<"phương trình có nghiệm kép x =  "<<-b/(2*a)<<endl; }
    else {
    cout<<"phương trình có nghiệm x1 = "<<(-b + sqrt(denta))/(2*a)<<endl;
    cout<<"phương trình có nghiệm x2 = "<<(-b - sqrt(denta))/(2*a)<<endl;
    }
    //Bùi Chí Giang
}
