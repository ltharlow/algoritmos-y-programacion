# Apunte 2
# Leonardo Torres Harlow
# Imprimir un valor de una lista

primos = [2,3,5,7,11,13]
dias = ["lunes","martes","miercoles","jueves","viernes"]
peliculas = [["Spider-man: Brand New Day", 2026],["El retorno del rey",2023]]
lista = [primos, dias]

# Imprimir el valor 11 de la lista primos
print(primos[4])

# Imprimir lunes de la lista dias
print(dias[0])

# Imprimir 3er elemento de la lista en la posicion 1 de lista[]
print(lista[1][2])

# Imprimir el titulo de la primera pelicula
print(peliculas[0][0])

# Acceder a todos los elementos de la lista primos con un ciclo
for i in range(6):
    print(primos[i], end=", ")

print()

for i in dias:
    print(i, end=", ")
