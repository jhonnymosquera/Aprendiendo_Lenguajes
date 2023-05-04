

# Creando funciones
def frase(nombre: str, apellido: str, adjetivo: str):
    return f"Hola {nombre} {apellido}, sos muy {adjetivo}"


######################### Utilizando las keyword arguments #################
frase_resultante = frase(adjetivo="capo", apellido="Mosquera", nombre="Jhonny")


# parametros por defecto y se vuelve obcional pasarlo a la funcion
def frase2(nombre: str, apellido: str, adjetivo: str = "Tonto"):
    return f"Hola {nombre} {apellido}, sos muy {adjetivo}"


frase_resultante2 = frase2()

print(frase_resultante2)
