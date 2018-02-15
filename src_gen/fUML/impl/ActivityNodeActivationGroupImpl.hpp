//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYNODEACTIVATIONGROUPACTIVITYNODEACTIVATIONGROUPIMPL_HPP
#define FUML_ACTIVITYNODEACTIVATIONGROUPACTIVITYNODEACTIVATIONGROUPIMPL_HPP

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
#include "../ActivityNodeActivationGroup.hpp"


#include "ecore/impl/EObjectImpl.hpp"

#include "fUML/ActivityEdgeInstance.hpp"
#include "fUML/ActivityNodeActivation.hpp"
#include "fUML/ActivityNodeActivationGroup.hpp"
#include "fUML/ActivityParameterNodeActivation.hpp"
#include "fUML/ControlNodeActivation.hpp"
#include "fUML/ControlNodeActivation.hpp"
#include "fUML/ExecutionFactory.hpp"
#include "fUML/FUMLFactory.hpp"
#include "fUML/Locus.hpp"
#include "fUML/PinActivation.hpp"
#include "uml/Action.hpp"
#include "uml/ActivityEdge.hpp"
#include "uml/ActivityNode.hpp"
#include "uml/Class.hpp"
#include "uml/InputPin.hpp"



//*********************************
namespace fUML 
{
	class ActivityNodeActivationGroupImpl :virtual public ecore::EObjectImpl,
virtual public ActivityNodeActivationGroup 
	{
		public: 
			ActivityNodeActivationGroupImpl(const ActivityNodeActivationGroupImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityNodeActivationGroupImpl& operator=(ActivityNodeActivationGroupImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ActivityNodeActivationGroupImpl();



		public:
			//destructor
			virtual ~ActivityNodeActivationGroupImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void activate(std::shared_ptr<Bag<uml::ActivityNode> >  nodes,std::shared_ptr<Bag<uml::ActivityEdge> >  edges)  ;
			
			/*!
			 */ 
			virtual void addEdgeInstance(std::shared_ptr<fUML::ActivityEdgeInstance>  instance)  ;
			
			/*!
			 */ 
			virtual void addNodeActivation(std::shared_ptr<fUML::ActivityNodeActivation>  activation)  ;
			
			/*!
			 */ 
			virtual bool checkIncomingEdges(std::shared_ptr<Bag<fUML::ActivityEdgeInstance> >  incomingEdges,std::shared_ptr<Bag<fUML::ActivityNodeActivation> >  activations)  ;
			
			/*!
			 */ 
			virtual void createEdgeInstance(std::shared_ptr<Bag<uml::ActivityEdge> >  edges)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityNodeActivation> createNodeActivation(std::shared_ptr<uml::ActivityNode>  node)  ;
			
			/*!
			 */ 
			virtual void createNodeActivations(std::shared_ptr<Bag<uml::ActivityNode> >  nodes)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityNodeActivation> getNodeActivation(std::shared_ptr<uml::ActivityNode>  node)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::ActivityParameterNodeActivation> > getOutputParameterNodeActivations()  ;
			
			/*!
			 */ 
			virtual bool hasSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance)  ;
			
			/*!
			 */ 
			virtual bool isSuspended()  ;
			
			/*!
			 */ 
			virtual void resume(std::shared_ptr<fUML::ActivityNodeActivation>  activation)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityExecution> retrieveActivityExecution()  ;
			
			/*!
			 */ 
			virtual void run(std::shared_ptr<Bag<fUML::ActivityNodeActivation> >  activations)  ;
			
			/*!
			 */ 
			virtual void runNodes(std::shared_ptr<Bag<uml::ActivityNode> >  nodes)  ;
			
			/*!
			 */ 
			virtual void suspend(std::shared_ptr<fUML::ActivityNodeActivation>  activation)  ;
			
			/*!
			 */ 
			virtual void terminateAll()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityExecution > getActivityExecution() const ;
			
			/*!
			 */
			virtual void setActivityExecution(std::shared_ptr<fUML::ActivityExecution> _activityExecution_activityExecution) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::StructuredActivityNodeActivation > getContainingNodeActivation() const ;
			
			/*!
			 */
			virtual void setContainingNodeActivation(std::shared_ptr<fUML::StructuredActivityNodeActivation> _containingNodeActivation_containingNodeActivation) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ActivityEdgeInstance> > getEdgeInstances() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ActivityNodeActivation> > getNodeActivations() const ;
			
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::ActivityNodeActivation> > getSuspendedActivations() const ;
			
							
			
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
#endif /* end of include guard: FUML_ACTIVITYNODEACTIVATIONGROUPACTIVITYNODEACTIVATIONGROUPIMPL_HPP */

