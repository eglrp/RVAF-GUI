// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CHistogramFunction wrapper class

class CHistogramFunction : public COleDispatchDriver
{
public:
	CHistogramFunction() {}		// Calls COleDispatchDriver default constructor
	CHistogramFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHistogramFunction(const CHistogramFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetCumulative();
	void SetCumulative(BOOL bNewValue);
	long GetNumBins();
	void SetNumBins(long nNewValue);
};
