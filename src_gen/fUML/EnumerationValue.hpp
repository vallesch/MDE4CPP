//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ENUMERATIONVALUE_HPP
#define FUML_ENUMERATIONVALUE_HPP

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
namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Enumeration;
}

namespace uml 
{
	class EnumerationLiteral;
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
#include "fUML/Value.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class EnumerationValue:virtual public Value
	{
		public:
 			EnumerationValue(const EnumerationValue &) {}
			EnumerationValue& operator=(EnumerationValue const&) = delete;

		protected:
			EnumerationValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EnumerationValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Value>  otherValue)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> new_()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify()  = 0;
			
			/*!
			 */ 
			virtual std::string toString()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::EnumerationLiteral > getLiteral() const = 0;
			
			/*!
			 */
			virtual void setLiteral(std::shared_ptr<uml::EnumerationLiteral> _literal_literal) = 0;
			/*!
			 */
			virtual std::shared_ptr<uml::Enumeration > getType() const = 0;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Enumeration> _type_type) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::EnumerationLiteral > m_literal;
			/*!
			 */
			std::shared_ptr<uml::Enumeration > m_type;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: FUML_ENUMERATIONVALUE_HPP */

