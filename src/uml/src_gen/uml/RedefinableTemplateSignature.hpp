//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_REDEFINABLETEMPLATESIGNATURE_HPP
#define UML_REDEFINABLETEMPLATESIGNATURE_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

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
	class Namespace;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class RedefinableTemplateSignature;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class TemplateableElement;
}

// base class includes
#include "uml/RedefinableElement.hpp"

#include "uml/TemplateSignature.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A RedefinableTemplateSignature supports the addition of formal template parameters in a specialization of a template classifier.
	<p>From package UML::Classification.</p> */
	class RedefinableTemplateSignature:virtual public RedefinableElement,virtual public TemplateSignature
	{
		public:
 			RedefinableTemplateSignature(const RedefinableTemplateSignature &) {}
			RedefinableTemplateSignature& operator=(RedefinableTemplateSignature const&) = delete;

		protected:
			RedefinableTemplateSignature(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~RedefinableTemplateSignature() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Derivation for RedefinableTemplateSignature::/inheritedParameter
			result = (if extendedSignature->isEmpty() then Set{} else extendedSignature.parameter->asSet() endif)
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::TemplateParameter> > getInheritedParameters() = 0;
			
			/*!
			 If any of the parent Classifiers are a template, then the extendedSignature must include the signature of that Classifier.
			classifier.allParents()->forAll(c | c.ownedTemplateSignature->notEmpty() implies self->closure(extendedSignature)->includes(c.ownedTemplateSignature)) */ 
			virtual bool redefines_parents(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Classifier that owns this RedefinableTemplateSignature.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Classifier > getClassifier() const = 0;
			
			/*!
			 The signatures extended by this RedefinableTemplateSignature.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::RedefinableTemplateSignature, uml::RedefinableElement>> getExtendedSignature() const = 0;
			
			/*!
			 The formal template parameters of the extended signatures.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::TemplateParameter, uml::TemplateParameter>> getInheritedParameter() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Classifier that owns this RedefinableTemplateSignature.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Classifier > m_classifier;
			/*!
			 The signatures extended by this RedefinableTemplateSignature.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<Subset<uml::RedefinableTemplateSignature, uml::RedefinableElement>> m_extendedSignature;
			/*!
			 The formal template parameters of the extended signatures.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<Subset<uml::TemplateParameter, uml::TemplateParameter>> m_inheritedParameter;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The ordered set of all formal TemplateParameters for this TemplateSignature.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::TemplateParameter>> getParameter() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_REDEFINABLETEMPLATESIGNATURE_HPP */
