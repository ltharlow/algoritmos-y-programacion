# Leonardo Torres Harlow
# Promedio de parciales
Parcial1 = int(input("Primer parcial:"))
Parcial2 = int(input("Segundo parcial:"))
Practica = int(input("Práctica:"))
ParcialFinal = int(input("Parcial final:"))

PorParcial1 = 20
PorParcial2 = 20
PorPractica = 35
PorParcialFinal = 25

promedio = (Parcial1 * PorParcial1 + Parcial2 * PorParcial2 + Practica * PorPractica + ParcialFinal * PorParcialFinal) / 100
print("Promedio:", promedio)
