//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STRUCTUREDVALUE_HPP
#define FUML_STRUCTUREDVALUE_HPP

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
	class FeatureValue;
}

namespace uml 
{
	class StructuralFeature;
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
	class StructuredValue:virtual public Value
	{
		public:
 			StructuredValue(const StructuredValue &) {}
			StructuredValue& operator=(StructuredValue const&) = delete;

		protected:
			StructuredValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~StructuredValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void assignFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position)  = 0;
			
			/*!
			 */ 
			virtual void createFeatureValues()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> > retrieveFeatureValues()  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify()  = 0;
			
			
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
#endif /* end of include guard: FUML_STRUCTUREDVALUE_HPP */

