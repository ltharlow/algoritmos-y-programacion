//Leonardo Torres Harlow
Algoritmo comisionesTresVentas
	definir sueldoBase, total, venta1, venta2, venta3, ventas, comision Como Real
	
	escribir "Ingrese su sueldo base:"
	leer sueldoBase
	
	escribir "Ingrese las 3 ventas:"
	leer venta1, venta2, venta3
	
    ventas = venta1 + venta2 + venta3
	comision = ventas * 0.1
	total = sueldoBase + comision
	
	escribir "Comision: ", comision, ", Sueldo total: ", total
FinAlgoritmo
