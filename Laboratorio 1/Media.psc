Algoritmo Media
    Definir N, suma, numero, promedio como Real
	
    suma = 0
	
    Escribir "Ingrese la cantidad de números a promediar:"
    Leer N
	
    Para i = 1 Hasta N Hacer
        Escribir "Ingrese el número ", i, ":"
        Leer numero
        suma = suma + numero
    FinPara
	
    promedio = suma / N
	
    Escribir "El promedio de los números ingresados es:", promedio
FinAlgoritmo