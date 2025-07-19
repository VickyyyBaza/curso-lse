# Trabajo Integrador – Sistemas Embebidos con FreeRTOS

## Descripción

Este proyecto fue desarrollado en el marco del curso de **Sistemas Embebidos** de la **Universidad Tecnológica Nacional – Facultad Regional Avellaneda**, dictado por el profesor **Fabrizio Carlassara**.

La aplicación consiste en un sistema embebido multitarea basado en el microcontrolador **NXP LPC845 Breakout**, utilizando el sistema operativo en tiempo real **FreeRTOS**. El sistema es capaz de medir la iluminación ambiente, comparar el valor con un setpoint configurable, y accionar salidas visuales y sonoras en consecuencia. Se integraron múltiples periféricos y se emplearon técnicas de sincronización mediante colas, semáforos y exclusión mutua.

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

## Conclusiones

Este trabajo integrador nos permitió afianzar los conocimientos adquiridos en el curso, desarrollar habilidades técnicas aplicadas a sistemas en tiempo real y fortalecer la capacidad de trabajo en equipo. Logramos implementar una aplicación embebida funcional, resolviendo desafíos de integración entre tareas, sensores y periféricos.

