#include <iostream>
using namespace std;

int main(){
    int nilai[1000][1000];
    int baris, kolom, b, k;
    int total_baris[1000];
    int decide = 0;

    cin>>baris;
    for(b = 0; b < baris; b++){
        for(k = 0; k < 3; k++){
            cin>>nilai[b][k];
        }
    }

    for(b = 0; b < baris; b++){
        total_baris[b] = 0;
        for(k = 0; k < 3; k++){
            total_baris[b] = total_baris[b] + nilai[b][k];
        }
    }

    for(b=0; b<baris;b++){
        if(total_baris[b] >= 2){
            decide = decide + 1;
        }
    }

    cout<<decide<<endl;

    return 0;
}