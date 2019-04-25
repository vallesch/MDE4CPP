//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INITIALNODEINITIALNODEIMPL_HPP
#define UML_INITIALNODEINITIALNODEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../InitialNode.hpp"

#include "uml/impl/ControlNodeImpl.hpp"

//*********************************
namespace uml 
{
	class InitialNodeImpl :virtual public ControlNodeImpl, virtual public InitialNode 
	{
		public: 
			InitialNodeImpl(const InitialNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			InitialNodeImpl& operator=(InitialNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InitialNodeImpl();
			virtual std::shared_ptr<InitialNode> getThisInitialNodePtr() const;
			virtual void setThisInitialNodePtr(std::weak_ptr<InitialNode> thisInitialNodePtr);

			//Additional constructors for the containments back reference
			InitialNodeImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			InitialNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			InitialNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			InitialNodeImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~InitialNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 All the outgoing ActivityEdges from an InitialNode must be ControlFlows.
			outgoing->forAll(oclIsKindOf(ControlFlow)) */ 
			virtual bool control_edges(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 An InitialNode has no incoming ActivityEdges.
			incoming->isEmpty() */ 
			virtual bool no_incoming_edges(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
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
			std::weak_ptr<InitialNode> m_thisInitialNodePtr;
	};
}
#endif /* end of include guard: UML_INITIALNODEINITIALNODEIMPL_HPP */
