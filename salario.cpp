
#include<iostream>
using namespace std;

int main(){
    int h_extra,h_total,salario;

    cout<<"Type your worked hours"<<endl;
    cin>>h_total;

    h_extra = h_total-40;

    if(h_total>40){
        salario = (h_total*100)+(h_extra*100*0.5);
        cout<<"You worked "<<h_total<<" hours."<<endl;
        cout<<"Your payment is: "<<salario<<"$."<<endl;
    }
    else{
        salario = (h_total*100);
        cout<<"You worked "<<h_total<<" hours."<<endl;
        cout<<"Your payment is: "<<salario<<"$."<<endl;
    }

    return 0;
}