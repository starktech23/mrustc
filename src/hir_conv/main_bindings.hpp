/*
 */
#pragma once

namespace HIR {
    class Crate;
};

extern void ConvertHIR_ExpandAliases(::HIR::Crate& crate);
extern void ConvertHIR_Bind(::HIR::Crate& crate);
extern void ConvertHIR_ResolveUFCS(::HIR::Crate& crate);
extern void ConvertHIR_Markings(::HIR::Crate& crate);
extern void ConvertHIR_ConstantEvaluate(::HIR::Crate& hir_crate);
