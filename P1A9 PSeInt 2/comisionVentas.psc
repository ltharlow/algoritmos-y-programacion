//Leonardo Torres Harlow
Algoritmo comisionVentas
	Definir sueldoBasico, venta Como Real
	
	Escribir "Ingresa tu sueldo básico:"
	Leer sueldoBasico
	Escribir "Ingresa el $ de la venta:"
	Leer venta
	
	si venta < 100000 Entonces
		comision = venta * 0.1
	SiNo
		comision = venta * 0.15
	FinSi
	
	Escribir "Recibirá una comisión de $", comision, " para un sueldo total de $", sueldoBasico + comision, "."
	
FinAlgoritmo
