AED <br>
K1051 <br>
2019 <br>
169040-1 <br>
Juan Ignacio Echaide	

## Trabajo Práctico Nº7 "Celsius"

## <strong>a</strong>. Dominio del problema
### Planteo:
<P ALIGN="justify">Se solicita un algoritmo que tomando un valor de temperatura expresado en grados Farenheit, valga decir un valor del conjunto de los números reale, aplique una función previamente dada -Celsius(f)=5/9*(f-3/2)- y permita convertir una magnitud de temperatura en magnitud Celsius.

### Refinamiento problema:

<strong>a</strong> <i>Finitud de las representaciones posibles del resultado  mediante los tipos de datos disponibles</i>

 Los valores de temperatura ingresados como Farenheit, que el algoritmo convierte a Celsius, se corresponden con valores numéricos del conjunto de los reales. Este conjunto es infinito potencialmente, por oposición a la finitud de representaciones posibles propia de los limites de arquitectura física de todo computador. 
 He elegido representar estos valores mediante el tipo de dato punto flotante doble precisión, pese a que su mayor densidad se da en el entorno de 0, y no resulta útil para mediciones de máxima precisión como ser valores de cotización financieros fluctuantes. Ello, debido a que por convención la temperatura suele medirse en un máximo de dos decimales, siendo tolerable el redonde como práctica habitual. Sumado a la universalidad de la convención IEE754 para representar valores mediante precisión doble en 8bytes -<i>double</i>- que facilita el empleo de un código reutilizable -prinicpalmente declaración y definición de la función- en otros lenguajes, brindando mayor eficiencia.  
  
  

### Diagrama:
![IMG](https://user-images.githubusercontent.com/43832189/57878692-f7842600-77f0-11e9-8aec-77436807c872.png)


## <strong>b</strong>. Dominio de la solución
### La solución adoptada es la siguiente:

<strong>1</strong>  Se lee un valor en farenheit (<i>f</i>) </br>
<strong>2</strong>  Se convierte dicho valor convertido en grados celsios mediante la función</br>
<strong>3</strong> Se devuelve un valor como valor double</br>
<strong>4</strong>FIN

### Diagrama Nassi-Schneiderman de la solución:




