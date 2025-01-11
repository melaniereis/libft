# libft 📔
<p align="center">
![Libft Logo](https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExcGluZWpoeDhqN2NpZmJ4bHJwNzh2NnB2YTJ3bHZjemFmOXl4anE0eCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/fsXOS3oBboiYf6fSsY/giphy.webp)
</p>

*(A 42 School Project)*

---

## Table of Contents
- [About 📌](#about)
- [Key Features 🌟](#key-features)
- [Usage 📚](#usage)
- [Setup & Compilation 🖇️](#setup--compilation)
- [Makefile Rules 🔧](#makefile-rules)
- [Implementation Overview 🛠️](#implementation-overview)
  - [Mandatory Part 1 📝](#mandatory-part-1)
  - [Mandatory Part 2 📝](#mandatory-part-2)
  - [Bonus Part 🎉](#bonus-part)
- [Testing & Validation ✅](#testing--validation)
- [Contributing 🤝](#contributing)
- [License 📜](#license)
- [Contact 📫](#contact)

---

## About 📌
**libft** is a cornerstone project in the Common Core curriculum at **42**, designed to deepen your understanding of C programming. This project involves crafting a custom library by implementing both standard and non-standard C functions from scratch.

### Why This Matters
Building a solid foundation in C is crucial for any software developer. This project not only sharpens your coding skills but also showcases your problem-solving abilities—qualities that are highly sought after by recruiters.

---

## Key Features 🌟
- **Comprehensive Functionality:** Implements **43 functions** that span a wide range of programming needs.
- **Modular Design:** Organized into mandatory and bonus sections, enhancing code reusability and readability.
- **Robust Testing Framework:** Encourages thorough testing practices to ensure reliability and performance.
- **Norm-Compliant Code:** Adheres to strict coding standards, demonstrating attention to detail and discipline.

---

## Usage 📚
To utilize the functions from this library in your projects, include the following header file:

```bash
#include "libft.h"
```

### Example Usage
Here’s a simple example demonstrating how to use one of the functions from the library:

```bash
#include "libft.h"
int main()
{
  char *str;

  str = "Hello, libft!";
  ft_putstr(str); // Custom function to print strings
  return (0);
}
```

---

## Setup & Compilation 🖇️
Follow these steps to set up and compile the library:

1. **Clone the repository:**

```bash
git clone git@github.com:melaniereis/libft.git
```

2. **Navigate into the project directory:**

```bash
cd libft
```

3. **Compile the library:**

```bash
make
```

---

## Makefile Rules 🔧
The Makefile provides several commands to manage your build process:

| Command                         | Description                                        |
|---------------------------------|----------------------------------------------------|
| `make`                          | Compile mandatory files                            |
| `make bonus`                   | Compile with bonus files                           |
| `make extra`                   | Compile with additional features (e.g., ft_printf)|
| `make clean`                   | Remove object files (.o)                           |
| `make fclean`                  | Remove all object and archive (.a) files           |

---

## Implementation Overview 🛠️
This library comprises a total of **43 functions**, organized into three distinct sections:

### Mandatory Part 1 📝
A selection of **23 libc functions** that form the core functionality of the library, including string manipulation, memory management, and conversion functions.

### Mandatory Part 2 📝
An additional **11 non-standard or modified-standard functions** that extend the capabilities of your library, enhancing its utility in various programming contexts.

### Bonus Part 🎉
This section features **9 advanced functions** designed for list manipulation, providing powerful tools for managing complex data structures efficiently.

---

## Testing & Validation ✅
To ensure the reliability and performance of your library, rigorous testing is encouraged. Implement unit tests for each function, validate edge cases, and document your testing process. This practice not only solidifies your understanding but also demonstrates your commitment to quality—an attractive trait for potential employers.

### Example Test Case
Here’s an example of how you might structure a test case for one of your functions:
```bash
#include "libft.h"
#include <assert.h>

void test_ft_strlen()
{
  assert(ft_strlen("Hello") == 5);
  assert(ft_strlen("") == 0);
}
```

---

## Contributing 🤝
Contributions are welcome! If you have suggestions for improvements or new features, please feel free to open an issue or submit a pull request. 

### How to Contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a Pull Request.

---

## License 📜
This project is released under the terms of the **42 Unlicense**, allowing for unrestricted use and modification.

---

## Contact 📫
For any inquiries or collaboration opportunities, please reach out via email at **meferraz@student.42porto.com**.

---
