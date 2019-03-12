//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREPACKAGE_HPP
#define ECOREPACKAGE_HPP

#include "ecore/EPackage.hpp"

namespace ecore 
{
	class EAnnotation;
	class EAttribute;
	class EClass;
	class EDataType;
	class EGenericType;
	class EOperation;
	class EParameter;
	class EReference;
	class EStringToStringMapEntry;
	class ETypeParameter;
}

namespace ecore 
{
	/*!
	The Metamodel Package for the ecore metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	/*!
	 */
	class EcorePackage : virtual public EPackage 
	{
		private:    
			EcorePackage(EcorePackage const&) = delete;
			EcorePackage& operator=(EcorePackage const&) = delete;

		protected:
			EcorePackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			// Begin Class EAnnotation
			//Class and Feature IDs 
			static const unsigned int EANNOTATION_ECLASS = 1;
			static const unsigned int EANNOTATION_ECLASS_FEATURE_COUNT = 8;
			static const unsigned int EANNOTATION_ECLASS_OPERATION_COUNT = 16;
			static const int EANNOTATION_EATTRIBUTE_SOURCE = 103;
			
			static const int EANNOTATION_EREFERENCE_CONTENTS = 106;
			static const int EANNOTATION_EREFERENCE_DETAILS = 104;
			static const int EANNOTATION_EREFERENCE_EMODELELEMENT = 105;
			static const int EANNOTATION_EREFERENCE_REFERENCES = 107;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAnnotation_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEAnnotation_EAttribute_source() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_contents() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_details() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_eModelElement() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_references() const = 0;
			
			
			// End Class EAnnotation


			// Begin Class EAttribute
			//Class and Feature IDs 
			static const unsigned int EATTRIBUTE_ECLASS = 2;
			static const unsigned int EATTRIBUTE_ECLASS_FEATURE_COUNT = 23;
			static const unsigned int EATTRIBUTE_ECLASS_OPERATION_COUNT = 18;
			static const int EATTRIBUTE_EATTRIBUTE_ID = 221;
			
			static const int EATTRIBUTE_EREFERENCE_EATTRIBUTETYPE = 222;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAttribute_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEAttribute_EAttribute_iD() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEAttribute_EReference_eAttributeType() const = 0;
			
			
			// End Class EAttribute


			// Begin Class EClass
			//Class and Feature IDs 
			static const unsigned int ECLASS_ECLASS = 12;
			static const unsigned int ECLASS_ECLASS_FEATURE_COUNT = 27;
			static const unsigned int ECLASS_ECLASS_OPERATION_COUNT = 28;
			static const int ECLASS_EATTRIBUTE_ABSTRACT = 1211;
			static const int ECLASS_EATTRIBUTE_INTERFACE = 1212;
			
			static const int ECLASS_EREFERENCE_EALLATTRIBUTES = 1215;
			static const int ECLASS_EREFERENCE_EALLCONTAINMENTS = 1219;
			static const int ECLASS_EREFERENCE_EALLGENERICSUPERTYPES = 1226;
			static const int ECLASS_EREFERENCE_EALLOPERATIONS = 1220;
			static const int ECLASS_EREFERENCE_EALLREFERENCES = 1216;
			static const int ECLASS_EREFERENCE_EALLSTRUCTURALFEATURES = 1221;
			static const int ECLASS_EREFERENCE_EALLSUPERTYPES = 1222;
			static const int ECLASS_EREFERENCE_EATTRIBUTES = 1218;
			static const int ECLASS_EREFERENCE_EGENERICSUPERTYPES = 1225;
			static const int ECLASS_EREFERENCE_EIDATTRIBUTE = 1223;
			static const int ECLASS_EREFERENCE_EOPERATIONS = 1214;
			static const int ECLASS_EREFERENCE_EREFERENCES = 1217;
			static const int ECLASS_EREFERENCE_ESTRUCTURALFEATURES = 1224;
			static const int ECLASS_EREFERENCE_ESUPERTYPES = 1213;
			
