# Files and Directories #

## Enunciado ##

En esta tarea, nos familiarizaremos con el API descrito en el capítulo del libro. Para hacer esto, usted solo debe escribir unos cuantos programas, la mayoría basados en varias utilidades UNIX. En el presente laboratorio **solo es necesario realizar los tres primeros ejercicios, el último queda a libre criterio**.

## Anotaciones importantes ##

En los enlaces adjuntos se coloca un resumen de las llamadas de sistema mas importantes. Algunas de estas deberán ser usadas en la actividad tal y como se muestra en los ejercicios. Si requiere mas consulta puede hecharles un vistazo en la sección de abajo (**referncias de utilidad**).

## Ejercicios ##

1. **Stat**: Escriba su propia versión del comando ```stat``` (consulte sobre lo que hace este), la cual simplemente invoca la llamada del sistema [```stat()```](http://man7.org/linux/man-pages/man2/stat.2.html) en un archivo o directorio. Imprima el tamaño del archivo, el número de bloques asignado, contador de referencias (links), etc. ¿Qué significa el contador de referencias (link count) de un directorio?, ¿cómo cambia el número de entradas en el directorio? Interfaces útiles: [```stat()```](http://man7.org/linux/man-pages/man2/stat.2.html), naturalmente. R:/ Los contadores de referencias o links, es un valor que cuenta cuántos otros archivos están apuntando hacia el contenido del archivo el cual estoy obteniendo información, como se puede ver en la imagen punto1_stat.png, solo hay una referencia hacia el archivo ``ruta/archivo.txt``, para el caso de los directorios por defecto hay 3 links.

2. **List Files**: Escriba un programa que liste los archivos en un directorio dado. Cuando sea llamado sin argumentos, el programa deberá imprimir solo los nombres del archivo. Cuando se invoque con la flag ```-l```, el programa deberá imprimir la información de cada archivo tal como, owner, group, permissions y otra información obtenida de la llamada de sistema [```stat()```](http://man7.org/linux/man-pages/man2/stat.2.html). El programa deberá tomar un argumento adicional el cual es el directorio a leer, por ejemplo, ```myls -l directory```.  Si ningún directorio es dado, el programa deberá usar el directorio de trabajo actual. Interfaces útiles: [```stat()```](http://man7.org/linux/man-pages/man2/stat.2.html), [```opendir()```](http://man7.org/linux/man-pages/man3/opendir.3.html), [```readdir()```](http://man7.org/linux/man-pages/man2/readdir.2.html), [```getcwd()```](http://man7.org/linux/man-pages/man2/getcwd.2.html).

3. **Tail**: Escriba un programa que imprima una cuantas líneas al final de un archivo. El programa deberá ser eficiente, de manera que realice un *seek* para desplazarse cerca del final del archivo, realice una lectura de un bloque de datos y luego retroceda hasta encontrar el número de líneas solicitado; hasta este punto, el programa debería imprimir esas lineas desde el principio al final del archivo. Para invocar el programa, uno deberia digitar: ```mytail -n file```, donde ```n``` es el número de lineas al final del archivo a imprimir. Interfaces Útiles: [```stat()```](http://man7.org/linux/man-pages/man2/stat.2.html), [```lseek()```](http://man7.org/linux/man-pages/man2/lseek.2.html), [```open()```](http://man7.org/linux/man-pages/man2/open.2.html), [```read()```](http://man7.org/linux/man-pages/man2/read.2.html), [```close()```](http://man7.org/linux/man-pages/man2/close.2.html).

4. **Recursive Search**: Escriba un programa que imprima los nombres de cada archivo y directorio del árbol del sistema de archivos (*file system tree*), empezando en un punto dado del sistema de archivos en el árbol. Por ejemplo, cuando ejecute sin argumentos, el programa deberá empezar con el directorio de trabajo actual e imprimir su contenido, así como con los contenidos de cualquier subdirectorio en este, etc., hasta que el árbol entero, root en el CWD sea impreso. Si se da un único argumento (de un nombre de un directorio), use este como root en vez de él del sistema. Refine su busqueda recursiva con más opciones de busqueda divertidas, similar a la poderosa herramienta por línea de comandos ```find```. Interfaces Útiles: Resolverlo.


## Referencias de utilidad ##

1. [google](https://www.google.com/)
2. [Linux Syscall Refence](https://syscalls.kernelgrok.com/)
3. [Linux man pages online](http://man7.org/linux/man-pages/index.html)
4. [Linux System Call Quick Reference](http://www.cheat-sheets.org/saved-copy/Linux_Syscall_quickref.pdf)
5. [Lecture 24 - Systems Programming in C](https://www.cs.cmu.edu/~guna/15-123S11/Lectures/Lecture24.pdf)
6. [Conceptos básicos claves resumidos](https://docs.google.com/document/d/1-336S7oKYwzSSSH-vzks8lGJ0R5VJoZu3PGBsz3vP2w/edit?usp=sharing)
7. [Aspectos básicos de C](https://github.com/repos-SO-UdeA/lab3)
8. [Manejo dinámico de memoria en C](https://github.com/repos-SO-UdeA/lab5)
9. [Manejo de archivos en C](https://github.com/repos-SO-UdeA/lab6)

