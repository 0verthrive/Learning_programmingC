Algoritmo "sal�rio do m�s"

Var
// Vari�veis
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
    
// Sa�da
   EscrevaL("Valor salarial para receber esse m�s:R$", salario:1:2)
    
Fimalgoritmo