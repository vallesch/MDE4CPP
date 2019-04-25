//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OUTPUTPINOUTPUTPINIMPL_HPP
#define UML_OUTPUTPINOUTPUTPINIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../OutputPin.hpp"

#include "uml/impl/PinImpl.hpp"

//*********************************
namespace uml 
{
	class OutputPinImpl :virtual public PinImpl, virtual public OutputPin 
	{
		public: 
			OutputPinImpl(const OutputPinImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			OutputPinImpl& operator=(OutputPinImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			OutputPinImpl();
			virtual std::shared_ptr<OutputPin> getThisOutputPinPtr() const;
			virtual void setThisOutputPinPtr(std::weak_ptr<OutputPin> thisOutputPinPtr);

			//Additional constructors for the containments back reference
			OutputPinImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			OutputPinImpl(std::weak_ptr<uml::CallAction > par_callAction);


			//Additional constructors for the containments back reference
			OutputPinImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			OutputPinImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			OutputPinImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~OutputPinImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An OutputPin may have incoming ActivityEdges only when it is owned by a StructuredActivityNode, and these edges must have sources contained (directly or indirectly) in the owning StructuredActivityNode.
			incoming->notEmpty() implies
				action<>null and
				action.oclIsKindOf(StructuredActivityNode) and
				action.oclAsType(StructuredActivityNode).allOwnedNodes()->includesAll(incoming.source) */ 
			virtual bool incoming_edges_structured_only(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<uml::CallAction > getCallAction() const ;
			
			/*!
			 */
			virtual void setCallAction(std::shared_ptr<uml::CallAction> _callAction_callAction) ;
							
			
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
			std::weak_ptr<OutputPin> m_thisOutputPinPtr;
	};
}
#endif /* end of include guard: UML_OUTPUTPINOUTPUTPINIMPL_HPP */
