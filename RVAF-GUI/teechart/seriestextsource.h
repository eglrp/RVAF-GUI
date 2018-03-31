#if !defined(AFX_SERIESTEXTSOURCE_H__6BA10817_BE20_429B_A3C0_AAA0BB54DBC5__INCLUDED_)
#define AFX_SERIESTEXTSOURCE_H__6BA10817_BE20_429B_A3C0_AAA0BB54DBC5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CSeriesTextFields;
class CSeriesTextField;

/////////////////////////////////////////////////////////////////////////////
// CSeriesTextSource wrapper class

class CSeriesTextSource : public CWnd
{
protected:
	DECLARE_DYNCREATE(CSeriesTextSource)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x510ce799, 0x7da0, 0x4338, { 0x82, 0x8e, 0x38, 0x9b, 0xb5, 0xce, 0x25, 0x55 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void SetChart(LPDISPATCH newValue);
	void SetChartLink(long nNewValue);
	void AboutBox();
	void Open();
	void Close();
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	void Load();
	void LoadFromFile(LPCTSTR FileName);
	void LoadFromURL(LPCTSTR URL);
	CString GetFileName();
	void SetFileName(LPCTSTR lpszNewValue);
	long GetLoadMode();
	void SetLoadMode(long nNewValue);
	void LoadAsStream(const VARIANT& AStream);
	long GetHeaderLines();
	void SetHeaderLines(long nNewValue);
	CSeriesTextFields GetFields();
	CString GetFieldSeparator();
	void SetFieldSeparator(LPCTSTR lpszNewValue);
	CSeriesTextField AddField(LPCTSTR AName, long AIndex);
	void LoadFromStrings(LPCTSTR AStrings);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIESTEXTSOURCE_H__6BA10817_BE20_429B_A3C0_AAA0BB54DBC5__INCLUDED_)
