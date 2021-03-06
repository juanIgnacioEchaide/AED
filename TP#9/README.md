
AED <br>
K1051 <br>
2019 <br>
169040-1 <br>
Juan Ignacio Echaide	

## Trabajo Práctico Nº9 "IsBisiesto"

## <strong>a</strong>. Dominio del problema

<P ALIGN="justify">Se solicita un algoritmo que permita determinar mediante una función lógica si un año ingresado es bisiesto o no, es decir si tiene 366 días, como consecuencia del error del calendario solar gregoriano establecido en Europa en el año y difundido hoy de manera global.


## <strong>b</strong>. Dominio de la solución

<P ALIGN="justify">El algoritmo matemático, dentro del conjunto de los números enteros, que permite determinar si se trata de un año bisiesto consiste en evaluar la divisibilidad del valor numérico del año, por 4, por 100, y por 400. Si el número es divisible por 4, valga decir arroja resto 0 al dividirlo por 4, se trata de un año bisiesto, en su defecto para ser bisiesto debe no ser divisible por 100 y si serlo por 400.

## <strong>c</strong>. Refinamiento

<P ALIGN="justify">Pese a la relativa simplicidad para declarar y definir la función en la sintaxis de lenguaje de C++ en el léxico matemático cabe detenerse en la expresión más acorde para el planteo. Me he decidido por utilizar la relación de congruencia modular dado que se emplea para la aritmética centrada en la divisibilidad y consideración del resto arrojado por los cocientes para relacionar números enteros, y por su habitualidad en el ámbito de la matemática discreta que la hace más afín a la programación.

<P ALIGN="justify">De modo que si el resto de dividir el año por 4 es 0, el valor entero representado por el año es congruente con 0 (mod 4), permitiendo expresar la primer condición. Lo mismo para el caso de la incongruencia modular, en el caso de la segunda condición condición, con 0 (mod 100). Otro tanto, para la tercera donde debe ser congruente, nuevamente, pero con 0 (mod 400).    

<P ALIGN="justify">Por tanto, la función booleana IsBisiesto() arrojara valor verdadero (<i>true</i>) si se cumple que el valor del año sea congruente 0 (mod 4) o, si es incongruente 0 (mod 100) y congruente 0 (mod 400). En otro caso, arrojará valor <i>false</i>. A tal fin se disponen las aserciones verdaderas y falsas con años posteriores a   , que se sabe son bisiestos y no bisiestos, respectivamente.

### Diagrama IPO
![diagrama IPO](https://user-images.githubusercontent.com/43832189/59051034-5540e680-8862-11e9-9a24-2b5aed743736.jpg)


### La solución adoptada es la siguiente:

<strong>1</strong>  Se toma un valor entero(<i>y</i>) </br>
<strong>2</strong>  Se evalua si es divisible por 4</br>
<strong>3</strong> Se evalua si no es divisible por 100 y si lo es por 400</br>
<strong>4</strong> arroja <i>V</i> ò <i>F</i> según sea bisiesto o no el año</br>
<strong>5</strong>FIN

#### Diagrama Nassi-Schneidermann de la solución
![NS 9](https://user-images.githubusercontent.com/43832189/59051619-b321fe00-8863-11e9-9679-b41640ebf0c9.jpg)
