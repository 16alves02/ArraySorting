# 🇬🇧 README — Array Sorting (English Version)

# 🔢 Array Sorting — C Console Application

A simple and educational console application written in **C**, demonstrating the behaviour of classic sorting algorithms.  
The user interacts through a clean menu and can choose which algorithm to apply to a fixed‑size array of integers.

Ideal for learning, demonstrations, or quick testing of sorting logic.

---

## 📋 Features

The program includes the following sorting algorithms:

- **Selection Sort**  
- **Insertion Sort**  
- **Bubble Sort**  
- **Bogo Sort** (intentionally inefficient, included for demonstration)

Each algorithm sorts an array of integers in **ascending order**.

---

## 📑 Table of Contents

- [How to Use](#how-to-use)
- [Sorting Algorithms](#sorting-algorithms)
- [Program Structure](#program-structure)
- [Example Output](#example-output)
- [Contributing](#contributing)
- [Author](#author)

---

## 🚀 How to Use

1. Clone the repository:
   ```bash
   git clone <repository-link>
   ```
2. Open the project in your preferred C development environment  
   (Visual Studio, Code::Blocks, VSCode, etc.).
3. Compile the `.c` file.
4. Run the program.
5. Choose a sorting algorithm from the menu and enter your numbers.

---

## 🧠 Sorting Algorithms

### **Selection Sort**
Finds the smallest element and places it in the correct position at each iteration.

### **Insertion Sort**
Builds a sorted portion of the array by inserting each element into its correct place.

### **Bubble Sort**
Repeatedly compares adjacent elements and swaps them if they are out of order.

### **Bogo Sort**
Randomly shuffles the array until it becomes sorted.  
> ⚠️ Extremely inefficient — included only for educational purposes.

---

## 🏗️ Program Structure

- Menu system  
- Functions to:
  - Read array  
  - Print array  
  - Execute each sorting algorithm  
  - Check if the array is sorted (for BogoSort)  
  - Shuffle the array  
- `switch` statement to select the algorithm

---

## 🖥️ Example Output

```
+------------------------------------+
|           ARRAY SORTING            |
|------------------------------------|
| 1 - Selection Sort                 |
| 2 - Insertion Sort                 |
| 3 - Bubble Sort                    |
| 4 - Bogo Sort                      |
|                                    |
| 0 - Exit Program                   |
+------------------------------------+

Enter your choice: 1

Selection Sort
Enter 10 numbers:
0: 5
1: 2
2: 9
...
Ascending Order:
2 5 9 ...
```

---

## 🤝 Contributing

Contributions are welcome!  
If you’d like to improve the code, add new algorithms, or enhance the interface:

- Open an issue  
- Submit a pull request  

---

## 👤 Author

Project created by **@16alves02**.

---

# 🇵🇹 README — Ordenação de Arrays (Português Europeu)

# 🔢 Ordenação de Arrays — Aplicação de Consola em C

Aplicação simples e educativa desenvolvida em **C**, que demonstra o funcionamento de vários algoritmos clássicos de ordenação.  
O utilizador interage através de um menu intuitivo e escolhe qual o algoritmo a aplicar a um array de inteiros.

Ideal para aprendizagem, demonstrações em aula ou testes rápidos.

---

## 📋 Funcionalidades

O programa inclui os seguintes algoritmos de ordenação:

- **Selection Sort**  
- **Insertion Sort**  
- **Bubble Sort**  
- **Bogo Sort** (extremamente ineficiente, apenas demonstrativo)

Todos os algoritmos ordenam um array de inteiros em **ordem crescente**.

---

## 📑 Índice

- [Como Usar](#como-usar)
- [Algoritmos Implementados](#algoritmos-implementados)
- [Estrutura do Programa](#estrutura-do-programa)
- [Exemplo de Execução](#exemplo-de-execução)
- [Contribuir](#contribuir)
- [Autor](#autor)

---

## 🚀 Como Usar

1. Clonar o repositório:
   ```bash
   git clone <link-do-repositório>
   ```
2. Abrir o projeto num ambiente de desenvolvimento C  
   (Visual Studio, Code::Blocks, VSCode, etc.).
3. Compilar o ficheiro `.c`.
4. Executar o programa.
5. Escolher o algoritmo no menu e introduzir os números pretendidos.

---

## 🧠 Algoritmos Implementados

### **Selection Sort**
Procura o menor elemento e coloca-o na posição correta.

### **Insertion Sort**
Insere cada elemento na posição correta da parte já ordenada do array.

### **Bubble Sort**
Compara elementos adjacentes e troca-os se estiverem fora de ordem.

### **Bogo Sort**
Baralha o array repetidamente até ficar ordenado.  
> ⚠️ Muito ineficiente — incluído apenas para fins educativos.

---

## 🏗️ Estrutura do Programa

- Menu principal  
- Funções para:
  - Ler array  
  - Escrever array  
  - Executar cada algoritmo  
  - Verificar se o array está ordenado (para o BogoSort)  
  - Baralhar o array  
- Estrutura `switch` para seleção do algoritmo

---

## 🖥️ Exemplo de Execução

```
+------------------------------------+
|           ARRAY SORTING            |
|------------------------------------|
| 1 - Selection Sort                 |
| 2 - Insertion Sort                 |
| 3 - Bubble Sort                    |
| 4 - Bogo Sort                      |
|                                    |
| 0 - Exit Program                   |
+------------------------------------+

Enter your choice: 1

Selection Sort
Enter 10 numbers:
0: 5
1: 2
2: 9
...
Ascending Order:
2 5 9 ...
```

---

## 🤝 Contribuir

Contribuições são bem-vindas!  
Se quiseres melhorar o código, adicionar novos algoritmos ou melhorar a interface:

- Abre uma *issue*  
- Envia um *pull request*  

---

## 👤 Autor

Projeto criado por **@16alves02**
