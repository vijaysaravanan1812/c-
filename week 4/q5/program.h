//5) create the class rational and overload the operator + , - , / ,*

using namespace std;

class rational
{
private:
    float numerator,denominator;
public:
    rational operator+(rational a);
    rational operator-(rational a);
    rational operator/(rational a);
    rational operator*(rational a);
    rational operator=(rational a);
    friend istream& operator>>(istream& cin, rational a);
    friend ostream& operator<<(ostream& cout, rational a);
    rational();
    rational(float numerator, float denominator);
};
