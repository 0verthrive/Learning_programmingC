Algoritmo "Soma com condicional"

Var
// Vari�veis
 num1, num2, soma : real

Inicio
// Entrada
   EscrevaL("Digite o primeiro n�mero: ")
   Leia(num1)
   EscrevaL("Digite o segundo n�mero: ")
   Leia(num2)
   
//Processamento e sa�da
   soma <- num1 + num2
   
   Se(soma > 10) Entao
           EscrevaL("O valor est� acima de 10 sendo: ", soma)
   Sen�o
           Escreval("Valor inferior a 10 :(")
           Escreval(soma)
   Fimse
Fimalgoritmo