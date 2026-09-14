//Leonardo Torres Harlow
Algoritmo media
	Definir dato Como Real
	
	C = 0
	S = 0
	
	Escribir C + 1, ". Ingresa un numero entero / 0 para finalizar."
	Leer dato
	
	Mientras dato <> 0
		Si dato > 0
			C = C + 1
			S = S + dato
		SiNo
			Escribir "Error: solo se aceptan números positivos."
		FinSi
		
		Escribir ""
		Escribir C + 1, ". Ingresa un numero entero / 0 para finalizar."
		Leer dato
	FinMientras
	
	Si C <> 0
		med = S/C
		Escribir "Media:", med
	SiNo
		Escribir "Media: Error: no se registraron datos."
	FinSi
FinAlgoritmo
