// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CHueLumSatFilter wrapper class

class CHueLumSatFilter : public COleDispatchDriver
{
public:
	CHueLumSatFilter() {}		// Calls COleDispatchDriver default constructor
	CHueLumSatFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHueLumSatFilter(const CHueLumSatFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetHue();
	void SetHue(long nNewValue);
	long GetLuminance();
	void SetLuminance(long nNewValue);
	long GetSaturation();
	void SetSaturation(long nNewValue);
};
