
# FUNCIONA CON TUPLAS () LISTAS [] y CONJUNTOS {}

animales = ["gato", "perro", "loro", "cocodrilo"]
numeros = [52, 16, 14, 72]

# Recorriendo la lista animales
for animal in animales:
    print(animal)

# Recorriendo la lista numero multiplicando cada valor por 10
for numero in numeros:
    resultado = numero * 10
    print(resultado)


for numero, animal in zip(numeros, animales):
    print(f"Recorriendo numeros {numero}")
    print(f"Recorriendo animales {animal}")

# Forma no optima de recorrer una lista con su indice  ""NO FUNCIONA EN CONJUNTOS {}""
### No Valida ###
for num in range(len(numeros)):
    print(numeros[num])


# Forma correcta de recorrer una lista con su indice
for num in enumerate(numeros):
    indice = num[0]
    valor = num[1]
    print(f'El indice es {indice} y el valor es {valor}')

print("\n")

for indice, value in enumerate(numeros):
    print(f'El indice es {indice} y el valor es {valor}')


# usando else
for numero in numeros:
    print(f"ejecutando el ultimo blucle, valor actual: {numero}")
else:
    print("El bucle termino")
