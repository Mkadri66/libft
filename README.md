# Libft

![42](https://img.shields.io/badge/42-School-blue)
![C](https://img.shields.io/badge/Language-C-green)
![License](https://img.shields.io/badge/License-MIT-yellow)

**Libft** is a custom C library developed as part of the 42 School curriculum. It reimplements functions from the standard C library (`libc`) and adds additional utility functions.

---

## 📋 Table of Contents

1. [Introduction](#-introduction)
2. [Implemented Functions](#-implemented-functions)
3. [How to Use](#-how-to-use)
4. [Compilation](#-compilation)
5. [Author](#-author)
6. [License](#-license)

---

## 🌟 Introduction

Libft is a core project at 42 that allows students like me to dive deep into the fundamentals of C programming. 
It acts as a crucial building block for future projects, providing a solid foundation by including essential functions and utilities.

- Reimplementations of standard functions (`libc`).
- Additional utility functions.
- A bonus section for manipulating linked lists.

---

## 📜 Implemented Functions

### Mandatory Part

#### Libc Functions
- **Characters**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- **Strings**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`.
- **Memory**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
- **Conversion**: `ft_atoi`.
- **Memory Allocation**: `ft_calloc`, `ft_strdup`.

#### Additional Functions
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`.

### Bonus Part (Linked Lists)
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## 🛠 How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/libft.git
2. Go to folder project
    ```bash
    cd libft

## 🔧 Compilation 

To compile the library, use the provided Makefile:
  ```bash
  make
  ```
    
This generates a libft.a file (static library).

You can execute the code with this command : 
  ```bash
  ./libft
  ```

To clean up object files:
   ```bash
   make clean
   ```

To clean up object files and the library:
   ```bash
   make fclean
   ```
    
To recompile everything:
   ```bash
   make re
   ```

## 👤 Author
 [Mkadri66](https://github.com/Mkadri66)

## 📄 License
This project is licensed under the MIT License. See the LICENSE file for details.
