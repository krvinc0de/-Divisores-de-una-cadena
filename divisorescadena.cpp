#include <iostream>
using namespace std;

int main() {
    string palabra;
    cout<<"ingrese una palabra: ";
    cin>>palabra;
    int ascii=0;
    for (int i=0; i<=palabra.length()-1; i++){
        ascii=ascii+palabra[i];
    }
    ascii=ascii-32;
    int divisiones=0;
    for (int i=1;i<=ascii;i++)
    {
        if(ascii%i==0){
            divisiones=divisiones+1;
        }
    }
    cout<<divisiones;
}
