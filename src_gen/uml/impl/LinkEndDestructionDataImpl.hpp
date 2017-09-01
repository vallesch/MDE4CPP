//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LINKENDDESTRUCTIONDATALINKENDDESTRUCTIONDATAIMPL_HPP
#define UML_LINKENDDESTRUCTIONDATALINKENDDESTRUCTIONDATAIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../LinkEndDestructionData.hpp"

#include "impl/LinkEndDataImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class LinkEndDestructionDataImpl :virtual public LinkEndDataImpl, virtual public LinkEndDestructionData 
	{
		public: 
			LinkEndDestructionDataImpl(const LinkEndDestructionDataImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LinkEndDestructionDataImpl& operator=(LinkEndDestructionDataImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LinkEndDestructionDataImpl();

			//Additional constructors for the containments back reference
			LinkEndDestructionDataImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~LinkEndDestructionDataImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 LinkEndDestructionData for ordered, nonunique Association ends must have a single destroyAt InputPin if isDestroyDuplicates is false, which must be of type UnlimitedNatural and have a multiplicity of 1..1. Otherwise, the action has no destroyAt input pin.
			if  not end.isOrdered or end.isUnique or isDestroyDuplicates
			then destroyAt = null
			else
				destroyAt <> null and 
				destroyAt->forAll(type=UnlimitedNatural and is(1,1))
			endif */ 
			virtual bool destroyAt_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether to destroy duplicates of the value in nonunique Association ends.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDestroyDuplicates() const ;
			
			/*!
			 Specifies whether to destroy duplicates of the value in nonunique Association ends.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDestroyDuplicates (bool _isDestroyDuplicates); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin that provides the position of an existing link to be destroyed in an ordered, nonunique Association end. The type of the destroyAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getDestroyAt() const ;
			
			/*!
			 The InputPin that provides the position of an existing link to be destroyed in an ordered, nonunique Association end. The type of the destroyAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual void setDestroyAt(std::shared_ptr<uml::InputPin> _destroyAt_destroyAt) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_LINKENDDESTRUCTIONDATALINKENDDESTRUCTIONDATAIMPL_HPP */

