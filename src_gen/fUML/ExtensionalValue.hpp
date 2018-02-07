//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXTENSIONALVALUE_HPP
#define FUML_EXTENSIONALVALUE_HPP

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

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
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

namespace fUML 
{
	class Locus;
}

// base class includes
#include "fUML/CompoundValue.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class ExtensionalValue:virtual public CompoundValue
	{
		public:
 			ExtensionalValue(const ExtensionalValue &) {}
			ExtensionalValue& operator=(ExtensionalValue const&) = delete;

		protected:
			ExtensionalValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ExtensionalValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void destroy()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Locus > getLocus() const = 0;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Locus> _locus_locus) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<fUML::Locus > m_locus;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: FUML_EXTENSIONALVALUE_HPP */

