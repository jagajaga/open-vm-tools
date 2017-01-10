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

#ifndef UninstallProviderJobXml_h_
#define UninstallProviderJobXml_h_


#include "Doc/CafInstallRequestDoc/CUninstallProviderJobDoc.h"

#include "Doc/DocXml/CafInstallRequestXml/CafInstallRequestXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the UninstallProviderJob class to/from XML
	namespace UninstallProviderJobXml {

		/// Adds the UninstallProviderJobDoc into the XML.
		void CAFINSTALLREQUESTXML_LINKAGE add(
			const SmartPtrCUninstallProviderJobDoc uninstallProviderJobDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the UninstallProviderJobDoc from the XML.
		SmartPtrCUninstallProviderJobDoc CAFINSTALLREQUESTXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
