#include<iostream>
#include<cmath>

using namespace std;


class Point{
    public:
        int x;
        int y;
        //Point();//default constructor
        Point (int xVal, int yVal);
        int getX() const;
        int getY() const;
        void setX(int xVal);
        void setY(int yVal);
        void input();

};

Point::Point(int xVal, int yVal): x(xVal), y(yVal) {}

int Point::getX() const{
    return x;
}
int Point::getY() const{
    return y;
}
void Point::setX(int xVal){
    x = xVal;
}
void Point::setY(int yVal){
    y = yVal;
}
void Point::input(){
    int something;
    cin >> something;
}

class Rectangle{
    public:
        int length;
        int width;
        Point p;
        //Rectangle();//default constructor
        Rectangle(Point a, int wid, int len);
        int getLength() const;
        int getWidth() const;
        Point getP() const;
        void setP(Point a);
        void setLength(int len);
        void setWidth(int wid);
        void input();
        //friend class Point;
        //Point point;

};

Rectangle operator%(const Rectangle& r1, const Rectangle& r2){
    //int result = (r1.y1 - )
}

Rectangle::Rectangle(Point a, int wid, int len): p(a), width(wid), length(len){}

Point Rectangle::getP() const{
    return p;
}
void Rectangle::setP(Point a){
    p = a;
}
void Rectangle::setLength(int len){
    length = len;
}
void Rectangle::setWidth(int wid){
    width = wid;
}
int Rectangle::getLength() const{
    return length;
}

int Rectangle::getWidth() const{
    return width;
}
void Rectangle::input(){
    int stuff;
    cin >> stuff;
}

//need to overload istream for inputs
//need to overload % per instructions
//need to check intersect
//might have to overload ostream for outputs

int main(){
    /*
    Point x1;
    Point y1;
    Rectangle len1;
    Rectangle wid1;
    */
    int x1, x2, y1, y2, len1, wid1, len2, wid2;
    cout << "x of rectangle 1: ";
    cin >> x1;
    //x1.input();
    cout << "y of rectangle 1: ";
    cin >> y1;
    //y1.input();
    cout << "length of rectangle 1: ";
    cin >> len1;
    //len1.input();
    cout << "width of rectangle 1: ";
    cin >> wid1;
    //wid1.input();
    cout << "x of rectangle 2: ";
    cin >> x2;
    cout << "y of rectangle 2: ";
    cin >> y2;
    cout << "length of rectangle 2: ";
    cin >> len2;
    cout << "width of rectangle 2: ";
    cin >> wid2;
    Point A(x1, y1);
    Point B(x2, y2);
    Rectangle rect1(A, wid1, len1);
    Rectangle rect2(B, wid2, len2);

}
bool recIntersect(Rectangle A, Rectangle B){

}