# falto el profe y los pibes van a armar la clase.
# pedir el nombre y la edad de los compañeros que vinieron hoy a clase

def obtener_compañeros(cantidad_de_compañeros):
    compañeros = []

    for i in range(cantidad_de_compañeros):
        nombre = input("Nombre: ")
        edad = int(input("Edad: "))
        compañeros.append((nombre, edad))
    # ordena los elementos de mayot a menor
    compañeros.sort(key=lambda x: x[1])
    asistente = compañeros[0][0]
    profesor = compañeros[-1][0]
    return asistente, profesor


asistente, profesor = obtener_compañeros(3)

print(f"El asistente es: {asistente}")
print(f"El profesor es: {profesor}")
