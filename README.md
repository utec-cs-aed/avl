# Alumno: ____   _______

# AVL Tree

- Modificar los algoritmos de inserción, balanceo y rotaciones para mantener actualizado la altura de cada subarbol en el atributo height. De este modo mantenemos una complejidad log(n) en la inserción y eliminación.

```c++
struct NodeBT {
    T data;
    int height; //altura del nodo
    NodeBT* left; 
    NodeBT* right; 
};
```

- Implementar la función de eliminación que mantenga el árbo balanceado.

