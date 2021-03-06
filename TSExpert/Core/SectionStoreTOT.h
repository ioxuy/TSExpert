#pragma once
#include "TSPublic.h"
#include "SectionObserver.h"

class CSectionStoreTOT: public CSectionObserver
{
public:
	explicit CSectionStoreTOT(UINT16 uwPid, string sName, CTSParser *pTSParser);
public:
	virtual EResult ProcessNewSection(CTSPacketStore * pTSPacketStore);
	virtual EResult GetDescription(CTSPacketStore * pTSPacketStore, CString& strDescription);
	virtual EResult DisplaySectionData(CTSPacketStore * pTSPacketStore,CTreeList *pTreeList,  CTreeNode * pTreeNodeInput,  CTreeNode * pTreeNodeParent);

public:
	virtual ~CSectionStoreTOT(void);
};
