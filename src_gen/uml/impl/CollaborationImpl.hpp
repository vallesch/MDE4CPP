//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COLLABORATIONCOLLABORATIONIMPL_HPP
#define UML_COLLABORATIONCOLLABORATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../Collaboration.hpp"

#include "impl/BehavioredClassifierImpl.hpp"
#include "impl/StructuredClassifierImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class CollaborationImpl :virtual public BehavioredClassifierImpl, virtual public StructuredClassifierImpl, virtual public Collaboration 
	{
		public: 
			CollaborationImpl(const CollaborationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			CollaborationImpl& operator=(CollaborationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CollaborationImpl();

			//Additional constructors for the containments back reference
			CollaborationImpl(std::shared_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			CollaborationImpl(std::shared_ptr<uml::Package > par_package);


			//Additional constructors for the containments back reference
			CollaborationImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~CollaborationImpl();
			
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
			 Represents the participants in the Collaboration.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::ConnectableElement, uml::ConnectableElement > > getCollaborationRole() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement > > getRole() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_COLLABORATIONCOLLABORATIONIMPL_HPP */

