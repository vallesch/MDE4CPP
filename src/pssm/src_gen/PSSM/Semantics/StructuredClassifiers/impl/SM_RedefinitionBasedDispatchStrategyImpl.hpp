//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STRUCTUREDCLASSIFIERS_SM_REDEFINITIONBASEDDISPATCHSTRATEGYSM_REDEFINITIONBASEDDISPATCHSTRATEGYIMPL_HPP
#define PSSM_SEMANTICS_STRUCTUREDCLASSIFIERS_SM_REDEFINITIONBASEDDISPATCHSTRATEGYSM_REDEFINITIONBASEDDISPATCHSTRATEGYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../SM_RedefinitionBasedDispatchStrategy.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSSM::Semantics::StructuredClassifiers 
{
	class SM_RedefinitionBasedDispatchStrategyImpl :virtual public ecore::EObjectImpl,
virtual public SM_RedefinitionBasedDispatchStrategy 
	{
		public: 
			SM_RedefinitionBasedDispatchStrategyImpl(const SM_RedefinitionBasedDispatchStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			SM_RedefinitionBasedDispatchStrategyImpl& operator=(SM_RedefinitionBasedDispatchStrategyImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			SM_RedefinitionBasedDispatchStrategyImpl();
			virtual std::shared_ptr<SM_RedefinitionBasedDispatchStrategy> getThisSM_RedefinitionBasedDispatchStrategyPtr() const;
			virtual void setThisSM_RedefinitionBasedDispatchStrategyPtr(std::weak_ptr<SM_RedefinitionBasedDispatchStrategy> thisSM_RedefinitionBasedDispatchStrategyPtr);



		public:
			//destructor
			virtual ~SM_RedefinitionBasedDispatchStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> dispatch(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::Behavior> getMethod(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation) ;
			
			
			
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
			std::weak_ptr<SM_RedefinitionBasedDispatchStrategy> m_thisSM_RedefinitionBasedDispatchStrategyPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_STRUCTUREDCLASSIFIERS_SM_REDEFINITIONBASEDDISPATCHSTRATEGYSM_REDEFINITIONBASEDDISPATCHSTRATEGYIMPL_HPP */
