//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_VALUEVALUEIMPL_HPP
#define FUML_VALUEVALUEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Value.hpp"

#include "impl/SemanticVisitorImpl.hpp"

#include "SubsetUnion.hpp"

#include <Classifier.hpp>


//*********************************
namespace fUML 
{
	class ValueImpl :virtual public SemanticVisitorImpl, virtual public Value 
	{
		public: 
			ValueImpl(const ValueImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ValueImpl& operator=(ValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ValueImpl();

		public:
			//destructor
			virtual ~ValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> 
			 specify()  ;
			
			/*!
			 */ 
			virtual bool
			 equals(std::shared_ptr<fUML::Value>  otherValue)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> >
			 getTypes()  const  ;
			
			/*!
			 */ 
			virtual bool
			 hasTypes(std::shared_ptr<uml::Classifier>  type)  ;
			
			/*!
			 */ 
			virtual std::string
			 toString()  ;
			
			/*!
			 */ 
			virtual std::string
			 objectId()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_VALUEVALUEIMPL_HPP */

