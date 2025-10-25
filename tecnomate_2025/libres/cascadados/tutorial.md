# Cascadados
Primero resolvamos el problema para una lista con dos elementos (1d4, 1d6).

**Solución particular para [4, 6]:** dada la lista inicial, $E_{4,6}$ representa la cantidad de rondas esperadas (excluyendo la primera) necesarias para ganar el juego comenzando con 1d4 y 1d6.

Luego:

$E_{4,6} = p_{4,6} * (E_{4,6} + 1) + p_4 * E_{4} + p_6 * E_6 + p * E$

Dónde:

$p_{4,6} = \frac{3*5}{4*6}$ 

$p_{4}=\frac{3*1}{4*6}$ 

$p_{6} = \frac{1*5}{4*6}$ 

$p = \frac{1*1}{4*6}$

Luego:

$E_4 = 3$

$E_6 = 5$

$E = 0$

Y:

$E_{4,6} = 5.4$

Para simplificar los cálculos, se puede observar que todos los $p$ poseen el mismo denominador, si definimos a $p'$ como el numerador de $p$:

$E_{4,6} = \frac{p'_{4,6} + p'_{4} * E_{4} + p'_{6} * E_{6}} {\displaystyle \prod_{i \in {4,6}}^{}{i-p'_{4,6}}} = 5.4$

**Solución general:** sea $L$ una lista cualquiera y $S$ el conjunto de todos los posibles subconjuntos de $L$, luego $E_{L}$ puede calcularse:

$E_{L} = \frac{p'_L + \displaystyle \sum_{s \in S, s \neq L}^{}{p'_S * E_S}} {\displaystyle \prod_{i \in L}^{}{i-p'_{L}}}$

Con:

$p'_s = \displaystyle \prod_{i \in s}^{}{(i-1)}$

$p'_L = \displaystyle \prod_{i \in L}^{}{(i-1)}$

**Optimización:** podemos calcular $p'_s * E_{s}$ en lugar de $E_{s}$. También podemos guardar los estados ordenados. 

**Complejidad:** la complejidad final es $O(2^n * n)$ dónde $n$ es el número total de dados en la primera ronda.
