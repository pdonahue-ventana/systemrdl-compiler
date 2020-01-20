/*
 * This file was auto-generated by speedy-antlr-tool v1.0.0
 *  https://github.com/amykyta3/speedy-antlr-tool
 */

#include "sa_systemrdl_translator.h"


SA_SystemRDLTranslator::SA_SystemRDLTranslator(speedy_antlr::Translator *translator) {
    this->translator = translator;
}

SA_SystemRDLTranslator::~SA_SystemRDLTranslator() {
    Py_XDECREF(RootContext_cls);
    Py_XDECREF(Root_elemContext_cls);
    Py_XDECREF(Component_defContext_cls);
    Py_XDECREF(Explicit_component_instContext_cls);
    Py_XDECREF(Component_inst_aliasContext_cls);
    Py_XDECREF(Component_named_defContext_cls);
    Py_XDECREF(Component_anon_defContext_cls);
    Py_XDECREF(Component_bodyContext_cls);
    Py_XDECREF(Component_body_elemContext_cls);
    Py_XDECREF(Component_instsContext_cls);
    Py_XDECREF(Component_instContext_cls);
    Py_XDECREF(Field_inst_resetContext_cls);
    Py_XDECREF(Inst_addr_fixedContext_cls);
    Py_XDECREF(Inst_addr_strideContext_cls);
    Py_XDECREF(Inst_addr_alignContext_cls);
    Py_XDECREF(Component_inst_typeContext_cls);
    Py_XDECREF(Component_typeContext_cls);
    Py_XDECREF(Component_type_primaryContext_cls);
    Py_XDECREF(Param_defContext_cls);
    Py_XDECREF(Param_def_elemContext_cls);
    Py_XDECREF(Param_instContext_cls);
    Py_XDECREF(Param_assignmentContext_cls);
    Py_XDECREF(BinaryExprContext_cls);
    Py_XDECREF(UnaryExprContext_cls);
    Py_XDECREF(NOPContext_cls);
    Py_XDECREF(TernaryExprContext_cls);
    Py_XDECREF(Expr_primaryContext_cls);
    Py_XDECREF(ConcatenateContext_cls);
    Py_XDECREF(ReplicateContext_cls);
    Py_XDECREF(Paren_exprContext_cls);
    Py_XDECREF(CastWidthContext_cls);
    Py_XDECREF(CastTypeContext_cls);
    Py_XDECREF(Cast_width_exprContext_cls);
    Py_XDECREF(Range_suffixContext_cls);
    Py_XDECREF(Array_suffixContext_cls);
    Py_XDECREF(Array_type_suffixContext_cls);
    Py_XDECREF(Data_typeContext_cls);
    Py_XDECREF(Basic_data_typeContext_cls);
    Py_XDECREF(LiteralContext_cls);
    Py_XDECREF(NumberHexContext_cls);
    Py_XDECREF(NumberVerilogContext_cls);
    Py_XDECREF(NumberIntContext_cls);
    Py_XDECREF(String_literalContext_cls);
    Py_XDECREF(Boolean_literalContext_cls);
    Py_XDECREF(Array_literalContext_cls);
    Py_XDECREF(Struct_literalContext_cls);
    Py_XDECREF(Struct_kvContext_cls);
    Py_XDECREF(Enum_literalContext_cls);
    Py_XDECREF(Accesstype_literalContext_cls);
    Py_XDECREF(Onreadtype_literalContext_cls);
    Py_XDECREF(Onwritetype_literalContext_cls);
    Py_XDECREF(Addressingtype_literalContext_cls);
    Py_XDECREF(Precedencetype_literalContext_cls);
    Py_XDECREF(Instance_refContext_cls);
    Py_XDECREF(Instance_ref_elementContext_cls);
    Py_XDECREF(Prop_refContext_cls);
    Py_XDECREF(Local_property_assignmentContext_cls);
    Py_XDECREF(Dynamic_property_assignmentContext_cls);
    Py_XDECREF(Normal_prop_assignContext_cls);
    Py_XDECREF(Encode_prop_assignContext_cls);
    Py_XDECREF(Prop_mod_assignContext_cls);
    Py_XDECREF(Prop_assignment_rhsContext_cls);
    Py_XDECREF(Prop_keywordContext_cls);
    Py_XDECREF(Prop_modContext_cls);
    Py_XDECREF(Udp_defContext_cls);
    Py_XDECREF(Udp_attrContext_cls);
    Py_XDECREF(Udp_typeContext_cls);
    Py_XDECREF(Udp_data_typeContext_cls);
    Py_XDECREF(Udp_usageContext_cls);
    Py_XDECREF(Udp_comp_typeContext_cls);
    Py_XDECREF(Udp_defaultContext_cls);
    Py_XDECREF(Udp_constraintContext_cls);
    Py_XDECREF(Enum_defContext_cls);
    Py_XDECREF(Enum_entryContext_cls);
    Py_XDECREF(Enum_prop_assignContext_cls);
    Py_XDECREF(Struct_defContext_cls);
    Py_XDECREF(Struct_elemContext_cls);
    Py_XDECREF(Struct_typeContext_cls);
    Py_XDECREF(Constraint_defContext_cls);
    Py_XDECREF(Constraint_named_defContext_cls);
    Py_XDECREF(Constraint_anon_defContext_cls);
    Py_XDECREF(Constraint_bodyContext_cls);
    Py_XDECREF(Constraint_body_elemContext_cls);
    Py_XDECREF(Constraint_instsContext_cls);
    Py_XDECREF(Constr_relationalContext_cls);
    Py_XDECREF(Constr_prop_assignContext_cls);
    Py_XDECREF(Constr_inside_valuesContext_cls);
    Py_XDECREF(Constr_inside_enumContext_cls);
    Py_XDECREF(Constr_lhsContext_cls);
    Py_XDECREF(Constr_inside_valueContext_cls);
}


