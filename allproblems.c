#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// 1. Count Vowels
void countVowels(char str[]) {
    int count = 0;
    for(int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
    }
    printf("Vowels = %d\n", count);
}

// 2. Factorial
void factorial(int n) {
    if(n < 0) {
        printf("Invalid input\n");
        return;
    }

    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %lld\n", fact);
}

// 3. Even Numbers
void evenList(int arr[], int n) {
    if(n <= 0) {
        printf("Empty array\n");
        return;
    }

    printf("Even numbers: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

// 4. Fibonacci
void fibonacci(int n) {
    if(n <= 0) {
        printf("Invalid input\n");
        return;
    }

    int a = 0, b = 1, c;
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

// 5. Minimum Element
void minElement(int arr[], int n) {
    if(n <= 0) {
        printf("Empty array\n");
        return;
    }

    int min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min) min = arr[i];

    printf("Min = %d\n", min);
}

// 6. Multiplication Table
void table(int n) {
    for(int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
}

// 7. Prime Check
void isPrime(int n) {
    if(n <= 1) {
        printf("Not Prime\n");
        return;
    }

    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            printf("Not Prime\n");
            return;
        }
    }

    printf("Prime\n");
}

// 8. Remove Duplicates
void removeDuplicates(int arr[], int n) {
    printf("Unique: ");
    for(int i = 0; i < n; i++) {
        int seen = 0;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                seen = 1;
                break;
            }
        }
        if(!seen) printf("%d ", arr[i]);
    }
    printf("\n");
}

// 9. Celsius to Fahrenheit
void cToF(float c) {
    printf("Fahrenheit = %.2f\n", (c * 9/5) + 32);
}

// 10. Count Character
void countChar(char str[], char ch) {
    int count = 0;
    for(int i = 0; str[i]; i++) {
        if(str[i] == ch)
            count++;
    }
    printf("Count = %d\n", count);
}

int main() {
    int choice;

    printf("\n==============================\n");
    printf("     C PROBLEM SOLVER MENU\n");
    printf("==============================\n");

    printf("1  -> Count Vowels (enter full sentence)\n");
    printf("2  -> Factorial (enter a number)\n");
    printf("3  -> Even Numbers (enter size + elements)\n");
    printf("4  -> Fibonacci (enter n terms)\n");
    printf("5  -> Minimum in Array\n");
    printf("6  -> Multiplication Table\n");
    printf("7  -> Prime Check\n");
    printf("8  -> Remove Duplicates\n");
    printf("9  -> Celsius to Fahrenheit\n");
    printf("10 -> Count Character\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: {
            char s[1000];
            printf("Enter a string: ");
            getchar();
            fgets(s, 1000, stdin);
            countVowels(s);
            break;
        }

        case 2: {
            int n;
            printf("Enter a number (n >= 0): ");
            scanf("%d", &n);
            factorial(n);
            break;
        }

        case 3: {
            int n, arr[100];
            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d numbers: ", n);
            for(int i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            evenList(arr, n);
            break;
        }

        case 4: {
            int n;
            printf("Enter number of terms: ");
            scanf("%d", &n);
            fibonacci(n);
            break;
        }

        case 5: {
            int n, arr[100];
            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d numbers: ", n);
            for(int i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            minElement(arr, n);
            break;
        }

        case 6: {
            int n;
            printf("Enter number: ");
            scanf("%d", &n);
            table(n);
            break;
        }

        case 7: {
            int n;
            printf("Enter number: ");
            scanf("%d", &n);
            isPrime(n);
            break;
        }

        case 8: {
            int n, arr[100];
            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d numbers: ", n);
            for(int i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            removeDuplicates(arr, n);
            break;
        }

        case 9: {
            float c;
            printf("Enter Celsius: ");
            scanf("%f", &c);
            cToF(c);
            break;
        }

        case 10: {
            char s[1000], ch;
            printf("Enter a string: ");
            getchar();
            fgets(s, 1000, stdin);

            printf("Enter character: ");
            scanf("%c", &ch);

            countChar(s, ch);
            break;
        }
    }

    return 0;
}