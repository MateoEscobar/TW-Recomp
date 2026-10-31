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

// Function: sub_00317D38
// Address: 0x317d38 - 0x317e90
void sub_00317D38_0x317d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317D38_0x317d38");
#endif

    switch (ctx->pc) {
        case 0x317d38u: goto label_317d38;
        case 0x317d3cu: goto label_317d3c;
        case 0x317d40u: goto label_317d40;
        case 0x317d44u: goto label_317d44;
        case 0x317d48u: goto label_317d48;
        case 0x317d4cu: goto label_317d4c;
        case 0x317d50u: goto label_317d50;
        case 0x317d54u: goto label_317d54;
        case 0x317d58u: goto label_317d58;
        case 0x317d5cu: goto label_317d5c;
        case 0x317d60u: goto label_317d60;
        case 0x317d64u: goto label_317d64;
        case 0x317d68u: goto label_317d68;
        case 0x317d6cu: goto label_317d6c;
        case 0x317d70u: goto label_317d70;
        case 0x317d74u: goto label_317d74;
        case 0x317d78u: goto label_317d78;
        case 0x317d7cu: goto label_317d7c;
        case 0x317d80u: goto label_317d80;
        case 0x317d84u: goto label_317d84;
        case 0x317d88u: goto label_317d88;
        case 0x317d8cu: goto label_317d8c;
        case 0x317d90u: goto label_317d90;
        case 0x317d94u: goto label_317d94;
        case 0x317d98u: goto label_317d98;
        case 0x317d9cu: goto label_317d9c;
        case 0x317da0u: goto label_317da0;
        case 0x317da4u: goto label_317da4;
        case 0x317da8u: goto label_317da8;
        case 0x317dacu: goto label_317dac;
        case 0x317db0u: goto label_317db0;
        case 0x317db4u: goto label_317db4;
        case 0x317db8u: goto label_317db8;
        case 0x317dbcu: goto label_317dbc;
        case 0x317dc0u: goto label_317dc0;
        case 0x317dc4u: goto label_317dc4;
        case 0x317dc8u: goto label_317dc8;
        case 0x317dccu: goto label_317dcc;
        case 0x317dd0u: goto label_317dd0;
        case 0x317dd4u: goto label_317dd4;
        case 0x317dd8u: goto label_317dd8;
        case 0x317ddcu: goto label_317ddc;
        case 0x317de0u: goto label_317de0;
        case 0x317de4u: goto label_317de4;
        case 0x317de8u: goto label_317de8;
        case 0x317decu: goto label_317dec;
        case 0x317df0u: goto label_317df0;
        case 0x317df4u: goto label_317df4;
        case 0x317df8u: goto label_317df8;
        case 0x317dfcu: goto label_317dfc;
        case 0x317e00u: goto label_317e00;
        case 0x317e04u: goto label_317e04;
        case 0x317e08u: goto label_317e08;
        case 0x317e0cu: goto label_317e0c;
        case 0x317e10u: goto label_317e10;
        case 0x317e14u: goto label_317e14;
        case 0x317e18u: goto label_317e18;
        case 0x317e1cu: goto label_317e1c;
        case 0x317e20u: goto label_317e20;
        case 0x317e24u: goto label_317e24;
        case 0x317e28u: goto label_317e28;
        case 0x317e2cu: goto label_317e2c;
        case 0x317e30u: goto label_317e30;
        case 0x317e34u: goto label_317e34;
        case 0x317e38u: goto label_317e38;
        case 0x317e3cu: goto label_317e3c;
        case 0x317e40u: goto label_317e40;
        case 0x317e44u: goto label_317e44;
        case 0x317e48u: goto label_317e48;
        case 0x317e4cu: goto label_317e4c;
        case 0x317e50u: goto label_317e50;
        case 0x317e54u: goto label_317e54;
        case 0x317e58u: goto label_317e58;
        case 0x317e5cu: goto label_317e5c;
        case 0x317e60u: goto label_317e60;
        case 0x317e64u: goto label_317e64;
        case 0x317e68u: goto label_317e68;
        case 0x317e6cu: goto label_317e6c;
        case 0x317e70u: goto label_317e70;
        case 0x317e74u: goto label_317e74;
        case 0x317e78u: goto label_317e78;
        case 0x317e7cu: goto label_317e7c;
        case 0x317e80u: goto label_317e80;
        case 0x317e84u: goto label_317e84;
        case 0x317e88u: goto label_317e88;
        case 0x317e8cu: goto label_317e8c;
        default: break;
    }

    ctx->pc = 0x317d38u;

