
#Creando un conjunto con set([value])

conjunto = set(["dato1", "dato2", "dato3"])

# Metiendo un conjunto dentro de otro conjunto
conjunto1 = frozenset(["dato1", "dato2", "dato3"])
conjunto2 = {conjunto1,"dato4"}
print(conjunto2)

# Teoria de conjuntos
conjunto1 = {1,3,5,7}
conjunto2 = {1,3,7}

# verificando si es un subconjunto
resultado = conjunto2.issubset(conjunto1)
resultado = conjunto2 <= conjunto1

# verificando si es un superconjunto
resultado = conjunto2.issuperset(conjunto1)
resultado = conjunto1 > conjunto2

# verificar si hay algun numero en comun
# es verdadero solo cuando los conjustos no son iguales
resultado = conjunto2.isdisjoint(conjunto1)

print(resultado)
