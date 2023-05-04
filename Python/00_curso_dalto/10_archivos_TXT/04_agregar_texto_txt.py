

# Escribiendo en el archivo con with open
# le pasamos como segundo parametro "a" para poder escribir nuevo texto al archivo
with open("10_archivos_TXT\\texto.txt", "a", encoding="UTF-8") as archivo:
    # Sobre escribe nuevo texto el archivo
    # archivo.write("jajajajja 2")

    # agregando nuevo texto al archivo con bucle
    for i in range(10):
        archivo.write(f"\nlinea {i+1} agragada")
