# CPP Module 03

A project from the 42 curriculum. The goal of this module is to introduce object-oriented programming concepts in C++ centered around inheritance, constructor/destructor chaining, and class hierarchy design.

## Overview of Exercises

The module guides you through building a hierarchy of robot classes derived from a base class:

* **ex00: Aaaaand... OPEN!**
  * **Goal:** Implement the foundational base class `ClapTrap`.
  * **Concept:** Defines base attributes (`name`, `hit points`, `energy points`, `attack damage`) and core actions (`attack`, `takeDamage`, `beRepaired`). All attribute modifications respect energy point and hit point constraints.

* **ex01: Serena, my love!**
  * **Goal:** Introduce class inheritance with `ScavTrap`.
  * **Concept:** `ScavTrap` inherits publicly from `ClapTrap` with overridden default stats (HP: 100, EP: 50, ATK: 20), a specialized `attack` implementation, and an exclusive `guardGate()` member function. Highlights constructor and destructor execution order in derived classes.

* **ex02: Repetitive work**
  * **Goal:** Implement another derived class `FragTrap`.
  * **Concept:** `FragTrap` inherits from `ClapTrap` with its own distinct stats (HP: 100, EP: 100, ATK: 30) and a special action `highFivesGuys()`, reinforcing class reusability and inheritance structures.

* **ex03: Now it's weird!**
  * **Goal:** Explore multiple inheritance and solving the diamond problem.
  * **Concept:** `DiamondTrap` inherits simultaneously from both `ScavTrap` and `FragTrap`. Uses virtual inheritance to resolve ambiguity and shares attributes across both parent sub-objects, including a unique `whoAmI()` diagnostic function.

## Compilation and Usage

### 1. Compilation

Navigate to any exercise directory (`ex00/` through `ex03/`) and compile using `make`. All exercises compile with `c++` using strict flags (`-Wall -Wextra -Werror -std=c++98`).

```bash
cd ex02
make
```

### 2. Usage

Run the compiled executable to view the test suite and verify construction, action execution, and destruction order:

```bash
./ex02
```

## Requirements

* Language: C++ (C++98 Standard)
* Compiler: `c++`
* Flags: `-Wall -Wextra -Werror -std=c++98`

## Author

* **joschmun** - *42 Student*