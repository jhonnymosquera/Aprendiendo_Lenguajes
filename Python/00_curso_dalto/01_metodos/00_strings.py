# Metodos de cadenas de texto

cadena1 = "Jhonny Javier"
cadena2 = "Bienvenudo maquinola"
cadena3 = "maximuxz M"
cadena4 = "4564651615asd"
cadena5 = "asdasd!&%"

# dir() nos devuelve los metodos y funciones de un tipo de dato en esta caso strings
muestra_metodos_y_funciones = dir(cadena1)

# string.upper() convierte la cadena de texto a mayuscula
mayuscula = cadena1.upper()

# string.lower() convierte la cadena de texto a minuscula
minuscula = cadena1.lower()

# string.capitalize() convierte todo el tezto a minuscula y luego la primera letra a mayuscula
primera_letra_mnayuscula = cadena3.capitalize()

# string.find("string") busca una cadena de texto en otra cade de texto y defuelve el index de la primera letra
# si no encuentra nada devuelve -1
busqueda_find = cadena1.find("e")

# string.index("string") es igual a find, devuelve el index de la primera letra
# si no encuentra nada devuelve un ERROR o Exception
busqueda_index = cadena1.index("e")

# string.isnumeric() comprueba si la cadena de texto esta compuesta de solo numeros, devuelve True, si no devuelve False
# Solo 0-9

es_numerico = cadena4.isnumeric()

# string.isalpha() comprueba si la cadena de texto contiene solo letras, devuelve True si no devuelfe false
# Solo A-Z
# no acepta caracteres especiales como el "ESPACIO"
es_alfa = cadena3.isalpha()

# string.isalnum() comprueba si la cadena de texto contiene solo letras o solo numeros, devuelve True
# Solo A-Z y 0-9
# Devielve false con caracteres especiales
es_alfanumerico = cadena3.isalnum()

cadena6 = "Hola, este es el curso de Python"
# string.count("string") cuenta cuantas veces que se encuentra el string que le pasemos en una cadena de texto
contar_coincidencias = cadena6.count("es")

# len("string") cuanta la cantidad de caracteres en un string
contar_caracteres = len(cadena6)

# string.startswith("string") verificamos si una cadena empieza con otra cadena dada, si es asi devuelve True
empieza_con = cadena6.startswith("Hola,")

# string.endswith("string") verificamos si una cadena termina con otra cadena dada, si es asi devuelve True
empieza_con = cadena6.endswith("Python")

# srtin.replace("old_string" , "new_string") remplaza un pedazo de la cadena dada, por otra dada
# recibe 2 parametros el string que queremos cmabiar y el nuevo string
# si no encuenta el old_string, no realiza los cambios
cadena_nanueva = cadena6.replace("Python", "JavaScript")

# string.split("string") separar cadenas con la cadena que le pasemos, devuelve una lista
# en terminos de javascript convierte un string en un array usando como separador el caracter que le demos
cadena_separada = cadena6.split(" ")


print(cadena_separada)
