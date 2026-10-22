# Apunte 1
# Leonardo Torres Harlow
# Aleatorios en Python

import random
# random() -> genera valores aleatorios entre 0 y 1 (sin llegar a 1)

valor = random.random()
print("Valor generado (0-1):", valor)

# randrange(a) - randrange(a,b) - randrange(a,b,c)
valor = random.randrange(10)
print("Valor generado (0-9):", valor)

valor = random.randrange(1,11)
print("Valor generado (1-11):", valor)

valor = random.randrange(50,151,5)
print("Valor multiplo de 5 generado (50-150):", valor)

# randint(a,b)
valor = random.randint(1,10)
print("Valor generado (1-10):", valor)

# uniform(a,b)
valor = random.uniform(5,8)
print("Valor decimal generado (5-8):", valor)

# Elegir de forma aleatoria de una lista
# choice(lsita/secuencia)
valor = random.choice((10,20,30,40,50))
print("Valor elegido: ", valor)

dias = ["lunes", "martes", "miercoles", "jueves", "viernes"]
valor = random.choice(dias)
print("Valor elegido: ", valor)

valor = random.choice(["elefante", "leon", "cebra", "capibara"])
print("Valor elegido: ", valor)

valor = random.choice(["ANAHUAC-MAYAB"])
print("Valor elegido: ", valor)
