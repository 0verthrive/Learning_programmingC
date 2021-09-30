Algoritmo "quilometragem"

Var
// Variáveis
  km, multa : real

Inicio
// Entradas
   EscrevaL("Informe a velociade em km/h: ")
   Leia(km)
   se(km <= 0) Entao
   EscrevaL("Não permitido, digite novamente")
   leia(km)
   Fimse
   
// Processamento
   se(km > 80) Entao
      multa <- 5 * (km - 80)
      EscrevaL("Foi adicionado a multa de R$5 reais para cada quilometro acima de 80km/h")
             EscrevaL("Valor da multa a pagar: R$", multa)
      senao
        EscrevaL("Quilometragem dentro do permitido ")

      Fimse
// Saída
Fimalgoritmo