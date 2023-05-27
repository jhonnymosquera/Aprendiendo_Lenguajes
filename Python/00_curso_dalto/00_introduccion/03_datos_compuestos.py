# Datos compuestos

# (Listas) funciona igual que un array de javascript y se accede a los datos de a misma manera lista[index]
lista = ["Jhonny Mosquera", "Javier Moreno", True, 1.85, 50]
lista[2] = "maquinola"  # Esto es valido, estamos modificnado true a "maquinola"

# (Tuplas) es lo mismo que las listas, pero no se pueden modificar los datos
tupla = ("Jhonny Mosquera", "Javier Moreno", True, 1.85)
# tupla[2] = "maquinola" # Esto no es valido

# Conjunto (set)
# no podemos acceder al los elementos por su index
# y no pondemos repetir datos
# el orden de los elementos puede cambiar
conjunto = {"Jhonny Mosquera", "Javier Moreno", "Javier Moreno", True, 1.85}
# print(conjunto)  # no se puede

# Diccionarios (dict)
# es como un "JSON" de javascript diccionario = { "key1": "value1", "key2": "value2" }
# se accede al un elemento con el nombre del diccionario y el valor (diccionario["value"])
diccionario = {
    "nombre": "jhonny Javier",
    "Apellido": "Mosquera Moreno",
    "le_gusta_programar": True,
    "altura": 1.85
}

# print(diccionario["altura"])
