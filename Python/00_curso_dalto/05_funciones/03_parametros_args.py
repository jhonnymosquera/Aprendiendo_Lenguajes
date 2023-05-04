#
# a una funcion podemos darle el parameto *arg o cualquier otro nombre
# todos los parametros que recibe los almacena en una lista
# podemos agregar mas parametros, pero solo al inicio, en este caso nombre
def suma(nombre, *numeros):
    return f"{nombre}, La suma de tus numeros es: {sum(numeros)}"


resultado = suma(1, 2, 3, 9)

# forma obtima


def suma_total(nombre, numeros):
    return f"{nombre}, La suma de tus numeros es: {sum(numeros)}"


resultado2 = suma_total("hola", [1, 2, 3, 9])


print(resultado2)
