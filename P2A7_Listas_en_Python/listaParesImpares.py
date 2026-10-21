# Ejercicio 1
# Leonardo Torres Harlow
# Números pares e impares

lista = [10,21,4,45,66,93,11]

par = 0
impar = 0

for i in lista:
    print(i, end=" ")
    if (i % 2) == 0:
        par += 1
    else:
        impar += 1

print()
print(f"Cantidad de pares: {par}")
print(f"Cantidad de impares: {impar}")
