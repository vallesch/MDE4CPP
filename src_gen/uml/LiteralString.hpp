//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALSTRING_HPP
#define UML_LITERALSTRING_HPP

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
	class LiteralSpecification;
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
	class TemplateParameter;
}

namespace uml 
{
	class Type;
}

// base class includes
#include "LiteralSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A LiteralString is a specification of a String value.
	<p>From package UML::Values.</p> */
	class LiteralString:virtual public LiteralSpecification	{
		public:
 			LiteralString(const LiteralString &) {}
			LiteralString& operator=(LiteralString const&) = delete;

		protected:
			LiteralString(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~LiteralString() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The specified String value.
			<p>From package UML::Values.</p> */ 
			virtual std::string getValue() const = 0;
			
			/*!
			 The specified String value.
			<p>From package UML::Values.</p> */ 
			virtual void setValue (std::string _value)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 The specified String value.
			<p>From package UML::Values.</p> */ 
			std::string m_value ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

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
			virtual std::weak_ptr<uml::Element > getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_LITERALSTRING_HPP */

