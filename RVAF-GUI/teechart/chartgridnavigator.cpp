// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "chartgridnavigator.h"

/////////////////////////////////////////////////////////////////////////////
// CChartGridNavigator

IMPLEMENT_DYNCREATE(CChartGridNavigator, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CChartGridNavigator properties

/////////////////////////////////////////////////////////////////////////////
// CChartGridNavigator operations

void CChartGridNavigator::SetGrid(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CChartGridNavigator::SetGridLink(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CChartGridNavigator::EnableButtons()
{
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

unsigned long CChartGridNavigator::GetColor()
{
	unsigned long result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CChartGridNavigator::SetColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}
