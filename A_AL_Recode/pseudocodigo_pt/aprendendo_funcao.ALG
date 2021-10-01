algoritmo "função"
Var
 n, m, x, y, result : inteiro

 funcao soma : inteiro
 var
       aux : inteiro
 inicio
       aux <- n + m
       retorne aux
 fimfuncao
 funcao subtract : inteiro
 var
       aux : inteiro
inicio
       aux <- x - y
       retorne aux
 fimfuncao

 inicio
    n <- 20
    m <- 15
    x <- 20
    y <- 15
 result <- soma // chama a função soma
escreval("O resultado da soma é: ", result)
 result <- subtract // chama a função subtract
escreval("O resultado da subtração: ", result)


 fimalgoritmo