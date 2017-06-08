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

	class UILIB_API CDuiSize : public tagSIZE
	{
	public:
		CDuiSize();
		CDuiSize(const SIZE& src);
		CDuiSize(const RECT rc);
		CDuiSize(int _cx, int _cy);
	};


	////////////////////////////////////////////////////////////////////////
	//

	class UILIB_API CDuiRect : public tagRECT
	{
	public:
		CDuiRect();
		CDuiRect(const RECT& src);
		CDuiRect(int iLeft, int iTop, int iRight, int iBottom);

		int GetWidth() const;
		int GetHeight() const;
		void Empty();
		bool isNull() const;
		void Join(const RECT& rc);
		void ResetOffset();
		void Normalize();
		void Offset(int _cx, int _cy);
		void Inflate(int _cx, int _cy);
		void Deflate(int _cx, int _cy);
		void Union(CDuiRect& rc);
	};


}