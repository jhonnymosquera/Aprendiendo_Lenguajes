# a) Diferencia en porcentaje entre el curso actual y:
    # -El mas rapido de los  otros cursos
    # -El mas lento de los  otros cursos
    # -El mas promedio de los  otros cursos
# b) Porcentaje de material inservible que se reduce en:
    # El promedio de los cursos
    # El curso actual
# c) Ver 10 horas de este curso, seria el equivalente a ver cuantas horas de otros cursos
    # y 10 horas de este curso a cuantas horas equivalen de este

tiempo_maximo = 7
tiempo_promedio = 4
tiempo_minimo = 2.5
este_curso = 1.5

crudo_otros_cursos = 5
crudo_convertido_otros = 4

crudo_este_cruso = 3.5
crudo_convertido_este = 1.5

# a)
este_y_maximo = 100-  este_curso * 1000 // tiempo_maximo  / 10
este_y_promedio = 100- este_curso /tiempo_promedio  * 100
este_y_minimo = 100- este_curso /tiempo_minimo * 100


print(f"Los otros cursos mas largos fuero un {este_y_maximo}% mas largos que este ")
print(f"Los otros cursos en promedio fuero un {este_y_promedio}% mas largos que este ")
print(f"Los otros cursos mas rapidos fuero un {este_y_minimo}% mas largos que este\n")


# b)
material_inservible_otros= 100 - ( crudo_convertido_otros / crudo_otros_cursos) * 100
material_inservible_este= 100 - ( crudo_convertido_este / crudo_este_cruso) * 100

print(f"Los otros cursos reducen su material inservible en promedio un {int(material_inservible_otros)}%  ")
print(f"Este curso reducen su material inservible en un {int(material_inservible_este)}%\n")
