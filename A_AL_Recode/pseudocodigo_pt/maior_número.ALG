Algoritmo "Maior n�mero"

Var
//Vari�vel
 i, num, maior : inteiro


Inicio
//Entrada
    EscrevaL("Informe 5 n�meros: ")

    maior <- 0
    
//Processamento
   Para i de 0 ate 4 passo +1 Faca
    Leia(num)
             Se (num > maior) Entao
                maior <- num
             Fimse
   Fimpara
   
//Sa�da
    EscrevaL("O maior n�mero informado �: ", maior)

Fimalgoritmo