# serie fibonachi
def fibonachi(num):
    lista = [0, 1]

    for i in range(num+1):
        lista.append(lista[-1] + lista[-2])

    return lista


resultado = fibonachi(10)

print(resultado)
