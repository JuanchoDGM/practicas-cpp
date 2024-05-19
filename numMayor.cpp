#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2,n3;

    cout<<"Ingrese el primer numero"<<endl;
    cin>>n1;

    cout<<"Ingrese el segundo numero"<<endl;
    cin>>n2;

    cout<<"Ingrese el tercer numero"<<endl;
    cin>>n3;

    if (n1>n2 && n1>n3)
    {
        cout<<"El numero "<<n1<<" es mayor."<<endl;
    }
    else if (n1==n2 && n1==n3)
    {
        cout<<"Los numeros son iguales"<<endl;
    }
    else if (n2>n1 && n2>n3)
    {
        cout<<"El numero "<<n2<<" es mayor"<<endl;
    }
    else
    {
        cout<<"El numero "<<n3<<" es mayor."<<endl;
    }
    
    
    return 0;
}
