//Leonardo Torres Harlow
Algoritmo mayorMenorIgual
	Definir x1, x2 como real
	
	Escribir "Ingresa tus dos valores"
	Leer x1, x2
	Escribir ""
	
	Si x1 < x2 Entonces
		Escribir "Suma: ", x1 + x2
	SiNo
		Si x1 > x2 Entonces
			Escribir "Resta: ", x1 - x2
		SiNo
			Escribir "Multiplicación: ", x1 * x2
		FinSi
	FinSi
FinAlgoritmo
