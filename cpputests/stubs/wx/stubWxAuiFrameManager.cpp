
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include "wx/aui/framemanager.h"

const wxEventTable wxAuiManager::sm_eventTable = wxEventTable();
wxEventHashTable wxAuiManager::sm_eventHashTable (wxAuiManager::sm_eventTable);

const wxEventTable* wxAuiManager::GetEventTable() const
{
	FAIL("wxAuiManager::GetEventTable");
	return &sm_eventTable;
}

wxEventHashTable& wxAuiManager::GetEventHashTable() const
{
	FAIL("wxAuiManager::GetEventHashTable");
	return sm_eventHashTable;
}

wxClassInfo *wxAuiManager::GetClassInfo() const
{
	FAIL("wxAuiManager::GetClassInfo");
	return NULL;
}

wxAuiManager::wxAuiManager(wxWindow* managed_wnd, unsigned int flags)
{
	FAIL("wxAuiManager::wxAuiManager");
}

wxAuiManager::~wxAuiManager()
{
	FAIL("wxAuiManager::~wxAuiManager");
}

void wxAuiManager::ShowHint(const wxRect& rect)
{
	FAIL("wxAuiManager::ShowHint");
}

void wxAuiManager::HideHint()
{
	FAIL("wxAuiManager::HideHint");
}

bool wxAuiManager::ProcessDockResult(wxAuiPaneInfo& target, const wxAuiPaneInfo& new_pos)
{
	FAIL("wxAuiManager::ProcessDockResult");
	return true;
}

wxAuiFloatingFrame* wxAuiManager::CreateFloatingFrame(wxWindow* parent, const wxAuiPaneInfo& p)
{
	FAIL("wxAuiManager::CreateFloatingFrame");
	return NULL;
}


wxAuiDockInfoArray::~wxAuiDockInfoArray()
{
	FAIL("wxAuiDockInfoArray::~wxAuiDockInfoArray");
}

wxAuiDockUIPartArray::~wxAuiDockUIPartArray()
{
	FAIL("wxAuiDockUIPartArray::~wxAuiDockUIPartArray");
}

wxAuiPaneInfoArray::~wxAuiPaneInfoArray()
{
	FAIL("wxAuiPaneInfoArray::~wxAuiPaneInfoArray");
}

//wxAuiNotebookPageArray::~wxAuiNotebookPageArray()
//{
//
//}
