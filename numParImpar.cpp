#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Ingrese un numero"<<endl;
    cin>>num;

    if (num%2==0)
    {
        cout<<"ES PAR";
    }
    else
    {
        cout<<"ES IMPAR";
    }
    
    return 0;
}