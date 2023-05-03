# metodos de lista

### CREANDO LISTA ###

# list([value1,value2])
# Creamos una lista, vacia o con elementos
# Crea una lista nueva
lista = list(["hola", "jhonny", 28, 65, True])

### AGREGANDO ELEMENTOS A LA LISTA ###

# lent( list )
# Devuelve la cantidad de elementos de la lista
# print( len( lista ) )

# list.append( value )
# Agregando elementos a una lista
lista.append("jajajaj")

# list.insert( index, value )
# Agregamos un elemento a la lista en un indice espesifico
lista.insert(2, "Toma Loco")

# list.extend( [value1, value2, value3] )
# Extendemos la lista actual con una lista dada
lista.extend(["asdasd", 1231, 250])

## ELIMINANDO ELEMENTOS DE UNA LISTA ###

# list.pop( index )
# elimina un element por su indice || Es mas correcto decir que sala el elemento de una lista y lo devuelve en una variable
# Ademas deuvelve el elemento almacenado
# -1 para eliminar el ultimo, -2 para eliminar el anteulrimo y asi sucecivamente...
lista.pop(0)

# list.remove( value )
# Elimina un elemento por su valor
# Si no lo encuentra manda ERROR

lista.remove(28)

# list.clear()
# Elimina todos los elementos de una lista
# lista.clear()

lista2 = [1, 2, 35, 5, 3, 5, 7, 9, 51, 4, True, False]

# list.sort()
# Ordena elementos de manera accendente
# SOLO NUMEROS
# False es igual a 0, True es igual a 1
# list.sort( reverse=True )
# ordenamos la lista de forma descendente
lista2.sort()

# list.reverse()
# Devuelve la lista de manera inversa
print(lista)
lista.reverse()
print(lista)
