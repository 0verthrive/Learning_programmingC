Algoritmo "Saldo dispon�vel"

Var
// Vari�veis
   saldo, saque : real

Inicio
// Entrada
   EscrevaL("Informe o valor para saque: ")
   Leia (saque)
   
// Processamento e sa�da
   saldo <- 1000

  Se (saque > 1000) Entao
     EscrevaL("Saldo indispon�vel para saque")
     EscrevaL("Saldo dispon�vel de: ", saldo)

  Senao
     EscrevaL("Saque de", saque," autorizado")
     EscrevaL("Saldo dispon�vel atualizado: ", saldo - saque)
  Fimse
Fimalgoritmo