Algoritmo valorCoche
	Definir coste, vidaUtil, valorRescate Como Real
	Definir year Como Entero
	
	Escribir "Ingresa el coste:"
	Leer coste
	Escribir "Ingresa el valor de rescate:"
	Leer valorRescate
	Escribir "Ingresa el año de compra:"
	Leer añoCompra
	Escribir "Ingresa el año actual:"
	Leer vidaUtil
	
	valorActual = coste
	depreciacion = (coste - valorRescate)/vidaUtil
	acumulada = 0
	
	Mientras añoCompra < vidaUtil
		acumulada = acumulada + depreciacion
		valorActual = valorActual + depreciacion
		añoCompra = añoCompra + 1
	FinMientras
	
	Escribir "Valor actual: $", valorActual
	Escribir "Depreciación acumulada: $", acumulada
FinAlgoritmo
