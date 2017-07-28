//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXTENSIONALVALUELIST_HPP
#define FUML_EXTENSIONALVALUELIST_HPP

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
namespace fUML 
{
	class ExtensionalValue;
}

namespace fUML 
{
	class FeatureValue;
}

namespace fUML 
{
	class Locus;
}

namespace fUML 
{
	class Value;
}

// base class includes
#include "ExtensionalValue.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ExtensionalValueList:virtual public ExtensionalValue	{
		public:
 			ExtensionalValueList(const ExtensionalValueList &) {}
			ExtensionalValueList& operator=(ExtensionalValueList const&) = delete;
	
		protected:
			ExtensionalValueList(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ExtensionalValueList() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ExtensionalValue> 
			 getValue()  = 0;
			
			/*!
			 */ 
			virtual bool
			 addValue(std::shared_ptr<fUML::ExtensionalValue>  value)  = 0;
			
			/*!
			 */ 
			virtual void
			 addValue(std::shared_ptr<fUML::ExtensionalValue>  value,int i)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> 
			 setValue(std::shared_ptr<fUML::ExtensionalValue>  value,int i)  = 0;
			
			/*!
			 */ 
			virtual std::string
			 removeValue(int i)  = 0;
			
			
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
			 
	};

}
#endif /* end of include guard: FUML_EXTENSIONALVALUELIST_HPP */
