//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EANNOTATIONEANNOTATIONIMPL_HPP
#define ECORE_EANNOTATIONEANNOTATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../EAnnotation.hpp"

#include "impl/EModelElementImpl.hpp"



//*********************************
namespace ecore 
{
	class EAnnotationImpl :virtual public EModelElementImpl, virtual public EAnnotation 
	{
		public: 
			EAnnotationImpl(const EAnnotationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EAnnotationImpl& operator=(EAnnotationImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EAnnotationImpl();

		public:
			//destructor
			virtual ~EAnnotationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getSource() const ;
			
			/*!
			 */ 
			virtual void setSource (std::string _source); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<ecore::EStringToStringMapEntry>>> getDetails() const ;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EModelElement> getEModelElement() const ;
			
			/*!
			 */
			virtual void setEModelElement(std::shared_ptr<ecore::EModelElement> _eModelElement) ;
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<ecore::EObject>>> getContents() const ;
			
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<ecore::EObject>>> getReferences() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EANNOTATIONEANNOTATIONIMPL_HPP */

