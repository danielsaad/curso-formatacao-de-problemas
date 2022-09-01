# Descrição

Dada uma sequência $V = (v_1,v_2,\ldots,v_n)$  de inteiros, verifique se existem dois elementos de posições distintas cuja soma seja igual a uma constante $C$, e imprima seus índices, caso existam.

# Entrada

A primeira linha da entrada possui um inteiro $N$ ($1\leq N \leq 10^5$) e a constante $C$ ($1\leq C \leq 10^9$), separados por um espaço. A próxima linha possui $N$ inteiros $v_1,\ldots,v_n$ ($1\leq v_i \leq 10^9$), os quais descrevem a sequência.

# Saída

Imprima uma linha com os índices dos elementos cuja soma é $C$, caso hajam tais elementos, e em caso contrário, imprima uma linha com o valor $-1$.

# Notas

No primeiro exemplo, os elementos $v_2=2$ e $v_6=6$ somam $8$.

No segundo exemplo, não há elementos em posições distintas de $v$ que somam $11$.

No terceiro exemplo, os elementos $v_5=6$ e $v_1=10$ somam $16$.

# Tutorial

Para resolver este problema eficientemente, uma estratégia é ordenar a sequência $V$ e, para cada elemento $v'_i$ da sequência ordenada, verificar se existe algum $v'_j$ igual a $C-v'_i$ através da busca binária. A complexidade desta solução é $\Theta(N\lg N)$.