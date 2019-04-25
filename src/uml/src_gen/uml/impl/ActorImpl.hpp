//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTORACTORIMPL_HPP
#define UML_ACTORACTORIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Actor.hpp"

#include "uml/impl/BehavioredClassifierImpl.hpp"

//*********************************
namespace uml 
{
	class ActorImpl :virtual public BehavioredClassifierImpl, virtual public Actor 
	{
		public: 
			ActorImpl(const ActorImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActorImpl& operator=(ActorImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActorImpl();
			virtual std::shared_ptr<Actor> getThisActorPtr() const;
			virtual void setThisActorPtr(std::weak_ptr<Actor> thisActorPtr);

			//Additional constructors for the containments back reference
			ActorImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ActorImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ActorImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ActorImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~ActorImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An Actor can only have Associations to UseCases, Components, and Classes. Furthermore these Associations must be binary.
			Association.allInstances()->forAll( a |
			  a.memberEnd->collect(type)->includes(self) implies
			  (
			    a.memberEnd->size() = 2 and
			    let actorEnd : Property = a.memberEnd->any(type = self) in
			      actorEnd.opposite.class.oclIsKindOf(UseCase) or
			      ( actorEnd.opposite.class.oclIsKindOf(Class) and not
			         actorEnd.opposite.class.oclIsKindOf(Behavior))
			      )
			  ) */ 
			virtual bool associations(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 An Actor must have a name.
			name->notEmpty() */ 
			virtual bool must_have_name(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
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
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
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
			std::weak_ptr<Actor> m_thisActorPtr;
	};
}
#endif /* end of include guard: UML_ACTORACTORIMPL_HPP */
