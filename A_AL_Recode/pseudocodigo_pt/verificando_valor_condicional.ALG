Algoritmo "semnome"

Var
//Variável
   num : inteiro

Inicio
//Entrada
  EscrevaL("Digite um valor")
  Leia (num)
  
//Processamento e saída
  Se (num < 0) Entao
          EscrevaL("Número negativo: ", num)
     Senao
       Se(num > 0) Entao
          EscrevaL("Número positivo: ", num)
     Senao
          EscrevaL("Número igual a 0")
     Fimse
  Fimse

Fimalgoritmo