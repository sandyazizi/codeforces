#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    char nama1[10000];
    char nama2[10000];
    int i;
    int jumlah = 0;
    cin>>nama1;
    cin>>nama2;
    // int karakter = nama1.le ngth();

    int perbedaan = strcmpi(nama1, nama2);

    // for(i = 0;i < karakter;i++){
    //     if(nama1[i] != nama2[i]){
    //         jumlah = jumlah+1;
    //     }
 

    // cout<<jumlah;
    // cout<<perbedaan;
    if(perbedaan > 0){
        cout<<"1";
    }
    else if(perbedaan<0){
        cout<<"-1";
    }
    else{
        cout<<"0";
    }

    return 0;
}