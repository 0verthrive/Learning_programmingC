Algoritmo "Antes e depois"

Var
// Variáveis
   ant, suc, num : inteiro

Inicio
// Entrada
     EscrevaL("Informe um número: ")
     Leia(num)
     
// Processamento
     ant <- num - 1
     suc <- num + 1
     
//Saída
      EscrevaL("O valor anterior de ", num," é: ", ant)
      EscrevaL("")
      EscrevaL("O valor posterior de ", num," é: ", suc)
      
Fimalgoritmo