antlrcpp::Any SA_SystemRDLTranslator::visitRoot(SystemRDLParser::RootContext *ctx){
    if(!RootContext_cls) RootContext_cls = PyObject_GetAttrString(translator->parser_cls, "RootContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, RootContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitRoot_elem(SystemRDLParser::Root_elemContext *ctx){
    if(!Root_elemContext_cls) Root_elemContext_cls = PyObject_GetAttrString(translator->parser_cls, "Root_elemContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Root_elemContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_def(SystemRDLParser::Component_defContext *ctx){
    if(!Component_defContext_cls) Component_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitExplicit_component_inst(SystemRDLParser::Explicit_component_instContext *ctx){
    if(!Explicit_component_instContext_cls) Explicit_component_instContext_cls = PyObject_GetAttrString(translator->parser_cls, "Explicit_component_instContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Explicit_component_instContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_inst_alias(SystemRDLParser::Component_inst_aliasContext *ctx){
    if(!Component_inst_aliasContext_cls) Component_inst_aliasContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_inst_aliasContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_inst_aliasContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_named_def(SystemRDLParser::Component_named_defContext *ctx){
    if(!Component_named_defContext_cls) Component_named_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_named_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_named_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_anon_def(SystemRDLParser::Component_anon_defContext *ctx){
    if(!Component_anon_defContext_cls) Component_anon_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_anon_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_anon_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_body(SystemRDLParser::Component_bodyContext *ctx){
    if(!Component_bodyContext_cls) Component_bodyContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_bodyContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_bodyContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_body_elem(SystemRDLParser::Component_body_elemContext *ctx){
    if(!Component_body_elemContext_cls) Component_body_elemContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_body_elemContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_body_elemContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_insts(SystemRDLParser::Component_instsContext *ctx){
    if(!Component_instsContext_cls) Component_instsContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_instsContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_instsContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_inst(SystemRDLParser::Component_instContext *ctx){
    if(!Component_instContext_cls) Component_instContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_instContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_instContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitField_inst_reset(SystemRDLParser::Field_inst_resetContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!Field_inst_resetContext_cls) Field_inst_resetContext_cls = PyObject_GetAttrString(translator->parser_cls, "Field_inst_resetContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Field_inst_resetContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitInst_addr_fixed(SystemRDLParser::Inst_addr_fixedContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!Inst_addr_fixedContext_cls) Inst_addr_fixedContext_cls = PyObject_GetAttrString(translator->parser_cls, "Inst_addr_fixedContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Inst_addr_fixedContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitInst_addr_stride(SystemRDLParser::Inst_addr_strideContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!Inst_addr_strideContext_cls) Inst_addr_strideContext_cls = PyObject_GetAttrString(translator->parser_cls, "Inst_addr_strideContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Inst_addr_strideContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitInst_addr_align(SystemRDLParser::Inst_addr_alignContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!Inst_addr_alignContext_cls) Inst_addr_alignContext_cls = PyObject_GetAttrString(translator->parser_cls, "Inst_addr_alignContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Inst_addr_alignContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_inst_type(SystemRDLParser::Component_inst_typeContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Component_inst_typeContext_cls) Component_inst_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_inst_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_inst_typeContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_type(SystemRDLParser::Component_typeContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Component_typeContext_cls) Component_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_typeContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitComponent_type_primary(SystemRDLParser::Component_type_primaryContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Component_type_primaryContext_cls) Component_type_primaryContext_cls = PyObject_GetAttrString(translator->parser_cls, "Component_type_primaryContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Component_type_primaryContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitParam_def(SystemRDLParser::Param_defContext *ctx){
    if(!Param_defContext_cls) Param_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Param_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Param_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitParam_def_elem(SystemRDLParser::Param_def_elemContext *ctx){
    if(!Param_def_elemContext_cls) Param_def_elemContext_cls = PyObject_GetAttrString(translator->parser_cls, "Param_def_elemContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Param_def_elemContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitParam_inst(SystemRDLParser::Param_instContext *ctx){
    if(!Param_instContext_cls) Param_instContext_cls = PyObject_GetAttrString(translator->parser_cls, "Param_instContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Param_instContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitParam_assignment(SystemRDLParser::Param_assignmentContext *ctx){
    if(!Param_assignmentContext_cls) Param_assignmentContext_cls = PyObject_GetAttrString(translator->parser_cls, "Param_assignmentContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Param_assignmentContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitBinaryExpr(SystemRDLParser::BinaryExprContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!BinaryExprContext_cls) BinaryExprContext_cls = PyObject_GetAttrString(translator->parser_cls, "BinaryExprContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, BinaryExprContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUnaryExpr(SystemRDLParser::UnaryExprContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!UnaryExprContext_cls) UnaryExprContext_cls = PyObject_GetAttrString(translator->parser_cls, "UnaryExprContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, UnaryExprContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitNOP(SystemRDLParser::NOPContext *ctx){
    if(!NOPContext_cls) NOPContext_cls = PyObject_GetAttrString(translator->parser_cls, "NOPContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, NOPContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitTernaryExpr(SystemRDLParser::TernaryExprContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!TernaryExprContext_cls) TernaryExprContext_cls = PyObject_GetAttrString(translator->parser_cls, "TernaryExprContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, TernaryExprContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitExpr_primary(SystemRDLParser::Expr_primaryContext *ctx){
    if(!Expr_primaryContext_cls) Expr_primaryContext_cls = PyObject_GetAttrString(translator->parser_cls, "Expr_primaryContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Expr_primaryContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConcatenate(SystemRDLParser::ConcatenateContext *ctx){
    if(!ConcatenateContext_cls) ConcatenateContext_cls = PyObject_GetAttrString(translator->parser_cls, "ConcatenateContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, ConcatenateContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitReplicate(SystemRDLParser::ReplicateContext *ctx){
    if(!ReplicateContext_cls) ReplicateContext_cls = PyObject_GetAttrString(translator->parser_cls, "ReplicateContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, ReplicateContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitParen_expr(SystemRDLParser::Paren_exprContext *ctx){
    if(!Paren_exprContext_cls) Paren_exprContext_cls = PyObject_GetAttrString(translator->parser_cls, "Paren_exprContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Paren_exprContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitCastWidth(SystemRDLParser::CastWidthContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!CastWidthContext_cls) CastWidthContext_cls = PyObject_GetAttrString(translator->parser_cls, "CastWidthContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, CastWidthContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitCastType(SystemRDLParser::CastTypeContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"typ", static_cast<void*>(ctx->typ)},
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!CastTypeContext_cls) CastTypeContext_cls = PyObject_GetAttrString(translator->parser_cls, "CastTypeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, CastTypeContext_cls, labels, 2);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitCast_width_expr(SystemRDLParser::Cast_width_exprContext *ctx){
    if(!Cast_width_exprContext_cls) Cast_width_exprContext_cls = PyObject_GetAttrString(translator->parser_cls, "Cast_width_exprContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Cast_width_exprContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitRange_suffix(SystemRDLParser::Range_suffixContext *ctx){
    if(!Range_suffixContext_cls) Range_suffixContext_cls = PyObject_GetAttrString(translator->parser_cls, "Range_suffixContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Range_suffixContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitArray_suffix(SystemRDLParser::Array_suffixContext *ctx){
    if(!Array_suffixContext_cls) Array_suffixContext_cls = PyObject_GetAttrString(translator->parser_cls, "Array_suffixContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Array_suffixContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitArray_type_suffix(SystemRDLParser::Array_type_suffixContext *ctx){
    if(!Array_type_suffixContext_cls) Array_type_suffixContext_cls = PyObject_GetAttrString(translator->parser_cls, "Array_type_suffixContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Array_type_suffixContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitData_type(SystemRDLParser::Data_typeContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Data_typeContext_cls) Data_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Data_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Data_typeContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitBasic_data_type(SystemRDLParser::Basic_data_typeContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Basic_data_typeContext_cls) Basic_data_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Basic_data_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Basic_data_typeContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitLiteral(SystemRDLParser::LiteralContext *ctx){
    if(!LiteralContext_cls) LiteralContext_cls = PyObject_GetAttrString(translator->parser_cls, "LiteralContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, LiteralContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitNumberHex(SystemRDLParser::NumberHexContext *ctx){
    if(!NumberHexContext_cls) NumberHexContext_cls = PyObject_GetAttrString(translator->parser_cls, "NumberHexContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, NumberHexContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitNumberVerilog(SystemRDLParser::NumberVerilogContext *ctx){
    if(!NumberVerilogContext_cls) NumberVerilogContext_cls = PyObject_GetAttrString(translator->parser_cls, "NumberVerilogContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, NumberVerilogContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitNumberInt(SystemRDLParser::NumberIntContext *ctx){
    if(!NumberIntContext_cls) NumberIntContext_cls = PyObject_GetAttrString(translator->parser_cls, "NumberIntContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, NumberIntContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitString_literal(SystemRDLParser::String_literalContext *ctx){
    if(!String_literalContext_cls) String_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "String_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, String_literalContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitBoolean_literal(SystemRDLParser::Boolean_literalContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"val", static_cast<void*>(ctx->val)}
    };
    if(!Boolean_literalContext_cls) Boolean_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Boolean_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Boolean_literalContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitArray_literal(SystemRDLParser::Array_literalContext *ctx){
    if(!Array_literalContext_cls) Array_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Array_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Array_literalContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitStruct_literal(SystemRDLParser::Struct_literalContext *ctx){
    if(!Struct_literalContext_cls) Struct_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Struct_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Struct_literalContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitStruct_kv(SystemRDLParser::Struct_kvContext *ctx){
    if(!Struct_kvContext_cls) Struct_kvContext_cls = PyObject_GetAttrString(translator->parser_cls, "Struct_kvContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Struct_kvContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitEnum_literal(SystemRDLParser::Enum_literalContext *ctx){
    if(!Enum_literalContext_cls) Enum_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Enum_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Enum_literalContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitAccesstype_literal(SystemRDLParser::Accesstype_literalContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Accesstype_literalContext_cls) Accesstype_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Accesstype_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Accesstype_literalContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitOnreadtype_literal(SystemRDLParser::Onreadtype_literalContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Onreadtype_literalContext_cls) Onreadtype_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Onreadtype_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Onreadtype_literalContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitOnwritetype_literal(SystemRDLParser::Onwritetype_literalContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Onwritetype_literalContext_cls) Onwritetype_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Onwritetype_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Onwritetype_literalContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitAddressingtype_literal(SystemRDLParser::Addressingtype_literalContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Addressingtype_literalContext_cls) Addressingtype_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Addressingtype_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Addressingtype_literalContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitPrecedencetype_literal(SystemRDLParser::Precedencetype_literalContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Precedencetype_literalContext_cls) Precedencetype_literalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Precedencetype_literalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Precedencetype_literalContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitInstance_ref(SystemRDLParser::Instance_refContext *ctx){
    if(!Instance_refContext_cls) Instance_refContext_cls = PyObject_GetAttrString(translator->parser_cls, "Instance_refContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Instance_refContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitInstance_ref_element(SystemRDLParser::Instance_ref_elementContext *ctx){
    if(!Instance_ref_elementContext_cls) Instance_ref_elementContext_cls = PyObject_GetAttrString(translator->parser_cls, "Instance_ref_elementContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Instance_ref_elementContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitProp_ref(SystemRDLParser::Prop_refContext *ctx){
    if(!Prop_refContext_cls) Prop_refContext_cls = PyObject_GetAttrString(translator->parser_cls, "Prop_refContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Prop_refContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitLocal_property_assignment(SystemRDLParser::Local_property_assignmentContext *ctx){
    if(!Local_property_assignmentContext_cls) Local_property_assignmentContext_cls = PyObject_GetAttrString(translator->parser_cls, "Local_property_assignmentContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Local_property_assignmentContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitDynamic_property_assignment(SystemRDLParser::Dynamic_property_assignmentContext *ctx){
    if(!Dynamic_property_assignmentContext_cls) Dynamic_property_assignmentContext_cls = PyObject_GetAttrString(translator->parser_cls, "Dynamic_property_assignmentContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Dynamic_property_assignmentContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitNormal_prop_assign(SystemRDLParser::Normal_prop_assignContext *ctx){
    if(!Normal_prop_assignContext_cls) Normal_prop_assignContext_cls = PyObject_GetAttrString(translator->parser_cls, "Normal_prop_assignContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Normal_prop_assignContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitEncode_prop_assign(SystemRDLParser::Encode_prop_assignContext *ctx){
    if(!Encode_prop_assignContext_cls) Encode_prop_assignContext_cls = PyObject_GetAttrString(translator->parser_cls, "Encode_prop_assignContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Encode_prop_assignContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitProp_mod_assign(SystemRDLParser::Prop_mod_assignContext *ctx){
    if(!Prop_mod_assignContext_cls) Prop_mod_assignContext_cls = PyObject_GetAttrString(translator->parser_cls, "Prop_mod_assignContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Prop_mod_assignContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitProp_assignment_rhs(SystemRDLParser::Prop_assignment_rhsContext *ctx){
    if(!Prop_assignment_rhsContext_cls) Prop_assignment_rhsContext_cls = PyObject_GetAttrString(translator->parser_cls, "Prop_assignment_rhsContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Prop_assignment_rhsContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitProp_keyword(SystemRDLParser::Prop_keywordContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Prop_keywordContext_cls) Prop_keywordContext_cls = PyObject_GetAttrString(translator->parser_cls, "Prop_keywordContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Prop_keywordContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitProp_mod(SystemRDLParser::Prop_modContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Prop_modContext_cls) Prop_modContext_cls = PyObject_GetAttrString(translator->parser_cls, "Prop_modContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Prop_modContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_def(SystemRDLParser::Udp_defContext *ctx){
    if(!Udp_defContext_cls) Udp_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_attr(SystemRDLParser::Udp_attrContext *ctx){
    if(!Udp_attrContext_cls) Udp_attrContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_attrContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_attrContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_type(SystemRDLParser::Udp_typeContext *ctx){
    if(!Udp_typeContext_cls) Udp_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_typeContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_data_type(SystemRDLParser::Udp_data_typeContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Udp_data_typeContext_cls) Udp_data_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_data_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_data_typeContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_usage(SystemRDLParser::Udp_usageContext *ctx){
    if(!Udp_usageContext_cls) Udp_usageContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_usageContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_usageContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_comp_type(SystemRDLParser::Udp_comp_typeContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"kw", static_cast<void*>(ctx->kw)}
    };
    if(!Udp_comp_typeContext_cls) Udp_comp_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_comp_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_comp_typeContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_default(SystemRDLParser::Udp_defaultContext *ctx){
    if(!Udp_defaultContext_cls) Udp_defaultContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_defaultContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_defaultContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitUdp_constraint(SystemRDLParser::Udp_constraintContext *ctx){
    if(!Udp_constraintContext_cls) Udp_constraintContext_cls = PyObject_GetAttrString(translator->parser_cls, "Udp_constraintContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Udp_constraintContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitEnum_def(SystemRDLParser::Enum_defContext *ctx){
    if(!Enum_defContext_cls) Enum_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Enum_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Enum_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitEnum_entry(SystemRDLParser::Enum_entryContext *ctx){
    if(!Enum_entryContext_cls) Enum_entryContext_cls = PyObject_GetAttrString(translator->parser_cls, "Enum_entryContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Enum_entryContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitEnum_prop_assign(SystemRDLParser::Enum_prop_assignContext *ctx){
    if(!Enum_prop_assignContext_cls) Enum_prop_assignContext_cls = PyObject_GetAttrString(translator->parser_cls, "Enum_prop_assignContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Enum_prop_assignContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitStruct_def(SystemRDLParser::Struct_defContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"name", static_cast<void*>(ctx->name)},
        {"base", static_cast<void*>(ctx->base)}
    };
    if(!Struct_defContext_cls) Struct_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Struct_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Struct_defContext_cls, labels, 2);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitStruct_elem(SystemRDLParser::Struct_elemContext *ctx){
    if(!Struct_elemContext_cls) Struct_elemContext_cls = PyObject_GetAttrString(translator->parser_cls, "Struct_elemContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Struct_elemContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitStruct_type(SystemRDLParser::Struct_typeContext *ctx){
    if(!Struct_typeContext_cls) Struct_typeContext_cls = PyObject_GetAttrString(translator->parser_cls, "Struct_typeContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Struct_typeContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstraint_def(SystemRDLParser::Constraint_defContext *ctx){
    if(!Constraint_defContext_cls) Constraint_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constraint_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constraint_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstraint_named_def(SystemRDLParser::Constraint_named_defContext *ctx){
    if(!Constraint_named_defContext_cls) Constraint_named_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constraint_named_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constraint_named_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstraint_anon_def(SystemRDLParser::Constraint_anon_defContext *ctx){
    if(!Constraint_anon_defContext_cls) Constraint_anon_defContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constraint_anon_defContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constraint_anon_defContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstraint_body(SystemRDLParser::Constraint_bodyContext *ctx){
    if(!Constraint_bodyContext_cls) Constraint_bodyContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constraint_bodyContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constraint_bodyContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstraint_body_elem(SystemRDLParser::Constraint_body_elemContext *ctx){
    if(!Constraint_body_elemContext_cls) Constraint_body_elemContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constraint_body_elemContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constraint_body_elemContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstraint_insts(SystemRDLParser::Constraint_instsContext *ctx){
    if(!Constraint_instsContext_cls) Constraint_instsContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constraint_instsContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constraint_instsContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstr_relational(SystemRDLParser::Constr_relationalContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"op", static_cast<void*>(ctx->op)}
    };
    if(!Constr_relationalContext_cls) Constr_relationalContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constr_relationalContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constr_relationalContext_cls, labels, 1);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstr_prop_assign(SystemRDLParser::Constr_prop_assignContext *ctx){
    if(!Constr_prop_assignContext_cls) Constr_prop_assignContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constr_prop_assignContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constr_prop_assignContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstr_inside_values(SystemRDLParser::Constr_inside_valuesContext *ctx){
    if(!Constr_inside_valuesContext_cls) Constr_inside_valuesContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constr_inside_valuesContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constr_inside_valuesContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstr_inside_enum(SystemRDLParser::Constr_inside_enumContext *ctx){
    if(!Constr_inside_enumContext_cls) Constr_inside_enumContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constr_inside_enumContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constr_inside_enumContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstr_lhs(SystemRDLParser::Constr_lhsContext *ctx){
    if(!Constr_lhsContext_cls) Constr_lhsContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constr_lhsContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constr_lhsContext_cls);
    return py_ctx;
}

antlrcpp::Any SA_SystemRDLTranslator::visitConstr_inside_value(SystemRDLParser::Constr_inside_valueContext *ctx){
    speedy_antlr::LabelMap labels[] = {
        {"val", static_cast<void*>(ctx->val)},
        {"l_val", static_cast<void*>(ctx->l_val)},
        {"r_val", static_cast<void*>(ctx->r_val)}
    };
    if(!Constr_inside_valueContext_cls) Constr_inside_valueContext_cls = PyObject_GetAttrString(translator->parser_cls, "Constr_inside_valueContext");
    PyObject *py_ctx = translator->convert_ctx(this, ctx, Constr_inside_valueContext_cls, labels, 3);
    return py_ctx;
}
