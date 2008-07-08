/*
 Copyright (c) 2008 TrueCrypt Foundation. All rights reserved.

 Governed by the TrueCrypt License 2.5 the full text of which is contained
 in the file License.txt included in TrueCrypt binary and source code
 distribution packages.
*/

#ifndef TC_HEADER_Main_Forms_VolumePropertiesDialog
#define TC_HEADER_Main_Forms_VolumePropertiesDialog

#include "Forms.h"
#include "Main/Main.h"

namespace TrueCrypt
{
	class VolumePropertiesDialog : public VolumePropertiesDialogBase
	{
	public:
		VolumePropertiesDialog (wxWindow* parent, const VolumeInfo &volumeInfo);
		
		void AppendToList (const string &name, const wxString &value);
	};
}

#endif // TC_HEADER_Main_Forms_VolumePropertiesDialog