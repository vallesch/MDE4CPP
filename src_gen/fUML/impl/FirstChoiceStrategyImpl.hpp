//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_FIRSTCHOICESTRATEGYFIRSTCHOICESTRATEGYIMPL_HPP
#define FUML_FIRSTCHOICESTRATEGYFIRSTCHOICESTRATEGYIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../FirstChoiceStrategy.hpp"

#include "impl/ChoiceStrategyImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class FirstChoiceStrategyImpl :virtual public ChoiceStrategyImpl, virtual public FirstChoiceStrategy 
	{
		public: 
			FirstChoiceStrategyImpl(const FirstChoiceStrategyImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			FirstChoiceStrategyImpl& operator=(FirstChoiceStrategyImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			FirstChoiceStrategyImpl();

		public:
			//destructor
			virtual ~FirstChoiceStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual int
			 choose(int size)  ;
			
			
			
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
#endif /* end of include guard: FUML_FIRSTCHOICESTRATEGYFIRSTCHOICESTRATEGYIMPL_HPP */

