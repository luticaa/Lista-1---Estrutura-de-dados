#include <iostream>
using namespace std;
int main()
{
    int milheiro;
    cout<<"Digite seu milheiro (número de 4 dígitos): "<<endl;
    cin>>milheiro;
    int final = milheiro % 100;
    cout<<final<<endl;;
    int inicial = milheiro/100;
    cout<<inicial<<endl;
    if (milheiro == (final+inicial)*(final+inicial)){
        cout<<"O número "<<milheiro<<" possui as propriedades procuradas!!!"<<endl;
    }
    else{
        cout<<"O número "<<milheiro<<" não possui as propriedades procuradas!!!"<<endl;
    }
    return 0;
}