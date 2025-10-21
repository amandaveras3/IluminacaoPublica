# 💡 Iluminação Pública Inteligente com LDR

Este projeto demonstra o funcionamento de um sistema de iluminação pública automatizado utilizando um **sensor LDR** e **LEDs controlados pelo Arduino UNO**.  
O objetivo é acender as luzes automaticamente quando o ambiente escurece e apagá-las quando há luminosidade suficiente.

## ⚙️ Funcionamento
O sensor LDR (Light Dependent Resistor) envia valores de luminosidade para o Arduino.  
Conforme o valor diminui (noite chegando), o sistema ativa progressivamente os LEDs conectados aos pinos digitais de 2 a 13.  
Durante o dia, quando a luz aumenta, os LEDs se apagam de forma gradual.

## 🔩 Componentes
- 1 Arduino Uno  
- 1 Sensor LDR  
- 12 LEDs  
- 12 Resistores (220 Ω)  
- 1 Resistor de 10 kΩ (para o LDR)  
- Jumpers e Protoboard  

## 🔌 Conexões
- LDR → A0 (analógico)  
- LEDs → Pinos 2 a 13  
- Resistores → Em série com cada LED  
- GND e 5V → Alimentação do circuito  

## 🧠 Conceito
O projeto simula um **sistema de iluminação pública inteligente**, que reage à luz ambiente.  
É uma aplicação prática de automação com sensores e microcontroladores.

## 👩‍💻 Desenvolvido por
**Amanda Felix Veras**

## 🕹️ Plataforma de Simulação
[Tinkercad Circuits](https://www.tinkercad.com/)
