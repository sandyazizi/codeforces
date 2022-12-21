// Code by Senzen
// If you want to make some project with me, just contact me at my github

#include <iostream>
using namespace std;

int main(){
    int input;
    // cout<<"Masukkan Input : ";
    cin>>input;
    if(input > 2){
        if(input % 2 == 0){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }
}