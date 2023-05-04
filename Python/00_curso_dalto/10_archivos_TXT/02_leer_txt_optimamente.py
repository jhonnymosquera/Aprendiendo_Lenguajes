

# abiendo el archivo con whith open
with open("10_archivos_TXT\\texto.txt", encoding="UTF-8") as archivo:

    # leemos el archivo
    contenido = archivo.read()

    # Mostramos el contenido
    print(contenido)

# No es necesario cerrarlo al usar with open
