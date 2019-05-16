AED <br>
K1051 <br>
2019 <br>
169040-1 <br>
Juan Ignacio Echaide	

## Trabajo Práctico Nº7 "Celsius"

## <strong>a</strong>. Dominio del problema
### Planteo:
<P ALIGN="justify">Se solicita un algoritmo que tomando un valor de tipo punto flotante -que corresponde indentificar con valores del conjunto de los números reales- aplique una función previamente dada -Celsius(f)=5/9*(f-3/2)- y permita convertir una magnitud de temperatura en sistema farenheit a las magnitudes en grados celsios.

### Refinamiento problema:
<P ALIGN="justify">El planteo en cuestión ofrece ofrece dos dificultades en relación a la magnitud que la función debe retornar

<strong>a</strong> <i>Representación del valor fraccionario 5/9 incluido en la función </i>

  
<P ALIGN="justify"> El primer paso es la conversión de los valores fraccionarios 5/9 y 3/2 a su equivalente en un número real expresado en sistema decimal, es decir: 0.55555556 y 1.5, respectivamente. Dichos valores pueden ser almancenados con relativa facilidad, no obstante en aras de un practicidad de la operatoria bien podrían truncarse. 
  He optado por mantener su valor hasta 4 decimales -0.5555- intentando conservar la mayor fidelidad posible al resultado de la función pero sin complejizar excesivamente el tratamiento, pese a la propagación de errores causada por el redondeo en los pasos intermedios.  
  
<strong>b</strong> <i>Finitud de las representaciones posibles del resultado </i> 

<P ALIGN="justify">Los números reales son un conjunto infinito, pero los valores representables mediante el tipo de dato daouble por el contrario, no lo son. Dado las características de la constante a mulitplicar en la función dada -5/9*(x-3/2)-, en su versión en sistema decimal 0.55555556*(f-1.5) se genera la posibilidad de un resultado a devolver por la función con infinitos decimales, en ese la función misma debe prever otra estructura lógica anidada que permita redondear la expresión siguiendo un criterio.
  He optado por el criterio de ponderar el sexto dígito decimal si lo hubiere, si aquel fuese menor a 5 la función truncará el número, si aquel fuere menor sumará un al quinto dígito y luego truncará.  
  
  

### Diagrama:
![IMG](https://user-images.githubusercontent.com/43832189/57878692-f7842600-77f0-11e9-8aec-77436807c872.png)


## <strong>b</strong>. Dominio de la solución
### La solución adoptada es la siguiente:

<strong>1</strong>  Se lee un valor en farenheit (<i>f</i>) </br>
<strong>2</strong>  Se convierte dicho valor convertido en grados celsios </br>
<strong>3</strong> Se elige qué valor de los posibles obtenidos por la función se debe retornar </br>
<strong>4</strong>FIN

### Diagrama Nassi-Schneiderman de la solución:



