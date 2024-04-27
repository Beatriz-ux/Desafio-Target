# Desafio Target

## Resposta das questões discursivas
**Questao 1 - Qual será o valor da variável SOMA**
- O valor impresso será 91.

**Questao 3 - Descubra a lógica e complete o próximo elemento:**
- a) Esta sequência é composta pelos números ímpares em ordem crescente. O próximo elemento é 9.

- b) Esta sequência parece ser uma progressão geométrica, onde cada número é o dobro do anterior. Seguindo essa lógica, o próximo número seria 128

- c) Esta sequência  é uma sequência de quadrados perfeitos começando de 0. O próximo elemento é 49.

- d) Esta sequência é composta pelos quadrados dos números pares em ordem crescente. Seguindo essa lógica, o próximo elemento é 100.

- e) Esta sequência é a sequência de Fibonacci, onde cada número é a soma dos dois números anteriores. Seguindo essa lógica, o próximo número é 13.

- f) Esta sequência parece ser uma combinação de números aleatórios. No entanto, podemos observar que a diferença entre os números adjacentes é variável. O próximo elemento é 20.

**Questao 4 - Desafio das Lâmpadas**
- Observação : Vamos adotar que cada sala se chame A, B e C respectivamente e os interruptores 1 , 2 e 3;
- Passo 1: um ligo o interruptor 1 por 10 minutos e depois o apago, logo em seguida ligo o interruptor 2
- Passo 2: Primeira ida a sala, entro na sala A e verifico :
    - Caso 1 : Se a sala A estiver acessa o interruptor correcpondente é o 2;
    - Caso 2 : Se a sala A estiver com a luz apagada, mas a lâmpada estiver quente o interruptor correspondente é o 1;
    - Caso 3 : Nenhum dos casos acima, entao é o interrupto 3;
- Os proximos passos seguem de acordo com oque que foi analisado
- Caso 1 (A-2):
    - Passo 3:Na sala onde estão os interruptores ligo o interruptor 1 e desligo os outros dois;
    - Passo 4: Segunda ida a sala, entro na sala B e verifico:
    ***A lâmpada da sala B esta acessa, então a correspondencia sala e interruptor é : A-2 , B-1 e C-3***
    ***A Lâmpada da sala B esta apaga, então a correspondencia sala e interruptor é : A-2, B-3 e C-1***
- Caso 2 (A-1):
    - Passo 3:Na sala onde estão os interruptores ligo o interruptor 2 e desligo os outros dois;
    - Passo 4: Segunda ida a sala, entro na sala B e verifico:
    ***A lâmpada da sala B esta acessa, então a correspondencia sala e interruptor é : A-1 , B-2 e C-3***
    ***A Lâmpada da sala B esta apaga, então a correspondencia sala e interruptor é : A-1, B-3 e C-2***

- Caso 1 (A-3):
    - Passo 3:Na sala onde estão os interruptores ligo o interruptor 2 e desligo os outros dois;
    - Passo 4: Segunda ida a sala, entro na sala B e verifico:
    ***A lâmpada da sala B esta acessa, então a correspondencia sala e interruptor é : A-3 , B-2 e C-1***
    ***A Lâmpada da sala B esta apaga, então a correspondencia sala e interruptor é : A-3, B-1 e C-2***


## Resumo dos Programas

### Programa de Sequência de Fibonacci
- **Descrição:** Este programa calcula a sequência de Fibonacci até um número fornecido pelo usuário e verifica se um número informado pertence ou não a essa sequência.
- **Arquivos:** `fibonacci.h`, `fibonacci.cpp` e `main.cpp`.
- **Como Executar:** dentro do diretorio /SequenciaFibonacci, execute os codigos abaixo:
  ```
  g++ -o fibonacci main.cpp fibonacci.cpp

  ./fibonacci
  ```

### Programa de Inversão de String
- **Descrição:** Este programa solicita ao usuário que digite uma string e inverte os caracteres dessa string.
- **Arquivos:** `inverte_string.h`, `inverte_string.cpp` e `main.cpp`.
- **Como Executar:** dentro do diretório /InverteString, execute os codigos abaixo:
  ```
  g++ -o inverte main.cpp inverte_string.cpp

  ./inverte
  ```

## Requisitos
- Compilador C++ (por exemplo, g++) instalado no sistema.
