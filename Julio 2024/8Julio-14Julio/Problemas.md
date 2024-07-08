# Links de los problemas - Grafos
### Problemas del 08/Julio/2024 a 14/Julio/2024
### Nivel **14.45** a **15.02**

Primero que nada, no te me desanimes con los puntos que te dan los problemas, la neta es que están mucho más difíciles que los puntos que dan (al menos a mi opinión), pero toma en cuenta que lo importante es que aprendas.

## 1. País desconectado

Existen un montón de formas de hacer este problema, pero la más fácil involucra un algoritmo que se llama Breath First Search (o búsqueda por anchura), entonces te recomiendo mucho que cheques primero eso.

Recorridos de un grafo: https://www.youtube.com/watch?v=HelpfhBel_k&t=25s

También, este problema da por hecho que sabes guardar grafos, entonces si no te sientes muy cómoda con ese tema, puedes también revisar este video:

Grafos: https://www.youtube.com/watch?v=F5Xjpg0-NhM

Entonces ya con esta teoría, la cosa es pensar cómo encontrar la menor cantidad de calles que tienen que construirse.

Problema: https://omegaup.com/arena/problem/Pais-Desconectado/

- Solución: Hay una cosa que se puede hacer si mantenemos la misma lista de visitados para todas las veces que recorremos el grafo y es contar la cantidad de "islas" que hay en un grafo. Una vez hecho esto, sabemos que necesitamos conectar cada isla entre sí, siendo la respuesta numIslas - 1.


## 2. Invirtiendo aristas

Este problema es un poco más sencillo que el anterior, aunque es bastante diferente.

Este utiliza una matriz de adjacencia, además que es más fácil, nos incitan a que la usemos porque sólo hay 1000 nodos máximo, entonces una matriz no abarcaría demasiada memoria, a diferencia del problema pasado.

Si puedes con este, vas a entender mucho mejor la forma en que se pueden guardar los enlaces de un grafo en una matriz.

El código para este problema tiene un montón de comentarios muy buenos, échale un ojo.

Problema: https://omegaup.com/arena/problem/Invirtiendo-aristas/
