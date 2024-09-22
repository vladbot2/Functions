using namespace std;
#include <iostream>

//int main()
//{
    //1
        //double base;
        //int exponent;

        //cout << "Enter the base of the exponent: ";
        //cin >> base;
        //cout << "Enter the exponent: ";
        //cin >> exponent;

        //double result = 1.0;

        //if (exponent < 0) {
        //    base = 1.0 / base;
        //    exponent = -exponent; 
        //}

        //for (int i = 0; i < exponent; ++i) {
        //    result *= base;
        //}

        //cout << base << " in degree " << exponent << " = " << result << endl;

    //2
    //int num1, num2;
    //int sum = 0;

    //cout << "Enter the first number: ";
    //cin >> num1;
    //cout << "Enter the second number: ";
    //cin >> num2;

    //int start = (num1 < num2) ? num1 : num2;
    //int end = (num1 > num2) ? num1 : num2;

    //for (int i = start; i <= end; ++i) {
    //    sum += i;
    //}

    //cout << "The sum of the numbers between " << num1 << " та " << num2 << " = " << sum << endl;

    //3
 /*   int start, end;

    cout << "Enter the beginning of the interval: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Perfect numbers in the interval from " << start << " do " << end << ":\n";

    for (int num = start; num <= end; ++num) {
        int sumOfDivisors = 0;

        for (int i = 1; i < num; ++i) {
            if (num % i == 0) {
                sumOfDivisors += i;
            }
        }

        if (sumOfDivisors == num) {
            cout << num << " is a perfect number.\n";
        }
    }*/
    //4

 /*       int start, end;

        cout << "Enter the beginning of the interval: ";
        cin >> start;

        cout << "Enter the end of the interval: ";
        cin >> end;

        cout << "Perfect numbers in the interval from " << start << " to " << end << ":\n";

        for (int num = start; num <= end; ++num) {
            int sumOfDivisors = 0;  

            for (int i = 1; i < num; ++i) {
                if (num % i == 0) {  
                    sumOfDivisors += i;  
                }
            }

            if (sumOfDivisors == num) {
                if (num != 0) {  
                    cout << num << " is a perfect number.\n";
                }
            }
        }*/
 /*   5
    bool Nule(int number) {
        int digit1 = number / 100000;            
        int digit2 = (number / 10000) % 10;      
        int digit3 = (number / 1000) % 10;       
        int digit4 = (number / 100) % 10;      
        int digit5 = (number / 10) % 10;       
        int digit6 = number % 10;              

        int sumFirstHalf = digit1 + digit2 + digit3;
        int sumSecondHalf = digit4 + digit5 + digit6;

        return sumFirstHalf == sumSecondHalf;
    }

    int main() {
        int number;

        cout << "Enter a six-digit number: ";
        cin >> number;

        if (number < 100000 || number > 999999) {
            cout << "Please enter a valid six-digit number.\n";
        }
        else {

            if (Nule(number)) {
                cout << number << " is a lucky number!\n";
            }
            else {
                cout << number << " is not a lucky number.\n";
            }
        }

    }*/




