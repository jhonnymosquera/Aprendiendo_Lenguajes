import csv

with open("11_archivos_csv\\archivo.csv", encoding="UTF-8") as archivo:

    leer = csv.reader(archivo)

    for lista in leer:
        print(lista)
