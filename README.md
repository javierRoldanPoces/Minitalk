# Minitalk
Proyecto 42 Minitalk 
Proyecto Programa 42 Telefónica campus de Malaga
 Programa de comunicación en la forma de un cliente y un servidor.
• El servidor debe lanzarse primero, tras lanzarse debe mostrar su PID.
• El cliente tomará como parámetros:
◦ El PID del servidor.
◦ La string que debería mandarse.
• El cliente debe comunicar la string pasada como parámetro al servidor. Una vez la
string se haya recibido, el servidor debe mostrarla.
• El servidor debe ser capaz de mostrar la string suficientemente rápido. Por rápido
queremos decir que si piensas que es está tardando mucho, probablemente es que
está tardando demasiado.
1 segundo para mostrar 100 caracteres es ¡muchíiiiisimo!
• Tu servidor debe poder recibir strings de distintos clientes consecutivamente, sin
necesidad de reiniciar.
• La comunicación entre tu cliente y tu servidor debe hacerse SOLO utilizando
señales UNIX.
• Solo puedes utilizar estas dos señales: SIGUSR1 y SIGUSR2.
Linux no pone en cola señales cuando ya tienes señales pendientes de
este tipo.
Bonus
• El servidor confirma cada señal recibida mandando una señal al cliente.
• Soporta los caracteres Unicode.
Proyecto Superado con 125 %
