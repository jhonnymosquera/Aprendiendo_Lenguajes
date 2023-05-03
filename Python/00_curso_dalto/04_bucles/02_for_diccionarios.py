

diccionario = {
    "nombre": "Jhonny",
    "apellido": "Mosquera",
    "edad": 26
}


for key in diccionario:
    print(f"solo obtenemos el key = {key}")


for key, value in diccionario.items():
    print(f"nos devuelve la key = {key} y el valor = {value}")
