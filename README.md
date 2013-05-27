c_environment
=============

Proyecto de muestra para usar `execve()` con `getenv()` y el entorno de un programa en C.

Para ejecutarlo:

```
$ make
$ export MY_VAR='Hello, world!'
$ ./callee # muestra correctamente
$ ./caller # muestra null
$ ./env_caller # muestra correctamente
```

TODO:
--------

* Obtener el entorno de ejecución usando la versión de `main()` con tres parámetros.
