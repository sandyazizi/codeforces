#include <iostream>
using namespace std;

int main(){
    int peserta[1000];
    int k,n,i;
    int jumlah = 0;

    cin>>k>>n;

    for(i = 0; i < k; i++){
        cin>>peserta[i];
    }

    for(i = 0; i < k; i++){
        if(peserta[i]){
            if(peserta[i] >= peserta[n-1]){
            jumlah = jumlah + 1;
            }
        }
    }

    cout<<jumlah;

    return 0;

}