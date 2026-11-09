# Apunte 3
# Leonardo Torres Harlow
# Funcion de intercambio

def swap(a,b):
    t = a
    a = b
    b = t
    print(f"{a}, {b}")

x = int(input("VALOR 1: "))
y = int(input("VALOR 2: "))
print(f"{x}, {y}")
swap(x,y)
