# condicionales

ingreso_mensual = 81_000
gasto_mensual = 80_000


if ingreso_mensual > 10_000:
    if ingreso_mensual - gasto_mensual < 0:
        print("estas en deficit")
    elif ingreso_mensual - gasto_mensual > 3000:
        print("bien pa, estas bien")
    else:
        print("Estas gastando una banda, hay que ver si te alcansa")

elif ingreso_mensual > 1_000:
    print("Estas bien economicamente en latino america")

elif ingreso_mensual > 500:
    print("Estas bien economicamente en argentina")

elif ingreso_mensual > 200:
    print("Estas bien economicamente en venezuela")

else:
    print("sos pobre")