			static const int ECLASS_EOPERATION_GETEOPERATION_EINT = 1251;
			static const int ECLASS_EOPERATION_GETESTRUCTURALFEATURE_EINT = 1247;
			static const int ECLASS_EOPERATION_GETESTRUCTURALFEATURE_ESTRING = 1249;
			static const int ECLASS_EOPERATION_GETFEATURECOUNT = 1246;
			static const int ECLASS_EOPERATION_GETFEATUREID_ESTRUCTURALFEATURE = 1248;
			static const int ECLASS_EOPERATION_GETFEATURETYPE_ESTRUCTURALFEATURE = 1254;
			static const int ECLASS_EOPERATION_GETOPERATIONCOUNT = 1250;
			static const int ECLASS_EOPERATION_GETOPERATIONID_EOPERATION = 1252;
			static const int ECLASS_EOPERATION_GETOVERRIDE_EOPERATION = 1253;
			static const int ECLASS_EOPERATION_ISSUPERTYPEOF_ECLASS = 1245;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClass_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEClass_EAttribute_abstract() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClass_EAttribute_interface() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllAttributes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllContainments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllGenericSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllOperations() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllReferences() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllStructuralFeatures() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAttributes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eGenericSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eIDAttribute() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eOperations() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eReferences() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eStructuralFeatures() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eSuperTypes() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getEOperation_EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getEStructuralFeature_EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getEStructuralFeature_EString() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getFeatureCount() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getFeatureID_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getFeatureType_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getOperationCount() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getOperationID_EOperation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getOverride_EOperation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_isSuperTypeOf_EClass() const = 0;
			
			// End Class EClass


			// Begin Class EClassifier
			//Class and Feature IDs 
			static const unsigned int ECLASSIFIER_ECLASS = 13;
			static const unsigned int ECLASSIFIER_ECLASS_FEATURE_COUNT = 11;
			static const unsigned int ECLASSIFIER_ECLASS_OPERATION_COUNT = 18;
			static const int ECLASSIFIER_EATTRIBUTE_CLASSIFIERID = 1307;
			static const int ECLASSIFIER_EATTRIBUTE_DEFAULTVALUE = 1306;
			static const int ECLASSIFIER_EATTRIBUTE_INSTANCECLASS = 1305;
			static const int ECLASSIFIER_EATTRIBUTE_INSTANCECLASSNAME = 1304;
			static const int ECLASSIFIER_EATTRIBUTE_INSTANCETYPENAME = 1308;
			
			static const int ECLASSIFIER_EREFERENCE_EPACKAGE = 1309;
			static const int ECLASSIFIER_EREFERENCE_ETYPEPARAMETERS = 1310;
			
			static const int ECLASSIFIER_EOPERATION_GETCLASSIFIERID = 1328;
			static const int ECLASSIFIER_EOPERATION_ISINSTANCE_EJAVAOBJECT = 1327;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClassifier_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_classifierID() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_defaultValue() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_instanceClass() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_instanceClassName() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_instanceTypeName() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEClassifier_EReference_ePackage() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClassifier_EReference_eTypeParameters() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEClassifier_EOperation_getClassifierID() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClassifier_EOperation_isInstance_EJavaObject() const = 0;
			
			// End Class EClassifier


			// Begin Class EDataType
			//Class and Feature IDs 
			static const unsigned int EDATATYPE_ECLASS = 14;
			static const unsigned int EDATATYPE_ECLASS_FEATURE_COUNT = 12;
			static const unsigned int EDATATYPE_ECLASS_OPERATION_COUNT = 18;
			static const int EDATATYPE_EATTRIBUTE_SERIALIZABLE = 1411;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEDataType_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEDataType_EAttribute_serializable() const = 0;
			
			
			
			// End Class EDataType


