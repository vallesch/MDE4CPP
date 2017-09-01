//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DURATIONCONSTRAINT_HPP
#define UML_DURATIONCONSTRAINT_HPP

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
	class IntervalConstraint;
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
	class ValueSpecification;
}

// base class includes
#include "IntervalConstraint.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A DurationConstraint is a Constraint that refers to a DurationInterval.
	<p>From package UML::Values.</p> */
	class DurationConstraint:virtual public IntervalConstraint	{
		public:
 			DurationConstraint(const DurationConstraint &) {}
			DurationConstraint& operator=(DurationConstraint const&) = delete;

		protected:
			DurationConstraint(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~DurationConstraint() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of firstEvent must be 2 if the multiplicity of constrainedElement is 2. Otherwise the multiplicity of firstEvent is 0.
			if (constrainedElement->size() = 2)
			  then (firstEvent->size() = 2) else (firstEvent->size() = 0) 
			endif */ 
			virtual bool first_event_multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 A DurationConstraint has either one or two constrainedElements.
			constrainedElement->size() = 1 or constrainedElement->size()=2 */ 
			virtual bool has_one_or_two_constrainedElements(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i].
			<p>From package UML::Values.</p> */ 
			virtual std::shared_ptr<Bag<bool> > getFirstEvent() const = 0;
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i].
			<p>From package UML::Values.</p> */ 
			std::shared_ptr<Bag<bool> > m_firstEvent; 
			
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
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const = 0; 
	};

}
#endif /* end of include guard: UML_DURATIONCONSTRAINT_HPP */

