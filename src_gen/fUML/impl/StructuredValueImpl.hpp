//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP
#define FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP

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
#include "../StructuredValue.hpp"

#include "fUML/impl/ValueImpl.hpp"

#include "uml/InstanceValue.hpp"
#include "uml/UmlFactory.hpp"
#include "uml/Slot.hpp"
#include "uml/Classifier.hpp"
#include "uml/NamedElement.hpp"
#include "uml/InstanceSpecification.hpp"

#include "fuml/FUMLFactory.hpp"
#include "uml/StructuralFeature.hpp"



//*********************************
namespace fUML 
{
	class StructuredValueImpl :virtual public ValueImpl, virtual public StructuredValue 
	{
		public: 
			StructuredValueImpl(const StructuredValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StructuredValueImpl& operator=(StructuredValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StructuredValueImpl();



		public:
			//destructor
			virtual ~StructuredValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void assignFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position)  ;
			
			/*!
			 */ 
			virtual void createFeatureValues()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> > retrieveFeatureValues()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify()  ;
			
			
			
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
#endif /* end of include guard: FUML_STRUCTUREDVALUESTRUCTUREDVALUEIMPL_HPP */

