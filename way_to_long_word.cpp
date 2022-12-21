// Code by Senzen
// If you want to make some project with me, just contact me at my github

#include <iostream>
#include <string>
using namespace std;

int main(){
    string tulisan;
    int line;
    int i;
    cin>>line;

    for(i = 0; i< line;i++){
        cin>>tulisan;
        if(tulisan.length() > 10){
            cout<<tulisan[0]<<tulisan.length()-2<<tulisan[tulisan.length()-1]<<endl;
        }
        else{
         cout<<tulisan<<endl;
        }
    }

}