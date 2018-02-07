//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_VALUESVALUESIMPL_HPP
#define FUML_VALUESVALUESIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../Values.hpp"


#include "ecore/impl/EObjectImpl.hpp"



//*********************************
namespace fUML 
{
	class ValuesImpl :virtual public ecore::EObjectImpl,
virtual public Values 
	{
		public: 
			ValuesImpl(const ValuesImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ValuesImpl& operator=(ValuesImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ValuesImpl();



		public:
			//destructor
			virtual ~ValuesImpl();
			
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
			virtual std::shared_ptr< Bag<fUML::Value> > getValues() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_VALUESVALUESIMPL_HPP */

