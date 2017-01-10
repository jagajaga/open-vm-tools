/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef InstallProviderSpecXml_h_
#define InstallProviderSpecXml_h_


#include "Doc/CafInstallRequestDoc/CInstallProviderSpecDoc.h"

#include "Doc/DocXml/CafInstallRequestXml/CafInstallRequestXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the InstallProviderSpec class to/from XML
	namespace InstallProviderSpecXml {

		/// Adds the InstallProviderSpecDoc into the XML.
		void CAFINSTALLREQUESTXML_LINKAGE add(
			const SmartPtrCInstallProviderSpecDoc installProviderSpecDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the InstallProviderSpecDoc from the XML.
		SmartPtrCInstallProviderSpecDoc CAFINSTALLREQUESTXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
