# Apunte 3
# Leonardo Torres Harlow
# Agregar valores a un arreglo

equiposFutbol = []
print(equiposFutbol)

equiposFutbol.append("Barca")
print(equiposFutbol)

equiposFutbol.append("Real Madrid")
print(equiposFutbol)

equiposFutbol.append("PSG")
print(equiposFutbol)

#-------------------------------------------------------
#Solicitar al usuario valores
tempMerida = []
fecha = [16, "oct", 2026]
while fecha[0] <= 20:
    t = float(input(f"Temperatura {fecha}: "))
    tempMerida.append(t)
    print(tempMerida)
    fecha[0] += 1

#-------------------------------------------------------
calif = []
print("Ingresa las calificaciónes: ")
for i in range(9):
    c = float(input("Calificación: "))
    calif.append(c)

print(calif)
