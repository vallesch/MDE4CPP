//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CHOICESTRATEGYCHOICESTRATEGYIMPL_HPP
#define FUML_CHOICESTRATEGYCHOICESTRATEGYIMPL_HPP

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
#include "../ChoiceStrategy.hpp"

#include "fUML/impl/SemanticStrategyImpl.hpp"



//*********************************
namespace fUML 
{
	class ChoiceStrategyImpl :virtual public SemanticStrategyImpl, virtual public ChoiceStrategy 
	{
		public: 
			ChoiceStrategyImpl(const ChoiceStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ChoiceStrategyImpl& operator=(ChoiceStrategyImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ChoiceStrategyImpl();



		public:
			//destructor
			virtual ~ChoiceStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual int choose(int size)  ;
			
			/*!
			 */ 
			virtual std::string retrieveName()  ;
			
			
			
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
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_CHOICESTRATEGYCHOICESTRATEGYIMPL_HPP */

