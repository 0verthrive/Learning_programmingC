Algoritmo "15% de aumento"

Var
// Vari�veis
    salario, aumento, salario_final : real
    nome : caracter

Inicio
// Entrada
    EscrevaL("Informe seu nome: ")
    Leia(nome)
    EscrevaL("Informe seu sal�rio: ")
    Leia(salario)
    
// Processamento
    aumento <- 0.15
    salario_final <- salario + (salario*0.15)
// Sa�da
    EscrevaL("Aumento de 15% para o(a) funcion�rio(a) ", nome)
    EscrevaL("")
    EscrevaL("O novo valor salarial �:R$", salario_final)
Fimalgoritmo