			// Begin Class EEnum
			//Class and Feature IDs 
			static const unsigned int EENUM_ECLASS = 20;
			static const unsigned int EENUM_ECLASS_FEATURE_COUNT = 13;
			static const unsigned int EENUM_ECLASS_OPERATION_COUNT = 21;
			
			static const int EENUM_EREFERENCE_ELITERALS = 2012;
			
			static const int EENUM_EOPERATION_GETEENUMLITERAL_ESTRING = 2031;
			static const int EENUM_EOPERATION_GETEENUMLITERAL_EINT = 2032;
			static const int EENUM_EOPERATION_GETEENUMLITERALBYLITERAL_ESTRING = 2033;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnum_EClass() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEEnum_EReference_eLiterals() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEEnum_EOperation_getEEnumLiteral_EString() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEEnum_EOperation_getEEnumLiteral_EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEEnum_EOperation_getEEnumLiteralByLiteral_EString() const = 0;
			
			// End Class EEnum


			// Begin Class EEnumLiteral
			//Class and Feature IDs 
			static const unsigned int EENUMLITERAL_ECLASS = 21;
			static const unsigned int EENUMLITERAL_ECLASS_FEATURE_COUNT = 8;
			static const unsigned int EENUMLITERAL_ECLASS_OPERATION_COUNT = 16;
			static const int EENUMLITERAL_EATTRIBUTE_INSTANCE = 2105;
			static const int EENUMLITERAL_EATTRIBUTE_LITERAL = 2106;
			static const int EENUMLITERAL_EATTRIBUTE_VALUE = 2104;
			
			static const int EENUMLITERAL_EREFERENCE_EENUM = 2107;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnumLiteral_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_EAttribute_instance() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_EAttribute_literal() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_EAttribute_value() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEEnumLiteral_EReference_eEnum() const = 0;
			
			
			// End Class EEnumLiteral


			// Begin Class EFactory
			//Class and Feature IDs 
			static const unsigned int EFACTORY_ECLASS = 23;
			static const unsigned int EFACTORY_ECLASS_FEATURE_COUNT = 4;
			static const unsigned int EFACTORY_ECLASS_OPERATION_COUNT = 19;
			
			static const int EFACTORY_EREFERENCE_EPACKAGE = 2303;
			
			static const int EFACTORY_EOPERATION_CONVERTTOSTRING_EDATATYPE_EJAVAOBJECT = 2322;
			static const int EFACTORY_EOPERATION_CREATE_ECLASS = 2320;
			static const int EFACTORY_EOPERATION_CREATEFROMSTRING_EDATATYPE_ESTRING = 2321;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEFactory_EClass() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEFactory_EReference_ePackage() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEFactory_EOperation_convertToString_EDataType_EJavaObject() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEFactory_EOperation_create_EClass() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEFactory_EOperation_createFromString_EDataType_EString() const = 0;
			
			// End Class EFactory


			// Begin Class EGenericType
			//Class and Feature IDs 
			static const unsigned int EGENERICTYPE_ECLASS = 28;
			static const unsigned int EGENERICTYPE_ECLASS_FEATURE_COUNT = 6;
			static const unsigned int EGENERICTYPE_ECLASS_OPERATION_COUNT = 1;
			
			static const int EGENERICTYPE_EREFERENCE_ECLASSIFIER = 2805;
			static const int EGENERICTYPE_EREFERENCE_ELOWERBOUND = 2803;
			static const int EGENERICTYPE_EREFERENCE_ERAWTYPE = 2802;
			static const int EGENERICTYPE_EREFERENCE_ETYPEARGUMENTS = 2801;
			static const int EGENERICTYPE_EREFERENCE_ETYPEPARAMETER = 2804;
			static const int EGENERICTYPE_EREFERENCE_EUPPERBOUND = 2800;
			
