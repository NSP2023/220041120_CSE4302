#include<iostream>
using namespace std;

class Calculator
{
private:
    int current;

public:

    Calculator(): current(0) {}
    Calculator(int value): current(value) {}

    ~Calculator()
    {
        cout << "Calculator display: " << get() << endl;
        cout << "Destructor of Calculator is called." << endl;
    }

    int get()
    {
        return current;
    }

    void set_value(int value)
    {
        current = value;
    }


    void add(int value)
    {
        set_value(get() + value);
    }

    void subtract(int value)
    {
        set_value(get() - value);
    }

    void multiply(int value)
    {
        set_value(get() * value);
    }

    int divide(int value)
    {
        if (value == 0)
        {
            cout << "Invalid arithmetic operation." << endl;
            return 0;
        }
        int remainder = get() % value;
        set_value(get() / value);
        return remainder;
    }


    void clear()
    {
        set_value(0);
    }

    void display()
    {
        cout << "Calculator display: " << get() << endl;
    }
};

int main()
{
    Calculator calc;
    int a,b,choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "What operation do you want to perform?" << endl;
    cout << "1. To add" << endl;
    cout << "2. To subtract" << endl;
    cout << "3. To multiply" << endl;
    cout << "4. To divide" << endl;
    cout << "5. To clear" << endl;
    cin >> choice;

    switch(choice)
    {
    case 1:
        calc.add(a);
        calc.display();
        break;
    case 2:
        calc.subtract(a);
        calc.display();
        break;
    case 3:
        calc.multiply(a);
        calc.display();
        break;
    case 4:
        calc.divide(a);
        calc.display();
        break;
    case 5:
        calc.clear();
        calc.display();
        break;
    default:
        cout << "Invalid command" << endl;
    }

    return 0;
}
