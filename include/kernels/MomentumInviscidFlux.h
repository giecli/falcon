#ifndef MOMENTUMINVISCIDFLUX_H
#define MOMENTUMINVISCIDFLUX_H

#include "Kernel.h"

//ForwardDeclarations
class MomentumInviscidFlux;

template<>
InputParameters validParams<MomentumInviscidFlux>();

class MomentumInviscidFlux : public Kernel
{
public:

  MomentumInviscidFlux(std::string name, MooseSystem & moose_system, InputParameters parameters);

protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();
  virtual Real computeQpOffDiagJacobian(unsigned int jvar);

  unsigned int _u_vel_var;
  MooseArray<Real> & _u_vel;

  unsigned int _v_vel_var;
  MooseArray<Real> & _v_vel;

  unsigned int _w_vel_var;
  MooseArray<Real> & _w_vel;

  int _component;

  MooseArray<Real> & _pressure;
};
 
#endif
