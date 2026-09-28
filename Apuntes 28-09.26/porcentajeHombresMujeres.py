# Leonardo Torres Harlow
# Porcentaje de hombres y mujeres en el curso
Hombres = int(input("Ingrese la cantidad de hombres: "))
Mujeres = int(input("Ingrese la cantidad de mujeres: "))

Total = Hombres + Mujeres

PorcentajeHombres = Hombres / Total * 100
PorcentajeMujeres = Mujeres / Total * 100

print("Porcentaje de hombres: ", PorcentajeHombres, "%")
print("Porcentaje de mujeres: ", PorcentajeMujeres, "%")
