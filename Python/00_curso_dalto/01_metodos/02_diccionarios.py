# Metodos de diciconarios

diccionario = {
    "nombre": "Jhonny",
    "apellido": "Mosquera",
    "edad": 28
}

# dict.keys() devuelve todos los keys de un diccionario
claves = diccionario.keys()

# dict.get( key ) Devuelve el valor de la key
# si no lo encuentra, devuelve Note ( parecido al undefined en javascript )
valor_de_nombre = diccionario.get("nombre")

# dict.clear()
# Elimina todos los elementos de un diccionario
# diccionario.clear()

# dict.pop( key )
# elimina uno o mas elementos de un diccionario, segun la key
# Ademan lo podemos almacenar en una variable
elimina_nombre = diccionario.pop("nombre")

# dict.items()
# devielve un diccionario que si se puede iterar por un bucle
diccionario_iterable = diccionario.items()
print(diccionario_iterable)
