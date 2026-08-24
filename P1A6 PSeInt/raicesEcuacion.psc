Algoritmo raicesEcuacion
	Definir a, b, c Como Real
	
	Escribir "Ingresa los valores de a, b y c"
	Leer a, b, c
	
	discriminante = b^2 - 4 * a * c
	
	si (discriminante > 0)
		x1 = (-b + discriminante) / (2 * a)
		x2 = (-b - discriminante) / (2 * a)
		
		escribir "x1 = ", x1, ", x2 = ", x2
	FinSi
	
	si (discriminante == 0)
		x1 = (-b + discriminante) / (2 * a)
		
		escribir "x = ", x1
	FinSi
	
	si (discriminante < 0)
		escribir "Raices complejas/conjugadas"
	FinSi
FinAlgoritmo
