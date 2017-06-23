//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_REALVALUE_HPP
#define FUML_REALVALUE_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
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
	class PrimitiveType;
}

namespace fUML 
{
	class PrimitiveValue;
}

namespace fUML 
{
	class Value;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "PrimitiveValue.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class RealValue:virtual public PrimitiveValue	{
		public:
 			RealValue(const RealValue &) {}
			RealValue& operator=(RealValue const&) = delete;
	
		protected:
			RealValue(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~RealValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> 
			 specify()  = 0;
			
			/*!
			 */ 
			virtual bool
			 equals(std::shared_ptr<fUML::Value>  otherValue)  = 0;
			
			/*!
			 */ 
			virtual std::string
			 toString()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual float getValue() const = 0;
			
			/*!
			 */ 
			virtual void setValue (float _value)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			float m_value ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_REALVALUE_HPP */

