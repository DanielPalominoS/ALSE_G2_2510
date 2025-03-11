#include <iostream>
#include <functional>
using namespace std;

// Callback functions for different operations
double add(double a, double b)
{
    return a + b;
}

double multiply(double a, double b)
{
    return a * b;
}

double subtract(double a, double b)
{
    return a - b;
}

double divide(double a, double b)
{
    return a - b;
}

// Function that performs an operation using a callback
void performOperation(double (*callback)(double, double), double x, double y)
{
    cout << "The result of the operation is: " << callback(x, y) << endl;
}
// Function that performs an operation using a callback
void performOperation(std::function<double(double, double)> callback, double x, double y)
{
    cout << "The result of the operation is: " << callback(x, y) << endl;
}

int main(int argc, char *argv[])
{
    // Check the number of arguments
    if (argc != 4) {
        std::cerr << "Usage: operator1 operation(symbol) operator2\nAllowed operations: +, -, /, *\n";
        return 1;
      }
    //Retrieve the arguments
    double op1 = std::stod(argv[1]);
    char op = argv[2][0];
    double op2 = std::stod(argv[3]);
    //Perform the operation
    switch (op)
    {
    case '+':
        performOperation(add, op1, op2);
        break;
    case '-':
        performOperation(subtract, op1, op2);
        break;
    case '*':
        performOperation(multiply, op1, op2);
        break;
    case '/':
        if (op2 == 0)
        {
            std::cerr << "Division by zero is not allowed\n";
            return 1;
        }
        performOperation(divide, op1, op2);
        break;
    default:
        std::cerr << "Invalid operation: " << op << "\n";
        return 1;
    }

    /*Alternative 1 */
    double (*callback)(double, double);
    switch (op)
    {
    case '+':
        callback = add;
        break;
    case '-':
        callback = subtract;
        break;
    case '*':
        callback = multiply;
        break;
    case '/':
        callback = divide;
        break;
    default:
        std::cerr << "Invalid operation: " << op << "\n";
        return 1;
        break;
    }
    performOperation(callback, op1, op2);
    
    /*Alternative 2 */
    std::function<double(double, double)> cbFunction;
    switch (op)
    {
        case '+':
            cbFunction = add;
            break;
        case '-':
            cbFunction = subtract;
            break;
        case '*':    
            cbFunction = multiply;
            break;
        case '/':
            cbFunction = divide;
            break;
        default:
            std::cerr << "Invalid operation: " << op << "\n";
            return 1;
            break;
    }
    performOperation(cbFunction, op1, op2);

    
    return 0;
}