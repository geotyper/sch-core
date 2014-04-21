#ifndef _S_BOX_H
#define _S_BOX_H 

#pragma once

#include <sch/sch_api.h>
#include <sch/S_Object/S_ObjectNonNormalized.h>

namespace sch
{
	class S_Box :
		public S_ObjectNonNormalized
	{
	public:
		/*!
		* \brief constructor
		* \param width, the width of the box (x axis)
		* \param height, the height of the box (y axis)
		* \param depth, the depth of the box (z axis)
		*/
		sch_API S_Box(Scalar width,Scalar height,Scalar depth);
		sch_API virtual ~S_Box(void);


		sch_API virtual Point3  l_Support(const Vector3& v, int& lastFeature)const;

		sch_API virtual S_ObjectType getType() const;

		sch_API virtual void getBoxParameters(Scalar & a, Scalar & b, Scalar & c) const;
	protected :
		Scalar a_,b_,c_;
	};
}

#endif
