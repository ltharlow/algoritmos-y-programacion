//Leonardo Torres Harlow
Algoritmo claseTriangulo
	Definir l1, l2, l3 Como Entero
	
	Escribir "ingresa la medida de cada lado:"
	Leer l1, l2, l3
	
	Si (l1 + l2 > l3) Y (l1 + l3 > l2) Y (l2 + l3 > l1) Entonces
		Si l1 == l2 y l2 == l3 Entonces
			Escribir "El triángulo es equilátero."
		SiNo
			Si l1 <> l2 y l2 <> l3 y l1 <> l3 Entonces
				Escribir "El triángulo es escaleno."
			SiNo
				Escribir "El triángulo es isóceles."
			FinSi
		Finsi
	SiNo
		Escribir "Error: Triángulo no valido."
	FinSi
	
FinAlgoritmo