			static const int EGENERICTYPE_EOPERATION_ISINSTANCE_EJAVAOBJECT = 2806;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEGenericType_EClass() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eClassifier() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eLowerBound() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eRawType() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eTypeArguments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eTypeParameter() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eUpperBound() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEGenericType_EOperation_isInstance_EJavaObject() const = 0;
			
			// End Class EGenericType


			// Begin Class EModelElement
			//Class and Feature IDs 
			static const unsigned int EMODELELEMENT_ECLASS = 37;
			static const unsigned int EMODELELEMENT_ECLASS_FEATURE_COUNT = 3;
			static const unsigned int EMODELELEMENT_ECLASS_OPERATION_COUNT = 16;
			
			static const int EMODELELEMENT_EREFERENCE_EANNOTATIONS = 3702;
			
			static const int EMODELELEMENT_EOPERATION_GETEANNOTATION_ESTRING = 3718;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEModelElement_EClass() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEModelElement_EReference_eAnnotations() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEModelElement_EOperation_getEAnnotation_EString() const = 0;
			
			// End Class EModelElement


			// Begin Class ENamedElement
			//Class and Feature IDs 
			static const unsigned int ENAMEDELEMENT_ECLASS = 38;
			static const unsigned int ENAMEDELEMENT_ECLASS_FEATURE_COUNT = 4;
			static const unsigned int ENAMEDELEMENT_ECLASS_OPERATION_COUNT = 16;
			static const int ENAMEDELEMENT_EATTRIBUTE_NAME = 3803;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getENamedElement_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getENamedElement_EAttribute_name() const = 0;
			
			
			
			// End Class ENamedElement


			// Begin Class EObject
			//Class and Feature IDs 
			static const unsigned int EOBJECT_ECLASS = 39;
			static const unsigned int EOBJECT_ECLASS_FEATURE_COUNT = 2;
			static const unsigned int EOBJECT_ECLASS_OPERATION_COUNT = 15;
			
			static const int EOBJECT_EREFERENCE_ECONTAINER = 3901;
			static const int EOBJECT_EREFERENCE_ECONTENS = 3900;
			
			static const int EOBJECT_EOPERATION_EALLCONTENTS = 3909;
			static const int EOBJECT_EOPERATION_ECLASS = 3902;
			static const int EOBJECT_EOPERATION_ECONTAINER = 3905;
			static const int EOBJECT_EOPERATION_ECONTAININGFEATURE = 3906;
			static const int EOBJECT_EOPERATION_ECONTAINMENTFEATURE = 3907;
			static const int EOBJECT_EOPERATION_ECONTENTS = 3908;
			static const int EOBJECT_EOPERATION_ECROSSREFERENCES = 3910;
			static const int EOBJECT_EOPERATION_EGET_ESTRUCTURALFEATURE = 3911;
			static const int EOBJECT_EOPERATION_EGET_ESTRUCTURALFEATURE_EBOOLEAN = 3912;
			static const int EOBJECT_EOPERATION_EINVOKE_EOPERATION_EELIST = 3916;
			static const int EOBJECT_EOPERATION_EISPROXY = 3903;
			static const int EOBJECT_EOPERATION_EISSET_ESTRUCTURALFEATURE = 3914;
			static const int EOBJECT_EOPERATION_ERESOURCE = 3904;
			static const int EOBJECT_EOPERATION_ESET_ESTRUCTURALFEATURE_EJAVAOBJECT = 3913;
			static const int EOBJECT_EOPERATION_EUNSET_ESTRUCTURALFEATURE = 3915;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEObject_EClass() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEObject_EReference_eContainer() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEObject_EReference_eContens() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eAllContents() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eClass() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContainer() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContainingFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContainmentFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContents() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eCrossReferences() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eGet_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eGet_EStructuralFeature_EBoolean() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eInvoke_EOperation_EEList() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eIsProxy() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eIsSet_EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eResource() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eSet_EStructuralFeature_EJavaObject() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eUnset_EStructuralFeature() const = 0;
			
