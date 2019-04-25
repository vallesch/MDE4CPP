//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREFACTORY_HPP
#define ECOREFACTORY_HPP

#include <map>
#include <memory>

#include "ecore/EFactory.hpp"

namespace ecore 
{
	class EAnnotation;
	class EAttribute;
	class EClass;
	class EClassifier;
	class EDataType;
	class EEnum;
	class EEnumLiteral;
	class EFactory;
	class EGenericType;
	class EModelElement;
	class ENamedElement;
	class EObject;
	class EOperation;
	class EPackage;
	class EParameter;
	class EReference;
	class EStringToStringMapEntry;
	class EStructuralFeature;
	class ETypeParameter;
	class ETypedElement;
	class EcorePackage;
}


namespace ecore 
{
	class EcoreFactory : virtual public EFactory 
	{
		private:    
			EcoreFactory(EcoreFactory const&) = delete;
			EcoreFactory& operator=(EcoreFactory const&) = delete;
		protected:
			EcoreFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<EcoreFactory> instance;
			public:
				static std::shared_ptr<EcoreFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<EObject> create(std::string _className) const = 0;
			virtual std::shared_ptr<EObject> create(std::string _className, std::shared_ptr<EObject> _container, 	const unsigned int referenceID = -1) const = 0;
			virtual std::shared_ptr<EObject> create(const unsigned int classID, std::shared_ptr<EObject> _container = nullptr, 	const unsigned int referenceID = -1) const = 0;

			virtual std::shared_ptr<EAnnotation> createEAnnotation() const = 0;
			//Add containing object
			virtual std::shared_ptr<EAnnotation> createEAnnotation_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			
			//Add containing object
			virtual std::shared_ptr<EAnnotation> createEAnnotation_in_EModelElement(std::weak_ptr<ecore::EModelElement > par_eModelElement) const = 0;
			
			
			virtual std::shared_ptr<EAttribute> createEAttribute() const = 0;
			//Add containing object
			virtual std::shared_ptr<EAttribute> createEAttribute_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			virtual std::shared_ptr<EAttribute> createEAttribute_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const unsigned int classID) const = 0;
			//Add containing object
			virtual std::shared_ptr<EAttribute> createEAttribute_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass) const = 0;
			virtual std::shared_ptr<EAttribute> createEAttribute_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass, const unsigned int classID) const = 0;
			
			virtual std::shared_ptr<EClass> createEClass() const = 0;
			//Add containing object
			virtual std::shared_ptr<EClass> createEClass_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			virtual std::shared_ptr<EClass> createEClass_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const unsigned int classID) const = 0;
			//Add containing object
			virtual std::shared_ptr<EClass> createEClass_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage) const = 0;
			virtual std::shared_ptr<EClass> createEClass_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const unsigned int classID) const = 0;
			
			virtual std::shared_ptr<EDataType> createEDataType() const = 0;
			//Add containing object
			virtual std::shared_ptr<EDataType> createEDataType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			virtual std::shared_ptr<EDataType> createEDataType_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const unsigned int classID) const = 0;
			//Add containing object
			virtual std::shared_ptr<EDataType> createEDataType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage) const = 0;
			virtual std::shared_ptr<EDataType> createEDataType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const unsigned int classID) const = 0;
			
			virtual std::shared_ptr<EEnum> createEEnum() const = 0;
			//Add containing object
			virtual std::shared_ptr<EEnum> createEEnum_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			virtual std::shared_ptr<EEnum> createEEnum_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const unsigned int classID) const = 0;
			//Add containing object
			virtual std::shared_ptr<EEnum> createEEnum_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage) const = 0;
			virtual std::shared_ptr<EEnum> createEEnum_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage, const unsigned int classID) const = 0;
			
			virtual std::shared_ptr<EEnumLiteral> createEEnumLiteral() const = 0;
			//Add containing object
			virtual std::shared_ptr<EEnumLiteral> createEEnumLiteral_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			
			//Add containing object
			virtual std::shared_ptr<EEnumLiteral> createEEnumLiteral_in_EEnum(std::weak_ptr<ecore::EEnum > par_eEnum) const = 0;
			
			
			virtual std::shared_ptr<EFactory> createEFactory() const = 0;
			//Add containing object
			virtual std::shared_ptr<EFactory> createEFactory_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			
			
			virtual std::shared_ptr<EGenericType> createEGenericType() const = 0;
			
			virtual std::shared_ptr<EObject> createEObject() const = 0;
			//Add containing object
			virtual std::shared_ptr<EObject> createEObject_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			
			
			virtual std::shared_ptr<EOperation> createEOperation() const = 0;
			//Add containing object
			virtual std::shared_ptr<EOperation> createEOperation_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			virtual std::shared_ptr<EOperation> createEOperation_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const unsigned int classID) const = 0;
			//Add containing object
			virtual std::shared_ptr<EOperation> createEOperation_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass) const = 0;
			virtual std::shared_ptr<EOperation> createEOperation_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass, const unsigned int classID) const = 0;
			
			virtual std::shared_ptr<EPackage> createEPackage() const = 0;
			//Add containing object
			virtual std::shared_ptr<EPackage> createEPackage_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			
			//Add containing object
			virtual std::shared_ptr<EPackage> createEPackage_in_ESuperPackage(std::weak_ptr<ecore::EPackage > par_eSuperPackage) const = 0;
			
			
			virtual std::shared_ptr<EParameter> createEParameter() const = 0;
			//Add containing object
			virtual std::shared_ptr<EParameter> createEParameter_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			
			//Add containing object
			virtual std::shared_ptr<EParameter> createEParameter_in_EOperation(std::weak_ptr<ecore::EOperation > par_eOperation) const = 0;
			
			
			virtual std::shared_ptr<EReference> createEReference() const = 0;
			//Add containing object
			virtual std::shared_ptr<EReference> createEReference_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			virtual std::shared_ptr<EReference> createEReference_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer, const unsigned int classID) const = 0;
			//Add containing object
			virtual std::shared_ptr<EReference> createEReference_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass) const = 0;
			virtual std::shared_ptr<EReference> createEReference_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass, const unsigned int classID) const = 0;
			
			virtual std::shared_ptr<EStringToStringMapEntry> createEStringToStringMapEntry() const = 0;
			
			virtual std::shared_ptr<ETypeParameter> createETypeParameter() const = 0;
			//Add containing object
			virtual std::shared_ptr<ETypeParameter> createETypeParameter_in_EContainer(std::weak_ptr<ecore::EObject > par_eContainer) const = 0;
			
			
			
			//Package
			virtual std::shared_ptr<EcorePackage> getEcorePackage() const = 0;
	};
}
#endif /* end of include guard: ECOREFACTORY_HPP */
