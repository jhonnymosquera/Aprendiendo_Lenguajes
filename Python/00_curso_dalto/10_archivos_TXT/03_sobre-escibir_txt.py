

# Escribiendo en el archivo con with open
# le pasamos como segundo parametro "w" para poder sobre-escribir el archivo
with open("10_archivos_TXT\\texto.txt", "w", encoding="UTF-8") as archivo:
    # Sobre escribiendo el archivo
    # archivo.write("jajajajja 2")

    archivo.writelines(["Linea 1\n", "Linea 2\n"])
    archivo.writelines("Linea 3\n")
    archivo.writelines("Linea 4")
