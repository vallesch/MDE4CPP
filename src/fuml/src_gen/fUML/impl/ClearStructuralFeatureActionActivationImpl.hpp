//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CLEARSTRUCTURALFEATUREACTIONACTIVATIONCLEARSTRUCTURALFEATUREACTIONACTIVATIONIMPL_HPP
#define FUML_CLEARSTRUCTURALFEATUREACTIONACTIVATIONCLEARSTRUCTURALFEATUREACTIONACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ClearStructuralFeatureActionActivation.hpp"

#include "fUML/impl/StructuralFeatureActionActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class ClearStructuralFeatureActionActivationImpl :virtual public StructuralFeatureActionActivationImpl, virtual public ClearStructuralFeatureActionActivation 
	{
		public: 
			ClearStructuralFeatureActionActivationImpl(const ClearStructuralFeatureActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ClearStructuralFeatureActionActivationImpl& operator=(ClearStructuralFeatureActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ClearStructuralFeatureActionActivationImpl();
			virtual std::shared_ptr<ClearStructuralFeatureActionActivation> getThisClearStructuralFeatureActionActivationPtr() const;
			virtual void setThisClearStructuralFeatureActionActivationPtr(std::weak_ptr<ClearStructuralFeatureActionActivation> thisClearStructuralFeatureActionActivationPtr);

			//Additional constructors for the containments back reference
			ClearStructuralFeatureActionActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~ClearStructuralFeatureActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ClearStructuralFeatureActionActivation> m_thisClearStructuralFeatureActionActivationPtr;
	};
}
#endif /* end of include guard: FUML_CLEARSTRUCTURALFEATUREACTIONACTIVATIONCLEARSTRUCTURALFEATUREACTIONACTIVATIONIMPL_HPP */
