
def squares(numbers):
    lista = []
    for number in numbers:
        yield number

    print(lista)


# esta vez, si hacemos la siguiente llamada, no obtenemos resultados
# sino que vamos a crear un generador
# squares([1, 2, 3, 4, 5])


# podemos iterar sobre el generador
# si ejecutamos
for square in squares([1, 2, 4]):
    print(square)


for square in squares([54656, 6, 4, 6, 8, 9]):
    print(square)
