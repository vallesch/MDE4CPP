//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_FINALSTATEACTIVATIONFINALSTATEACTIVATIONIMPL_HPP
#define PSSM_SEMANTICS_STATEMACHINES_FINALSTATEACTIVATIONFINALSTATEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../FinalStateActivation.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/StateActivationImpl.hpp"

//*********************************
namespace PSSM::Semantics::StateMachines 
{
	class FinalStateActivationImpl :virtual public StateActivationImpl, virtual public FinalStateActivation 
	{
		public: 
			FinalStateActivationImpl(const FinalStateActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			FinalStateActivationImpl& operator=(FinalStateActivationImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			FinalStateActivationImpl();
			virtual std::shared_ptr<FinalStateActivation> getThisFinalStateActivationPtr() const;
			virtual void setThisFinalStateActivationPtr(std::weak_ptr<FinalStateActivation> thisFinalStateActivationPtr);



		public:
			//destructor
			virtual ~FinalStateActivationImpl();
			
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
			std::weak_ptr<FinalStateActivation> m_thisFinalStateActivationPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_FINALSTATEACTIVATIONFINALSTATEACTIVATIONIMPL_HPP */
