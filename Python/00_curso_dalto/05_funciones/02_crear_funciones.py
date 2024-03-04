

# Creando una funcion simple
# def saludar():
#     print("Hola Jhonny Como estas")


# # Ejecutando la funcion simple
# saludar()

# Funcion con parametros.
def saludar(nombre):
    print(f"Hola {nombre} como estas")


saludar("dalto")
saludar("Jhonny")
saludar("Pepito")
saludar("Pepote")

# Crear funciones que retorne valores


def crear_contraseña_random(num):
    chars = "abcdefghij"
    numero_entero = str(num)
    num = int(numero_entero[0])
    c1 = num - 2
    c2 = num
    c3 = num - 5
    contraseña = f"{chars[c1]}{chars[c2]}{chars[c3]}{num*2}"
    return contraseña, num


password, primer_numero = crear_contraseña_random(5546)

print(f" su contraseña {password} numero utilizado {primer_numero}")
