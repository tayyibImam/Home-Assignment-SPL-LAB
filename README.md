# Home-Assignment-SPL-LAB
🧮 Structured Programming Language Lab – Home Assignment
This repository contains my solution to the Structured Programming Language Lab (CSE 1112) Home Assignment – Spring 2025, which involves writing a C program that performs digit-sum processing and prime number checking using specified modular functions.

✅ Assignment Overview
The assignment requires:

Taking an array of integers as input.

Calculating the sum of digits for each number using:

int sumOfDigits(int num);
Storing the digit sums in a new array.

Checking which of these sums are prime numbers using:

int isPrime(int num);
Displaying only the prime numbers found in the digit sums.

If no primes are found, displaying:

No prime numbers found in the digit sums.

📌 Function Constraints
You must implement and use all the following functions (and no others):

int getRemainder(int x, int n)
→ Returns x % n (using logic, not % operator directly).

int getQuotient(int x, int n)
→ Returns x / n (without using / operator directly).

int sumOfDigits(int num)
→ Calculates the sum of all digits using only getRemainder() and getQuotient().

int isPrime(int num)
→ Checks if a number is prime.

🧪 Sample Input/Output
Example 1:

Enter the size of the array: 4  
Enter 4 numbers: 23 81 55 44  
Sum of digits array (B): 5 9 10 8  
Prime numbers in the sum array: 5 

Example 2:

Enter the size of the array: 3  
Enter 3 numbers: 40 80 100  
Sum of digits array (B): 4 8 1  
No prime numbers found in the digit sums.  


🚀 How to Run
Clone the repository:

git clone https://github.com/your-username/Home-Assignment-SPL-LAB.git

cd Home-Assignment-SPL-LAB


Compile the program:

gcc main.c -o assignment


Run it:
./assignment

🛠 Technologies Used

Language: C
IDE: VS Code
OS: Windows 11

📄 License
This project is for academic purposes under the Structured Programming Lab course at UIU.

✍️ Author
Tayyib Imam Asif

Student, Department of CSE, UIU

GitHub: @tayyibImam
