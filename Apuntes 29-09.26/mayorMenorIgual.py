# Apunte 2
# Leonardo Torres Harlow
# Dos valores: mayor, menor o igual

Val1 = int(input("Ingrese el primer valor: "))
Val2 = int(input("Ingrese el segundo valor: "))

if Val1 < Val2:
    Res = Val1 + Val2
elif Val1 > Val2:
    Res = Val1 - Val2
else:
    Res = Val1 * Val2

print("Resultado =", Res)
