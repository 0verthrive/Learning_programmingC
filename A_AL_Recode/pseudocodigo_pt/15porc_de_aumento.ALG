Algoritmo "15% de aumento"

Var
// Variáveis
    salario, aumento, salario_final : real
    nome : caracter

Inicio
// Entrada
    EscrevaL("Informe seu nome: ")
    Leia(nome)
    EscrevaL("Informe seu salário: ")
    Leia(salario)
    
// Processamento
    aumento <- 0.15
    salario_final <- salario + (salario*0.15)
// Saída
    EscrevaL("Aumento de 15% para o(a) funcionário(a) ", nome)
    EscrevaL("")
    EscrevaL("O novo valor salarial é:R$", salario_final)
Fimalgoritmo