#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese un numero positivo o negativo"<<endl;
    cin>>n;

    if(n>=0){
        cout<<"ES POSITIVO"<<endl;
    }
    else
    {
        cout<<"Es negativo"<<endl;
    }
    
    return 0;
}