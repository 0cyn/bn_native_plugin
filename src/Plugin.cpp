//
// by kat // 9/15/22.
//

#include "binaryninjaapi.h"
#include "ui/uitypes.h"

#include "Plugin.h"
extern "C" {

BN_DECLARE_CORE_ABI_VERSION
BN_DECLARE_UI_ABI_VERSION

BINARYNINJAPLUGIN bool CorePluginInit() {
	BNLogInfo("CorePluginInit");

	return true;
}

BINARYNINJAPLUGIN bool UIPluginInit() {
	BNLogInfo("UIPluginInit");
	return true;
}
}

