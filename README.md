# Curso de Formatação de Problemas

Material do Curso de Formatação de problemas, desenvolvido por: 
- Prof. Bruno Ribas (UnB/FGA)
- Prof. Daniel Saad (IFB/Taguatinga)
- Prof. Edson Alves (UnB/FGA)
- Prof. John Gardenghi

## Polygon Codeforces

- Os slides referentes à plataforma de formatação de problemas Polygon Codeforces, se encontra [aqui](polygon-codeforces.pdf).
- Os códigos fontes utilizados na formatação do problema exemplo, incluindo o enunciado do problema, encontram-se [aqui](soma-igual-polygon)
- Adicionalmente, um video sda apresentação dos slides também está disponível no [Youtube](https://www.youtube.com/watch?v=ZAYu5ap4CCY).

### Instruções para Formatação do Problema Soma Igual

1. Realize login na plataforma polygon.codeforces.com e crie um novo problema.
2. Insira as informações sobre o enunciado do problema na aba `Statement`.
3. Na aba `Files` insira os arquivos `checker.cpp`, `validator.cpp` e `generator.cpp`, que são, respectivamente, o corretor customizado, o validador de entradas e o gerador de entradas (ou casos de testes).
4. Na aba `Checker`, escolha o arquivo `checker.cpp` como corretor.
5. Na aba `Validator`, escolha o arquivo `validator.cpp` como validador.
6. Em `Tests`, informe a linha de comando `generator > {1-148}` para gerar os 148 casos de teste
7. Na aba `Solution Files`, insira os arquivos `ac.cpp`, `ac2.cpp` e `tle.cpp`. Os vereditos esperados para estes códigos devem ser rotulados como `Main Correct Solution`, `Correct Solution`e `Time Limit Exceeded`.
8. Em `Invocations`, execute todas as soluções contra todos os casos de teste e observe se os vereditos estão de acordo com os rótulos.
9. Volte na aba `Testes` e marque os três primeiros exemplos como *Example*, eles constarão no enunciado do problema.
10. Realize o *commit* das modificações.
11. Gere o pacote do problema na aba `Packages`, modo standard ou full. 