label_317d38:
    // 0x317d38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x317d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_317d3c:
    // 0x317d3c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x317d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_317d40:
    // 0x317d40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x317d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_317d44:
    // 0x317d44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x317d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317d48:
    // 0x317d48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x317d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_317d4c:
    // 0x317d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x317d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_317d50:
    // 0x317d50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x317d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_317d54:
    // 0x317d54: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x317d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_317d58:
    // 0x317d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_317d5c:
    // 0x317d5c: 0xc05959e  jal         func_165678
label_317d60:
    if (ctx->pc == 0x317D60u) {
        ctx->pc = 0x317D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D5Cu;
        // 0x317d60: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D64u;
        goto label_317d64;
    }
    ctx->pc = 0x317D5Cu;
    SET_GPR_U32(ctx, 31, 0x317D64u);
    ctx->pc = 0x317D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D5Cu;
    // 0x317d60: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x317D5Cu, 0x317D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D64u;
label_317d64:
    // 0x317d64: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_317d68:
    if (ctx->pc == 0x317D68u) {
        ctx->pc = 0x317D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D64u;
        // 0x317d68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D6Cu;
        goto label_317d6c;
    }
    ctx->pc = 0x317D64u;
    {
        const bool branch_taken_0x317d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D64u;
        // 0x317d68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d64) {
            ctx->pc = 0x317E6Cu;
            goto label_317e6c;
        }
    }
    ctx->pc = 0x317D6Cu;
label_317d6c:
    // 0x317d6c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x317d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_317d70:
    // 0x317d70: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_317d74:
    if (ctx->pc == 0x317D74u) {
        ctx->pc = 0x317D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D70u;
        // 0x317d74: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D78u;
        goto label_317d78;
    }
    ctx->pc = 0x317D70u;
    {
        const bool branch_taken_0x317d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D70u;
        // 0x317d74: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d70) {
            ctx->pc = 0x317E70u;
            goto label_317e70;
        }
    }
    ctx->pc = 0x317D78u;
label_317d78:
    // 0x317d78: 0xc05b0e2  jal         func_16C388
label_317d7c:
    if (ctx->pc == 0x317D7Cu) {
        ctx->pc = 0x317D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D78u;
        // 0x317d7c: 0x86440020  lh          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D80u;
        goto label_317d80;
    }
    ctx->pc = 0x317D78u;
    SET_GPR_U32(ctx, 31, 0x317D80u);
    ctx->pc = 0x317D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D78u;
    // 0x317d7c: 0x86440020  lh          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x317D78u, 0x317D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D80u;
label_317d80:
    // 0x317d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d84:
    // 0x317d84: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x317d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_317d88:
    // 0x317d88: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_317d8c:
    if (ctx->pc == 0x317D8Cu) {
        ctx->pc = 0x317D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D88u;
        // 0x317d8c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D90u;
        goto label_317d90;
    }
    ctx->pc = 0x317D88u;
    {
        const bool branch_taken_0x317d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D88u;
        // 0x317d8c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d88) {
            ctx->pc = 0x317E70u;
            goto label_317e70;
        }
    }
    ctx->pc = 0x317D90u;
label_317d90:
    // 0x317d90: 0xc05959e  jal         func_165678
label_317d94:
    if (ctx->pc == 0x317D94u) {
        ctx->pc = 0x317D98u;
        goto label_317d98;
    }
    ctx->pc = 0x317D90u;
    SET_GPR_U32(ctx, 31, 0x317D98u);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x317D90u, 0x317D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D98u;
label_317d98:
    // 0x317d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x317d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317d9c:
    // 0x317d9c: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
label_317da0:
    if (ctx->pc == 0x317DA0u) {
        ctx->pc = 0x317DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D9Cu;
        // 0x317da0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DA4u;
        goto label_317da4;
    }
    ctx->pc = 0x317D9Cu;
    {
        const bool branch_taken_0x317d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x317DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D9Cu;
        // 0x317da0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d9c) {
            ctx->pc = 0x317E6Cu;
            goto label_317e6c;
        }
    }
    ctx->pc = 0x317DA4u;
label_317da4:
    // 0x317da4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x317da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_317da8:
    // 0x317da8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x317da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_317dac:
    // 0x317dac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x317dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_317db0:
    // 0x317db0: 0x40f809  jalr        $v0
