Algoritmo "media"

Var
// Vari�veis
  nome : caracter
  num1, num2, media : real

Inicio
// Entrada
    EscrevaL("Informe o nome do aluno: ")
    Leia(nome)
    EscrevaL("Informe a primeira nota: ")
    Leia(num1)
    EscrevaL("Informe a segunda nota: ")
    Leia(num2)

// Processamento
   media <- (num1+num2)/2

// Sa�da
    EscrevaL("")
    EscrevaL("A m�dia do(a) ", nome," �: ", media)

   Se(media >= 6) Entao
      EscrevaL("Aluno aprovado!")
   Senao
      EscrevaL("Aluno reprovado!")
   Fimse
Fimalgoritmo