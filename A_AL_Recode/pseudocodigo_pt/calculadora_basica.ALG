Algoritmo "Calculadora básica"

Var
//Variáveis
   num1, num2 : real
   oper : caracter

Inicio
//Entrada
   EscrevaL("Digite o primeiro número: ")
   Leia(num1)
   EscrevaL("Digite a operação a ser realizada: ")
   Leia(oper)
   EscrevaL("Digite o segundo número: ")
   Leia(num2)
   
//Processamento
   Escolha oper
       caso "+"
         EscrevaL("O resultado da soma é: ", num1+num2)
       caso "-"
         EscrevaL("O resultado da subtração é: ", num1-num2)
       caso "*"
         EscrevaL("O resultado da multiplicação é: ", num1*num2)
       caso "/"
            Se (num1 = 0) e (num2 = 0) ou (num1=0) ou(num2=0) Entao
               EscrevaL("Operação inválida")
                 Senao
                   EscrevaL("O resultado da divisão é: ", num1/num2)
            Fimse
       outrocaso
         EscrevaL("Operação inválida")
   Fimescolha
           
Fimalgoritmo