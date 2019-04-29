//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_DOACTIVITYCONTEXTOBJECTDOACTIVITYCONTEXTOBJECTIMPL_HPP
#define PSSM_SEMANTICS_STATEMACHINES_DOACTIVITYCONTEXTOBJECTDOACTIVITYCONTEXTOBJECTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DoActivityContextObject.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSSM::Semantics::StateMachines 
{
	class DoActivityContextObjectImpl :virtual public ecore::EObjectImpl,
virtual public DoActivityContextObject 
	{
		public: 
			DoActivityContextObjectImpl(const DoActivityContextObjectImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DoActivityContextObjectImpl& operator=(DoActivityContextObjectImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			DoActivityContextObjectImpl();
			virtual std::shared_ptr<DoActivityContextObject> getThisDoActivityContextObjectPtr() const;
			virtual void setThisDoActivityContextObjectPtr(std::weak_ptr<DoActivityContextObject> thisDoActivityContextObjectPtr);



		public:
			//destructor
			virtual ~DoActivityContextObjectImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _register(std::shared_ptr<fUML::EventAccepter>  accepter) ;
			
			/*!
			 */ 
			virtual void destroy() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> dispatch(std::shared_ptr<uml::Operation>  operation) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> getFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature) ;
			
			/*!
			 */ 
			virtual void initialize(std::shared_ptr<fUML::Object>  context) ;
			
			/*!
			 */ 
			virtual void send(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) ;
			
			/*!
			 */ 
			virtual void setFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position) ;
			
			/*!
			 */ 
			virtual void startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs) ;
			
			/*!
			 */ 
			virtual void unregister(std::shared_ptr<fUML::EventAccepter>  accepter) ;
			
			/*!
			 */ 
			virtual void unregisterFromContext(std::shared_ptr<fUML::EventAccepter>  encapsulatedAccepter) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Object > getContext() const ;
			
			/*!
			 */
			virtual void setContext(std::shared_ptr<fUML::Object> _context_context) ;
			/*!
			 */
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation > getOwner() const ;
			
			/*!
			 */
			virtual void setOwner(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _owner_owner) ;
							
			
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
			std::weak_ptr<DoActivityContextObject> m_thisDoActivityContextObjectPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_DOACTIVITYCONTEXTOBJECTDOACTIVITYCONTEXTOBJECTIMPL_HPP */