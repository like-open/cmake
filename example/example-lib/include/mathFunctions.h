/*------------- mathFunctions.h
* Copyright (C): 2016 Lake
* Author       : Lake.Liu
* Version      : V1.01
*
*/ 
/***************************************************************
* 
***************************************************************/
#pragma once
#include <math.h>
/*************************************************************/
//#############################################################
//############################## 角度/弧度
//#############################################################
//--- 获得PI内的弧度
extern float	getPiRadian(float fRadian);
//--- 获得2PI内的弧度
extern float	get2PiRadian(float fRadian);
//--- 获得PI内的弧度
extern float	getPiRadian	(float m,float n);
//--- 获得2PI内的弧度
extern float	get2PiRadian(float m,float n);

//--- 获得角度
extern float	getPiAngle	(float fAngle);
extern float	get2PiAngle	(float fAngle);
//--- 获得角度
extern float	getPiAngle	(float m,float n);
extern float	get2PiAngle	(float m,float n);

//--- 弧度转为角度
extern float	getRadianToAngle	(float fRadian);
//--- 角度转为弧度
extern float	getAngleToRadian	(float fAngle);

//--- 判断弧度是否在弧度范围内
extern bool		inRadianRange	(float f2PiRadian,float fRange,float fRadian);
//--- 判断角度是否在角度范围内
extern bool		inAngleRange	(float f2PiAngle,float fRange,float fAngle);
