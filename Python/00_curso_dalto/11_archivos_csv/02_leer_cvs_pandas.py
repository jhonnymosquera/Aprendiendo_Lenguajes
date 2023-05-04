import pandas as pd

df = pd.read_csv("11_archivos_csv\\archivo.csv")
df2 = pd.read_csv("11_archivos_csv\\archivo.csv")

# obteniendo los datos de la columna nombre
nombres = df["nombre"]

# ordenando el dataframe por la edad
orden_ascendente = df.sort_values("edad")

# ordenando de forma descendente
orden_descendente = df.sort_values("edad", ascending=False)

# Concatenando los 2 dataframes
df_concatenado = pd.concat([df, df2])

# Accediendo a la primera fila con head().
# definimos cuantas filas queremos ver, de arriba hacia abajo
primer_fila = df.head(2)

# Accediendo a las ultimas filas con tail().
ulima_fila = df.tail(3)

# accediendo a la cantidad de filas y columnas con shape
filas_y_columnas_totales = df.shape

# obteniendo data estadistica del dataframe
df_info = df.describe()

# Accediendo a un elemento espesifico del df con loc
# recibe como parametro, la fila y el nombre de la comlumna
elemento_espesico_loc = df.loc[2, "edad"]

# accediendo a la edad de la fila 2 con iloc
# recibe como parametro, la fila y la comlumna
elemento_espesico_iloc = df.iloc[2, 2]

# Accediendo a todas las filas de una columna
# recibe como parametro el index de la columna
apellidos = df.iloc[:, 1]

print(apellidos)
