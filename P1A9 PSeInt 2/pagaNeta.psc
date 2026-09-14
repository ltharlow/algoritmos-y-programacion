//Leonardo Torres Harlow
Algoritmo pagaNeta
	Definir nombre Como Caracter
	Definir horas, tarifa, tasas, bruto Como Real
	
	Escribir "Ingresa tu nombre:"
	Leer nombre
    Escribir "Ingresa las horas:"
	Leer horas
	Escribir "Ingresa la tarifa/hora:"
	Leer tarifa
	
	bruto = horas * tarifa
	tasas = 0.25 * bruto
	neto = bruto - tasas
	
	Escribir ""
	Escribir nombre
	Escribir "----------------------"
	Escribir "Salario bruto: $", bruto
	Escribir "Impuestos: $", tasas
	Escribir "Salario neto: $", neto
FinAlgoritmo
