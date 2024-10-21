# include <iostream>
using namespace std;


namespace Korea
{

	float area;

	void Information()
	{

		cout << "면적 : " << area << endl;
	}
}

namespace Austrailia
{

	float area;

	void Information()
	{

		cout << "면적 : " << area << endl;
	}


}


using namespace Korea;

class Object
{
#pragma region 접근 지정자
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자 입니다.

	// public : 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스
	//			외부에서 접근을 허용하는 접근 지정자입니다.


	// protectd: 클래스 내부와 자기가 상속한고 있는 클래스에서만
	//			 접근을 허용하는 접근 지정자입니다.

	// private : 클래스 내부에서만 접근을 허용하는 접근 지정자입니다.
#pragma endregion

public:
	int x;

	// void Move()
	// {
	// 
	// 	cout << "move" << endl;
	// }

	int X()
	{
		return x;
	}

protected:
	int y;
private:
	int z;
};

int main()
{

#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	// Korea::area = 1000;
	// Korea::Information();
	// 
	// Austrailia::area = 9999;
	// Austrailia::Information();

	// 이름 공간은 같은 이림의 함수나 변수를 또 다른 공간에 선언하여
	// 중복되지 않도록 선언할 수 있습니다.


#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어
	// 있으며, 클래스를 통해 객체를 생성하여 접근하고 사용
	// 할 수 있는 집합체입니다.

	int x1;
	int x2;
	int x3;

	Object object1;

	object1.x = 5;
	x1 = object1.X();
	cout << "object1의 x 값 : " << x1 << endl;

	Object object2;

	object2.x = 25;
	x2 = object2.X();
	cout << "object2의 x 값 : " << x2 << endl;

	Object object3;

	object3.x = 10;
	x3 = object3.X();
	cout << "object3의 x 값 : " << x3 << endl;

	// cout << "Object의 크기 : " << sizeof(object) << endl;
	// cout << "Object.x의 크기 : " << sizeof(object.x) << endl;





	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 
	// 메모리 영역에 포함되지만, 정적 변수와 함수의 메모리는
	// 클래스 영역에 포함되지 않습니다.

#pragma endregion


}