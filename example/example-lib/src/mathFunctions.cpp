/*----------------- mathFunctions.cpp
*
* Copyright (C): 2016 Lake
* Author       : Lake.Liu
* Version      : V1.0
*--------------------------------------------------------------
*
*------------------------------------------------------------*/
#include "mathFunctions.h"
#include <iostream>
#include <stdlib.h>
/*************************************************************/
#ifndef M_PI_F
#define M_PI_F		3.1415926535897932384626433f
#endif//M_PI_F

#ifndef M_2PI_F
#define M_2PI_F	(M_PI_F * 2.0f)
#endif//M_2PI_F
//#############################################################
//##############################�Ƕ�/����
//#############################################################
//------------------------------------------------------
//------------------------------ ���PI�ڵĻ���
float	getPiRadian(float fRadian)
{
	/*ȡһ����ת����С�Ƕ�180����*/ 
	if(fRadian > M_PI_F)
		fRadian -= M_2PI_F;
	else if(fRadian < -M_PI_F)
		fRadian += M_2PI_F;

	return fRadian;
}
//-------------------------------------------------------------
//------------------------------ ���2PI�ڵĻ���
float	get2PiRadian(float fRadian)
{
	/*ȡ��360����ת*/ 
	while (fRadian < 0.0f)
		fRadian += M_2PI_F;
	while (fRadian > M_2PI_F)
		fRadian -= M_2PI_F;

	return fRadian;
}

//------------------------------------------------------
//------------------------------ ���PI�ڵĻ���
float	getPiRadian	(float m,float n)
{
	/*����x��y�ĽǶ�*/ 
	return getPiRadian(atan2f(n,m));
}

//------------------------------------------------------
//------------------------------ ���2PI�ڵĻ���
float	get2PiRadian	(float m,float n)
{
	/*����x��y�ĽǶ�*/ 
	return get2PiRadian(atan2f(n,m));
}
//-------------------------------------------------------------
//------------------------------ ��ýǶ�
float	getPiAngle	(float fAngle)
{
	/*ȡһ����ת����С�Ƕ�180����*/ 
	if(fAngle > 180.0f)
		fAngle -= 360.0f;
	else if(fAngle < -180.0f)
		fAngle += 360.0f;

	return fAngle;
}
//-------------------------------------------------------------
//------------------------------ ��ýǶ�
float	get2PiAngle	(float fAngle)
{
	/*ȡ��360����ת*/ 
	while (fAngle < 0.0f)
		fAngle += 360.0f;
	while (fAngle > 360.0f)
		fAngle -= 360.0f;

	return fAngle;
}
//-------------------------------------------------------------
//------------------------------ ��ýǶ�
float	getPiAngle	(float m,float n)
{
	return getRadianToAngle(getPiRadian(m,n));
}
//-------------------------------------------------------------
//------------------------------ ��ýǶ�
float	get2PiAngle	(float m,float n)
{
	return getRadianToAngle(get2PiRadian(m,n));
}

//-------------------------------------------------------------
//------------------------------ ����תΪ�Ƕ�
float	getRadianToAngle	(float fRadian)
{
	return fRadian / M_PI_F * 180.0f;
}
//-------------------------------------------------------------
//------------------------------ �Ƕ�תΪ����
float	getAngleToRadian	(float fAngle)
{
	return fAngle / 180.0f * M_PI_F;
}

//-------------------------------------------------------------
//------------------------------ �жϻ����Ƿ��ڻ��ȷ�Χ��
bool	inRadianRange	(float f2PiRadian,float fRange,float fRadian)
{
	//1ȫ��ȷ����2IP��Χ��
	f2PiRadian	= get2PiRadian(f2PiRadian);
	fRange		= getPiRadian(fRange);
	fRadian		= get2PiRadian(fRadian);

	fRadian		= f2PiRadian - fRadian;
	//2�������н�Ҫ��PI����
	fRadian		= getPiRadian(fRadian);
	//�����ֵ
	fRadian		= ::fabs(fRadian);
	if(fRadian > fRange)
		return false;

	return true;
}
//-------------------------------------------------------------
//------------------------------ �жϽǶ��Ƿ��ڽǶȷ�Χ��
bool	inAngleRange	(float f2PiAngle,float fRange,float fAngle)
{
	//1ȫ��ȷ����2IP��Χ��
	f2PiAngle	= get2PiAngle(f2PiAngle);
	fRange		= get2PiAngle(fRange);
	fAngle		= get2PiAngle(fAngle);

	fAngle		= f2PiAngle - fAngle;
	if(fAngle > fRange || fAngle < fRange)
		return false;

	return true;
}
