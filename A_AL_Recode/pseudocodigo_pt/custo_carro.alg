Algoritmo "semnome"

Var
valorfab, valorimp, valordist, valorf : real

Inicio
  escreval("Informe o valor de fábrica: ")
  leia(valorfab)
  
valorimp <- 48
valordist <- 28
valorf <- valorfab + (valorfab * valordist / 100) + (valorfab * valorimp / 100)

escreval("O custo a ser repassado para o consumidor é: ", valorf)
Fimalgoritmo
