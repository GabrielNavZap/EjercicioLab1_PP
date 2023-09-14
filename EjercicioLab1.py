def division_restas_sucesivas(dividendo, divisor):
    cociente = 0

    if divisor == 0:
        raise ValueError("No se puede dividir por cero")

    while dividendo >= divisor:
        dividendo -= divisor
        cociente += 1

    return cociente, dividendo
    
def multiplicacion_sumas_sucesivas(a, b):
    resultado = 0
    for _ in range(b):
        resultado += a
    return resultado
    
def factorial(n):
    if n < 0:
        raise ValueError("El factorial no está definido para números negativos")
    if n == 0:
        return 1
    resultado = 1
    for i in range(1, n + 1):
        resultado *= i
    return resultado

# Ejemplo de funcion 1:
dividendo = 10
divisor = 3
cociente, residuo = division_restas_sucesivas(dividendo, divisor)
print(f"{dividendo} dividido por {divisor} es igual a {cociente} con un residuo de {residuo}")

# Ejemplo de funcion 2:
numero1 = 5
numero2 = 3
resultado_multiplicacion = multiplicacion_sumas_sucesivas(numero1, numero2)
print(f"{numero1} multiplicado por {numero2} es igual a {resultado_multiplicacion}")



# Ejemplo de uso:
numero = 5
resultado_factorial = factorial(numero)
print(f"El factorial de {numero} es {resultado_factorial}")
