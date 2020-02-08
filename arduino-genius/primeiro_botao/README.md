INPUT_PULLUP no Arduino:

a) Altera o comportamento no modo de entrada, havendo uma inversão: HIGH passa a indicar que o sensor está desligado e LOW indica que ele está ligado.

b) Quando ativado, o Arduino usa, internamente, um resistor evitando a necessidade de poluir a protoboard com um resistor adicionado manualmente.

c) Ao conectar um sensor em uma porta configurada como INPUT_PULLUP, a outra deve estar conectada ao terra.

O mais fantástico é que INPUT_PULLUP já vem com um resistor embutido no Arduino, evitando a necessidade de adicionar o resistor manualmente. Esse resistor embutido ou adicionado manualmente - caso estivéssemos usando INPUT - é MUITO importante uma vez que é perigoso enviar uma carga elétrica para uma porta no Arduino.

