//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_LOCI_SM_EXECUTIONFACTORYSM_EXECUTIONFACTORYIMPL_HPP
#define PSSM_SEMANTICS_LOCI_SM_EXECUTIONFACTORYSM_EXECUTIONFACTORYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../SM_ExecutionFactory.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"
#include "fUML/impl/ExecutionFactoryL3Impl.hpp"

//*********************************
namespace PSSM::Semantics::Loci 
{
	class SM_ExecutionFactoryImpl :virtual public fUML::ExecutionFactoryL3Impl, virtual public SM_ExecutionFactory 
	{
		public: 
			SM_ExecutionFactoryImpl(const SM_ExecutionFactoryImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			SM_ExecutionFactoryImpl& operator=(SM_ExecutionFactoryImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			SM_ExecutionFactoryImpl();
			virtual std::shared_ptr<SM_ExecutionFactory> getThisSM_ExecutionFactoryPtr() const;
			virtual void setThisSM_ExecutionFactoryPtr(std::weak_ptr<SM_ExecutionFactory> thisSM_ExecutionFactoryPtr);

			//Additional constructors for the containments back reference
			SM_ExecutionFactoryImpl(std::weak_ptr<fUML::Locus > par_locus);




		public:
			//destructor
			virtual ~SM_ExecutionFactoryImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SemanticVisitor> instantiateVisitor(std::shared_ptr<uml::Element>  element) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<SM_ExecutionFactory> m_thisSM_ExecutionFactoryPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_LOCI_SM_EXECUTIONFACTORYSM_EXECUTIONFACTORYIMPL_HPP */
