//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PARAMETERPARAMETERIMPL_HPP
#define UML_PARAMETERPARAMETERIMPL_HPP

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
#include "../Parameter.hpp"

#include "impl/ConnectableElementImpl.hpp"
#include "impl/MultiplicityElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ParameterImpl :virtual public ConnectableElementImpl, virtual public MultiplicityElementImpl, virtual public Parameter 
	{
		public: 
			ParameterImpl(const ParameterImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ParameterImpl& operator=(ParameterImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ParameterImpl();

			//Additional constructors for the containments back reference
			ParameterImpl(std::shared_ptr<uml::Operation > par_operation);




		public:
			//destructor
			virtual ~ParameterImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Only in and inout Parameters may have a delete effect. Only out, inout, and return Parameters may have a create effect.
			(effect = ParameterEffectKind::delete implies (direction = ParameterDirectionKind::_'in' or direction = ParameterDirectionKind::inout))
			and
			(effect = ParameterEffectKind::create implies (direction = ParameterDirectionKind::out or direction = ParameterDirectionKind::inout or direction = ParameterDirectionKind::return)) */ 
			virtual bool in_and_out(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 An input Parameter cannot be an exception.
			isException implies (direction <> ParameterDirectionKind::_'in' and direction <> ParameterDirectionKind::inout) */ 
			virtual bool not_exception(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A Parameter may only be associated with a Connector end within the context of a Collaboration.
			end->notEmpty() implies collaboration->notEmpty() */ 
			virtual bool connector_end(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Reentrant behaviors cannot have stream Parameters.
			(isStream and behavior <> null) implies not behavior.isReentrant */ 
			virtual bool reentrant_behaviors(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A Parameter cannot be a stream and exception at the same time.
			not (isException and isStream) */ 
			virtual bool stream_and_exception(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Parameters typed by DataTypes cannot have an effect.
			(type.oclIsKindOf(DataType)) implies (effect = null) */ 
			virtual bool object_effect(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 */ 
			virtual bool isSetDefault()  ;
			
			/*!
			 Sets the default value for this parameter to the specified Boolean value. */ 
			virtual void setBooleanDefaultValue(bool value)  ;
			
			/*!
			 Sets the default value for this parameter to the specified integer value. */ 
			virtual void setIntegerDefaultValue(int value)  ;
			
			/*!
			 Sets the default value for this parameter to the null value. */ 
			virtual void setNullDefaultValue()  ;
			
			/*!
			 Sets the default value for this parameter to the specified real value. */ 
			virtual void setRealDefaultValue(double value)  ;
			
			/*!
			 Sets the default value for this parameter to the specified string value. */ 
			virtual void setStringDefaultValue(std::string value)  ;
			
			/*!
			 Sets the default value for this parameter to the specified unlimited natural value. */ 
			virtual void setUnlimitedNaturalDefaultValue(int value)  ;
			
			/*!
			 */ 
			virtual void unsetDefault()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 A String that represents a value to be used when no argument is supplied for the Parameter.
			<p>From package UML::Classification.</p> */ 
			virtual std::string getDefault() const ;
			
			/*!
			 A String that represents a value to be used when no argument is supplied for the Parameter.
			<p>From package UML::Classification.</p> */ 
			virtual void setDefault (std::string _default); 
			
			/*!
			 Indicates whether a parameter is being sent into or out of a behavioral element.
			<p>From package UML::Classification.</p> */ 
			virtual ParameterDirectionKind getDirection() const ;
			
			/*!
			 Indicates whether a parameter is being sent into or out of a behavioral element.
			<p>From package UML::Classification.</p> */ 
			virtual void setDirection (ParameterDirectionKind _direction); 
			
			/*!
			 Specifies the effect that executions of the owner of the Parameter have on objects passed in or out of the parameter.
			<p>From package UML::Classification.</p> */ 
			virtual ParameterEffectKind getEffect() const ;
			
			/*!
			 Specifies the effect that executions of the owner of the Parameter have on objects passed in or out of the parameter.
			<p>From package UML::Classification.</p> */ 
			virtual void setEffect (ParameterEffectKind _effect); 
			
			/*!
			 Tells whether an output parameter may emit a value to the exclusion of the other outputs.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsException() const ;
			
			/*!
			 Tells whether an output parameter may emit a value to the exclusion of the other outputs.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsException (bool _isException); 
			
			/*!
			 Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter may post values while the behavior is executing.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsStream() const ;
			
			/*!
			 Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter may post values while the behavior is executing.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsStream (bool _isStream); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getDefaultValue() const ;
			
			/*!
			 Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter.
			<p>From package UML::Classification.</p> */
			virtual void setDefaultValue(std::shared_ptr<uml::ValueSpecification> _defaultValue_defaultValue) ;
			/*!
			 The Operation owning this parameter.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Operation > getOperation() const ;
			
			/*!
			 The ParameterSets containing the parameter. See ParameterSet.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr< Bag<uml::ParameterSet> > getParameterSet() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
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
#endif /* end of include guard: UML_PARAMETERPARAMETERIMPL_HPP */

