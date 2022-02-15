// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// CholeskyIP
Rcpp::List CholeskyIP(Eigen::MatrixXd V, Eigen::MatrixXd Z);
RcppExport SEXP _LMN_CholeskyIP(SEXP VSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type V(VSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(CholeskyIP(V, Z));
    return rcpp_result_gen;
END_RCPP
}
// DurbinLevinson_XZ
Eigen::MatrixXd DurbinLevinson_XZ(Eigen::MatrixXd X, Eigen::VectorXd acf);
RcppExport SEXP _LMN_DurbinLevinson_XZ(SEXP XSEXP, SEXP acfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type acf(acfSEXP);
    rcpp_result_gen = Rcpp::wrap(DurbinLevinson_XZ(X, acf));
    return rcpp_result_gen;
END_RCPP
}
// DurbinLevinson_ZX
Eigen::MatrixXd DurbinLevinson_ZX(Eigen::MatrixXd Z, Eigen::VectorXd acf);
RcppExport SEXP _LMN_DurbinLevinson_ZX(SEXP ZSEXP, SEXP acfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type acf(acfSEXP);
    rcpp_result_gen = Rcpp::wrap(DurbinLevinson_ZX(Z, acf));
    return rcpp_result_gen;
END_RCPP
}
// DurbinLevinson_Eigen
Rcpp::List DurbinLevinson_Eigen(Eigen::MatrixXd X, Eigen::MatrixXd Y, Eigen::VectorXd acf, int calcMode);
RcppExport SEXP _LMN_DurbinLevinson_Eigen(SEXP XSEXP, SEXP YSEXP, SEXP acfSEXP, SEXP calcModeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type acf(acfSEXP);
    Rcpp::traits::input_parameter< int >::type calcMode(calcModeSEXP);
    rcpp_result_gen = Rcpp::wrap(DurbinLevinson_Eigen(X, Y, acf, calcMode));
    return rcpp_result_gen;
END_RCPP
}
// DurbinLevinson_Base
Rcpp::List DurbinLevinson_Base(NumericMatrix X, NumericMatrix Y, NumericVector acf, int calcMode);
RcppExport SEXP _LMN_DurbinLevinson_Base(SEXP XSEXP, SEXP YSEXP, SEXP acfSEXP, SEXP calcModeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type acf(acfSEXP);
    Rcpp::traits::input_parameter< int >::type calcMode(calcModeSEXP);
    rcpp_result_gen = Rcpp::wrap(DurbinLevinson_Base(X, Y, acf, calcMode));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LMN_CholeskyIP", (DL_FUNC) &_LMN_CholeskyIP, 2},
    {"_LMN_DurbinLevinson_XZ", (DL_FUNC) &_LMN_DurbinLevinson_XZ, 2},
    {"_LMN_DurbinLevinson_ZX", (DL_FUNC) &_LMN_DurbinLevinson_ZX, 2},
    {"_LMN_DurbinLevinson_Eigen", (DL_FUNC) &_LMN_DurbinLevinson_Eigen, 4},
    {"_LMN_DurbinLevinson_Base", (DL_FUNC) &_LMN_DurbinLevinson_Base, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_LMN(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}