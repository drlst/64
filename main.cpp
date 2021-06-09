#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void Nhap(int arr[], int n){
    for (int i = 0; i < n; ++i) {
        cout<<"arr["<<i<<"]= ";
        cin>>arr[i];
    }
}

void Xuat(int arr[], int n){
    for (int i = 0; i < n; ++i) cout<<"\narr["<<i<<"]= " <<arr[i]<<" ";
}

void TinhTB(const int arr[], int n){
    double sum;
    sum = 0;
    double S;
    S = 0;

    for (int i = 0; i < n; ++i) {
        if(arr[i]<0){
            sum+=arr[i];
            S++;
        }
    }
    auto TB =double(sum/S);
    cout<<"\nTrung binh cong nguyen am le ="<<TB;
}

void XoaPTT(int arr[], int *n){
    for (int i=0; i<(*n)-1; ++i){
       int j=i+1;
        while (j<*n)
            if (arr[i] == arr[j]){
                for (int k=j; k<(*n)-1; ++k)
                    arr[k]=arr[k+1];
                *n=(*n)-1;
            }
            else j=j+1;
    }
}

int main() {
    int arr[10000];
    int n;

    do {
        cout<<"\nNhap n[1, 99] ";
        cin>>n;
    }while(n<1||n>99);

    Nhap(arr, n);
    Xuat(arr, n);
    TinhTB(arr, n);
    XoaPTT(arr, &n);
    cout<<"\nXoa: "<<endl;
    Xuat(arr, n);
    return 0;
}