/*
* EJERCICIO 2
Crear un programa que funcione de la siguiente forma:
● Si se aprieta la tecla R, aparece un personaje rojo en la pantalla.
● Si se aprieta la tecla G, aparece un personaje verde en la pantalla.
● Si se aprieta la tecla B, aparece un personaje azul en la pantalla.
● Si se aprieta la tecla D, desaparece un personaje al azar de los que haya en ese
momento en pantalla.
Las clases que se deben crear para estructurar el programa son…
● Entity
● Spawnable
● Character
● Spawner
La entidad debe ser una clase base abstracta que obligue la implementación de un
método draw para cada clase que herede de ella.
El spawnable debe ser una clase base abstracta que obligue la implementación del
seteo de una posición, así como de la condición de “activo” o “inactivo”, de un objeto de
una clase que herede de ella.
El personaje debe ser una clase derivada concreta que herede de la entidad y del
spawnable en simultáneo. Para dibujarse, debe generar un monigote del color
correspondiente en la posición en la que se encuentre el objeto.
El spawner debe ser una clase generada a partir de un template, donde el mismo
trabaja con cualquier clase que cumpla la condición de heredar de Entity y Spawnable a la
vez. Internamente, tiene que funcionar como un pool de objetos que se crean al
principio, y que se activan o desactivan bajo demanda. Además, la clase debe recibir la
cantidad de elementos máxima del pool como parte del template. El contenedor que usa
de fondo tiene que ser un arreglo de tamaño fijo.
Notas:
● Los personajes tienen que hacer spawn en posiciones aleatorias de la pantalla.
● Si se llega al límite de personajes en pantalla, al crear uno nuevo, se debe borrar
el más antiguo de los ya presentes.
*/