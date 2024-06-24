#include <iostream>

using namespace std;

class Binary
{
    float radius;

public:
    Binary()
    {
        radius = 0.0;
    }

    void setRad(float radius)
    {
        this->radius = radius;
    }

    float getRadius()
    {
        return radius;
    }

    Binary operator+(Binary z) // +
    {
        Binary sum;
        sum.radius = z.radius + radius;
        return sum;
    }

    Binary operator-(Binary z) // -
    {
        Binary sub;
        sub.radius = z.radius - radius;
        return sub;
    }

    Binary operator*(Binary z) // *
    {
        Binary mul;
        mul.radius = z.radius * radius;
        return mul;
    }

    Binary operator/(Binary z) // /
    {
        Binary div;
        div.radius = z.radius / radius;
        return div;
    }

    friend istream &operator>>(istream &input, Binary &i) // >>
    {
        cout << "Enter radius: " << endl;
        input >> i.radius;
        return input;
    }

    friend ostream &operator<<(ostream &output, Binary &o) // <<
    {
        output << "Radius: " << o.radius << endl;
        return output;
    }

    Binary &operator=(const Binary &z) // =
    {
        radius = z.radius;
        return *this;
    }

    bool operator==(const Binary &z) //==
    {
        return radius == z.radius;
    }

    bool operator>(Binary z) // >
    {
        return radius > z.radius;
    }

    bool operator<(Binary z) // <
    {
        return radius < z.radius;
    }

    void operator++() // ++
    {
        radius = radius + 1;
    }

    void operator--() // --
    {
        radius = radius - 1;
    }

    void display()
    {
        cout << "Value of object is: " << radius << endl;
    }
};

int main()
{
    Binary a, b, c;

    int choice;

    cout << "Which Operator would you like to overload: " << endl;
    cout << "1) + " << endl;
    cout << "2) - " << endl;
    cout << "3) x " << endl;
    cout << "4) / " << endl;
    cout << "5) >> " << endl;
    cout << "6) << " << endl;
    cout << "7) = " << endl;
    cout << "8) ==" << endl;
    cout << "9) > " << endl;
    cout << "A) < " << endl;
    cout << "B) ++" << endl;
    cout << "C) --" << endl;
    cout << "E) Exit " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        a.setRad(5.2);
        b.setRad(3.6);
        cout << "Values of a and b are: " << endl;
        a.display();
        b.display();
        c = a + b;

        cout << "The values after sum are: " << endl;

        c.display();

        break;
    }

    case 2:
    {
        a.setRad(5.2);
        b.setRad(3.6);
        cout << "Values of a and b are: " << endl;
        a.display();
        b.display();
        c = a - b;

        cout << "The values after sum are: " << endl;

        c.display();

        break;
    }

    case 3:
    {
        a.setRad(5.2);
        b.setRad(3.6);
        cout << "Values of a and b are: " << endl;
        a.display();
        b.display();
        c = a * b;

        cout << "The values after sum are: " << endl;

        c.display();

        break;
    }

    case 4:
    {
        a.setRad(5.2);
        b.setRad(3.6);
        cout << "Values of a and b are: " << endl;
        a.display();
        b.display();
        c = a / b;

        cout << "The values after sum are: " << endl;

        c.display();

        break;
    }

    case 5:
    {
        cout << "Inputting values: " << endl;
        cin >> c;

        break;
    }

    case 6:
    {
        cout << "Displaying values: " << endl;
        cout << c;

        break;
    }

    case 7:
    {
        a.setRad(5.2);
        cout << "The value for a is: " << endl;
        a.display();

        cout << "Now copying that value in c and displaying it: " << endl;
        c = a;

        c.display();

        break;
    }

    case 8:
    {
        a.setRad(3.3);
        b.setRad(3.3);
        cout << "The values that we input are: " << endl;
        a.display();
        b.display();
        cout << "Comparing both values to check if they are equal: " << endl;
        if (a == b)
        {
            cout << "They are equal" << endl;
        }

        else
        {
            cout << "They are not equal" << endl;
        }

        break;
    }
    case 9:
    {
        a.setRad(4.1);
        b.setRad(3.2);
        cout << "The values that we input are: " << endl;
        a.display();
        b.display();

        if (a > b)
        {
            cout << "a has greater volume than b" << endl;
        }
        else
        {
            cout << "b has greater volume than a" << endl;
        }

        break;
    }
    case 10:
    {
        a.setRad(4.1);
        b.setRad(3.2);
        cout << "The values that we input are: " << endl;
        a.display();
        b.display();

        if (a < b)
        {
            cout << "b has greater volume than a" << endl;
        }
        else
        {
            cout << "a has greater volume than b" << endl;
        }

        break;
    }
    case 11:
    {
        a.setRad(3.1);

        cout << "The value that we input is: " << endl;
        a.display();
        cout << "The value after incrementing is: " << endl;
        ++a;
        a.display();
    }
    case 12:
    {
        a.setRad(3.1);

        cout << "The value that we input is: " << endl;
        a.display();
        cout << "The value after decrementing is: " << endl;
        --a;
        a.display();
    }

    case 13:
    {
        cout << "Exiting......" << endl;
        return 0;
    }
    }

    return 0;
}
