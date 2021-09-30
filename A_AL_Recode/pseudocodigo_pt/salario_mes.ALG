Algoritmo "salário do mês"

Var
// Variáveis
    salario, valor_h : real
    hora, dias : inteiro

Inicio
// Entradas
    EscrevaL("Informe os dias trabalhados: ")
    Leia(dias)
    EscrevaL("Informe as horas trabalhadas: ")
    Leia(hora)
    EscrevaL("Informe o valor da hora trabalhada: ")
    Leia(valor_h)

// Processamento
    salario <-(hora*valor_h)*dias
    
// Saída
   EscrevaL("Valor salarial para receber esse mês:R$", salario:1:2)
    
Fimalgoritmo