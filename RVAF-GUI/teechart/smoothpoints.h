// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CSmoothPoints wrapper class

class CSmoothPoints : public COleDispatchDriver
{
public:
	CSmoothPoints() {}		// Calls COleDispatchDriver default constructor
	CSmoothPoints(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSmoothPoints(const CSmoothPoints& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
	BOOL GetInterpolate();
	void SetInterpolate(BOOL bNewValue);
	long GetFactor();
	void SetFactor(long nNewValue);
};
