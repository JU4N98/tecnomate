# _SpeedForces_

Podemos recorrer el arreglo de competencias de derecha a izquierda, y llevamos un nuevo vector $ELO$ y una suma $SUM$:
- Si vemos una prediccion del tipo "+ E":
  -  Si $E > 0$, actualizamos $SUM += E$ y asignamos $ELO_i=SUM$.
  -  Si $E < 0$, asignamos $ELO_i=SUM$.
- Si vemos una prediccion del tipo "= E":
  -  Si $E > 0$, asignamos $ELO_i=SUM+E$.
  -  Si $E < 0$, asignamos $ELO_i=SUM$.

Luego la respuesta a cada consulta es $max(ELO_i)-SUM_{R+1}$, $L <= i <= R$. $SUM_{R+1}$ se puede guardar en un vector auxiliar y accederse en $O(1)$ pero para hallar el maximo en un rango... segment tree! en $O(log_2(N))$ por consulta. La complejidad total es $O((C + N)*log_2(N))$.
