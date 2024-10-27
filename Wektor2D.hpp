class Wektor2D
{
    private:
    double x;
    double y;

public:

    Wektor2D() : x(0.0), y(0.0) {}

    Wektor2D(double x_val, double y_val) : x(x_val), y(y_val) {}

    void setX(double x_val) { x = x_val; }

    void setY(double y_val) { y = y_val; }

    double getX() const { return x; }

    double getY() const { return y; }

    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }
};
