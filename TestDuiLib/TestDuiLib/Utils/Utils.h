#pragma once

namespace DuiLib
{
	////////////////////////////////////////////////////////////////////////
	//

	class UILIB_API STRINGorID
	{
	public:
		STRINGorID(LPCTSTR lpString) : m_lpStr(lpString)
		{ }
		STRINGorID(UINT nID) : m_lpStr(MAKEINTRESOURCE(nID))
		{ }
		LPCTSTR m_lpStr;
	};

	////////////////////////////////////////////////////////////////////////
	//

	class UILIB_API CDuiPoint : public tagPOINT
	{
	public:
		CDuiPoint();
		CDuiPoint(const POINT& src);
		CDuiPoint(int _x, int _y);
		CDuiPoint(LPARAM lParam);
	};

	////////////////////////////////////////////////////////////////////////
	//




}