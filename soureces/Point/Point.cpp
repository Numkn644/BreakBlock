#include "Point.h"

/*�R���X�g���N�^*/
Point::Point()
{

}

Point::~Point()
{

}

/*x�̒l��Ԃ�*/
int Point::getX()
{
	return m_x;
}

/*y�̒l��Ԃ�*/
int Point::getY()
{
	return m_y;
}

/*x���W���Z�b�g*/
void Point::setX(int x)
{
	m_x = x;
}

/*y���W���Z�b�g*/
void Point::setY(int y)
{
	m_y = y;
}