# Apunte 5
# Leonardo Torres Harlow
# Un vendedor recibe un sueldo basico mas s2u comision

print("Ingrese el sueldo basico:")
SueldoBase = float(input())

print("Ingresa el total de la venta:")
Venta = float(input())

if Venta < 100000:
    Comision = Venta * 0.1
else:
    Comision = Venta * 0.15

SueldoTotal = SueldoBase + Comision
print("El sueldo total es: $", SueldoTotal)
