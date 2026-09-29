# Apunte 3
# Leonardo Torres Harlow
# Bonificacion de un empleado segun el tiempo de servicio

Salario = float(input("Ingrese el salario: "))
Tiempo = float(input("Ingrese el tiempo de servicio (en años): "))

if Tiempo < 5:
    Porcentaje = 5
else:
    if Tiempo < 10:
        Porcentaje = 10
    else:
        if Tiempo < 15:
            Porcentaje = 15
        else:
            if Tiempo < 20:
                Porcentaje = 20
            else:
                if Tiempo < 25:
                    Porcentaje = 25
                else:
                    if Tiempo < 30:
                        Porcentaje = 35
                    else:
                        Porcentaje = 50

Bonificacion = Salario * Porcentaje / 100

print(f"Porcentaje de bonificacion: {Porcentaje}%")
print(f"El salario con bonificacion es: ${Salario + Bonificacion}")
