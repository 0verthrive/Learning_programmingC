algoritmo "fun��o"
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
 result <- soma // chama a fun��o soma
escreval("O resultado da soma �: ", result)
 result <- subtract // chama a fun��o subtract
escreval("O resultado da subtra��o: ", result)


 fimalgoritmo