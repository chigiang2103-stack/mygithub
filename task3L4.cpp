// #include<iostream>
// using namespace std; 
// int main() {
//     int n,i=2,count=0;
//     cout << " nhập số cần test : "; cin>>n;
//     while (i<=n/2){
//         if (n%i==0) {
//             cout <<n<<"không là snt"<<endl;
//             count --;
//             break;
//         }
//         else {
//             i++;
//             count++;
//         }
//     }
//     if (count>=0) {
//         cout <<n<<"là snt"<<endl;
//     }
#include "stdio.h"
 
int so_nguyen_to(int N);
int main()
{
    int N;
    int ketqua;
    do
    {
        printf("\n Nhap vao so N = ");
        scanf("%d", &N);
    }
    while(N <= 0);
    if(so_nguyen_to(N))
        printf("\n %d la so nguyen to", N);
    else
        printf("\n %d la khong phai so nguyen to", N);
    return 0;
}
// Ham kiem tra so nguyen to
int so_nguyen_to(int N)
{
    int i;
    if(N == 1)
        return 0;
    else
    {
        for( i = 2; i < N/2; i++)
        {
            if(N % i == 0)
                return 0;
        }
        return 1;
    }
}







