// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CZoomFilter wrapper class

class CZoomFilter : public COleDispatchDriver
{
public:
	CZoomFilter() {}		// Calls COleDispatchDriver default constructor
	CZoomFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CZoomFilter(const CZoomFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetPercent();
	void SetPercent(double newValue);
	BOOL GetSmooth();
	void SetSmooth(BOOL bNewValue);
};