			// End Class EObject


			// Begin Class EOperation
			//Class and Feature IDs 
			static const unsigned int EOPERATION_ECLASS = 40;
			static const unsigned int EOPERATION_ECLASS_FEATURE_COUNT = 18;
			static const unsigned int EOPERATION_ECLASS_OPERATION_COUNT = 18;
			static const int EOPERATION_EATTRIBUTE_OPERATIONID = 4012;
			
			static const int EOPERATION_EREFERENCE_ECONTAININGCLASS = 4013;
			static const int EOPERATION_EREFERENCE_EEXCEPTIONS = 4016;
			static const int EOPERATION_EREFERENCE_EGENERICEXCEPTIONS = 4017;
			static const int EOPERATION_EREFERENCE_EPARAMETERS = 4015;
			static const int EOPERATION_EREFERENCE_ETYPEPARAMETERS = 4014;
			
			static const int EOPERATION_EOPERATION_GETOPERATIONID = 4034;
			static const int EOPERATION_EOPERATION_ISOVERRIDEOF_EOPERATION = 4035;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEOperation_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEOperation_EAttribute_operationID() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eContainingClass() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eExceptions() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eGenericExceptions() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eParameters() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eTypeParameters() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEOperation_EOperation_getOperationID() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEOperation_EOperation_isOverrideOf_EOperation() const = 0;
			
			// End Class EOperation


			// Begin Class EPackage
			//Class and Feature IDs 
			static const unsigned int EPACKAGE_ECLASS = 41;
			static const unsigned int EPACKAGE_ECLASS_FEATURE_COUNT = 10;
			static const unsigned int EPACKAGE_ECLASS_OPERATION_COUNT = 17;
			static const int EPACKAGE_EATTRIBUTE_NSPREFIX = 4105;
			static const int EPACKAGE_EATTRIBUTE_NSURI = 4104;
			
			static const int EPACKAGE_EREFERENCE_ECLASSIFIERS = 4107;
			static const int EPACKAGE_EREFERENCE_EFACTORYINSTANCE = 4106;
			static const int EPACKAGE_EREFERENCE_ESUBPACKAGES = 4108;
			static const int EPACKAGE_EREFERENCE_ESUPERPACKAGE = 4109;
			
			static const int EPACKAGE_EOPERATION_GETECLASSIFIER_ESTRING = 4126;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEPackage_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_EAttribute_nsPrefix() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_EAttribute_nsURI() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eClassifiers() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eFactoryInstance() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eSubpackages() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eSuperPackage() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEPackage_EOperation_getEClassifier_EString() const = 0;
			
			// End Class EPackage


			// Begin Class EParameter
			//Class and Feature IDs 
			static const unsigned int EPARAMETER_ECLASS = 42;
			static const unsigned int EPARAMETER_ECLASS_FEATURE_COUNT = 13;
			static const unsigned int EPARAMETER_ECLASS_OPERATION_COUNT = 16;
			
			static const int EPARAMETER_EREFERENCE_EOPERATION = 4212;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEParameter_EClass() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getEParameter_EReference_eOperation() const = 0;
			
			
			// End Class EParameter


			// Begin Class EReference
			//Class and Feature IDs 
			static const unsigned int EREFERENCE_ECLASS = 43;
			static const unsigned int EREFERENCE_ECLASS_FEATURE_COUNT = 27;
			static const unsigned int EREFERENCE_ECLASS_OPERATION_COUNT = 18;
			static const int EREFERENCE_EATTRIBUTE_CONTAINER = 4322;
			static const int EREFERENCE_EATTRIBUTE_CONTAINMENT = 4321;
			static const int EREFERENCE_EATTRIBUTE_RESOLVEPROXIES = 4323;
			
