# C++ Learning Repository

A structured collection of C++ programs written while learning the language, from basic syntax through OOP, the STL, file handling, and a few small console and Qt desktop projects. This is a learning repository, not a library or framework — each file is a self-contained program.

## Layout

| Folder | Contents | Count |
|---|---|---|
| `Basics programs/` | I/O, conditionals, arithmetic, and intro OOP (constructors, inheritance, operator overloading, `static` members, `friend` classes) | 26 |
| `Array/` | 1D/2D arrays: sum, min/max, most-frequent, second-largest | 9 |
| `String/` | Reverse, compare, replace char/word, delete vowels, swap | 7 |
| `Functions/` | Overloading, overriding, virtual functions, parameter/return variants | 9 |
| `Loop programs/` | Factorial, Armstrong number, natural-number sums | 6 |
| `Pointer/` | Pointer-to-array, pointer-to-function, applications | 3 |
| `Patterns/` | Star/number patterns | 2 |
| `STL/` | Vector, list, set/multiset, map/multimap, unordered variants, stack, queue, priority queue, `<algorithm>` | 15 |
| `File Handling/` | `seekg`/`seekp`/`tellg`/`tellp`, reading/writing objects with `fstream` | 5 |
| `Multi-threading/` | `std::thread` with a function, a class, and a lambda | 3 |
| `Projects/` | Larger programs (see below) | 5 |

## Projects

| Project | Stack | What it does |
|---|---|---|
| **ATM Machine** (`Projects/ATM MACHINE/`) | Console, OOP | Account login (account number + PIN), balance check, withdrawal, mobile-number update; encapsulated `atm` class |
| **Student Management System** (`Projects/Student Management System/`) | Console, binary `fstream` | Add / view / delete student records with a recoverable "trash" file |
| **Android Calculator** (`Projects/AndroidCalculator/`) | Qt (`.pro`, `.ui`, C++) | GUI calculator; includes a screenshot (`SS.png`) |
| **Car Booking System** (`Projects/CarBookingSystem/`) | Qt (`.pro`, `.ui`, C++) | Login, add-car, book-car, and main-menu windows |
| **Keylogger** (`Projects/Keylogger/`) | Windows API, console | A Windows-only keystroke logger written as a systems-programming exercise with `Windows.h`. Educational; see that folder's own README. |

Each project folder has its own README.

## Building and running

The console programs are single files. With a C++17 compiler:

```bash
g++ -std=c++17 "Projects/ATM MACHINE/ATM MACHINE.cpp" -o atm && ./atm
g++ -std=c++17 -pthread "Multi-threading/Multi-threading with function.cpp" -o mt && ./mt
```

The two Qt projects (`AndroidCalculator`, `CarBookingSystem`) are built with Qt — open the `.pro` file in Qt Creator or run `qmake && make`. The Keylogger uses the Win32 API and compiles only on Windows (e.g. MinGW or MSVC).

## Compile status (verified 2026-10-28, g++ 17, syntax-only)

Of the 82 console programs outside the Qt and Win32 folders, **77 compile cleanly** and **5 do not**, for two reasons worth noting:

- Two files declare `void main()` (legacy Turbo C++ style), which modern g++ rejects — `main` must return `int`.
- The remaining three contain a second stray `main`, a duplicated block, or a leftover character from editing.

These are early files kept as-is for history. The multithreading programs need `-pthread`. The Qt and Windows projects were not built here (no Qt toolchain / not Windows).

## Notes

These are study exercises, written over June–July 2025 as the author learned C++. They are preserved as a record of that progression rather than maintained as production code; the known compile issues above reflect that.
