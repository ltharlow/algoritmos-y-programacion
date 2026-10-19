# Leonardo Torres Harlow
# Menú
print("-------- MENU --------")
print("1. Calcular los 100 primeros cubos mediante números impares.")
print("2. Analizar números dentro y fuera de un intervalo.")
print("3. Salir del programa.")

menu = int(input("Selecciona una opción: "))

while (menu < 1) or (menu > 3):
    print("Error: opción no valida.")
    print()

    print("-------- MENU --------")
    print("1. Calcular los 100 primeros cubos mediante números impares.")
    print("2. Analizar números dentro y fuera de un intervalo.")
    print("3. Salir del programa.")

    menu = int(input("Selecciona una opción: "))

while menu != 3:
    if menu == 1:
        impar = 1
        for n in range(1, 101):
            sumaCubo = 0
            for i in range(n):
                sumaCubo = sumaCubo + impar
                impar = impar + 2
            print(sumaCubo, end=", ")
        print()
        print()

    elif menu == 2:
        valido = False
        limInf = int(input("Ingresa el límite inferior: "))
        limSup = int(input("Ingresa el límite superior: "))

        while not (limInf < limSup):
            print("Error: el límite inferior tiene que ser menor al límite superior.")
            print()

            limInf = int(input("Ingresa el límite inferior: "))
            limSup = int(input("Ingresa el límite superior: "))

        print("Ingresa números (0 para finalizar): ")
        n = int(input())

        nDentro = 0
        nFuera = 0
        nLim = "no"

        while n != 0:
            if (n > limInf) and (n < limSup):
                nDentro = nDentro + n
            elif (n == limInf) or (n == limSup):
                nLim = "si"
            else:
                nFuera = nFuera + 1
            n = int(input())

        print()
        print(f"Suma de numeros dentro del intervalo: {nDentro}")
        print(f"Numeros fuera del intervalo: {nFuera}")
        print(f"Se introdujo al menos un número igual a los límites: {nLim}")
        print()

    print("-------- MENU --------")
    print("1. Calcular los 100 primeros cubos mediante números impares.")
    print("2. Analizar números dentro y fuera de un intervalo.")
    print("3. Salir del programa.")

    menu = int(input("Selecciona una opción: "))
print("Programa finalizado.")