			static const int EREFERENCE_EREFERENCE_EKEYS = 4326;
			static const int EREFERENCE_EREFERENCE_EOPPOSITE = 4324;
			static const int EREFERENCE_EREFERENCE_EREFERENCETYPE = 4325;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEReference_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEReference_EAttribute_container() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_EAttribute_containment() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_EAttribute_resolveProxies() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEReference_EReference_eKeys() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEReference_EReference_eOpposite() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEReference_EReference_eReferenceType() const = 0;
			
			
			// End Class EReference


			// Begin Class EStringToStringMapEntry
			//Class and Feature IDs 
			static const unsigned int ESTRINGTOSTRINGMAPENTRY_ECLASS = 49;
			static const unsigned int ESTRINGTOSTRINGMAPENTRY_ECLASS_FEATURE_COUNT = 2;
			static const unsigned int ESTRINGTOSTRINGMAPENTRY_ECLASS_OPERATION_COUNT = 0;
			static const int ESTRINGTOSTRINGMAPENTRY_EATTRIBUTE_KEY = 4900;
			static const int ESTRINGTOSTRINGMAPENTRY_EATTRIBUTE_VALUE = 4901;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStringToStringMapEntry_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_EAttribute_key() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_EAttribute_value() const = 0;
			
			
			
			// End Class EStringToStringMapEntry


			// Begin Class EStructuralFeature
			//Class and Feature IDs 
			static const unsigned int ESTRUCTURALFEATURE_ECLASS = 50;
			static const unsigned int ESTRUCTURALFEATURE_ECLASS_FEATURE_COUNT = 21;
			static const unsigned int ESTRUCTURALFEATURE_ECLASS_OPERATION_COUNT = 18;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_CHANGEABLE = 5012;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_DEFAULTVALUE = 5016;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_DEFAULTVALUELITERAL = 5015;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_DERIVED = 5018;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_FEATUREID = 5019;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_TRANSIENT = 5014;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_UNSETTABLE = 5017;
			static const int ESTRUCTURALFEATURE_EATTRIBUTE_VOLATILE = 5013;
			
			static const int ESTRUCTURALFEATURE_EREFERENCE_ECONTAININGCLASS = 5020;
			
			static const int ESTRUCTURALFEATURE_EOPERATION_GETCONTAINERCLASS = 5038;
			static const int ESTRUCTURALFEATURE_EOPERATION_GETFEATUREID = 5037;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStructuralFeature_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_changeable() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_defaultValue() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_defaultValueLiteral() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_derived() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_featureID() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_transient() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_unsettable() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_volatile() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEStructuralFeature_EReference_eContainingClass() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEStructuralFeature_EOperation_getContainerClass() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEStructuralFeature_EOperation_getFeatureID() const = 0;
			
			// End Class EStructuralFeature


			// Begin Class ETypeParameter
			//Class and Feature IDs 
			static const unsigned int ETYPEPARAMETER_ECLASS = 52;
			static const unsigned int ETYPEPARAMETER_ECLASS_FEATURE_COUNT = 5;
			static const unsigned int ETYPEPARAMETER_ECLASS_OPERATION_COUNT = 16;
			
			static const int ETYPEPARAMETER_EREFERENCE_EBOUNDS = 5204;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypeParameter_EClass() const = 0;
			
			
			virtual std::shared_ptr<ecore::EReference> getETypeParameter_EReference_eBounds() const = 0;
			
			
			// End Class ETypeParameter


			// Begin Class ETypedElement
			//Class and Feature IDs 
			static const unsigned int ETYPEDELEMENT_ECLASS = 53;
			static const unsigned int ETYPEDELEMENT_ECLASS_FEATURE_COUNT = 12;
			static const unsigned int ETYPEDELEMENT_ECLASS_OPERATION_COUNT = 16;
			static const int ETYPEDELEMENT_EATTRIBUTE_LOWERBOUND = 5306;
			static const int ETYPEDELEMENT_EATTRIBUTE_MANY = 5308;
			static const int ETYPEDELEMENT_EATTRIBUTE_ORDERED = 5304;
			static const int ETYPEDELEMENT_EATTRIBUTE_REQUIRED = 5309;
			static const int ETYPEDELEMENT_EATTRIBUTE_UNIQUE = 5305;
			static const int ETYPEDELEMENT_EATTRIBUTE_UPPERBOUND = 5307;
			
