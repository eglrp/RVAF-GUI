// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCLVFunction wrapper class

class CCLVFunction : public COleDispatchDriver
{
public:
	CCLVFunction() {}		// Calls COleDispatchDriver default constructor
	CCLVFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCLVFunction(const CCLVFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAccumulate();
	void SetAccumulate(BOOL bNewValue);
	VARIANT GetVolume();
	void SetVolume(const VARIANT& newValue);
};