label_317db4:
    if (ctx->pc == 0x317DB4u) {
        ctx->pc = 0x317DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DB0u;
        // 0x317db4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DB8u;
        goto label_317db8;
    }
    ctx->pc = 0x317DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317DB8u);
        ctx->pc = 0x317DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DB0u;
        // 0x317db4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317DB0u, 0x317DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317DB8u;
label_317db8:
    // 0x317db8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x317db8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317dbc:
    // 0x317dbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x317dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_317dc0:
    // 0x317dc0: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x317dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_317dc4:
    // 0x317dc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x317dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_317dc8:
    // 0x317dc8: 0xc137826  jal         func_4DE098
label_317dcc:
    if (ctx->pc == 0x317DCCu) {
        ctx->pc = 0x317DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DC8u;
        // 0x317dcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DD0u;
        goto label_317dd0;
    }
    ctx->pc = 0x317DC8u;
    SET_GPR_U32(ctx, 31, 0x317DD0u);
    ctx->pc = 0x317DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317DC8u;
    // 0x317dcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x317DC8u, 0x317DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DD0u;
label_317dd0:
    // 0x317dd0: 0xc0e409a  jal         func_390268
label_317dd4:
    if (ctx->pc == 0x317DD4u) {
        ctx->pc = 0x317DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DD0u;
        // 0x317dd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DD8u;
        goto label_317dd8;
    }
    ctx->pc = 0x317DD0u;
    SET_GPR_U32(ctx, 31, 0x317DD8u);
    ctx->pc = 0x317DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317DD0u;
    // 0x317dd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x317DD0u, 0x317DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DD8u;
label_317dd8:
    // 0x317dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317ddc:
    // 0x317ddc: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_317de0:
    if (ctx->pc == 0x317DE0u) {
        ctx->pc = 0x317DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DDCu;
        // 0x317de0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DE4u;
        goto label_317de4;
    }
    ctx->pc = 0x317DDCu;
    {
        const bool branch_taken_0x317ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x317ddc) {
            ctx->pc = 0x317DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317DDCu;
            // 0x317de0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317E60u;
            goto label_317e60;
        }
    }
    ctx->pc = 0x317DE4u;
label_317de4:
    // 0x317de4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x317de4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_317de8:
    // 0x317de8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x317de8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_317dec:
    // 0x317dec: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_317df0:
    if (ctx->pc == 0x317DF0u) {
        ctx->pc = 0x317DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DECu;
        // 0x317df0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DF4u;
        goto label_317df4;
    }
    ctx->pc = 0x317DECu;
    {
        const bool branch_taken_0x317dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DECu;
        // 0x317df0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dec) {
            ctx->pc = 0x317E5Cu;
            goto label_317e5c;
        }
    }
    ctx->pc = 0x317DF4u;
label_317df4:
    // 0x317df4: 0xc089f98  jal         func_227E60
label_317df8:
    if (ctx->pc == 0x317DF8u) {
        ctx->pc = 0x317DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DF4u;
        // 0x317df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DFCu;
        goto label_317dfc;
    }
    ctx->pc = 0x317DF4u;
    SET_GPR_U32(ctx, 31, 0x317DFCu);
    ctx->pc = 0x317DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317DF4u;
    // 0x317df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x317DF4u, 0x317DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317DFCu;
label_317dfc:
    // 0x317dfc: 0x50510018  beql        $v0, $s1, . + 4 + (0x18 << 2)
label_317e00:
    if (ctx->pc == 0x317E00u) {
        ctx->pc = 0x317E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DFCu;
        // 0x317e00: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E04u;
        goto label_317e04;
    }
    ctx->pc = 0x317DFCu;
    {
        const bool branch_taken_0x317dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x317dfc) {
            ctx->pc = 0x317E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317DFCu;
            // 0x317e00: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317E60u;
            goto label_317e60;
        }
    }
    ctx->pc = 0x317E04u;
label_317e04:
    // 0x317e04: 0xc087502  jal         func_21D408
label_317e08:
    if (ctx->pc == 0x317E08u) {
        ctx->pc = 0x317E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E04u;
        // 0x317e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E0Cu;
        goto label_317e0c;
    }
    ctx->pc = 0x317E04u;
    SET_GPR_U32(ctx, 31, 0x317E0Cu);
    ctx->pc = 0x317E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317E04u;
    // 0x317e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x317E04u, 0x317E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E0Cu;
label_317e0c:
    // 0x317e0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317e10:
    // 0x317e10: 0xc0a3630  jal         func_28D8C0
