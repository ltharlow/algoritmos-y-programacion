'''
Leonardo Torres Harlow

Reino del Dragón

En este juego, el jugador se encuentra en una tierra llena de dragones. Los dragones viven en sus
cuevas y en ellas guardan sus tesoros. Algunos dragones son buenos y compartirán su tesoro,
otros dragones son codiciosos y hambrientos y se comerán a cualquiera que pise su cueva. El
jugador se encuentra frente a las dos cuevas, una con un dragón amable y otra con un dragón
hambriento. El jugador tiene que elegir a cuál cueva entrar, sin saber de ante mano donde esta
uno u el otro.
'''

import random


def cuevaAleatoria():
    global cueva1
    global cueva2
    cueva1 = random.choice(("hambriento", "amigable"))
    if cueva1 == "hambriento":
        cueva2 = "amigable"
    else:
        cueva2 = "hambriento"

reiniciar = 1

print("----- REINO DEL DRAGÓN -----")
nombre = input("Introduce tu nombre: ")

while reiniciar == 1:
    nivel = 1
    opcion = "amigable"
    puntaje = 0

    while opcion == "amigable" and nivel <= 3:
        cuevaAleatoria()
        print(f"----- NIVEL {nivel} -----")
        print("1. Cueva 1")
        print("2. Cueva 2")
        while opcion != 1 and opcion != 2:
            opcion = int(input("Elige tu camino: "))
        if opcion  != 1 and opcion != 2:
            print("ERROR: OPCIÓN NO VALIDA")
            if opcion == 1:
                print("Te encontraste al dragón", cueva1)
                opcion = cueva1
        else:
            print("Te encontraste al dragón", cueva2)
            opcion = cueva2
            nivel += 1
            puntaje += 100

    print()
    if opcion == "amigable":
        print("FIN DEL JUEGO: Sobreviviste")
    else:
        puntaje -= 100
        print("FIN DEL JUEGO: El dragón te comió")

    print(f"{nombre}: {puntaje} puntos")
    reiniciar = int(input("Ingrese 1 para volver a jugar: "))
    print()

print("JUEGO FINALIZADO")
