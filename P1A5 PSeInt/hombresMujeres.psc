//Leonardo Torres Harlow
Algoritmo hombresMujeres
	definir h, m Como Entero
	
	escribir "Ingresa la cantidad de hombres:"
	leer h
	escribir "Ingresa la cantidad de mujeres:"
	leer m
	
	total = h + m
	porcentajeHombres = (h/total) * 100
	porcentajeMujeres = (m/total) * 100
	
	escribir "En el grupo, el ", porcentajeHombres, "% son hombres, mientras que el ", porcentajeMujeres, "% son mujeres."
FinAlgoritmo
