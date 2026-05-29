# Programming Notes / Notas de Programación

---

> **ES:** Estas son mis notas personales de aprendizaje. No son documentación formal ni un tutorial — son el registro de lo que fui entendiendo mientras lo estudiaba. Si las estás leyendo, toma lo que te sirva.
>
> **EN:** These are my personal learning notes. Not formal documentation, not a tutorial — just what I wrote down as I was figuring things out. If you're reading this, take what's useful.

---

## Contenido / Contents

### C
Fundamentos del lenguaje: tipos de variables, entrada con `scanf`, booleanos, loops, números pseudoaleatorios con `rand()`.
También incluye una calculadora funcional en `calculator.c` como primer proyecto real.

*Basics of the language: variable types, user input with `scanf`, booleans, loops, pseudorandom numbers with `rand()`. Includes a working calculator as a first real project.*

```bash
gcc calculator.c -o calculator
./calculator
```

---

### Rust
Lenguaje similar a C en control de hardware pero con un sistema de tipos más estricto. Las notas cubren variables mutables e inmutables, tipos primitivos, entrada/salida con `std::io`, condicionales, loops, vectores, funciones y structs con `impl`.

*Similar to C in hardware control but with a stricter type system. Notes cover mutable/immutable variables, primitive types, I/O with `std::io`, conditionals, loops, vectors, functions, and structs with `impl`.*

```bash
cargo run           # compilar y ejecutar / compile and run
cargo check         # verificar tipos / type-check only
cargo build --release
```

---

### Assembly
El lenguaje más cercano al hardware. Notas de x86: registros (`rax`, `rbx`, `rcx`...), instrucciones básicas (`mov`, `add`), todos los saltos condicionales (`je`, `jne`, `jg`, `jz`...) y cómo hablar con el kernel usando `syscall`.

*The language closest to hardware. x86 notes: registers, basic instructions, all conditional jumps, and kernel communication via `syscall`.*

> Nota: el assembly es diferente por arquitectura de CPU. Estas notas son x86 (Intel/AMD).
> *Note: assembly differs per CPU architecture. These notes are x86 (Intel/AMD).*

---

### Bash
Uso de bash para automatizar tareas en Linux: manejo de archivos, la expresión `$(comando)` para embeber comandos en scripts, y `awk` para procesamiento de texto.

*Using bash to automate Linux tasks: file handling, the `$(command)` expression for embedding commands in scripts, and `awk` for text processing.*

---

### Linux
Cómo funciona el sistema de archivos de Linux, la jerarquía de directorios desde root, y herramientas esenciales: `grep` con expresiones regulares, pipes (`|`), y `echo`.

*How the Linux filesystem works, directory hierarchy from root, and essential tools: `grep` with regex, pipes, and `echo`.*

---

### NextJS
Diferencia entre Client Side Rendering y Server Side Rendering, cuándo usar `'use client'`, navegación con `<Link>`, y por qué SSR es la opción por defecto en Next.js.

*Difference between Client Side and Server Side Rendering, when to use `'use client'`, navigation with `<Link>`, and why SSR is the Next.js default.*

---

### Git
Flujo básico de commits: `git status`, `git add`, `git commit`, `git push`. Referencia rápida para el día a día.

*Basic commit workflow: quick daily reference.*

---

## Convenciones / Conventions

- Los `@(note)` y `% importante %` marcan advertencias o cosas que me quemaron. / `@(note)` and `% important %` mark warnings or things that burned me.
- El código y los `printf` están en español. / Code output and `printf` messages are in Spanish.
- Las fechas al inicio de algunos archivos están en formato `YYYY-MM-DD`.
