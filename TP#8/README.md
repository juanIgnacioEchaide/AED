TP # 8

Dominio del problema

Se solicita un algoritmo que permita implementar una función partida -<i>piecewise<i>- dentro del dominio de los números reales, 
de modo que se obtengan dos funciones lineales. Una de ellas la denominada función identidad (<i>x<i>) en el caso de que el parámetro o
variable ingresado a la función este fuera del intervalo {-3;3} con una pendiente positiva (<i>inclinada<i> hacia la izquierda), y 
otra que arroje la identidad con pendiente negativa (<i>-x<i>) si el valor numérico ingresado como parámetro se encuentra comprendido en 
el mismo (con la inclinación hacia la derecha).

Refinamiento

Cabe aclarar que la función partida se implementa mediante un operador ternario que evalúa la condición respecto de la pertenencia del valor ingresado como parámetro al intervalo entre -3 y 3, o <i>en todo otro caso<i>, se encuentra fuera de este.

Respecto de las aserciones he tomado valores que se encuentran antes del punto crítico negativo del intervalo (-inf;-3), dentro del intervalo (-3;3), 0 que constituye la única raíz de la función en el caso, y luego del punto crítico positivo (3; +inf).

DIAGRAMA IPO

NASSI SCHNEIDERMANN de la solución

F3: R->R /f(x)= -x si -3<x<3

                 x e.o.c.
