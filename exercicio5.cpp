#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"DIGITE UM NÚMERO INTEIRO PARA VERIFICAR A DIVISIBILIDADE SIMULTÂNEA POR 3 E 5"<<endl;
    cin>>x;
    if ((x%3 == 0) && (x%5 == 0))
        cout<<"O número "<<x<<" é divisível por 3 e 5 simultaneamente"<<endl;
    else
        cout<<"O número "<<x<<" não é divisível por 3 e 5 simultaneamente"<<endl;
    return 0;
}