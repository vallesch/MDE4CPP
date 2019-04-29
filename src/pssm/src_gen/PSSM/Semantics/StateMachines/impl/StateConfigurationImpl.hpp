//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_STATECONFIGURATIONSTATECONFIGURATIONIMPL_HPP
#define PSSM_SEMANTICS_STATEMACHINES_STATECONFIGURATIONSTATECONFIGURATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StateConfiguration.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSSM::Semantics::StateMachines 
{
	class StateConfigurationImpl :virtual public ecore::EObjectImpl,
virtual public StateConfiguration 
	{
		public: 
			StateConfigurationImpl(const StateConfigurationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StateConfigurationImpl& operator=(StateConfigurationImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			StateConfigurationImpl();
			virtual std::shared_ptr<StateConfiguration> getThisStateConfigurationPtr() const;
			virtual void setThisStateConfigurationPtr(std::weak_ptr<StateConfiguration> thisStateConfigurationPtr);



		public:
			//destructor
			virtual ~StateConfigurationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void add(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation,std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> >  context) ;
			
			/*!
			 */ 
			virtual void addChild(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation) ;
			
			
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> > getContext(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation) ;
			
			/*!
			 */ 
			virtual int getLevel() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> getParent() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> getVertexActivation() ;
			
			/*!
			 */ 
			virtual bool isActive() ;
			
			/*!
			 */ 
			virtual void remove(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation,std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> >  context) ;
			
			/*!
			 */ 
			virtual void removeChild(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation) ;
			
			/*!
			 */ 
			virtual void setParent(std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getLevel() const ;
			
			/*!
			 */ 
			virtual void setLevel (int _level); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::StateConfiguration>> getChildren() const ;
			
			/*!
			 */
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration > getCompleteConfiguration() const ;
			
			/*!
			 */
			virtual void setCompleteConfiguration(std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> _completeConfiguration_completeConfiguration) ;
			/*!
			 */
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation > getVertexActivation() const ;
			
			/*!
			 */
			virtual void setVertexActivation(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _vertexActivation_vertexActivation) ;
							
			
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
			std::weak_ptr<StateConfiguration> m_thisStateConfigurationPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_STATECONFIGURATIONSTATECONFIGURATIONIMPL_HPP */