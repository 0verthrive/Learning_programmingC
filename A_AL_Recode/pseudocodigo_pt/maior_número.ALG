Algoritmo "Maior número"

Var
//Variável
 i, num, maior : inteiro


Inicio
//Entrada
    EscrevaL("Informe 5 números: ")

    maior <- 0
    
//Processamento
   Para i de 0 ate 4 passo +1 Faca
    Leia(num)
             Se (num > maior) Entao
                maior <- num
             Fimse
   Fimpara
   
//Saída
    EscrevaL("O maior número informado é: ", maior)

Fimalgoritmo