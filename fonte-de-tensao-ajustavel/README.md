# Fonte de tensão ajustável

O projeto desejado era uma fonte de tensão ajustável entre 3-12V de tensão, podendo ser escolhida pelo potenciômetro integrado no circuito. Seu funcionamento deve se assemelhar a um carregador de celular. 

## Componentes

| Quantidade    | Componente    | Valor unitário  | Valor total |
| :-------------:|:-------------:| :-----:|:----:|
| 1            | Protoboard BB-01 840 | R$39,10 |R$ 39,10 |
| 1           | LED Vermelho      |   R$0,50 |R$0,50  |
| 2            | Resistor CR25 1K |    R$0,07 |R$0,14 |
| 1            | Resitor CR25 4K7     |   R$0,07 |R$0,07  |
| 1            | Resitor CR25 68R     |   R$0,07 |R$0,07  |
| 1            | Potenciômetro 1W B10K   |   R$7,00 |R$7,00  |
| 1            | Capacitor 680uF 50V   |   R$5,00 |R$5,00  |
| 1            | Diodo Zener 13V 1W  |   R$0,50 |R$0,50  |
| 1            | Transistor 100V  |   R$0,80 |R$0,80  |
| 4            | Diodo Retificador  |   R$0,20 |R$0,80  |
| 25            | Jumpers macho x macho|    R$0,25 |R$6,25 |
|             |   |    |R$60,23 |

## Circuito 


![foto-circuito-fonte](https://github.com/raifernando/eletronica-usp/assets/123335088/95179c67-911d-4a9d-a149-7dfde636afcd)


[Vídeo explicação do circuito](https://drive.google.com/file/d/1tG552RtU_R4QFreADZNk3LUqsmcV1s8X/view?usp=sharing)

#### FALSTAD

Simulação no Falstad

![circuito-falstad](https://github.com/raifernando/eletronica-usp/assets/123335088/e63a948f-60bf-4a57-b7b4-b4335acfc22b)

[Link circuito](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWEAOM0CcAmSAWMA2SAdn3xLCQXxCRwGYaBTAWjDACgAVEZ-HEephB0h+TP0gCo0MNiJFM6HPmQJ06SHTroeMYsk2RMYhOLoIEFHmnNg4BdHVWIwdFsmnr07AG7XCAiL+kmIS4CABYAZQMTAI7ADuwRHiPHwpEuwAThHIHpaieRkxspDsACbCQoIgmKk1QmAAcjhwOOwAxlWSNSIhqZJ6cCq1MJgU5hZKxHQkRNL2ibX1QX2BQmWVQaHL-A3gLW1LaztgOPw7m+DnxdupjYe4FdcXqUH7za1PBNXvf9XoahCcqMABmAEMAK4AGwALsxoYxKhBBgsODkajhAetipI7HAljUdicBoT-t0cWUAM7WTAeGrMbE1VEQ6FUxhLVh0nGsALMzlMoK8PZBMqwmhYATYnZY6h43TQZREPBEdAEUoGfDYmBEM7IOiQUx8Vz4WaNOAgEEQmGwpY7Aq5fKyKB2or2m6XJYID31aWksDKmg3B3e-gIEjhfEWoZIABKjCpAEsqbDwQA7DocpJqIShmgBPNlJKY96CjZeyWyiW5m5lDFlqXUKt4+B2lYApui9h0fgALx8AHs4eCAOaMAA6AEdXCVoLr6KZUFgDHl9Sx5pJGgwyr3G8Uq1WhP2h6mx1PXIS-SLRKTi0zsXnm17g87H9rskGwxG85cBEQCSOFLEtgEStLEH4yncezRCEyDsAAHiAChftQJD5KqUhWJm0IwuCWTsAO4TpD0kDqBSMAeJu4R0ARwigSUdRquAmAyI4cDIOo4bmOYcoyJABCQMgrTIIo8hKKa4RCAwDAAMKMDh0J4bRSDEQIpE6GB+CKrUOlIDRQA)

#### EAGLE

Circuito no EAGLE

![fonte_circuito](https://github.com/raifernando/eletronica-usp/assets/123335088/f691ac04-5668-46cc-853e-2a9edd2df712)

#### PCB

Circuito no PCB

![fonte-pcb](https://github.com/raifernando/eletronica-usp/assets/123335088/b8f971a3-8b4b-4c69-aa15-879e7ae547c1)

https://github.com/raifernando/eletronica-usp/assets/123335088/2a7e3c7a-90fd-4305-91a7-0b49e7de1a2d






## Cálculos

#### Tensão de pico da fonte: 
$$ 127 * \sqrt{2} = 179V $$

#### Tensão de pico do circuito (usando um transformador de razão 8,3):

$$ 179 / 8,3 = 21,56V $$

#### Tensão após ponte de diodos: 
$$ 21,56 - 0,7 * 2 = 20,16V $$

#### Ripple:
A resistência do circuito foi aproximadamente 160Ω, assim:

$$ Ripple = \frac{1}{2 * 60 * 680 * 10^-6 * 160} = 0,076\\% $$

$$ V_{ripple} = 0,076 * 20,16 = 1,54V $$

#### Corrente:
No momento em que tem a maior tensão (20,16V):

$$ i = \frac{V}{R} = \frac{20,16}{160} = 126 mA $$

#### Capacitor:
$$ C = \frac{i}{V_{ripple} * frequencia} = \frac{0,126}{1,54 * 120} = 681\micro F$$

## Integrantes
* Caio Draco Araujo Albuquerque Galvao - 15573731
* Luis Guilherme Zanetti - 15652750	
* Raí Fernando Dal Prá - 15506968
