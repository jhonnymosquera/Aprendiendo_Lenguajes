

frutas = ["banana", "manzana", "ciruela",
          "pera", "naranja", "granada", "durazno"]

# Evitando que se coma una manzana con la sentencia continue
for fruta in frutas:
    if fruta == "manzana":
        continue
    print(f"me voy a comer una {fruta}")


# Evitar que el bucle siga ejecutandose (el else no se ejecuta tampoco)
for fruta in frutas:
    print(f"me voy a comer una {fruta}")
    if fruta == "pera":
        break
else:
    print("Bucle terminado")


cadena = "Hola maquinola"
numeros = [2, 5, 8, 10]

# Recorrer una cadena de texto
for letra in cadena:
    print(letra)

# For en una linea de codigo
numeros_duplicados = [x*2 for x in numeros]

print(numeros_duplicados)
