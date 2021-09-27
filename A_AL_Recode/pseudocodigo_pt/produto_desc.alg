Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/9/2021
Var
// Seção de Declarações das variáveis 
valori, desconto, valorf : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o valor do produto: ")
leia(valori)

desconto <- 25
valorf <- valori- (valori * desconto / 100)
escreval("Valor final com o desconto de 25% é: ",valorf)
Fimalgoritmo