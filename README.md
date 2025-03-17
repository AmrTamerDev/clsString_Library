# 🧵 String Library 📚  
A versatile C++ library for string manipulation and operations. 🚀  

## 🌟 Project Overview  
The **clsString** library is a powerful C++ string manipulation library that simplifies common string tasks. It provides operations such as counting letters, changing case, trimming, and splitting strings, making string handling more efficient and readable.  

---

## ✨ Features  

### 📝 String Operations  

#### 📏 Length Calculation  
- `Length()`: Get the length of the string.  

#### 🔠 Case Modification  
- `Upper_First_Letter_Of_Each_Word()`: Capitalize the first letter of each word.  
- `Lower_First_Letter_Of_Each_Word()`: Lowercase the first letter of each word.  
- `Upper_All_String()`: Convert the entire string to uppercase.  
- `Lower_All_String()`: Convert the entire string to lowercase.  
- `Invert_All_Letters_Case()`: Invert the case of each letter.  

#### 🔢 Letter Counting  
- `Count_Letters()`: Count the total number of letters.  
- `Count_Small_Letters()`: Count lowercase letters.  
- `Count_Capital_Letters()`: Count uppercase letters.  
- `Count_Specific_Letter()`: Count occurrences of a specific letter.  
- `Count_Vowels()`: Count the vowels in the string.  

#### 🏷️ Word and Character Operations  
- `Print_First_Letter_Of_Each_Word()`: Print the first letter of each word.  
- `Count_Words()`: Count the number of words.  
- `Split()`: Split the string into words.  
- `Join_String()`: Join a list of strings with a delimiter.  
- `Reverse_Words_In_String()`: Reverse the order of words.  
- `Replace_Words()`: Replace occurrences of a word with another.  
- `Remove_Punctuations()`: Remove punctuation from the string.  

#### ✂️ Trimming  
- `Trim_Left()`: Remove leading spaces.  
- `Trim_Right()`: Remove trailing spaces.  
- `Trim()`: Remove both leading and trailing spaces.  

---

## 🏗️ Code Structure  

### 📊 Data Structures  
- **clsString**: A class that encapsulates string operations, with a private `_Value` member and various public methods for string manipulation.  

### 🔢 Enumerations  
- **enWhatToCount**: Enum to specify types of letter counting (small letters, capital letters, all).  

### 🛠️ Methods  
- Includes various string manipulation functions such as changing case, counting characters, splitting and joining strings, and more.  
- Refer to in-code comments for additional details.  

---

## ⚙️ How It Works  

### 🔑 Core Components  
- **String Manipulation**:  
  - Methods either modify `_Value` directly or return a new string.  
- **User Input**:  
  - Methods can work on the internal `_Value` or take an external string as input.  
- **Efficient Operations**:  
  - Optimized for handling common string operations in a reusable way.  

---

## 📚 Future Improvements  

- 🔒 **Optimization**: Improve performance for large string inputs.  
- 🖥️ **Additional Features**: Add advanced string manipulation methods (e.g., regex support).  
- 🛠️ **Documentation**: Enhance in-code comments and provide more examples.  
- 📜 **Unit Tests**: Implement unit tests to ensure reliability.  

---

## ⚙️ Technologies Used  

- **Language**: C++ 🖥️  
- **Programming Paradigm**: Object-Oriented Programming (OOP) 💻  
- **File Handling**: Basic file I/O operations for potential data persistence 📂  
- **Data Structures**: Vectors for dynamic string management 📊  

---

## 🎯 Learning Outcomes  

This project demonstrates key C++ programming concepts:  

✅ **Class Design**: Encapsulation of data and behavior within classes.  
✅ **String Manipulation**: Efficient and reusable string operations.  
✅ **Error Handling**: Methods handle edge cases and invalid inputs.  
✅ **Code Reusability**: Use of static methods and member functions to improve maintainability.  

---

## 📜 License  

This project is open-source. Use it, modify it, share it! 🎉  

---

## 🤝 Contributing  

Contributions are welcome! Please submit a Pull Request if you'd like to improve or add new features. 🙌  

---

## 🏁 Ready to Explore?  

### 🚀 How to Run  

1. **Download the repository** to your local machine. 📥  
2. **Include the header file** in your C++ project. 💻  
3. **Use the `clsString` class** to perform various string manipulations. 🎮  

---

Developed by **Amr Tamer**. 🚀  
