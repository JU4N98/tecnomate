# Desafio

Queremos que el area sea de un triangulo, por lo que debe cumplir con B*H/2 = N*M/K, entonces 2*N*M/K = B*H. Ahora, por ser un poligono con sus puntos en puntos enteros, su area multiplicada por 2 siempre sera un entero (por teorema de pick). Luego, B*H es entero, entonces 2*N*M/K tambien. Luego, queda determinar B y H. Podemos hacer K=Q*R y determinar Q=gcd(N,K) y R=K/Q. Entonces, si este Q!=1, B=2*N/Q siempre será menor o igual a N y H=M/R, quedando menor a M. Sino, se intercambian R y Q.
