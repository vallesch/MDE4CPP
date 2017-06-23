//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_PRIMITIVEVALUEPRIMITIVEVALUEIMPL_HPP
#define FUML_PRIMITIVEVALUEPRIMITIVEVALUEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../PrimitiveValue.hpp"

#include "impl/ValueImpl.hpp"

#include "SubsetUnion.hpp"

#include "FUMLFactory.hpp"
#include "UmlFactory.hpp"
#include "PrimitiveType.hpp"
#include "Classifier.hpp"


//*********************************
namespace fUML 
{
	class PrimitiveValueImpl :virtual public ValueImpl, virtual public PrimitiveValue 
	{
		public: 
			PrimitiveValueImpl(const PrimitiveValueImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			PrimitiveValueImpl& operator=(PrimitiveValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			PrimitiveValueImpl();

		public:
			//destructor
			virtual ~PrimitiveValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> >
			 getTypes()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::PrimitiveType > getType() const ;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::PrimitiveType> _type_type) ;
							
			
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
#endif /* end of include guard: FUML_PRIMITIVEVALUEPRIMITIVEVALUEIMPL_HPP */

