AED <br>
K1051 <br>
2019 <br>
169040-1 <br>
Juan Ignacio Echaide	

## Trabajo Práctico Nº8 "Operadores condicionales"

## <strong>a</strong>. Dominio del problema

<P ALIGN="justify">Se solicita un algoritmo que permita implementar una función partida -<i>piecewise</i>- dentro del dominio de los números reales,de modo que se obtengan dos funciones lineales. Una de ellas la denominada función identidad (<i>x</i>) en el caso de que el parámetro o variable ingresado a la función este fuera del intervalo {-3;3} con una pendiente positiva (<i>inclinada</i> hacia la izquierda), y otra que arroje la identidad con pendiente negativa (<i>-x</i>) si el valor numérico ingresado como parámetro se encuentra comprendido en el mismo (con la inclinación hacia la derecha).


## <strong>b</strong>. Dominio de la solución

Se implementa la solución mediante una función que arroja un valor real mediante un tipo de dato <i>double</i>, ponderando la condición de que se halle el valor ingresado comprendido o no en el intervalo {-3;3} mediante un operador ternario que en caso de cumplirse esta premisa arroja la función identidad con pendiente positiva, y en todo otro caso la identidad con pendiente negativa.

## <strong>c</strong>. Refinamiento

<P ALIGN="justify">Cabe aclarar que la función partida se implementa mediante un operador ternario que evalúa la condición respecto de la pertenencia del valor ingresado como parámetro al intervalo entre -3 y 3, o <i>en todo otro caso<i>, se encuentra fuera de este.

<P ALIGN="justify">Respecto de las aserciones he tomado valores que se encuentran antes del punto crítico negativo del intervalo (-inf;-3), dentro del intervalo (-3;3), 0 que constituye la única raíz de la función en el caso, y luego del punto crítico positivo (3; +inf).

### Diagrama IPO

![diagrama IPO8](https://user-images.githubusercontent.com/43832189/59047881-22dfbb00-885b-11e9-8281-22abb4929842.jpg)


### La solución adoptada es la siguiente:

<strong>1</strong>  Se toma un valor real(<i>x</i>) </br>
<strong>2</strong>  Se pondera si está dentro del intervalo {-3;3} </br>
<strong>3</strong> arroja <i>x</i> ò <i>-x</i> según el caso</br>
<strong>4</strong>FIN


### Diagrama Nassi-Schneiderman de la solución:

           
