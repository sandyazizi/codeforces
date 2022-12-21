#include <iostream>
using namespace std;

int main(){
    int m, n;
    int luas_board;
    int square = 2;
    int hasil, sisa;

    cin>>m>>n;

    luas_board = m*n;
    sisa = luas_board % 2;
    hasil = (luas_board - sisa) / square;

    cout<<hasil;
}