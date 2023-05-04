
# Funciones Lamda
# Parecido a las funciones flecha de javascript
# multiplicar_por_dos = lambda x: x*2

numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9]

# Creando funcion que diga si es par o no


def es_par(num):
    if (num % 2 == 0):
        return True


# filter( funcion ,iterable)
# Parametro 1, Una funcion que recibe como parametro un elemento del parametro 2
# Parametro 2, recibe un elemento iterable ya sea un, strin, lista, tupla, conjuntos
numeros_pares = filter(lambda numero: numero % 2 == 0, numeros)

print(list(numeros_pares))
