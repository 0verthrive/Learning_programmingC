Algoritmo "semnome"

Var
//Vari�vel
   num : inteiro

Inicio
//Entrada
  EscrevaL("Digite um valor")
  Leia (num)
  
//Processamento e sa�da
  Se (num < 0) Entao
          EscrevaL("N�mero negativo: ", num)
     Senao
       Se(num > 0) Entao
          EscrevaL("N�mero positivo: ", num)
     Senao
          EscrevaL("N�mero igual a 0")
     Fimse
  Fimse

Fimalgoritmo