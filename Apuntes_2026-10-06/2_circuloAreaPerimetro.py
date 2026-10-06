# Leonardo Torres Harlow
# Área y perímetro de un círculo

import math

    radio = float(input("Ingresa el radio del circulo: "))

    pi = 3.1415

    # Sin funciones
    area = pi * radio * radio
    perimetro = 2 * pi * radio
    print(f"Área (sin funciones): {area}")
    print(f"Perimetro (sin funciones con formato): {perimetro:.1f}")

    # Con funciones
    area = math.pi * math.pow(radio, 2)
    perimetro = 2 * math.pi * radio
    print(f"Área (con funciones con formato): {area:.1f}")
    print(f"Perimetro (con funciones): {perimetro:.2f}")
