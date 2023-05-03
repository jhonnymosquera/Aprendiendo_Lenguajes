nombre = "pepito"
bienvenida = f"Hola {nombre} ¿Hola Como estas?" 

# Operadores de pertenecia (in / not in)
# in recibe 2 parametros, (dato a buscar + in + donde buscamos)
# sensible a mayusculas, minusculas, espacios, "comas". comillas etc..
# aqui estasmos buscando si la secuencia de caracteres "ola" se encuentra en el string "bienvenida"
print("ola" in bienvenida) # verdadero
# not in hacemos una negacion, en esta caso decimos (la cadena "ola", ¿no esta en bienvenida?) = false porque en realidad si esta
print("ola" not in bienvenida) # Falso