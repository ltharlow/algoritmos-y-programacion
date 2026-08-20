//Leonardo Torres Harlow
Algoritmo calificacionAlgoritmos
	definir parcial1, parcial2, practica, parcialFinal como enteros
	definir promedio Como Real
	
	escribir "Ingrese sus calificaciones (0-100) en este orden: Primer parcial, Segundo parcial, Práctica y Parcial final."
	leer parcial1, parcial2, practica, parcialFinal
	
	promedio = ((parcial1 * 0.2) + (parcial2 * 0.2) + (practica * 0.35) + (parcialFinal * 0.25)) / 10
	
	escribir "Su promedio es de: ", promedio
	
FinAlgoritmo
