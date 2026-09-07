//Leonardo Torres Harlow
Algoritmo registroTemperaturas
	Definir tempMax, tempMin Como Real
	Definir dia, tempError Como Entero
	Definir maxValida, minValida Como Entero
	Definir sumaMax, sumaMin, tempTotal Como Real
	Definir promMax, promMin Como Real
	
	dia = 0
	tempError = 0
	maxValida = 0
	minValida = 0
	sumaMax = 0
	sumaMin = 0
	
	Escribir "DÍA ", dia + 1
	Escribir "Ingresa la temperatura mínima y máxima (0 y 0 para finalizar)."
	Escribir "Temperatura máxima:"
	Leer tempMax
	Escribir "Temperatura mínima:"
	Leer tempMin
	
	Mientras tempMin <> 0 O tempMax <> 0 Hacer
		Si tempMax == 9 Entonces
			tempError = tempError + 1
		SiNo
			maxValida = maxValida + 1
			sumaMax = sumaMax + tempMax
		FinSi
		
		Si tempMin == 9 Entonces
			tempError = tempError + 1
		SiNo
			minValida = minValida + 1
			sumaMin = sumaMin + tempMin
		FinSi
		
		dia = dia + 1
		
		Escribir ""
		Escribir "DÍA ", dia + 1
		Escribir "Ingresa la temperatura mínima y máxima (0 y 0 para finalizar)."
		Escribir "Temperatura máxima:"
		Leer tempMax
		Escribir "Temperatura mínima:"
		Leer tempMin
	FinMientras
	
	tempTotal = dia * 2
	
	Escribir ""
	Escribir "RESUMEN"
	Escribir "Total de días registrados: ", dia + 1
	
	Si dia > 0 Entonces
		Si maxValida > 0 Entonces
			promMax = sumaMax / maxValida
			Escribir "Temperatura máxima promedio: ", promMax
		SiNo
			Escribir "Temperatura máxima promedio: Error: no se registraron temperaturas válidas"
		FinSi
		
		Si minValida > 0 Entonces
			promMin = sumaMin / minValida
			Escribir "Temperatura mínima promedio: ", promMin
		SiNo
			Escribir "Temperatura mínima promedio: Error: no se registraron temperaturas válidas"
		FinSi
		
		Escribir "Total de temperaturas erróneas: ", tempError
		Si tempTotal > 0 Entonces
			Escribir "Porcentaje de temperaturas erróneas: ", (tempError / tempTotal) * 100, "%"
		FinSi
	FinSi
	
FinAlgoritmo