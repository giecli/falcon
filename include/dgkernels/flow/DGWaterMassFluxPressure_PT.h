/****************************************************************/
/*             DO NOT MODIFY OR REMOVE THIS HEADER              */
/*          FALCON - Fracturing And Liquid CONvection           */
/*                                                              */
/*       (c) pending 2012 Battelle Energy Alliance, LLC         */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#ifndef DGWATERMASSFLUXPRESSURE_PT
#define DGWATERMASSFLUXPRESSURE_PT

#include "DGDiffusion.h"
#include "Material.h"

//Forward Declarations
class DGWaterMassFluxPressure_PT;

template<>
InputParameters validParams<DGWaterMassFluxPressure_PT>();

class DGWaterMassFluxPressure_PT : public DGDiffusion
{
public:

  DGWaterMassFluxPressure_PT(const std::string & name, InputParameters parameters);
    
protected:
  virtual Real computeQpResidual(Moose::DGResidualType type);

  virtual Real computeQpJacobian(Moose::DGJacobianType type);

  MaterialProperty<Real> & _tau_water;
};
#endif //DGWATERMASSFLUXPRESSURE
