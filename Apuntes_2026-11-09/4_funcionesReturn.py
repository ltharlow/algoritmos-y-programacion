# Apunte 4
# Leonardo Torres Harlow
# Funcion con return

def cuadrado(num):
    return num * num

def esPar(num):
    return (num % 2 == 0)

def edad(year):
    edad = 2026 - year
    return "Actualmente tienes " + str(edad) + " años."

num = int(input("CUADRADO: Ingresa un valor: "))
print(f"Cuadrado de {num}:", cuadrado(num))
num = int(input("PAR O IMPAR: Ingresa un valor: "))
print(f"{num} es par:", esPar(num))
num = int(input("AÑO DE NACIMIENTO: Ingresa un valor: "))
print(edad(num))
