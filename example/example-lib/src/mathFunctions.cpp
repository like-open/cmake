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
//##############################角度/弧度
//#############################################################
//------------------------------------------------------
//------------------------------ 获得PI内的弧度
float	getPiRadian(float fRadian)
{
	/*取一个旋转的最小角度180度内*/ 
	if(fRadian > M_PI_F)
		fRadian -= M_2PI_F;
	else if(fRadian < -M_PI_F)
		fRadian += M_2PI_F;

	return fRadian;
}
//-------------------------------------------------------------
//------------------------------ 获得2PI内的弧度
float	get2PiRadian(float fRadian)
{
	/*取在360度旋转*/ 
	while (fRadian < 0.0f)
		fRadian += M_2PI_F;
	while (fRadian > M_2PI_F)
		fRadian -= M_2PI_F;

	return fRadian;
}

//------------------------------------------------------
//------------------------------ 获得PI内的弧度
float	getPiRadian	(float m,float n)
{
	/*计算x与y的角度*/ 
	return getPiRadian(atan2f(n,m));
}

//------------------------------------------------------
//------------------------------ 获得2PI内的弧度
float	get2PiRadian	(float m,float n)
{
	/*计算x与y的角度*/ 
	return get2PiRadian(atan2f(n,m));
}
//-------------------------------------------------------------
//------------------------------ 获得角度
float	getPiAngle	(float fAngle)
{
	/*取一个旋转的最小角度180度内*/ 
	if(fAngle > 180.0f)
		fAngle -= 360.0f;
	else if(fAngle < -180.0f)
		fAngle += 360.0f;

	return fAngle;
}
//-------------------------------------------------------------
//------------------------------ 获得角度
float	get2PiAngle	(float fAngle)
{
	/*取在360度旋转*/ 
	while (fAngle < 0.0f)
		fAngle += 360.0f;
	while (fAngle > 360.0f)
		fAngle -= 360.0f;

	return fAngle;
}
//-------------------------------------------------------------
//------------------------------ 获得角度
float	getPiAngle	(float m,float n)
{
	return getRadianToAngle(getPiRadian(m,n));
}
//-------------------------------------------------------------
//------------------------------ 获得角度
float	get2PiAngle	(float m,float n)
{
	return getRadianToAngle(get2PiRadian(m,n));
}

//-------------------------------------------------------------
//------------------------------ 弧度转为角度
float	getRadianToAngle	(float fRadian)
{
	return fRadian / M_PI_F * 180.0f;
}
//-------------------------------------------------------------
//------------------------------ 角度转为弧度
float	getAngleToRadian	(float fAngle)
{
	return fAngle / 180.0f * M_PI_F;
}

//-------------------------------------------------------------
//------------------------------ 判断弧度是否在弧度范围内
bool	inRadianRange	(float f2PiRadian,float fRange,float fRadian)
{
	//1全部确认在2IP范围内
	f2PiRadian	= get2PiRadian(f2PiRadian);
	fRange		= getPiRadian(fRange);
	fRadian		= get2PiRadian(fRadian);

	fRadian		= f2PiRadian - fRadian;
	//2两个相差夹角要在PI以内
	fRadian		= getPiRadian(fRadian);
	//求绝对值
	fRadian		= ::fabs(fRadian);
	if(fRadian > fRange)
		return false;

	return true;
}
//-------------------------------------------------------------
//------------------------------ 判断角度是否在角度范围内
bool	inAngleRange	(float f2PiAngle,float fRange,float fAngle)
{
	//1全部确认在2IP范围内
	f2PiAngle	= get2PiAngle(f2PiAngle);
	fRange		= get2PiAngle(fRange);
	fAngle		= get2PiAngle(fAngle);

	fAngle		= f2PiAngle - fAngle;
	if(fAngle > fRange || fAngle < fRange)
		return false;

	return true;
}
