#if !defined(AFX_CROSSTABSOURCE_H__15E26A92_6321_404F_9C19_D9A0F6486B23__INCLUDED_)
#define AFX_CROSSTABSOURCE_H__15E26A92_6321_404F_9C19_D9A0F6486B23__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCrossTabSource wrapper class

class CCrossTabSource : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCrossTabSource)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x69909491, 0x86c6, 0x48ee, { 0x96, 0x7c, 0xd0, 0xa3, 0x31, 0x7b, 0xf0, 0xe8 } };
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
	BOOL GetCaseSensitive();
	void SetCaseSensitive(BOOL bNewValue);
	VARIANT GetDataSet();
	void SetDataSet(const VARIANT& newValue);
	long GetFormula();
	void SetFormula(long nNewValue);
	CString GetGroupField();
	void SetGroupField(LPCTSTR lpszNewValue);
	CString GetLabelField();
	void SetLabelField(LPCTSTR lpszNewValue);
	CString GetValueField();
	void SetValueField(LPCTSTR lpszNewValue);
	BOOL GetHideSeries();
	void SetHideSeries(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CROSSTABSOURCE_H__15E26A92_6321_404F_9C19_D9A0F6486B23__INCLUDED_)
