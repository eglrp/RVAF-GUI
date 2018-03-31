#if !defined(AFX_SERIESGROUPS_H__B8FCB0B6_CBCC_4152_A68F_7A6C2EE727F6__INCLUDED_)
#define AFX_SERIESGROUPS_H__B8FCB0B6_CBCC_4152_A68F_7A6C2EE727F6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CSeriesGroup;

/////////////////////////////////////////////////////////////////////////////
// CSeriesGroups wrapper class

class CSeriesGroups : public COleDispatchDriver
{
public:
	CSeriesGroups() {}		// Calls COleDispatchDriver default constructor
	CSeriesGroups(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSeriesGroups(const CSeriesGroups& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CSeriesGroup GetItems(long Index);
	long GetCount();
	void Delete(long Index);
	long Contains(long SeriesIndex);
	long FindByName(LPCTSTR Name, BOOL CaseSensitive);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIESGROUPS_H__B8FCB0B6_CBCC_4152_A68F_7A6C2EE727F6__INCLUDED_)
