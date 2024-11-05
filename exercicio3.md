Questão 3. Em Python, podíamos escrever um programa que lia valores inteiros em variáveis x e y e trocava o conteúdo das variáveis sem o auxílio de uma variável auxiliar. 
Em C isso é possível? Explique.

Resposta: Isso de deve ao fato de que em python temos um gerenciamento dinâmico de memória e nos bastidores
a linguagem consegue criar um novo endereço de memória sem perder os dados atuais. Em C como o gerenciamento
da memória é estático não podemos realizar esta operação automaticamente, sendo necessária uma variável auxiliar.
Precisamos saber que python trata tudo inclusive os tipos primitivos como objetos, armazenando suas referencias
na STACK sendo ligadas a um endereço de memória no HEAP. em outras linguagens como Javascript por exemplo
os tipos primitivos ficam diretamente na STACK e os objetos no HEAP.


