# Matrix Calculator 🧮✨

> **Your all‑in‑one Matrix Engine — fast, accurate, beautifully designed, and built to evolve 🚀🧮**

**Short description**

Matrix Calculator is a lightweight command-line & library tool for basic linear algebra operations. Right now it computes eigenvalues and eigenvectors for square matrices. Future plans include matrix addition, subtraction, multiplication, transpose, determinant, inverse and more.

## 📌 Current Features

✨ Clean CLI output
📏 Currently supports **3×3 matrices** for eigenvalue & eigenvector calculations
⚡ Fast eigenvalue & eigenvector computation
🧩 Beginner‑friendly modular codebase
🔧 Easy to extend with new operations

* Compute eigenvalues and eigenvectors for real square matrices (currently optimized for **3×3 matrices**).
* Read matrices from plain text files or standard input.
* Small, beginner-friendly codebase designed for learning and extension.

## 🛠️ Roadmap / Planned Features

* ➕ Addition & Subtraction

* ✖️ Matrix Multiplication

* 🔁 Transpose

* 📐 Determinant & Inverse

* 📊 Advanced linear algebra tools

* 🎛️ Improved CLI with colors & flags

* Matrix addition, subtraction

* Matrix multiplication

* Transpose, determinant and inverse

* Support for different numeric types (float/double)

* Improved CLI, better error handling and tests

* Optional GUI or web front-end

## 📄 File Format

* Plain text, rows separated by newlines, columns by spaces or tabs.
* Square matrices only for eigen computations.

## 🤝 Contribution

Contributions, bug reports and feature requests are very welcome!

* Fork the repo
* Create a feature branch
* Add tests for new behavior
* Open a pull request

Please follow the existing code style and add clear commit messages.

## 👥 Authors ✨

* **S. Vinayak** (Project Creator)
* **Uzair Nasir** (Contributor / Collaborator)

## License

This project is open-source.

## ⚠️ Limitations

* Works only for **3×3 matrices**.
* Computes eigenvalues accurately only when the **characteristic equation has exactly one positive real root** (other roots may be complex).

## 📁 Project Structure

```
matrix-calculator/
├── src/
│   ├── eigen.c
│   ├── operations.c
│   ├── utils.c
│   └── main.c
├── include/
│   ├── eigen.h
│   ├── operations.h
│   └── utils.h
├── tests/
│   ├── test_eigen.c
│   ├── test_operations.c
│   └── matrices/
├── examples/
│   └── matrix.txt
├── assets/
│   └── banner.png
├── README.md
└── Makefile
```

---


