//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERVAL_HPP
#define UML_INTERVAL_HPP

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

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "ValueSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Interval defines the range between two ValueSpecifications.
	<p>From package UML::Values.</p> */
	class Interval:virtual public ValueSpecification	{
		public:
 			Interval(const Interval &) {}
			Interval& operator=(Interval const&) = delete;

		protected:
			Interval(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Interval() {}

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
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMax() const = 0;
			
			/*!
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			virtual void setMax(std::shared_ptr<uml::ValueSpecification> _max_max) = 0;
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMin() const = 0;
			
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			virtual void setMin(std::shared_ptr<uml::ValueSpecification> _min_min) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			std::shared_ptr<uml::ValueSpecification > m_max;
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			std::shared_ptr<uml::ValueSpecification > m_min;
			

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
#endif /* end of include guard: UML_INTERVAL_HPP */