			static const int ETYPEDELEMENT_EREFERENCE_EGENERICTYPE = 5311;
			static const int ETYPEDELEMENT_EREFERENCE_ETYPE = 5310;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypedElement_EClass() const = 0;
			
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_lowerBound() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_many() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_ordered() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_required() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_unique() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_upperBound() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getETypedElement_EReference_eGenericType() const = 0;
			virtual std::shared_ptr<ecore::EReference> getETypedElement_EReference_eType() const = 0;
			
			
			// End Class ETypedElement

			static const int EBIGDECIMAL_EDATATYPE = 3;
			static const int EBIGINTEGER_EDATATYPE = 4;
			static const int EBOOLEAN_EDATATYPE = 5;
			static const int EBOOLEANOBJECT_EDATATYPE = 6;
			static const int EBYTE_EDATATYPE = 7;
			static const int EBYTEARRAY_EDATATYPE = 8;
			static const int EBYTEOBJECT_EDATATYPE = 9;
			static const int ECHAR_EDATATYPE = 10;
			static const int ECHARACTEROBJECT_EDATATYPE = 11;
			static const int EDATE_EDATATYPE = 15;
			static const int EDIAGNOSTICCHAIN_EDATATYPE = 16;
			static const int EDOUBLE_EDATATYPE = 17;
			static const int EDOUBLEOBJECT_EDATATYPE = 18;
			static const int EELIST_EDATATYPE = 19;
			static const int EENUMERATOR_EDATATYPE = 22;
			static const int EFEATUREMAP_EDATATYPE = 24;
			static const int EFEATUREMAPENTRY_EDATATYPE = 25;
			static const int EFLOAT_EDATATYPE = 26;
			static const int EFLOATOBJECT_EDATATYPE = 27;
			static const int EINT_EDATATYPE = 29;
			static const int EINTEGEROBJECT_EDATATYPE = 30;
			static const int EINVOCATIONTARGETEXCEPTION_EDATATYPE = 31;
			static const int EJAVACLASS_EDATATYPE = 32;
			static const int EJAVAOBJECT_EDATATYPE = 33;
			static const int ELONG_EDATATYPE = 34;
			static const int ELONGOBJECT_EDATATYPE = 35;
			static const int EMAP_EDATATYPE = 36;
			static const int ERESOURCE_EDATATYPE = 44;
			static const int ERESOURCESET_EDATATYPE = 45;
			static const int ESHORT_EDATATYPE = 46;
			static const int ESHORTOBJECT_EDATATYPE = 47;
			static const int ESTRING_EDATATYPE = 48;
			static const int ETREEITERATOR_EDATATYPE = 51;
			
			virtual std::shared_ptr<ecore::EDataType> getEBigDecimal_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBigInteger_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBoolean_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBooleanObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByte_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByteArray_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByteObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEChar_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getECharacterObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDate_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDiagnosticChain_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDouble_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDoubleObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEEList_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEEnumerator_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMap_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMapEntry_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFloat_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFloatObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEInt_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEIntegerObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEInvocationTargetException_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEJavaClass_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEJavaObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getELong_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getELongObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEMap_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEResource_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEResourceSet_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEShort_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEShortObject_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEString_EDataType() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getETreeIterator_EDataType() const = 0;
			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<EcorePackage> instance;
			public:
				static std::shared_ptr<EcorePackage> eInstance();

			//prevent from hiding functions
			using EPackage::getEAnnotation;
			using EPackage::getEClassifier;
	};
}
#endif /* end of include guard: ECOREPACKAGE_HPP */
