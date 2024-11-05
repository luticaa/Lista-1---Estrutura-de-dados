#include <iostream>
using namespace std;
int main()
{
    int capicuia; //declarando o numero
    int count = 0,acertos = 0; //contador para descobrir o tamanho do numero e acertos para determinar capicuabilidade
    cout<<"Entre com seu número para verificar sua capicuabilidade: "<<endl;
    cin>>capicuia; //coletando o numero
    int copia = capicuia; //trabalhando com copia para no final usarmos o capicuia no print
    while(copia>=1) // loop para descobrir o tamanho
    {
        copia = copia/10;
        count +=1;
    }
    int A[count] = {}; //estrutura que ira armazenar algarismos para comparação
    copia = capicuia; //resetando copia
    count = 0;//resetando count
        while(copia>=1) //novo loop para criar os elementos na estrutura A
    {
        A[count] = copia %10; //pega ultimo algarismo, no final nosso numero sera invertido o que nao faz diferença para nosso objetivo  
        copia = copia/10;
        count +=1;
    }
    for (int i = 0;i< count/2;i++) //loop para determinar capiciuia pega o primeiro com o ultimo e assim sucessivamente.
        if (A[i] == A[count-(i+1)]) // se count impar o central sempre igual se par compara as extremidades
            acertos ++;
    if (acertos == count/2)
        cout<<"O número "<<capicuia<<" é um capicuia e pode ser lido da mesma maneira de trás para frente!!!"<<endl;
    else
        cout<<"O número "<<capicuia<<" NÃO é um capicuia!!"<<endl;
    return 0;
}