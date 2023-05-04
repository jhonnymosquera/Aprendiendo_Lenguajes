# podemos importar los modulos con import archivo.py
import modulo_saludar
# podemo importar solo algo espesifico de ese modulo
# podemo cambiar tambien el nombre de las funciones que importamos
from modulo_saludar import saludar, saludar_raro as s_raro
# rambien podemos importar todas las funciones y variables de otros modulos poniendo "from modulo import *" mala practica
from modulo_saludar import *


saludar("jhonny")

s_raro("Ruben")

# Para ver las propiedades y metodos de un modulo
print(dir(modulo_saludar))
