//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_FEATURE_HPP
#define UML_FEATURE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Union;


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
	class StringExpression;
}

// base class includes
#include "uml/RedefinableElement.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Feature declares a behavioral or structural characteristic of Classifiers.
	<p>From package UML::Classification.</p> */
	class Feature:virtual public RedefinableElement
	{
		public:
 			Feature(const Feature &) {}
			Feature& operator=(Feature const&) = delete;

		protected:
			Feature(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Feature() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether this Feature characterizes individual instances classified by the Classifier (false) or the Classifier itself (true).
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsStatic() const = 0;
			
			/*!
			 Specifies whether this Feature characterizes individual instances classified by the Classifier (false) or the Classifier itself (true).
			<p>From package UML::Classification.</p> */ 
			virtual void setIsStatic (bool _isStatic)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether this Feature characterizes individual instances classified by the Classifier (false) or the Classifier itself (true).
			<p>From package UML::Classification.</p> */ 
			bool m_isStatic = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<Union<uml::Classifier>> m_featuringClassifier;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier>> getFeaturingClassifier() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_FEATURE_HPP */