label_317e14:
    if (ctx->pc == 0x317E14u) {
        ctx->pc = 0x317E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E10u;
        // 0x317e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E18u;
        goto label_317e18;
    }
    ctx->pc = 0x317E10u;
    SET_GPR_U32(ctx, 31, 0x317E18u);
    ctx->pc = 0x317E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317E10u;
    // 0x317e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x317E10u, 0x317E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E18u;
label_317e18:
    // 0x317e18: 0xc0a3628  jal         func_28D8A0
label_317e1c:
    if (ctx->pc == 0x317E1Cu) {
        ctx->pc = 0x317E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E18u;
        // 0x317e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E20u;
        goto label_317e20;
    }
    ctx->pc = 0x317E18u;
    SET_GPR_U32(ctx, 31, 0x317E20u);
    ctx->pc = 0x317E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317E18u;
    // 0x317e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x317E18u, 0x317E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E20u;
label_317e20:
    // 0x317e20: 0xc0a4e54  jal         func_293950
label_317e24:
    if (ctx->pc == 0x317E24u) {
        ctx->pc = 0x317E28u;
        goto label_317e28;
    }
    ctx->pc = 0x317E20u;
    SET_GPR_U32(ctx, 31, 0x317E28u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x317E20u, 0x317E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E28u;
label_317e28:
    // 0x317e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317e2c:
    // 0x317e2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_317e30:
    if (ctx->pc == 0x317E30u) {
        ctx->pc = 0x317E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E2Cu;
        // 0x317e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E34u;
        goto label_317e34;
    }
    ctx->pc = 0x317E2Cu;
    {
        const bool branch_taken_0x317e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E2Cu;
        // 0x317e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e2c) {
            ctx->pc = 0x317E50u;
            goto label_317e50;
        }
    }
    ctx->pc = 0x317E34u;
label_317e34:
    // 0x317e34: 0x8e470028  lw          $a3, 0x28($s2)
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_317e38:
    // 0x317e38: 0xc64c002c  lwc1        $f12, 0x2C($s2)
    ctx->pc = 0x317e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_317e3c:
    // 0x317e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x317e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317e40:
    // 0x317e40: 0xc64d0030  lwc1        $f13, 0x30($s2)
    ctx->pc = 0x317e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_317e44:
    // 0x317e44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x317e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317e48:
    // 0x317e48: 0xc0ac13c  jal         func_2B04F0
label_317e4c:
    if (ctx->pc == 0x317E4Cu) {
        ctx->pc = 0x317E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E48u;
        // 0x317e4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E50u;
        goto label_317e50;
    }
    ctx->pc = 0x317E48u;
    SET_GPR_U32(ctx, 31, 0x317E50u);
    ctx->pc = 0x317E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317E48u;
    // 0x317e4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x317E48u, 0x317E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E50u;
label_317e50:
    // 0x317e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317e54:
    // 0x317e54: 0xc0a35d6  jal         func_28D758
label_317e58:
    if (ctx->pc == 0x317E58u) {
        ctx->pc = 0x317E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E54u;
        // 0x317e58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E5Cu;
        goto label_317e5c;
    }
    ctx->pc = 0x317E54u;
    SET_GPR_U32(ctx, 31, 0x317E5Cu);
    ctx->pc = 0x317E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317E54u;
    // 0x317e58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x317E54u, 0x317E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E5Cu;
label_317e5c:
    // 0x317e5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x317e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_317e60:
    // 0x317e60: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x317e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_317e64:
    // 0x317e64: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_317e68:
    if (ctx->pc == 0x317E68u) {
        ctx->pc = 0x317E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E64u;
        // 0x317e68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E6Cu;
        goto label_317e6c;
    }
    ctx->pc = 0x317E64u;
    {
        const bool branch_taken_0x317e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E64u;
        // 0x317e68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e64) {
            ctx->pc = 0x317DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317dc8;
        }
    }
    ctx->pc = 0x317E6Cu;
label_317e6c:
    // 0x317e6c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x317e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_317e70:
    // 0x317e70: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x317e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_317e74:
    // 0x317e74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x317e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_317e78:
    // 0x317e78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x317e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_317e7c:
    // 0x317e7c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x317e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_317e80:
    // 0x317e80: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x317e80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317e84:
    // 0x317e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_317e88:
    // 0x317e88: 0x3e00008  jr          $ra
label_317e8c:
    if (ctx->pc == 0x317E8Cu) {
        ctx->pc = 0x317E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E88u;
        // 0x317e8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E90u;
        goto label_fallthrough_0x317e88;
    }
    ctx->pc = 0x317E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E88u;
        // 0x317e8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x317e88:
    ctx->pc = 0x317E90u;
}
