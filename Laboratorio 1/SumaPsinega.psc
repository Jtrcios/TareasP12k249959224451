Algoritmo SumaPsinega
    Definir valor1, valor2, suma como Real
	
    Escribir "Ingrese el primer valor:"
    Leer valor1
	
    Escribir "Ingrese el segundo valor:"
    Leer valor2
	
    suma = valor1 + valor2
	
    Si suma > 0 Entonces
        Escribir "La suma es positiva.", suma
    Sino
        Si suma < 0 Entonces
            Escribir "La suma es negativa.", suma
        Sino
            Escribir "La suma es cero.", suma
        FinSi
    FinSi
FinAlgoritmo