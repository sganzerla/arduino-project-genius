# arduino-project-genius
 
Projeto com arduino para desenvolver uma aplicação similar ao dispositivo de repetição/memorização de sequência de cores "Genius".

## Hardware necessário
```
- 1 Placa Arduino com cabo USB (A)
- 4 Resistores de 220 Ohm ou 330 Ohm (B)
- 4 LEDS comuns de 4mm (cada um de uma cor diferente) (C)
- 4 Botões de 2 ou 4 pinos (D)
- 1 Protoboard (E)
- 25 Cabos de conexão (F)
```

### Software necessário

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

### Software p/ gerar esquemas de circuitos elétricos 

  Útil para documentar projetos

- Versão paga [Fritzing](https://fritzing.org/home/)

- Versão antiga gratuita, pode ser atualizada para a nova [Fritzing](https://softfamous.com/fritzing/download/)

### Ambiente Virtual de Hardware e Software 
- [TinkerCad](https://www.tinkercad.com) basta realizar cadastro e será possível simular tanto componentes de hardware quanto a lógica de programação envolvida no circuito.

 ### Placa Arduino com cabo USB (A)
 Porta de 5V e 40mA
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png" alt="reset" style="max-width:100%;"></a></p> 

 ### Resistores de 220 Ohm ou 330 Ohm (B)
 Diminuir a tensão, instalada entre o GND e o terra do LED
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710133-ea41fb00-46e1-11ea-8507-dfc8e3a84346.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710133-ea41fb00-46e1-11ea-8507-dfc8e3a84346.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### LEDS comuns de 4mm (C)
  Diodo com 2V e 15mA, perna maior ligada no positivo
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png" alt="reset" style="max-width:100%;"></a></p> 
 
 ### Botões de 2 ou 4 pinos (D)
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710617-49543f80-46e3-11ea-9885-b826f5da2286.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710617-49543f80-46e3-11ea-9885-b826f5da2286.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### Protoboard (F)
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png" alt="reset" style="max-width:100%;"></a></p> 

  ### Cabos de conexão (G)
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png">
  <img src="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png" alt="reset" style="max-width:100%;"></a></p> 

## Instalação dos Leds
Perna maior do LED é ligado no positivo e a perna menor precisa de um resistor de 220 ou 330 Ohm entre a ligação com o GND
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png">
  <img src="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png" alt="reset" style="max-width:100%;"></a></p> 
  
  ## Fórmula Lei de Ohm
  V = R * I
  
 > O "I" significa a intensidade da corrente elétrica, no entanto, muitas vezes se fala apenas da corrente elétrica (sem a palavra intensidade). Quando existe uma diferença de potencial elétrico entre componentes (polarizado) acontece um fluxo de partículas que equilibra o campo elétrico. Esse fluxo é a corrente elétrica.
 
> A corrente elétrica é medida em Ampere (A) que nada mais é do que a quantidade de elétrons que passa nesse fio em um tempo determinado!

> A tensão elétrica (V) é medida em Volts (V) (em homenagem ao físico Alessandro Volta).

> A resistência (R) é medida em Ohm (Ω) e a intensidade da corrente elétrica (I) em Ampere (A).

> A relação entre tensão, resistência e intensidade da corrente define a Lei de Ohm: V = R * I

> Para calcular a corrente: I = V / R

> Para calcular a resistência: R = V / I

> Para calcular a tensão: V = R * I

### Tabela de Cores dos resistores na convenção internacional
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png">
  <img src="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Protótipo de Circuito
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/75001439-12e72600-5440-11ea-8358-4ccea83d207b.png">
  <img src="https://user-images.githubusercontent.com/22710963/75001439-12e72600-5440-11ea-8358-4ccea83d207b.png" alt="reset" style="max-width:100%;"></a>
</p> 



  
