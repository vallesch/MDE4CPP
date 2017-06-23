//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_REALVALUEREALVALUEIMPL_HPP
#define FUML_REALVALUEREALVALUEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../RealValue.hpp"

#include "impl/PrimitiveValueImpl.hpp"

#include "SubsetUnion.hpp"

#include <sstream>
#include "FUMLFactory.hpp"
#include "UmlFactory.hpp"
#include "LiteralReal.hpp"
#include "Type.hpp"
#include "PrimitiveType.hpp"


//*********************************
namespace fUML 
{
	class RealValueImpl :virtual public PrimitiveValueImpl, virtual public RealValue 
	{
		public: 
			RealValueImpl(const RealValueImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			RealValueImpl& operator=(RealValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			RealValueImpl();

		public:
			//destructor
			virtual ~RealValueImpl();
			
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
			virtual std::string
			 toString()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual float getValue() const ;
			
			/*!
			 */ 
			virtual void setValue (float _value); 
			
			
			
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
#endif /* end of include guard: FUML_REALVALUEREALVALUEIMPL_HPP */

