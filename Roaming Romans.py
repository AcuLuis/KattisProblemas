
import re
import math

patron = r'^\d+(\.\d{1,3})?$'

entrada = input()
    
if re.match(patron, entrada):
    numero = float(entrada)
    if 0 <= numero <= 1000:
        resu = numero * (1000 * (5280.000 / 4854.000))
        if resu % 1 >= 0.5:
            numero_redondeado = math.ceil(resu)
        else:
            numero_redondeado = math.floor(resu)
        print(numero_redondeado)
    