Algoritmo "Antes e depois"

Var
// Vari�veis
   ant, suc, num : inteiro

Inicio
// Entrada
     EscrevaL("Informe um n�mero: ")
     Leia(num)
     
// Processamento
     ant <- num - 1
     suc <- num + 1
     
//Sa�da
      EscrevaL("O valor anterior de ", num," �: ", ant)
      EscrevaL("")
      EscrevaL("O valor posterior de ", num," �: ", suc)
      
Fimalgoritmo