#include <iostream>
using namespace std;

int main(){
    int range = 5;
    int i, k;
    int lokasi_baris, lokasi_kolom;
    int move;
    int matrix[100][100];

    for(i = 0; i < range; i++){
        for(k = 0; k < range ; k++){
            cin>>matrix[i][k];
            if(matrix[i][k] > 0){
                lokasi_baris = i+1;
                lokasi_kolom = k+1;
            }
        }
    }
    move = abs(lokasi_baris - 3) + abs(lokasi_kolom - 3);
    cout<<move;
}