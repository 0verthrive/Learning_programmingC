Algoritmo "Calculadora b�sica"

Var
//Vari�veis
   num1, num2 : real
   oper : caracter

Inicio
//Entrada
   EscrevaL("Digite o primeiro n�mero: ")
   Leia(num1)
   EscrevaL("Digite a opera��o a ser realizada: ")
   Leia(oper)
   EscrevaL("Digite o segundo n�mero: ")
   Leia(num2)
   
//Processamento
   Escolha oper
       caso "+"
         EscrevaL("O resultado da soma �: ", num1+num2)
       caso "-"
         EscrevaL("O resultado da subtra��o �: ", num1-num2)
       caso "*"
         EscrevaL("O resultado da multiplica��o �: ", num1*num2)
       caso "/"
            Se (num1 = 0) e (num2 = 0) ou (num1=0) ou(num2=0) Entao
               EscrevaL("Opera��o inv�lida")
                 Senao
                   EscrevaL("O resultado da divis�o �: ", num1/num2)
            Fimse
       outrocaso
         EscrevaL("Opera��o inv�lida")
   Fimescolha
           
Fimalgoritmo