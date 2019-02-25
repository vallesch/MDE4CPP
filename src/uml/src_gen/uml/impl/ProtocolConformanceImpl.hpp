//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROTOCOLCONFORMANCEPROTOCOLCONFORMANCEIMPL_HPP
#define UML_PROTOCOLCONFORMANCEPROTOCOLCONFORMANCEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ProtocolConformance.hpp"

#include "uml/impl/DirectedRelationshipImpl.hpp"

//*********************************
namespace uml 
{
	class ProtocolConformanceImpl :virtual public DirectedRelationshipImpl, virtual public ProtocolConformance 
	{
		public: 
			ProtocolConformanceImpl(const ProtocolConformanceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ProtocolConformanceImpl& operator=(ProtocolConformanceImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ProtocolConformanceImpl();
			virtual std::shared_ptr<ProtocolConformance> getThisProtocolConformancePtr() const;
			virtual void setThisProtocolConformancePtr(std::weak_ptr<ProtocolConformance> thisProtocolConformancePtr);

			//Additional constructors for the containments back reference
			ProtocolConformanceImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ProtocolConformanceImpl(std::weak_ptr<uml::ProtocolStateMachine > par_specificMachine);




		public:
			//destructor
			virtual ~ProtocolConformanceImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the ProtocolStateMachine to which the specific ProtocolStateMachine conforms.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<uml::ProtocolStateMachine > getGeneralMachine() const ;
			
			/*!
			 Specifies the ProtocolStateMachine to which the specific ProtocolStateMachine conforms.
			<p>From package UML::StateMachines.</p> */
			virtual void setGeneralMachine(std::shared_ptr<uml::ProtocolStateMachine> _generalMachine_generalMachine) ;
			/*!
			 Specifies the ProtocolStateMachine which conforms to the general ProtocolStateMachine.
			<p>From package UML::StateMachines.</p> */
			virtual std::weak_ptr<uml::ProtocolStateMachine > getSpecificMachine() const ;
			
			/*!
			 Specifies the ProtocolStateMachine which conforms to the general ProtocolStateMachine.
			<p>From package UML::StateMachines.</p> */
			virtual void setSpecificMachine(std::shared_ptr<uml::ProtocolStateMachine> _specificMachine_specificMachine) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ProtocolConformance> m_thisProtocolConformancePtr;
	};
}
#endif /* end of include guard: UML_PROTOCOLCONFORMANCEPROTOCOLCONFORMANCEIMPL_HPP */
