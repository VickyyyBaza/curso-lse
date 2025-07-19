# Trabajo Integrador – Sistemas Embebidos con FreeRTOS

## Descripción

Este proyecto fue desarrollado como parte del curso de **Sistemas Embebidos** de la **Universidad Tecnológica Nacional – Facultad Regional Avellaneda**, con el objetivo de poner en práctica los conceptos de programación concurrente en sistemas de tiempo real.

El trabajo consistió en diseñar una aplicación funcional que simula un sistema de control de iluminación. Se integraron sensores, salidas visuales y sonoras, y mecanismos de interacción con el usuario, utilizando tareas coordinadas a través de **FreeRTOS**. El desarrollo implicó tanto la programación en C como el uso del entorno **MCUXpresso IDE** y el microcontrolador **LPC845-BRK**, promoviendo una experiencia de aprendizaje integral y aplicada.

## Integrantes

| Nombre                  | Correo electrónico                     |
|-------------------------|----------------------------------------|
| Victoria Josefina Baza | victoriajosefinabaza@gmail.com         |
| Mauricio Blasco         | sirmauriciob@gmail.com                 |

## Funcionalidad General

El sistema realiza las siguientes funciones principales:

- Lectura de luz ambiente mediante sensor BH1750.
- Ajuste del setpoint de luminosidad mediante botones físicos.
- Visualización de valores en un display de 7 segmentos.
- Regulación de brillo de un LED a través de un potenciómetro.
- Control de salidas (LEDs y buzzer) en función del estado del sistema.
- Monitoreo por consola de los parámetros en tiempo real.

## Herramientas Utilizadas

- **Lenguaje:** C  
- **IDE:** MCUXpresso IDE  
- **Sistema operativo:** FreeRTOS  
- **SDK:** LPC845 SDK oficial  

