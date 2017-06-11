///
/// generated by templates.py -- do not edit
///

RETURN_TYPE do_start(StartInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_template(StartInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_catchblock(CatchBlockInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_return(StopInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_throw(StopInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_goto(GotoInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_label(LabelInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_if(IfInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_switch(SwitchInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_arm(ArmInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_const(ConstantExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_cast(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_castobject(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_tonumber(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_toint(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_touint(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_toboolean(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_d2b(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_caststring(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_castns(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_cknull(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_cknullobject(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_cktimeout(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_hasnext(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_hasnext2(Hasnext2Stmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_never(ConstantExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_call(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_construct(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_constructsuper(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv_namespace(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv_boolean(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv_number(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv_string(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv_interface(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv_atom(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadinitenv(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadsuperinitenv(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_loadenv_env(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newobject(NaryStmt0* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newarray(NaryStmt0* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_applytype(NaryStmt0* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newinstance(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_convert_s(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_esc_xelem(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_esc_xattr(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_typeof(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_speculate_int(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_speculate_number(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_speculate_numeric(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_speculate_string(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_speculate_object(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_speculate_array(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_speculate_bool(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_ckfilter(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_add(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_addd(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_concat_strings(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_nextname(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_nextvalue(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_lessthan(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_lessequals(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_greaterthan(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_greaterequals(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_instanceof(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_istype(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_istypelate(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_astype(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_astypelate(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_in(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_divd(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_modulo(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_subd(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_muld(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_addi(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_subi(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_muli(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_ori(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_andi(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_xori(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_lshi(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_rshi(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_rshui(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_noti(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_negi(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_negd(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_not(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newactivation(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_finddef(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findpropstrict(NaryStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findpropstrictx(NaryStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findpropstrictns(NaryStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findpropstrictnsx(NaryStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findproperty(NaryStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findpropertyx(NaryStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findpropertyns(NaryStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_findpropertynsx(NaryStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newclass(NaryStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newfunction(NaryStmt1* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getsuper(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getsuperx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getsuperns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getsupernsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getdescendants(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getdescendantsx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getdescendantsns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getdescendantsnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callprop(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callpropx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callpropns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callpropnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callproplex(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callproplexx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callproplexns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callproplexnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_constructprop(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_constructpropx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_constructpropns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_constructpropnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callsuper(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callsuperx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callsuperns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_callsupernsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_callstatic(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_callmethod(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_callinterface(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newcatch(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setslot(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getslot(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_slottype(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getouterscope(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_safepoint(SafepointInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setlocal(SetlocalInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_newstate(ConstantExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_deopt_safepoint(DeoptSafepointInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_deopt_finish(DeoptFinishInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_deopt_finishcall(DeoptFinishCallInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_debugline(DebugInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_debugfile(DebugInstr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_string2atom(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_double2atom(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_int2atom(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_uint2atom(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_scriptobject2atom(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_bool2atom(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_ns2atom(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_atom2bool(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_atom2double(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_atom2string(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_atom2int(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_atom2uint(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_atom2scriptobject(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_atom2ns(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_i2d(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_u2d(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_d2i(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_d2u(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_toslot(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_toprimitive(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_eqi(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_lti(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_lei(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_gti(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_gei(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_eqd(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_ltd(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_led(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_gtd(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_ged(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_equi(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_ltui(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_leui(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_gtui(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_geui(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_eqb(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_doubletoint32(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_i2u(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_u2i(UnaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_dxnslate(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_dxns(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_li8(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_li16(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_li32(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_lf32(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_lf64(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_si8(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_si16(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_si32(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_sf32(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_sf64(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_equals(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_eqp(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_eqs(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_strictequals(BinaryExpr* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setsuper(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setsuperx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setsuperns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setsupernsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_deleteprop(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_deletepropx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_deletepropns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_deletepropnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getprop(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getpropx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropertylate_u(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropertylate_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropertylate_d(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_array_get_u(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_array_get_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_array_get_d(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectorint_get_u(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectorint_get_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectorint_get_d(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectoruint_get_u(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectoruint_get_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectoruint_get_d(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectordouble_get_u(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectordouble_get_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectordouble_get_d(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getpropns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getpropnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setprop(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setpropx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropertylate_u(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropertylate_i(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropertylate_d(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_array_set_u(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_array_set_i(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_array_set_d(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectorint_set_u(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectorint_set_i(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectorint_set_d(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectoruint_set_u(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectoruint_set_i(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectoruint_set_d(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectordouble_set_u(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectordouble_set_i(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_vectordouble_set_d(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setpropns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setpropnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_initprop(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_initpropx(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_initpropns(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_initpropnsx(CallStmt4* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_increment(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_decrement(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_increment_i(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_decrement_i(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_not(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_negate(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_bitnot(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_negate_i(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_sxi1(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_sxi8(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_sxi16(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_checkfilter(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_li8(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_li16(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_li32(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_lf32(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_lf64(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_si8(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_si16(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_si32(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_sf32(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_sf64(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_subtract(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_multiply(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_modulo(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_divide(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_add_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_subtract_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_multiply_i(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_bitor(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_bitand(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_bitxor(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_lshift(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_rshift(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_urshift(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_add_ui(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_add_nn(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_add_ss(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_lessthan(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_greaterequals(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_greaterthan(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_lessequals(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_equals_ii(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_equals_uu(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_equals_bb(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_equals_nn(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_equals_pp(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_equals_ss(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getslot(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_getprop_slot(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_u(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_i(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_d(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_au(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_ai(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_ad(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_viu(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vii(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vid(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vuu(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vui(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vud(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vdu(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vdi(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_getpropx_vdd(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setprop_slot(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_u(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_i(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_d(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_au(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_ai(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_ad(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_viu(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vii(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vid(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vuu(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vui(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vud(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vdu(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vdi(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_setpropx_vdd(CallStmt3* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_setslot(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_findprop2finddef(NaryStmt1* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_findprop2getouter(NaryStmt1* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_callprop_string(CallStmt2* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_any(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_object(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_number(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_int(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_uint(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_boolean(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_string(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_coerce_ns(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_inttouint(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_uinttoint(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_numbertoint(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_numbertouint(UnaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
RETURN_TYPE do_abc_modulo_and(BinaryStmt* i) { return static_cast<SELF_CLASS*>(this)->do_default(i); }
