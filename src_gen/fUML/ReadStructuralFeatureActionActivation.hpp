//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_READSTRUCTURALFEATUREACTIONACTIVATION_HPP
#define FUML_READSTRUCTURALFEATUREACTIONACTIVATION_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <map>
#include <string>
#include <vector>
#include <memory>
#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace fUML 
{
	class ActivityEdgeInstance;
}

namespace uml 
{
	class ActivityNode;
}

namespace fUML 
{
	class ActivityNodeActivationGroup;
}

namespace fUML 
{
	class PinActivation;
}

namespace fUML 
{
	class StructuralFeatureActionActivation;
}

namespace fUML 
{
	class Token;
}

// base class includes
#include "fUML/StructuralFeatureActionActivation.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ReadStructuralFeatureActionActivation:virtual public StructuralFeatureActionActivation
	{
		public:
 			ReadStructuralFeatureActionActivation(const ReadStructuralFeatureActionActivation &) {}
			ReadStructuralFeatureActionActivation& operator=(ReadStructuralFeatureActionActivation const&) = delete;

		protected:
			ReadStructuralFeatureActionActivation(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ReadStructuralFeatureActionActivation() {}

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
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: FUML_READSTRUCTURALFEATUREACTIONACTIVATION_HPP */

