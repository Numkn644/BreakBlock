#pragma once
#include "../Object.h"

/*
** Ball���N���X
** ball�͂��̃N���X����h������
*/

class Base_Ball : public Object
{
protected:
	//static const int pointNum = 8;	/*�_�̐�*/

	int m_vx;	/*x�����̑��x*/
	int m_vy;	/*y�����̑��x*/
	//Point m_center;				/*���S���W*/
	//int radius;					/*�{�[���̔��a*/
	//Point m_points[pointNum];	/*�{�[�����8�_ [0]:�E, [1]:�E��, [2]:��, [3]:����,
								//[4]:��, [5]:����, [6]:��, [7]:�E��*/
public:
	Base_Ball(int vx, int vy);
	virtual ~Base_Ball();

protected:
	virtual void initialize() = 0;
	virtual void update() = 0;
	virtual void finalize() = 0;
	virtual void move() = 0;
	virtual void reflect() = 0;
	virtual void draw() = 0;
	virtual bool collision(Object other) = 0; /* �Փ˔��� */
};