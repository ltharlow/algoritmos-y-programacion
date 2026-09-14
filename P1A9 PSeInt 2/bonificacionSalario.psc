//Leonardo Torres Harlow
Algoritmo bonificacionSalario
	Definir salarioBasico Como Real
	Definir years Como Entero
	
	Escribir "Ingresa tu salario básico:"
	Leer salarioBasico
	Escribir "Ingresa tus años de antigüedad en la organización"
	Leer years
	
	si years < 5 Entonces
		bonificacion = salarioBasico * 0.05
	SiNo
		Si years < 10 Entonces
			bonificacion = salarioBasico * 0.1
		SiNo
			Si years < 15 Entonces
				bonificación = salarioBasico * 0.15
			SiNo
				Si years < 20 Entonces
					bonificación = salarioBasico * 0.2
				SiNo
					Si years < 25 Entonces
						bonificación = salarioBasico * 0.25
					SiNo
						Si years < 30 Entonces
							bonificación = salarioBasico * 0.35
						SiNo
							Si years >= 30 Entonces
								bonificación = salarioBasico * 0.5
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			
		FinSi
	FinSi
	
	Escribir "su bonificación es de $", bonificacion, " para un salario total de $", salarioBasico + bonificacion, "."
FinAlgoritmo
