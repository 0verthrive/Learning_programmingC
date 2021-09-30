Algoritmo "Saldo disponível"

Var
// Variáveis
   saldo, saque : real

Inicio
// Entrada
   EscrevaL("Informe o valor para saque: ")
   Leia (saque)
   
// Processamento e saída
   saldo <- 1000

  Se (saque > 1000) Entao
     EscrevaL("Saldo indisponível para saque")
     EscrevaL("Saldo disponível de: ", saldo)

  Senao
     EscrevaL("Saque de", saque," autorizado")
     EscrevaL("Saldo disponível atualizado: ", saldo - saque)
  Fimse
Fimalgoritmo