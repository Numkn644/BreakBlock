#pragma once
#include "../Define/Define.h"
#include "../Point/Point.h"
#include "DxLib.h"

class Object
{
protected:
	Point m_position;	/*�I�u�W�F�N�g���W*/
	int m_handle;	/*�摜�n���h��*/
	int m_imageWidth; /*�摜�̕�*/
	int m_imageHeight;	/*�摜�̍���*/

public:
	Object();
	virtual ~Object();
};

