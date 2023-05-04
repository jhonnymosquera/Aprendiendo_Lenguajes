# Crear una funcion que deuvelva los numeros primos

# crear una funcon que verifique si un numero es primo
def es_primo(num):
    for i in range(2, num-1):
        # Verificamos que el numero ingresdo no pueda dividirse por nungun numero
        # entre 2 y ese mismo numero -1
        if num % i == 0:
            # si es divisible por alguno retornamos false y termina el blucle
            return False
    # si termina el bucl, significa que no fue divisible entonces es primo
    return True

# Creando una funcion que retorna una lista con todos los numero primos


def primos_hasta(num):
    # creamos una lista vacia
    primos = []
    for i in range(3, num+1):
        # verificamos si el valor es primo
        resultado = es_primo(i)
        # en caso de que sea primo, agregamos el numero a la lista de primos
        if resultado:
            primos.append(i)

    # devolvemos la lista
    return primos


# creamos el resultado llamando a la funcio
resultado = primos_hasta(90)

print(resultado)
