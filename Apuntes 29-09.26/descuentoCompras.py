# Apunte 6
# Leonardo Torres Harlow
# Descuento de compras

print("Ingrese el total de su compra:")
Venta = float(input())

if Venta >= 100000 and Venta < 200000:
    Descuento = Venta * 0.1
elif Venta >= 200000 and Venta < 300000:
    Descuento = Venta * 0.15
elif Venta >= 300000 and Venta < 400000:
    Descuento = Venta * 0.2
elif Venta >= 400000 and Venta < 500000:
    Descuento = Venta * 0.25
elif Venta >= 500000:
    Descuento = Venta * 0.3
else:
    Descuento = 0

print("El descuento es:", Descuento, "%")
print("El total a pagar es: $", Venta - Descuento)
