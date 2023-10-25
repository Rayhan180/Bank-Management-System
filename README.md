Bank-Management-System using C programming.

![Screenshot (3)](https://github.com/Rayhan180/Bank-Management-System/assets/136218406/d3c3c30c-dabd-4764-a3f8-18e0e90c1c81)

This project simulates a simplified version of a banking system. It enables users to create savings accounts and perform basic banking operations like crediting, debiting, checking the account balance, and closing accounts. The system stores user data in files, allowing for persistence between program runs.

[sodapdf-converted.pdf](https://github.com/Rayhan180/Bank-Management-System/files/13169780/sodapdf-converted.pdf) 
 
Here are some important data structure need to mention about this project. 
1. Use of `const` Data and Pointers:
   - I've employed the `const` keyword for variables where data should remain unaltered. This is particularly crucial for maintaining fixed data like interest rates and account number formats.

2. Compiler Optimization:
   - To ensure efficient execution and memory usage, I've diligently leveraged compiler optimizations, allowing my code to be concise and execute rapidly.

3. Volatile Keyword:
   - Recognizing the unpredictable nature of microcontroller environments, I've used the `volatile` keyword for variables that may change due to external events, such as hardware register modifications.

4. Padding Consideration:
   - In an effort to optimize memory usage, I've been attentive to data structure alignment and organization, reducing unnecessary padding.

5. Use of Pointers and Structures:
   - I've harnessed pointers to manage memory effectively, especially when handling dynamic data structures. Additionally, structures have been employed to organize data in a coherent manner.

6. Unions for Mutual Exclusivity:
   - To save memory in cases of mutually exclusive data, I've utilized unions, which have allowed for efficient representation of different transaction types within an account.

7. Passing Arrays to Functions:
   - By passing arrays to functions, I've streamlined the processing and manipulation of multiple data elements. This is evident in functions for account balance statistics, which receive arrays of account data.

8. Dynamic Array Allocation:
   - Dynamic memory allocation has been implemented for managing variable-sized data structures. This feature enables the storage of transaction histories for each account, responding dynamically to changes in transaction volume.

   C code is given in File.  
