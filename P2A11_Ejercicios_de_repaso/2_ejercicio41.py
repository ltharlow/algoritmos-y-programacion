"""
41. Escribir un programa que pregunte el nombre el un producto, su precio y un número de unidades y
muestre por pantalla una cadena con el nombre del producto seguido de su precio unitario con 6
dígitos enteros y 2 decimales, el número de unidades con tres dígitos y el coste total con 8 dígitos
enteros y 2 decimales
"""

nombre = input("Nombre de producto: ")
precio = float(input("Precio del producto: $"))
unidades = int(input("Número de unidades: "))
cotTot = precio * unidades

print("-------------------------")
print(f"{nombre} - ${precio:06.2f} c/u - {unidades:03} unidades - ${cotTot:08.2f} totales")
