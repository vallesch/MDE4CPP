//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RELATIONSHIP_HPP
#define UML_RELATIONSHIP_HPP

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
	class Comment;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

// base class includes
#include "uml/Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 Relationship is an abstract concept that specifies some kind of relationship between Elements.
	<p>From package UML::CommonStructure.</p> */
	class Relationship:virtual public Element
	{
		public:
 			Relationship(const Relationship &) {}
			Relationship& operator=(Relationship const&) = delete;

		protected:
			Relationship(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Relationship() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<Union<uml::Element>> m_relatedElement;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_RELATIONSHIP_HPP */
