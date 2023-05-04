numeros = [4, 7, 1, 42, 15, 30]

# encontrando el numero mayor de una lista
numero_mas_alto = max(numeros)

# encontrando el numero menor de una lista
numero_mas_bajo = min(numeros)

# Redondeando a 6 decimales round( float, candidad_de_decimales)
# Recie un numero flotante como primer parametro
# Recibe la cantidad de deciamles como segundo parametro
numero = round(12.34576846, 6)

# bool() retorna False si le pasamos  --> 0, vacio, False, None
# True si le masamos  --> dato distinto a 0, True, cadena de texto, datos no vacios
resultado = bool("asdas")

# all([ list ])
# comprueba que todos los elementos de una lista sean verdaderos
# retorna falso, si 1 elemento de la dista es --> 0, vacio, False,[],{},()

resultado_all = all([0, "true", [334, 23]])

# sum([])
# suma todos los valores de un iterable
suma_total = sum(numeros)

print(suma_total)
