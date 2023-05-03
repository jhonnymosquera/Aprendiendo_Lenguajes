
# Creando un diccionario con dist()
diccionario = dict(nombre="jhonny",apellido="mosquera",edad=30)

# las lista no pueden ser claves y usamos frozenset para meter conjuntos
diccionario = {frozenset(["jhonny", "mosquera"]) : "ajjaja"}

# creando diccionarios con fromkeys() valor por defecto note
diccionario = dict.fromkeys(["nombre", "apellido", "edad"])

# creando diccionarios con fromkeys() cambiando valor por defento
diccionario = dict.fromkeys(["nombre", "apellido"], "no se")

print(diccionario)