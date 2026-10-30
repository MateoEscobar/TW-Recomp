#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00367CD8
// Address: 0x367cd8 - 0x367e20
void sub_00367CD8_0x367cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367CD8_0x367cd8");
#endif

    switch (ctx->pc) {
        case 0x367d18u: goto label_367d18;
        case 0x367d20u: goto label_367d20;
        case 0x367d34u: goto label_367d34;
        case 0x367d48u: goto label_367d48;
        case 0x367d5cu: goto label_367d5c;
        case 0x367d70u: goto label_367d70;
        case 0x367d78u: goto label_367d78;
        case 0x367d8cu: goto label_367d8c;
        case 0x367da0u: goto label_367da0;
        case 0x367db4u: goto label_367db4;
        case 0x367dbcu: goto label_367dbc;
        case 0x367de0u: goto label_367de0;
        case 0x367decu: goto label_367dec;
        default: break;
    }

    ctx->pc = 0x367cd8u;

    // 0x367cd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x367cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x367cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367ce0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x367ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x367ce4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x367ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x367ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x367cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cf0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x367cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x367cf4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x367cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x367cf8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x367cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x367cfc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x367cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x367d00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x367d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x367d04: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x367d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x367d08: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x367d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x367d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367d10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367D10u;
    SET_GPR_U32(ctx, 31, 0x367D18u);
    ctx->pc = 0x367D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D10u;
    // 0x367d14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367D10u, 0x367D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D18u;
label_367d18:
    // 0x367d18: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367D18u;
    SET_GPR_U32(ctx, 31, 0x367D20u);
    ctx->pc = 0x367D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D18u;
    // 0x367d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367D18u, 0x367D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D20u;
label_367d20:
    // 0x367d20: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x367d20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367d2c: 0xc102488  jal         func_409220
    ctx->pc = 0x367D2Cu;
    SET_GPR_U32(ctx, 31, 0x367D34u);
    ctx->pc = 0x367D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D2Cu;
    // 0x367d30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x367D2Cu, 0x367D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D34u;
label_367d34:
    // 0x367d34: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x367d34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x367d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367d40: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367D40u;
    SET_GPR_U32(ctx, 31, 0x367D48u);
    ctx->pc = 0x367D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D40u;
    // 0x367d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367D40u, 0x367D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D48u;
label_367d48:
    // 0x367d48: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x367d48u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x367d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367d54: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367D54u;
    SET_GPR_U32(ctx, 31, 0x367D5Cu);
    ctx->pc = 0x367D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D54u;
    // 0x367d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367D54u, 0x367D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D5Cu;
label_367d5c:
    // 0x367d5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x367d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d60: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x367d60u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367d64: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x367d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367d68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367D68u;
    SET_GPR_U32(ctx, 31, 0x367D70u);
    ctx->pc = 0x367D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D68u;
    // 0x367d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367D68u, 0x367D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D70u;
label_367d70:
    // 0x367d70: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367D70u;
    SET_GPR_U32(ctx, 31, 0x367D78u);
    ctx->pc = 0x367D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D70u;
    // 0x367d74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367D70u, 0x367D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D78u;
label_367d78:
    // 0x367d78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x367d78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x367d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367d84: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367D84u;
    SET_GPR_U32(ctx, 31, 0x367D8Cu);
    ctx->pc = 0x367D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D84u;
    // 0x367d88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367D84u, 0x367D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D8Cu;
label_367d8c:
    // 0x367d8c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x367d8cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367d98: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367D98u;
    SET_GPR_U32(ctx, 31, 0x367DA0u);
    ctx->pc = 0x367D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D98u;
    // 0x367d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367D98u, 0x367DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DA0u;
label_367da0:
    // 0x367da0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x367da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367da4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x367da4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367da8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x367da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x367dac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367DACu;
    SET_GPR_U32(ctx, 31, 0x367DB4u);
    ctx->pc = 0x367DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DACu;
    // 0x367db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367DACu, 0x367DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DB4u;
label_367db4:
    // 0x367db4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367DB4u;
    SET_GPR_U32(ctx, 31, 0x367DBCu);
    ctx->pc = 0x367DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DB4u;
    // 0x367db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367DB4u, 0x367DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DBCu;
label_367dbc:
    // 0x367dbc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x367dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dc0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x367dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dc4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x367dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dc8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x367dc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dcc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x367dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dd0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x367dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x367dd4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x367dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dd8: 0xc0d4fd0  jal         func_353F40
    ctx->pc = 0x367DD8u;
    SET_GPR_U32(ctx, 31, 0x367DE0u);
    ctx->pc = 0x367DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DD8u;
    // 0x367ddc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F40u, 0x367DD8u, 0x367DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DE0u;
label_367de0:
    // 0x367de0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x367de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367de4: 0xc102562  jal         func_409588
    ctx->pc = 0x367DE4u;
    SET_GPR_U32(ctx, 31, 0x367DECu);
    ctx->pc = 0x367DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DE4u;
    // 0x367de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x367DE4u, 0x367DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DECu;
label_367dec:
    // 0x367dec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x367decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x367df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x367df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367df4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x367df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x367df8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x367df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367dfc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x367dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367e00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x367e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367e04: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x367e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367e08: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x367e08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367e0c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x367e0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367e10: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x367e10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367e18: 0x3e00008  jr          $ra
    ctx->pc = 0x367E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E18u;
        // 0x367e1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367E20u;
}
