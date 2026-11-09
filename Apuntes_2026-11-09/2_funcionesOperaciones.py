# Apunte 2
# Leonardo Torres Harlow
# Operaciones con funciones

a = 0
b = 0
opc = 0

def lectura():
    global a
    global b
    a = int(input("Ingresa el primer valor: "))
    b = int(input("Ingresa el segundo valor: "))

def suma():
    print(f"La suma es: {a+b}")

def resta():
    print(f"La resta es: {a-b}")

def mult():
    print(f"La multiplicación es: {a*b}")

def div():
    if b != 0:
        print(f"La división es: {a/b}")
    else:
        print("ERROR: ENTRE CERO")

def menu():
    global opc
    print("----- OPERACIONES -----")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicación")
    print("4. División")
    opc = int(input("Selecciona una opción: "))

menu()
while not ((opc > 0) and (opc < 5)):
    print("ERROR: OPCIÓN NO VALIDA")
    menu()
lectura()

if opc == 1:
    suma()
elif opc == 2:
    resta()
elif opc == 3:
    mult()
elif opc == 4:
    div()
