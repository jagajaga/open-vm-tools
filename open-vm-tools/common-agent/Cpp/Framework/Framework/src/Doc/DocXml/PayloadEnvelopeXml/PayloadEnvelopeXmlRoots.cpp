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

#include "stdafx.h"

#include "Doc/DocXml/PayloadEnvelopeXml/PayloadEnvelopeXml.h"

#include "Doc/PayloadEnvelopeDoc/CPayloadEnvelopeDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/PayloadEnvelopeXml/PayloadEnvelopeXmlRoots.h"

using namespace Caf;

std::string XmlRoots::savePayloadEnvelopeToString(
	const SmartPtrCPayloadEnvelopeDoc payloadEnvelopeDoc) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "savePayloadEnvelopeToString");
	CAF_CM_VALIDATE_SMARTPTR(payloadEnvelopeDoc);

	const std::string schemaNamespace = DocXmlUtils::getSchemaNamespace("fx");
	const std::string schemaLocation = DocXmlUtils::getSchemaLocation("fx/PayloadEnvelope.xsd");

	const SmartPtrCXmlElement rootXml = CXmlUtils::createRootElement(
		"payloadEnvelope", schemaNamespace, schemaLocation);
	PayloadEnvelopeXml::add(payloadEnvelopeDoc, rootXml);

	return rootXml->saveToString();
}

SmartPtrCPayloadEnvelopeDoc XmlRoots::parsePayloadEnvelopeFromString(
	const std::string xml) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parsePayloadEnvelopeFromString");
	CAF_CM_VALIDATE_STRING(xml);

	const SmartPtrCXmlElement rootXml = CXmlUtils::parseString(xml, "caf:payloadEnvelope");
	return PayloadEnvelopeXml::parse(rootXml);
}

void XmlRoots::savePayloadEnvelopeToFile(
	const SmartPtrCPayloadEnvelopeDoc payloadEnvelopeDoc,
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_LOG_VALIDATE("XmlRoots", "savePayloadEnvelopeToFile");
	CAF_CM_VALIDATE_SMARTPTR(payloadEnvelopeDoc);
	CAF_CM_VALIDATE_STRING(filePath);

	CAF_CM_LOG_DEBUG_VA1("Saving to file - %s", filePath.c_str());

	const std::string payloadEnvelopeStr =
		savePayloadEnvelopeToString(payloadEnvelopeDoc);
	FileSystemUtils::saveTextFile(filePath, payloadEnvelopeStr);
}

SmartPtrCPayloadEnvelopeDoc XmlRoots::parsePayloadEnvelopeFromFile(
	const std::string filePath) {
	CAF_CM_STATIC_FUNC_VALIDATE("XmlRoots", "parsePayloadEnvelopeFromFile");
	CAF_CM_VALIDATE_STRING(filePath);

	const SmartPtrCXmlElement rootXml = CXmlUtils::parseFile(filePath, "caf:payloadEnvelope");
	return PayloadEnvelopeXml::parse(rootXml);
}
