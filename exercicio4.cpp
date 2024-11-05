#include<iostream>
using namespace std;
int main(){
    bool allow = true; // boleana para loop while
    int choose; //ecolha usuário
    while(allow){
        cout<<"Por favor escolha uma das opções correspondente a uma operação matematica: "<<endl; // mensagem para entrada
        cout<<"1 (soma +) /// 2 (subtração ) /// 3 (multiplicação ) /// 4 (divisão /) /// 5 (sair)"<<endl;//input da opção
        cin>>choose;
        int a,b;
        switch (choose)
        {
            case 1:
                cout<<"OPERÇÃO ESCOLHIDA: SOMA!!! Digite dois números! "<<endl;
                cin>>a;
                cin>>b;
                cout<<"O resultado da soma de "<<a<<" mais "<<b<<" é: "<<(a+b)<<endl;
                break;
            case 2:
                cout<<"OPERÇÃO ESCOLHIDA: SUBTRAÇÃO!!! Digite dois números! "<<endl;
                cin>>a;
                cin>>b;
                cout<<"O resultado da subtração de "<<a<<" menos "<<b<<" é: "<<(a-b)<<endl;
                break;
            case 3:
                cout<<"OPERÇÃO ESCOLHIDA: MULTIPLICAÇÃO!!! Digite dois números! "<<endl;
                cin>>a;
                cin>>b;
                cout<<"O resultado da multiplicação de "<<a<<" vezes "<<b<<" é: "<<(a*b)<<endl;
                break;
            case 4:
                cout<<"OPERÇÃO ESCOLHIDA: DIVISÃO!!! Digite dois números! "<<endl;
                cin>>a;
                cin>>b;
                cout<<"O resultado da divisão de "<<a<<" dividido por "<<b<<" é: "<<(a/b)<<endl;
                break;
            case 5:
                cout<<"Você selecionou a opção SAIR o programa será terminado!!!";
                allow = false;
                break;
            default:
                cout<<"OPERAÇÃO INVÁLIDA VERIFIQUE A DIGITAÇÃO.";
        }
            
    }   



}