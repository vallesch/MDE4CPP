//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SIGNALINSTANCE_HPP
#define FUML_SIGNALINSTANCE_HPP

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
	class CompoundValue;
}

namespace fUML 
{
	class FeatureValue;
}

namespace uml 
{
	class Signal;
}

// base class includes
#include "fUML/CompoundValue.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class SignalInstance:virtual public CompoundValue
	{
		public:
 			SignalInstance(const SignalInstance &) {}
			SignalInstance& operator=(SignalInstance const&) = delete;

		protected:
			SignalInstance(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~SignalInstance() {}

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
			 */
			virtual std::shared_ptr<uml::Signal > getType() const = 0;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Signal> _type_type) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::Signal > m_type;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: FUML_SIGNALINSTANCE_HPP */

