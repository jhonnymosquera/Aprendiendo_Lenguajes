

archivo = open("10_archivos_TXT\\texto.txt", encoding="UTF-8")
# Los archivos solo pueden ser leidos 1 vez

# Leer Archivo Completo
# archivo_leido = archivo.read()

# Leer linea por linea
# lineas = archivo.readlines()

# Leer una sola linea
linea = archivo.readline()
linea2 = archivo.readline()

# cerrar el archivo
archivo.close()
print()
