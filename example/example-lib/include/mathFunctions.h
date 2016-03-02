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
//############################## �Ƕ�/����
//#############################################################
//--- ���PI�ڵĻ���
extern float	getPiRadian(float fRadian);
//--- ���2PI�ڵĻ���
extern float	get2PiRadian(float fRadian);
//--- ���PI�ڵĻ���
extern float	getPiRadian	(float m,float n);
//--- ���2PI�ڵĻ���
extern float	get2PiRadian(float m,float n);

//--- ��ýǶ�
extern float	getPiAngle	(float fAngle);
extern float	get2PiAngle	(float fAngle);
//--- ��ýǶ�
extern float	getPiAngle	(float m,float n);
extern float	get2PiAngle	(float m,float n);

//--- ����תΪ�Ƕ�
extern float	getRadianToAngle	(float fRadian);
//--- �Ƕ�תΪ����
extern float	getAngleToRadian	(float fAngle);

//--- �жϻ����Ƿ��ڻ��ȷ�Χ��
extern bool		inRadianRange	(float f2PiRadian,float fRange,float fRadian);
//--- �жϽǶ��Ƿ��ڽǶȷ�Χ��
extern bool		inAngleRange	(float f2PiAngle,float fRange,float fAngle);
