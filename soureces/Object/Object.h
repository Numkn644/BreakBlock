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
public:
	Point getPoint(){ return m_position; }
	int getImageWidth(){ return m_imageWidth; }
	int getImageHeight(){ return m_imageHeight; }
};

