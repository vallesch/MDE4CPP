/*MIT License

Copyright (c) 2017 TU Ilmenau, Systems and Software Engineering Group

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
 * Simple C++UML Example. In this example simple UML-Elements (Class, Model, Operation,...) will be created. Some model contet will be printed out followed by the informations of metamodel and meta-metamodel.
 */

#include <iostream>

#include "abstractDataTypes/SubsetUnion.hpp"

#include "ecore/EClass.hpp"
#include "ecore/EOperation.hpp"

#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/Semantics/Loci/SM_Locus.hpp"
#include "PSSM/Semantics/StateMachines/StateMachineConfiguration.hpp"

using namespace std;

int main()
{
	std::shared_ptr<PSSM::PSSMFactory> factory = PSSM::PSSMFactory::eInstance();
	std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	std::shared_ptr<PSSM::Semantics::Loci::SM_Locus> locus(factory->createSM_Locus());

	std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> region = factory->createRegionActivation();


    return 0;
}