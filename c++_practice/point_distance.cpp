#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include <conio.h>
using namespace std;

class Point {
    int x, y;

public:
    Point(int pos_x, int pos_y) {
        x = pos_x;
        y = pos_y;
    }

    Point(const Point & p1):x(p1.x),y(p1.y){}

    //Point(Point &point):x(point.x),y(point.y){}

    int get_x() { return x; }
    int get_y() { return y; }
};

class Geometry {
     // 점 100 개를 보관하는 배열.
    Point* point_array[100];
    int pos_x, pos_y,array_num;
public:
    Geometry(Point** point_list) {
        for (unsigned int i = 0; i < 3; i++) {
            point_array[i] =new Point((*point_list[i]).get_x(), (*point_list[i]).get_y());//포인트 클래스에 있는 get_x에 접근하는거기때문에 '->'접근하거나 (*).으로 접근해야함
            array_num = i;
        }
    }
    Geometry() :array_num(0) {};

    void AddPoint(const Point& p1) {/const로 클래스 객체 참조시 복사 생성자 사용불가 읽기 전용이라는 뜻 const Point& point 읽기만 해라
            array_num++;
            point_array[array_num] = new Point(p1);// 생성자가 지금 값이 변할수도 있어서 오류나는거같음
   
    }

   // 모든 점들 간의 거리를 출력하는 함수 입니다.
    void PrintDistance() {
        for (unsigned int i = 0; i <array_num; i++) {
            for (unsigned int j = i+1; j < array_num; j++) {
                cout << "x"<<i<<" -  x"<<j<<" "  << point_array[i]->get_x() << " -  " << point_array[j]->get_x();
                
                    
                    
                cout << "=" << sqrt(pow((point_array[i]->get_x() - point_array[j]->get_x()), 2)) << endl;
                
                    cout<< "y" << i << " -  y" << j <<" " <<point_array[i]->get_y() << " -  " << point_array[j]->get_y()
                        <<"="<< sqrt(pow((point_array[i]->get_y() - point_array[j]->get_y()), 2))<<endl;
            }
        }
    }

   // 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수 입니다.
    // 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
    // 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
    // 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
    void PrintNumMeets();
};

int main()
{
    int a, b;
    unsigned int num = 3;
    Point p1(3,4), p2(8,6);
    Point** point_list;
    point_list = new Point * [3];
    for (unsigned int i = 0; i < num; i++) {
        cout << "메인 좌표 입력";
        cin >> a >> b;
        point_list[i] = new Point(a, b);
        cout << point_list[i] << endl;
    }
    Geometry geometry1(point_list);
    geometry1.AddPoint(p1);
    geometry1.AddPoint(p2);
    geometry1.PrintDistance();
    

    return 0;
}
