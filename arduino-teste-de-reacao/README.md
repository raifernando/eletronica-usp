# Teste de reação


### Projeto

O circuito do nosso projeto simula um teste de reação, medindo a diferença de tempo entre um estímulo visual e a ação de apertar um botão. Nele, há um LED que serve para o estimulo visual, um botão e 3 displays de 7-segmentos que mostram essa diferença de tempo.

### Componentes

| Quantidade    | Componente    | Valor unitário  | Valor total |
| :-------------:|:-------------:| :-----:|:----:|
| 1            | Protoboard BB-01 840 | R$39,10 |R$ 39,10 |
| 1           | LED Vermelho      |   R$0,50 |R$0,50  |
| 1           | Botão 4 pinos    |    R$0,50 | R$0,50 |
| 3            | Display 7-SEG |   R$4,00 |R$12,00 |
| 4            | Resistor CR25 1K |    R$0,07 |R$0,28 |
| 2            | Resitor CR25 4K7     |   R$0,07 |R$0,14  |
| 35            | Jumpers macho x macho|    R$0,25 |R$8,75 |
|             |   |    |R$61,27 |

O Arduino utilizado foi o UNO R3.

### Circuito 

![20240630_172625](https://github.com/raifernando/eletronica-usp/assets/123335088/8612a8ea-bde4-4fe2-80f2-f7aca293238c)

### O jogo

O circuito funciona da seguinte forma: quando o botão é apertado, o LED é aceso em um tempo aleatório de 2 a 5 segundos e o jogador precisa apertar o botão novamente o mais rápido possível. Após apertado, é mostrado no display o tempo de reação (diferença de tempo entre a LED acender e o botão ser pressionado) em milissegundos. Para jogar novamente é preciso apertar o botão. 

É salvo o tempo mais rápido desde o início e, caso esse tempo seja batido, o tempo mostrado no display pisca 3 vezes, indicando que o tempo recorde foi batido.

Devido à limitação de entradas do Arduino só foi possível utilizar 3 displays, dessa forma, o tempo máximo computado é de 999ms.

https://github.com/raifernando/eletronica-usp/assets/123335088/c60eca71-357c-414b-8887-1eecc6d54c66

### Integrantes
* Caio Draco Araujo Albuquerque Galvao - 15573731
* Luis Guilherme Zanetti - 15652750	
* Raí Fernando Dal Prá - 15506968
