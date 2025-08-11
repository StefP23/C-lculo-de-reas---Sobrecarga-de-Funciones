# Calculo de Áreas - Sobrecarga de Funciones
Programa que permite calcular el área de cuatro figuras geométricas: triángulo, cuadrado, rectángulo y círculo. Utiliza la sobrecarga de funciones, es decir, varias funciones llamadas área pero con diferentes parámetros, para calcular el área según la figura seleccionada.

## Flujo del programa
Se muestra un menú con opciones para cada figura y una opción para salir.
El usuario elige una opción.
Según la opción, el programa solicita los datos necesarios (base y altura, lado, largo y ancho, o radio).
Se llama a la función area correspondiente, que está sobrecargada para cada caso.
Se muestra el resultado del área calculada.
El menú se repite hasta que el usuario elige salir.

## Cálculo de áreas
- Triángulo:
Usa la fórmula:
área = (base * altura) / 2

- Cuadrado:
Usa la fórmula:
área = lado * lado

- Rectángulo:
Usa la fórmula:
área = largo * ancho
Se llama a la función: int area(int largo, int ancho)

- Círculo:
Usa la fórmula:
área = π * radio^2

## Vista en Consola
<img width="442" height="192" alt="image" src="https://github.com/user-attachments/assets/7285ea28-efc2-460b-bfc3-f82251bd98ac" />
