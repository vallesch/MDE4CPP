//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INCLUDE_HPP
#define UML_INCLUDE_HPP

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

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class DirectedRelationship;
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
	class StringExpression;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "DirectedRelationship.hpp"

#include "NamedElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Include relationship specifies that a UseCase contains the behavior defined in another UseCase.
	<p>From package UML::UseCases.</p> */
	class Include:virtual public DirectedRelationship,virtual public NamedElement	{
		public:
 			Include(const Include &) {}
			Include& operator=(Include const&) = delete;

		protected:
			Include(){}


			//Additional constructors for the containments back reference
			Include(std::weak_ptr<uml::UseCase > par_includingCase){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Include() {}

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
			 The UseCase that is to be included.
			<p>From package UML::UseCases.</p> */
			virtual std::shared_ptr<uml::UseCase > getAddition() const = 0;
			
			/*!
			 The UseCase that is to be included.
			<p>From package UML::UseCases.</p> */
			virtual void setAddition(std::shared_ptr<uml::UseCase> _addition_addition) = 0;
			/*!
			 The UseCase which includes the addition and owns the Include relationship.
			<p>From package UML::UseCases.</p> */
			virtual std::weak_ptr<uml::UseCase > getIncludingCase() const = 0;
			
			/*!
			 The UseCase which includes the addition and owns the Include relationship.
			<p>From package UML::UseCases.</p> */
			virtual void setIncludingCase(std::shared_ptr<uml::UseCase> _includingCase_includingCase) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The UseCase that is to be included.
			<p>From package UML::UseCases.</p> */
			std::shared_ptr<uml::UseCase > m_addition;
			/*!
			 The UseCase which includes the addition and owns the Include relationship.
			<p>From package UML::UseCases.</p> */
			std::weak_ptr<uml::UseCase > m_includingCase;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getTarget() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getSource() const = 0; 
	};

}
#endif /* end of include guard: UML_INCLUDE_HPP */

