Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/9/2021
Var
// Seção de Declarações das variáveis 
 valorfab, valorimp, valordist, valorf : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
  escreval("Informe o valor de fábrica: ")
  leia(valorfab)
  
valorimp <- 48
valordist <- 28
valorf <- valorfab + (valorfab * valordist / 100) + (valorfab * valorimp / 100)

escreval("O custo a ser repassado para o consumidor é: ", valorf)
Fimalgoritmo