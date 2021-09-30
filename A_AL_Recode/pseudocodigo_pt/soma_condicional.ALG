Algoritmo "Soma com condicional"

Var
// Variáveis
 num1, num2, soma : real

Inicio
// Entrada
   EscrevaL("Digite o primeiro número: ")
   Leia(num1)
   EscrevaL("Digite o segundo número: ")
   Leia(num2)
   
//Processamento e saída
   soma <- num1 + num2
   
   Se(soma > 10) Entao
           EscrevaL("O valor está acima de 10 sendo: ", soma)
   Senão
           Escreval("Valor inferior a 10 :(")
           Escreval(soma)
   Fimse
Fimalgoritmo