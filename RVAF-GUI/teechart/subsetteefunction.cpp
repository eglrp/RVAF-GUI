// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "subsetteefunction.h"


/////////////////////////////////////////////////////////////////////////////
// CSubsetTeeFunction properties

/////////////////////////////////////////////////////////////////////////////
// CSubsetTeeFunction operations

double CSubsetTeeFunction::GetStartValue()
{
	double result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CSubsetTeeFunction::SetStartValue(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double CSubsetTeeFunction::GetEndValue()
{
	double result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CSubsetTeeFunction::SetEndValue(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}
