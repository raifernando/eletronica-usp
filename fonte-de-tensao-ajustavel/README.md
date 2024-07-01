
# Cálculos

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
