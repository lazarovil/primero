# primero

Repositorio: https://github.com/lazarovil/primero

---

## Descripción

Este es el primer código que intentamos hacer con Matías en su casa. Contiene un programa en C muy simple que lee un número, lo duplica y muestra resultados adicionales en un bucle seguro.

**Fecha:** jue 23 oct 2025 15:56:33 -03

---

## Compilar y ejecutar

Si tienes GCC instalado, desde la carpeta del proyecto:

```bash
gcc -o hello hello.c   # compila el programa
./hello                 # ejecuta el programa
```

Si quieres ver advertencias adicionales al compilar:

```bash
gcc -Wall -Wextra -o hello hello.c
```

---

## Comandos Git útiles

Explicación rápida de los comandos que solemos usar:

- `git add .` — añade cambios al área de preparación (staging).
- `git commit -m "mensaje"` — guarda los cambios localmente con un mensaje.
- `git push origin <rama>` — sube los commits a GitHub en la rama indicada.
- `git status` — muestra el estado actual del repositorio.
- `git branch -a` — muestra todas las ramas (locales y remotas).
- `git branch <nombre>` — crea una rama nueva llamada `<nombre>`.
- `git log` — muestra el historial de commits.
- `git checkout <rama>` — cambia a la rama `<rama>`.
- `git diff` — muestra las diferencias entre cambios.
- `git pull origin <rama>` — trae y fusiona los cambios desde la rama remota.
- `git log -p` — muestra los commits junto con los parches (diffs).

---

## Notas

- Este repositorio es para aprendizaje y experimentación. Si quieres mejorar el README o el código, haz una rama nueva y abre un pull request.

---

Gracias por trabajar en este proyecto. Si necesitas que agregue instrucciones más detalladas o traduzca a otro idioma, dilo.