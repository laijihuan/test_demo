#include "StdAfx.h"
#include "Utils.h"

namespace DuiLib
{
	////////////////////////////////////////////////////////////////////////
	//

	CDuiPoint::CDuiPoint()
	{
		x = y = 0;
	}

	CDuiPoint::CDuiPoint(const POINT& src)
	{
		x = src.x;
		y = src.y;
	}

	CDuiPoint::CDuiPoint(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	CDuiPoint::CDuiPoint(LPARAM lParam)
	{
		x = GET_X_LPARAM(lParam);
		y = GET_Y_LPARAM(lParam);
	}

	////////////////////////////////////////////////////////////////////////
	//



	CDuiSize::CDuiSize()
	{
		cx = cy = 0;
	}

	CDuiSize::CDuiSize(const SIZE& src)
	{
		cx = src.cx;
		cy = src.cy;
	}

	CDuiSize::CDuiSize(const RECT rc)
	{
		cx = rc.right - rc.left;
		cy = rc.bottom - rc.top;
	}

	CDuiSize::CDuiSize(int _cx, int _cy)
	{
		cx = _cx;
		cy = _cy;
	}

	////////////////////////////////////////////////////////////////////////
	//

	CDuiRect::CDuiRect()
	{
		left = top = right = right = 0;
	}

	CDuiRect::CDuiRect(const RECT& src)
	{
		left = src.left;
		top = src.top;
		right = src.right;
		bottom = src.bottom;
	}

	CDuiRect::CDuiRect(int iLeft, int iTop, int iRight, int iBottom)
	{
		left = iLeft;
		top = iTop;
		right = iRight;
		bottom = iBottom;
	}

	int CDuiRect::GetWidth() const
	{
		return right - left;
	}

	int CDuiRect::GetHeight() const
	{
		return bottom - top;
	}

	void CDuiRect::Empty()
	{
		left = top = right = bottom = 0;
	}

	bool CDuiRect::isNull() const
	{
		return (left == 0 && top == 0 && right == 0 && bottom == 0);
	}

	void CDuiRect::Join(const RECT& rc)
	{
		if (left > rc.left) left = rc.left;
		if (top > rc.top) top = rc.top;
		if (right < rc.right) right = rc.right;
		if (bottom < rc.bottom) bottom = rc.bottom;		
	}

	void CDuiRect::ResetOffset()
	{
		::OffsetRect(this, -left, -top);
	}

	void CDuiRect::Normalize()
	{
		if (left > right) { int iTemp = left; left = right; right = iTemp; }
		if (top > bottom) { int iTemp = top; top = bottom; bottom = iTemp; }
	}

	void CDuiRect::Offset(int _cx, int _cy)
	{
		::OffsetRect(this, _cx, _cy);
	}

	void CDuiRect::Inflate(int _cx, int _cy)
	{
		::InflateRect(this, _cx, _cy);
	}

	void CDuiRect::Deflate(int _cx, int _cy)
	{
		::InflateRect(this, -_cx, -_cy);
	}

	void CDuiRect::Union(CDuiRect& rc)
	{
		::UnionRect(this, this, &rc);
	}

	////////////////////////////////////////////////////////////////////////
	//




}
