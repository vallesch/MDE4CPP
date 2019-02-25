//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIONINPUTPINACTIONINPUTPINIMPL_HPP
#define UML_ACTIONINPUTPINACTIONINPUTPINIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ActionInputPin.hpp"

#include "uml/impl/InputPinImpl.hpp"

//*********************************
namespace uml 
{
	class ActionInputPinImpl :virtual public InputPinImpl, virtual public ActionInputPin 
	{
		public: 
			ActionInputPinImpl(const ActionInputPinImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActionInputPinImpl& operator=(ActionInputPinImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActionInputPinImpl();
			virtual std::shared_ptr<ActionInputPin> getThisActionInputPinPtr() const;
			virtual void setThisActionInputPinPtr(std::weak_ptr<ActionInputPin> thisActionInputPinPtr);

			//Additional constructors for the containments back reference
			ActionInputPinImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ActionInputPinImpl(std::weak_ptr<uml::CallOperationAction > par_callOperationAction);


			//Additional constructors for the containments back reference
			ActionInputPinImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ActionInputPinImpl(std::weak_ptr<uml::InvocationAction > par_invocationAction);


			//Additional constructors for the containments back reference
			ActionInputPinImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ActionInputPinImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ActionInputPinImpl(std::weak_ptr<uml::StructuralFeatureAction > par_structuralFeatureAction);




		public:
			//destructor
			virtual ~ActionInputPinImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The fromAction of an ActionInputPin must only have ActionInputPins as InputPins.
			fromAction.input->forAll(oclIsKindOf(ActionInputPin)) */ 
			virtual bool input_pin(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The fromAction of an ActionInputPin cannot have ActivityEdges coming into or out of it or its Pins.
			fromAction.incoming->union(outgoing)->isEmpty() and
			fromAction.input.incoming->isEmpty() and
			fromAction.output.outgoing->isEmpty() */ 
			virtual bool no_control_or_object_flow(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The fromAction of an ActionInputPin must have exactly one OutputPin.
			fromAction.output->size() = 1 */ 
			virtual bool one_output_pin(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Action used to provide the values of the ActionInputPin.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Action > getFromAction() const ;
			
			/*!
			 The Action used to provide the values of the ActionInputPin.
			<p>From package UML::Actions.</p> */
			virtual void setFromAction(std::shared_ptr<uml::Action> _fromAction_fromAction) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
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
			std::weak_ptr<ActionInputPin> m_thisActionInputPinPtr;
	};
}
#endif /* end of include guard: UML_ACTIONINPUTPINACTIONINPUTPINIMPL_HPP */
