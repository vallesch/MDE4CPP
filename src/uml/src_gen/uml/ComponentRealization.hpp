//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMPONENTREALIZATION_HPP
#define UML_COMPONENTREALIZATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Component;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OpaqueExpression;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class Realization;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

// base class includes
#include "uml/Realization.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 Realization is specialized to (optionally) define the Classifiers that realize the contract offered by a Component in terms of its provided and required Interfaces. The Component forms an abstraction from these various Classifiers.
	<p>From package UML::StructuredClassifiers.</p> */
	class ComponentRealization:virtual public Realization
	{
		public:
 			ComponentRealization(const ComponentRealization &) {}
			ComponentRealization& operator=(ComponentRealization const&) = delete;

		protected:
			ComponentRealization(){}


			//Additional constructors for the containments back reference

			ComponentRealization(std::weak_ptr<uml::Component > par_abstraction);

			//Additional constructors for the containments back reference

			ComponentRealization(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			ComponentRealization(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			ComponentRealization(std::weak_ptr<uml::Package > par_owningPackage);

			//Additional constructors for the containments back reference

			ComponentRealization(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ComponentRealization() {}

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
			 The Component that owns this ComponentRealization and which is implemented by its realizing Classifiers.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::weak_ptr<uml::Component > getAbstraction() const = 0;
			
			/*!
			 The Component that owns this ComponentRealization and which is implemented by its realizing Classifiers.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual void setAbstraction(std::shared_ptr<uml::Component> _abstraction_abstraction) = 0;
			/*!
			 The Classifiers that are involved in the implementation of the Component that owns this Realization.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Classifier, uml::NamedElement /*Subset does not reference a union*/>> getRealizingClassifier() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Component that owns this ComponentRealization and which is implemented by its realizing Classifiers.
			<p>From package UML::StructuredClassifiers.</p> */
			std::weak_ptr<uml::Component > m_abstraction;
			/*!
			 The Classifiers that are involved in the implementation of the Component that owns this Realization.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Classifier, uml::NamedElement /*Subset does not reference a union*/>> m_realizingClassifier;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_COMPONENTREALIZATION_HPP */
