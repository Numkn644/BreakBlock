
/*Pointクラス*/

class Point
{
private :
	int m_x;
	int m_y;

public:
	Point();
	~Point();

	/*ゲッタ*/
	int getX();
	int getY();

	/*セッタ*/
	void setX(int x);
	void setY(int y);
};