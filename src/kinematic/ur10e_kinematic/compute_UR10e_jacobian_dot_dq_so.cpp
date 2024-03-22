#include <Eigen/Dense>

// Eigen::Matrix<double, 6, 1> compute_UR10e_jacobian_dot_dq(Eigen::Matrix<double, 6, 1> q, Eigen::Matrix<double, 6, 1> dq){
extern "C" void compute_UR10e_jacobian_dot_dq(double* result, double *q, double *dq) {

Eigen::Matrix<double, 6, 1> J_dot_dq;

J_dot_dq.setZero();

double q0 = q[0];
double q1 = q[1];
double q2 = q[2];
double q3 = q[3];
double q4 = q[4];
double q5 = q[5];

double dq0 = dq[0];
double dq1 = dq[1];
double dq2 = dq[2];
double dq3 = dq[3];
double dq4 = dq[4];
double dq5 = dq[5];

J_dot_dq(0,0) = -dq0*(sin(q0)*(sin(q1+q2)*(dq1+dq2)*1.1431E+4+dq1*sin(q1)*1.2254E+4)*5.0E-5+dq0*sin(q0)*1.7415E-1+dq0*cos(q4)*sin(q0)*1.1655E-1+dq4*cos(q0)*sin(q4)*1.1655E-1+dq0*sin(q1+q2+q3)*cos(q0)*1.1985E-1+cos(q1+q2+q3)*sin(q0)*(dq1+dq2+dq3)*1.1985E-1-dq0*cos(q0)*(cos(q1+q2)*1.1431E+4+cos(q1)*1.2254E+4)*5.0E-5-dq0*cos(q1+q2+q3)*cos(q0)*sin(q4)*1.1655E-1-dq4*cos(q1+q2+q3)*cos(q4)*sin(q0)*1.1655E-1+sin(q1+q2+q3)*sin(q0)*sin(q4)*(dq1+dq2+dq3)*1.1655E-1)+dq3*(cos(q0)*(sin(q1+q2+q3)*(dq1+dq2+dq3)*-7.99E+2+dq4*sin(q1+q2+q3)*cos(q4)*7.77E+2+cos(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*7.77E+2)*1.5E-4-dq0*sin(q0)*(cos(q1+q2+q3)*7.99E+2+sin(q1+q2+q3)*sin(q4)*7.77E+2)*1.5E-4)+dq4*(dq0*cos(q0)*sin(q4)*-1.1655E-1-dq4*cos(q4)*sin(q0)*1.1655E-1+dq0*cos(q1+q2+q3)*cos(q4)*sin(q0)*1.1655E-1+dq4*cos(q1+q2+q3)*cos(q0)*sin(q4)*1.1655E-1+sin(q1+q2+q3)*cos(q0)*cos(q4)*(dq1+dq2+dq3)*1.1655E-1)+dq1*((cos(q0)*(sin(q1+q2+q3)*(dq1+dq2+dq3)*-2.397E+3+cos(q1+q2)*(dq1+dq2)*1.1431E+4+dq1*cos(q1)*1.2254E+4+dq4*sin(q1+q2+q3)*cos(q4)*2.331E+3+cos(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*2.331E+3))/2.0E+4-(dq0*sin(q0)*(cos(q1+q2+q3)*2.397E+3+sin(q1+q2)*1.1431E+4+sin(q1)*1.2254E+4+sin(q1+q2+q3)*sin(q4)*2.331E+3))/2.0E+4)+dq2*((cos(q0)*(sin(q1+q2+q3)*(dq1+dq2+dq3)*-2.397E+3+cos(q1+q2)*(dq1+dq2)*1.1431E+4+dq4*sin(q1+q2+q3)*cos(q4)*2.331E+3+cos(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*2.331E+3))/2.0E+4-(dq0*sin(q0)*(cos(q1+q2+q3)*2.397E+3+sin(q1+q2)*1.1431E+4+sin(q1+q2+q3)*sin(q4)*2.331E+3))/2.0E+4);

J_dot_dq(1,0) = dq3*(sin(q0)*(sin(q1+q2+q3)*(dq1+dq2+dq3)*-7.99E+2+dq4*sin(q1+q2+q3)*cos(q4)*7.77E+2+cos(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*7.77E+2)*1.5E-4+dq0*cos(q0)*(cos(q1+q2+q3)*7.99E+2+sin(q1+q2+q3)*sin(q4)*7.77E+2)*1.5E-4)+dq1*((sin(q0)*(sin(q1+q2+q3)*(dq1+dq2+dq3)*-2.397E+3+cos(q1+q2)*(dq1+dq2)*1.1431E+4+dq1*cos(q1)*1.2254E+4+dq4*sin(q1+q2+q3)*cos(q4)*2.331E+3+cos(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*2.331E+3))/2.0E+4+(dq0*cos(q0)*(cos(q1+q2+q3)*2.397E+3+sin(q1+q2)*1.1431E+4+sin(q1)*1.2254E+4+sin(q1+q2+q3)*sin(q4)*2.331E+3))/2.0E+4)+dq4*(dq4*cos(q0)*cos(q4)*1.1655E-1-dq0*sin(q0)*sin(q4)*1.1655E-1-dq0*cos(q1+q2+q3)*cos(q0)*cos(q4)*1.1655E-1+dq4*cos(q1+q2+q3)*sin(q0)*sin(q4)*1.1655E-1+sin(q1+q2+q3)*cos(q4)*sin(q0)*(dq1+dq2+dq3)*1.1655E-1)+dq2*((sin(q0)*(sin(q1+q2+q3)*(dq1+dq2+dq3)*-2.397E+3+cos(q1+q2)*(dq1+dq2)*1.1431E+4+dq4*sin(q1+q2+q3)*cos(q4)*2.331E+3+cos(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*2.331E+3))/2.0E+4+(dq0*cos(q0)*(cos(q1+q2+q3)*2.397E+3+sin(q1+q2)*1.1431E+4+sin(q1+q2+q3)*sin(q4)*2.331E+3))/2.0E+4)+dq0*(cos(q0)*(sin(q1+q2)*(dq1+dq2)*1.1431E+4+dq1*sin(q1)*1.2254E+4)*5.0E-5+dq0*cos(q0)*1.7415E-1+dq0*cos(q0)*cos(q4)*1.1655E-1-dq4*sin(q0)*sin(q4)*1.1655E-1-dq0*sin(q1+q2+q3)*sin(q0)*1.1985E-1+cos(q1+q2+q3)*cos(q0)*(dq1+dq2+dq3)*1.1985E-1+dq0*sin(q0)*(cos(q1+q2)*1.1431E+4+cos(q1)*1.2254E+4)*5.0E-5-dq4*cos(q1+q2+q3)*cos(q0)*cos(q4)*1.1655E-1+dq0*cos(q1+q2+q3)*sin(q0)*sin(q4)*1.1655E-1+sin(q1+q2+q3)*cos(q0)*sin(q4)*(dq1+dq2+dq3)*1.1655E-1);

J_dot_dq(2,0) = dq3*(cos(q1+q2+q3)*(dq1+dq2+dq3)*1.1985E-1-dq4*cos(q1+q2+q3)*cos(q4)*1.1655E-1+sin(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*1.1655E-1)+dq1*(cos(q1+q2+q3)*(dq1+dq2+dq3)*1.1985E-1+sin(q1+q2)*(dq1+dq2)*5.7155E-1+dq1*sin(q1)*6.127E-1-dq4*cos(q1+q2+q3)*cos(q4)*1.1655E-1+sin(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*1.1655E-1)+dq4*(dq4*sin(q1+q2+q3)*sin(q4)*1.1655E-1-cos(q1+q2+q3)*cos(q4)*(dq1+dq2+dq3)*1.1655E-1)+dq2*(cos(q1+q2+q3)*(dq1+dq2+dq3)*1.1985E-1+sin(q1+q2)*(dq1+dq2)*5.7155E-1-dq4*cos(q1+q2+q3)*cos(q4)*1.1655E-1+sin(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3)*1.1655E-1);

J_dot_dq(3,0) = dq5*(dq0*cos(q0)*cos(q4)-dq4*sin(q0)*sin(q4)-dq4*cos(q1+q2+q3)*cos(q0)*cos(q4)+dq0*cos(q1+q2+q3)*sin(q0)*sin(q4)+sin(q1+q2+q3)*cos(q0)*sin(q4)*(dq1+dq2+dq3))-dq4*(dq0*sin(q1+q2+q3)*sin(q0)-cos(q1+q2+q3)*cos(q0)*(dq1+dq2+dq3))+dq0*dq1*cos(q0)+dq0*dq2*cos(q0)+dq0*dq3*cos(q0);

J_dot_dq(4,0) = dq5*(dq0*cos(q4)*sin(q0)+dq4*cos(q0)*sin(q4)-dq0*cos(q1+q2+q3)*cos(q0)*sin(q4)-dq4*cos(q1+q2+q3)*cos(q4)*sin(q0)+sin(q1+q2+q3)*sin(q0)*sin(q4)*(dq1+dq2+dq3))+dq4*(dq0*sin(q1+q2+q3)*cos(q0)+cos(q1+q2+q3)*sin(q0)*(dq1+dq2+dq3))+dq0*dq1*sin(q0)+dq0*dq2*sin(q0)+dq0*dq3*sin(q0);

J_dot_dq(5,0) = dq0*((cos(q4)*sin(q0)-cos(q1+q2+q3)*cos(q0)*sin(q4))*(dq0*cos(q0)*cos(q4)-dq4*sin(q0)*sin(q4)-dq4*cos(q1+q2+q3)*cos(q0)*cos(q4)+dq0*cos(q1+q2+q3)*sin(q0)*sin(q4)+sin(q1+q2+q3)*cos(q0)*sin(q4)*(dq1+dq2+dq3))*2.0+(sin(q0)*sin(q4)*sin(q5)+sin(q1+q2+q3)*cos(q0)*cos(q5)+cos(q1+q2+q3)*cos(q0)*cos(q4)*sin(q5))*(dq0*cos(q0)*sin(q4)*sin(q5)+dq4*cos(q4)*sin(q0)*sin(q5)+dq5*cos(q5)*sin(q0)*sin(q4)-dq0*sin(q1+q2+q3)*cos(q5)*sin(q0)-dq5*sin(q1+q2+q3)*cos(q0)*sin(q5)+cos(q1+q2+q3)*cos(q0)*cos(q5)*(dq1+dq2+dq3)+dq5*cos(q1+q2+q3)*cos(q0)*cos(q4)*cos(q5)-dq0*cos(q1+q2+q3)*cos(q4)*sin(q0)*sin(q5)-dq4*cos(q1+q2+q3)*cos(q0)*sin(q4)*sin(q5)-sin(q1+q2+q3)*cos(q0)*cos(q4)*sin(q5)*(dq1+dq2+dq3))*2.0-(sin(q1+q2+q3)*cos(q0)*sin(q5)*-1.0+cos(q5)*sin(q0)*sin(q4)+cos(q1+q2+q3)*cos(q0)*cos(q4)*cos(q5))*(-dq0*cos(q0)*cos(q5)*sin(q4)-dq4*cos(q4)*cos(q5)*sin(q0)+dq5*sin(q0)*sin(q4)*sin(q5)+dq5*sin(q1+q2+q3)*cos(q0)*cos(q5)-dq0*sin(q1+q2+q3)*sin(q0)*sin(q5)*1.0+cos(q1+q2+q3)*cos(q0)*sin(q5)*(dq1+dq2+dq3)+dq0*cos(q1+q2+q3)*cos(q4)*cos(q5)*sin(q0)+dq4*cos(q1+q2+q3)*cos(q0)*cos(q5)*sin(q4)+dq5*cos(q1+q2+q3)*cos(q0)*cos(q4)*sin(q5)+sin(q1+q2+q3)*cos(q0)*cos(q4)*cos(q5)*(dq1+dq2+dq3))*2.0)-dq5*(dq4*sin(q1+q2+q3)*cos(q4)+cos(q1+q2+q3)*sin(q4)*(dq1+dq2+dq3))+dq4*((cos(q0)*sin(q4)-cos(q1+q2+q3)*cos(q4)*sin(q0))*(dq0*cos(q0)*cos(q4)-dq4*sin(q0)*sin(q4)-dq4*cos(q1+q2+q3)*cos(q0)*cos(q4)+dq0*cos(q1+q2+q3)*sin(q0)*sin(q4)+sin(q1+q2+q3)*cos(q0)*sin(q4)*(dq1+dq2+dq3))+(cos(q4)*sin(q0)-cos(q1+q2+q3)*cos(q0)*sin(q4))*(dq4*cos(q0)*cos(q4)-dq0*sin(q0)*sin(q4)-dq0*cos(q1+q2+q3)*cos(q0)*cos(q4)+dq4*cos(q1+q2+q3)*sin(q0)*sin(q4)+sin(q1+q2+q3)*cos(q4)*sin(q0)*(dq1+dq2+dq3))+cos(q5)*(cos(q0)*cos(q4)*1.0+cos(q1+q2+q3)*sin(q0)*sin(q4)*1.0)*(cos(q5)*(-dq0*cos(q0)*sin(q4)-dq4*cos(q4)*sin(q0)+dq0*cos(q1+q2+q3)*cos(q4)*sin(q0)+dq4*cos(q1+q2+q3)*cos(q0)*sin(q4)+sin(q1+q2+q3)*cos(q0)*cos(q4)*(dq1+dq2+dq3))+dq5*sin(q5)*(sin(q0)*sin(q4)+cos(q1+q2+q3)*cos(q0)*cos(q4))+dq5*sin(q1+q2+q3)*cos(q0)*cos(q5)*1.0-dq0*sin(q1+q2+q3)*sin(q0)*sin(q5)*1.0+cos(q1+q2+q3)*cos(q0)*sin(q5)*(dq1+dq2+dq3)*1.0)*1.0+cos(q5)*(cos(q5)*(sin(q0)*sin(q4)+cos(q1+q2+q3)*cos(q0)*cos(q4))-sin(q1+q2+q3)*cos(q0)*sin(q5)*1.0)*(dq0*cos(q4)*sin(q0)*1.0+dq4*cos(q0)*sin(q4)*1.0-dq0*cos(q1+q2+q3)*cos(q0)*sin(q4)*1.0-dq4*cos(q1+q2+q3)*cos(q4)*sin(q0)*1.0+sin(q1+q2+q3)*sin(q0)*sin(q4)*(dq1+dq2+dq3)*1.0)*1.0+sin(q5)*(cos(q0)*cos(q4)*1.0+cos(q1+q2+q3)*sin(q0)*sin(q4)*1.0)*(sin(q5)*(-dq0*cos(q0)*sin(q4)-dq4*cos(q4)*sin(q0)+dq0*cos(q1+q2+q3)*cos(q4)*sin(q0)+dq4*cos(q1+q2+q3)*cos(q0)*sin(q4)+sin(q1+q2+q3)*cos(q0)*cos(q4)*(dq1+dq2+dq3))*1.0-dq5*cos(q5)*(sin(q0)*sin(q4)+cos(q1+q2+q3)*cos(q0)*cos(q4))*1.0+dq0*sin(q1+q2+q3)*cos(q5)*sin(q0)*1.0+dq5*sin(q1+q2+q3)*cos(q0)*sin(q5)*1.0-cos(q1+q2+q3)*cos(q0)*cos(q5)*(dq1+dq2+dq3)*1.0)+sin(q5)*(sin(q5)*(sin(q0)*sin(q4)+cos(q1+q2+q3)*cos(q0)*cos(q4))*1.0+sin(q1+q2+q3)*cos(q0)*cos(q5)*1.0)*(dq0*cos(q4)*sin(q0)*1.0+dq4*cos(q0)*sin(q4)*1.0-dq0*cos(q1+q2+q3)*cos(q0)*sin(q4)*1.0-dq4*cos(q1+q2+q3)*cos(q4)*sin(q0)*1.0+sin(q1+q2+q3)*sin(q0)*sin(q4)*(dq1+dq2+dq3)*1.0)+dq5*sin(q5)*(cos(q0)*cos(q4)*1.0+cos(q1+q2+q3)*sin(q0)*sin(q4)*1.0)*(cos(q5)*(sin(q0)*sin(q4)+cos(q1+q2+q3)*cos(q0)*cos(q4))-sin(q1+q2+q3)*cos(q0)*sin(q5)*1.0)*1.0-dq5*cos(q5)*(cos(q0)*cos(q4)*1.0+cos(q1+q2+q3)*sin(q0)*sin(q4)*1.0)*(sin(q5)*(sin(q0)*sin(q4)+cos(q1+q2+q3)*cos(q0)*cos(q4))*1.0+sin(q1+q2+q3)*cos(q0)*cos(q5)*1.0));

// return J_dot_dq;

int index = 0;
for (int row = 0; row < J_dot_dq.rows(); ++row) {
	for (int col = 0; col < J_dot_dq.cols(); ++col) {
		result[index++] = J_dot_dq(row, col);
	}
}

}
