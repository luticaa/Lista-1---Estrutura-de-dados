#include <iostream>
using namespace std;
int main()
{
    int lista; //declarando lista
    int count = 0,max = 0,min=9; //contador para descobrir o tamanho da lista e variaveis max e min
    cout<<"Digite uma lista: ";
    cin>>lista; //coletando a lista
    int copia = lista; //trabalhando com copia para no final usarmos no print
    while(copia>=1) // loop para descobrir o tamanho
    {
        copia = copia/10;
        count +=1;
    }
    int A[count] = {}; //estrutura que ira armazenar algarismos para max e min
    copia = lista; //resetando copia
    count = 0;//resetando count
        while(copia>=1) //novo loop para criar os elementos na estrutura A
    {
        A[count] = copia %10; //pega ultimo algarismo, no final nosso numero sera invertido o que nao faz diferença para nosso objetivo  
        copia = copia/10;
        count +=1;
    }
    for (int i = 0; i<count;i++){//loop para achar max e min
        if (A[i] > max)
            max = A[i];
        if (A[i] <min)
            min = A[i];
    }
    printf("A Diferença absoluta é %d\n",(max-min));
    return 0;
}