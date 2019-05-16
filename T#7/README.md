AED <br>
K1051 <br>
2019 <br>
169040-1 <br>
Juan Ignacio Echaide	

## Trabajo Práctico Nº7 "Celsius"

## <strong>a</strong>. Dominio del problema
### Planteo:
Se solicita un algoritmo que tomando un valor de tipo punto flotante -que corresponde indentificar con valores del conjunto de los números reales- aplique una función previamente dada -Celsius(f)=5/9*(f-3/2)- y permita convertir una magnitud de temperatura en sistema farenheit a las magnitudes en grados celsios.

### Refinamiento problema:
El planteo en cuestión ofrece ofrece dos dificultades en relación a la magnitud que la función debe retornar

<i>Representación del valor fraccionario 5/9 incluido en la función<i>


<i>Finitud de las representaciones posibles en tipo de dato double<i> 
En el planteo matemático encuadrado en el conjunto de los números reales de tipo infinito la función de conversión de farenheit a celsios puede brindar infinitos valores, propio de la infinitud del conjunto numérico de los reales. No obstante, la representación de los números reales mediante el tipo de dato double -que elegiremos para la solución- es de tipo finita, y sujeta a los límites físicos propios de procesamiento de la arquitectura de todo computador, pese a ocupar solo 4 bytes de memoria para ser almacenado.  
  
  

### Diagrama:
![IMG](https://user-images.githubusercontent.com/43832189/57878692-f7842600-77f0-11e9-8aec-77436807c872.png)


## <strong>b</strong>. Dominio de la solución
### La solución adoptada es la siguiente:

<strong>1</strong>  Se lee un valor en farenheit (<cursive>f</cursive>) </br>
<strong>2</strong>  Se convierte dicho valor convertido en grados celsios </br>
<strong>3</strong> Se elige qué valor de los posibles obtenidos por la función se debe retornar </br>
<strong>4</strong>FIN

### Diagrama Nassi-Schneiderman de la solución:



