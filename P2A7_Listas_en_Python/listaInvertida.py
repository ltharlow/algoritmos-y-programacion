# Ejercicio 2
# Leonardo Torres Harlow
# Invertir elementos de una lista

lista = []
listaInv = []

print("Ingresa 10 valores:")
for i in range(10):
    val = input()
    lista.append(val)

print("Lista: ", lista)

# Invertir valores
for i in range(9, -1, -1):
    listaInv.append(lista[i])

print("Lista invertida: ", listaInv)
