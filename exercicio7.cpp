#include <iostream>
using namespace std;

void interseccao(int set1[],int first_size,int set2[],int second_size){ //tamanho das listas como ja tinhamos
    int answer =0; //Marcador para juntar o numero resposta e answer para armazenar resultado
    for (int i = 0;i < first_size;i++){
        for (int g = 0;g<second_size;g++){
            if (set1[i]==set2[g]){
                answer = 10 * answer + set2[g];
            }
        }
    }
    printf("A intersecção é: %d\n",answer);
}
void uniao(int cj1[],int first_size,int cj2[],int second_size){// Declaração função União
int answer =0; //Marcador para juntar o numero resposta e answer para armazenar resultado
 // indicador quando um elemento da menor lista ou primeira quando iguais corresponder a maior ou segunda quando iguais
    for (int i = 0;i<first_size;i++){
        bool state = false;
        for (int g = 0;g<second_size;g++){
            if (cj1[i] == cj2[g]){
                state = true;    // elemento igual nao queremos nada com ele buscamos apenas os nao repetidos no menor e depois pegamos todos do maior
                break;
            } else
                continue;
        }
        if (!state){ //verificamos se o elemento nao é repetido se nao for ele vai pra resposta
            answer = 10 * answer + cj1[i];
        }
    }
    for (int j = 0;j<second_size;j++){ //adicionando a resposta um dos arrays inteiro
        answer = 10 * answer + cj2[j];
        //state = false;
    }
    printf("A união é: %d\n",answer);
}
void diferenca(int set1[],int first_size,int set2[],int second_size){ //Declaração função diferenca
    int answer = 0; //numero resposta
    for (int i = 0;i<first_size;i++){ //loop primeira estrutura
        bool flag = false; // sinalizadora se é número repetido
        for (int g = 0;g <second_size;g++){//loop segunda estrutura
            if(set1[i] == set2[g]){ //se igual 'flaga' repetição
                flag = true;
                break; // interrompe pois o numero já repetiu
            }
        }
        if (!flag){ //caso nao seja repetido vira resposta
        answer = answer * 10 + set1[i];
        } 
    }
    printf("A diferença dos conjuntos A - B ou A/B é: %d\n",answer);
}

int main()
{
    int conjunto_1,conjunto_2,count_1=0,count_2=0; //declaração conjuntos 1 e 2
    printf("Digite o conjunto 1: \n"); // leitura conjunto 1
    scanf("%d",&conjunto_1);
    printf("Digite o conjunto 2: \n"); // Leitura conjunto 2
    scanf("%d",&conjunto_2);
    int copia_1 = conjunto_1,copia_2 = conjunto_2; // criando copias para nao precisar alterar as variaveis originais
    while(copia_1 >= 1){  //loop determinar tamanho lista 1
        copia_1 = copia_1/10;
        count_1 ++;
    }
    while(copia_2 >=1){  //loop determinar tamanho lista 2
        copia_2 = copia_2/10;
        count_2 ++;
    }
    int A[count_1],B[count_2];//criando listas vazias para os conjuntos
    copia_1 = conjunto_1,copia_2=conjunto_2; //retornando valores para copias
    for(int i = 0;i < count_1;i++){  //loop preenche lista 1
        A[i] = copia_1 % 10;
        copia_1 = copia_1/10;
    }
    for(int c = 0;c < count_2;c++){  //loop preenche lista 2
        B[c] = copia_2 % 10;
        copia_2 = copia_2/10;
    }
    interseccao(A,count_1,B,count_2);
    uniao(B,count_2,A,count_1);
    diferenca(A,count_1,B,count_2);
    return 0;
}
