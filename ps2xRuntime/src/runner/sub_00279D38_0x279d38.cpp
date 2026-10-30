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

// Function: sub_00279D38
// Address: 0x279d38 - 0x279e00
void sub_00279D38_0x279d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279D38_0x279d38");
#endif

    switch (ctx->pc) {
        case 0x279d38u: goto label_279d38;
        case 0x279d3cu: goto label_279d3c;
        case 0x279d40u: goto label_279d40;
        case 0x279d44u: goto label_279d44;
        case 0x279d48u: goto label_279d48;
        case 0x279d4cu: goto label_279d4c;
        case 0x279d50u: goto label_279d50;
        case 0x279d54u: goto label_279d54;
        case 0x279d58u: goto label_279d58;
        case 0x279d5cu: goto label_279d5c;
        case 0x279d60u: goto label_279d60;
        case 0x279d64u: goto label_279d64;
        case 0x279d68u: goto label_279d68;
        case 0x279d6cu: goto label_279d6c;
        case 0x279d70u: goto label_279d70;
        case 0x279d74u: goto label_279d74;
        case 0x279d78u: goto label_279d78;
        case 0x279d7cu: goto label_279d7c;
        case 0x279d80u: goto label_279d80;
        case 0x279d84u: goto label_279d84;
        case 0x279d88u: goto label_279d88;
        case 0x279d8cu: goto label_279d8c;
        case 0x279d90u: goto label_279d90;
        case 0x279d94u: goto label_279d94;
        case 0x279d98u: goto label_279d98;
        case 0x279d9cu: goto label_279d9c;
        case 0x279da0u: goto label_279da0;
        case 0x279da4u: goto label_279da4;
        case 0x279da8u: goto label_279da8;
        case 0x279dacu: goto label_279dac;
        case 0x279db0u: goto label_279db0;
        case 0x279db4u: goto label_279db4;
        case 0x279db8u: goto label_279db8;
        case 0x279dbcu: goto label_279dbc;
        case 0x279dc0u: goto label_279dc0;
        case 0x279dc4u: goto label_279dc4;
        case 0x279dc8u: goto label_279dc8;
        case 0x279dccu: goto label_279dcc;
        case 0x279dd0u: goto label_279dd0;
        case 0x279dd4u: goto label_279dd4;
        case 0x279dd8u: goto label_279dd8;
        case 0x279ddcu: goto label_279ddc;
        case 0x279de0u: goto label_279de0;
        case 0x279de4u: goto label_279de4;
        case 0x279de8u: goto label_279de8;
        case 0x279decu: goto label_279dec;
        case 0x279df0u: goto label_279df0;
        case 0x279df4u: goto label_279df4;
        case 0x279df8u: goto label_279df8;
        case 0x279dfcu: goto label_279dfc;
        default: break;
    }

    ctx->pc = 0x279d38u;

label_279d38:
    // 0x279d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_279d3c:
    // 0x279d3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x279d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_279d40:
    // 0x279d40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x279d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_279d44:
    // 0x279d44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x279d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_279d48:
    // 0x279d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279d4c:
    // 0x279d4c: 0xc08a61a  jal         func_229868
label_279d50:
    if (ctx->pc == 0x279D50u) {
        ctx->pc = 0x279D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D4Cu;
        // 0x279d50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D54u;
        goto label_279d54;
    }
    ctx->pc = 0x279D4Cu;
    SET_GPR_U32(ctx, 31, 0x279D54u);
    ctx->pc = 0x279D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D4Cu;
    // 0x279d50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279D4Cu, 0x279D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D54u;
label_279d54:
    // 0x279d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279d58:
    // 0x279d58: 0xc08a61a  jal         func_229868
label_279d5c:
    if (ctx->pc == 0x279D5Cu) {
        ctx->pc = 0x279D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D58u;
        // 0x279d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D60u;
        goto label_279d60;
    }
    ctx->pc = 0x279D58u;
    SET_GPR_U32(ctx, 31, 0x279D60u);
    ctx->pc = 0x279D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D58u;
    // 0x279d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279D58u, 0x279D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D60u;
label_279d60:
    // 0x279d60: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_279d64:
    if (ctx->pc == 0x279D64u) {
        ctx->pc = 0x279D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D60u;
        // 0x279d64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D68u;
        goto label_279d68;
    }
    ctx->pc = 0x279D60u;
    {
        const bool branch_taken_0x279d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D60u;
        // 0x279d64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d60) {
            ctx->pc = 0x279D9Cu;
            goto label_279d9c;
        }
    }
    ctx->pc = 0x279D68u;
label_279d68:
    // 0x279d68: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_279d6c:
    if (ctx->pc == 0x279D6Cu) {
        ctx->pc = 0x279D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D68u;
        // 0x279d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D70u;
        goto label_279d70;
    }
    ctx->pc = 0x279D68u;
    {
        const bool branch_taken_0x279d68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D68u;
        // 0x279d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d68) {
            ctx->pc = 0x279DE4u;
            goto label_279de4;
        }
    }
    ctx->pc = 0x279D70u;
label_279d70:
    // 0x279d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x279d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279d74:
    // 0x279d74: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x279d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279d78:
    // 0x279d78: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_279d7c:
    // 0x279d7c: 0x40f809  jalr        $v0
label_279d80:
    if (ctx->pc == 0x279D80u) {
        ctx->pc = 0x279D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D7Cu;
        // 0x279d80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D84u;
        goto label_279d84;
    }
    ctx->pc = 0x279D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279D84u);
        ctx->pc = 0x279D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D7Cu;
        // 0x279d80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D7Cu, 0x279D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279D84u;
label_279d84:
    // 0x279d84: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_279d88:
    if (ctx->pc == 0x279D88u) {
        ctx->pc = 0x279D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D84u;
        // 0x279d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D8Cu;
        goto label_279d8c;
    }
    ctx->pc = 0x279D84u;
    {
        const bool branch_taken_0x279d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D84u;
        // 0x279d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d84) {
            ctx->pc = 0x279DE4u;
            goto label_279de4;
        }
    }
    ctx->pc = 0x279D8Cu;
label_279d8c:
    // 0x279d8c: 0xc089f5e  jal         func_227D78
label_279d90:
    if (ctx->pc == 0x279D90u) {
        ctx->pc = 0x279D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D8Cu;
        // 0x279d90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D94u;
        goto label_279d94;
    }
    ctx->pc = 0x279D8Cu;
    SET_GPR_U32(ctx, 31, 0x279D94u);
    ctx->pc = 0x279D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D8Cu;
    // 0x279d90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279D8Cu, 0x279D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D94u;
label_279d94:
    // 0x279d94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_279d98:
    if (ctx->pc == 0x279D98u) {
        ctx->pc = 0x279D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D94u;
        // 0x279d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D9Cu;
        goto label_279d9c;
    }
    ctx->pc = 0x279D94u;
    {
        const bool branch_taken_0x279d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D94u;
        // 0x279d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d94) {
            ctx->pc = 0x279DA4u;
            goto label_279da4;
        }
    }
    ctx->pc = 0x279D9Cu;
label_279d9c:
    // 0x279d9c: 0x10000011  b           . + 4 + (0x11 << 2)
label_279da0:
    if (ctx->pc == 0x279DA0u) {
        ctx->pc = 0x279DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D9Cu;
        // 0x279da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DA4u;
        goto label_279da4;
    }
    ctx->pc = 0x279D9Cu;
    {
        const bool branch_taken_0x279d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D9Cu;
        // 0x279da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d9c) {
            ctx->pc = 0x279DE4u;
            goto label_279de4;
        }
    }
    ctx->pc = 0x279DA4u;
label_279da4:
    // 0x279da4: 0xc089fac  jal         func_227EB0
label_279da8:
    if (ctx->pc == 0x279DA8u) {
        ctx->pc = 0x279DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DA4u;
        // 0x279da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DACu;
        goto label_279dac;
    }
    ctx->pc = 0x279DA4u;
    SET_GPR_U32(ctx, 31, 0x279DACu);
    ctx->pc = 0x279DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DA4u;
    // 0x279da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x279DA4u, 0x279DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DACu;
label_279dac:
    // 0x279dac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_279db0:
    if (ctx->pc == 0x279DB0u) {
        ctx->pc = 0x279DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DACu;
        // 0x279db0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DB4u;
        goto label_279db4;
    }
    ctx->pc = 0x279DACu;
    {
        const bool branch_taken_0x279dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DACu;
        // 0x279db0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dac) {
            ctx->pc = 0x279DE4u;
            goto label_279de4;
        }
    }
    ctx->pc = 0x279DB4u;
label_279db4:
    // 0x279db4: 0xc089f76  jal         func_227DD8
label_279db8:
    if (ctx->pc == 0x279DB8u) {
        ctx->pc = 0x279DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DB4u;
        // 0x279db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DBCu;
        goto label_279dbc;
    }
    ctx->pc = 0x279DB4u;
    SET_GPR_U32(ctx, 31, 0x279DBCu);
    ctx->pc = 0x279DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DB4u;
    // 0x279db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x279DB4u, 0x279DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DBCu;
label_279dbc:
    // 0x279dbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_279dc0:
    if (ctx->pc == 0x279DC0u) {
        ctx->pc = 0x279DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DBCu;
        // 0x279dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DC4u;
        goto label_279dc4;
    }
    ctx->pc = 0x279DBCu;
    {
        const bool branch_taken_0x279dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DBCu;
        // 0x279dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dbc) {
            ctx->pc = 0x279DE4u;
            goto label_279de4;
        }
    }
    ctx->pc = 0x279DC4u;
label_279dc4:
    // 0x279dc4: 0xc089f86  jal         func_227E18
label_279dc8:
    if (ctx->pc == 0x279DC8u) {
        ctx->pc = 0x279DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DC4u;
        // 0x279dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DCCu;
        goto label_279dcc;
    }
    ctx->pc = 0x279DC4u;
    SET_GPR_U32(ctx, 31, 0x279DCCu);
    ctx->pc = 0x279DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DC4u;
    // 0x279dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x279DC4u, 0x279DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DCCu;
label_279dcc:
    // 0x279dcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_279dd0:
    if (ctx->pc == 0x279DD0u) {
        ctx->pc = 0x279DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DCCu;
        // 0x279dd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DD4u;
        goto label_279dd4;
    }
    ctx->pc = 0x279DCCu;
    {
        const bool branch_taken_0x279dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DCCu;
        // 0x279dd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dcc) {
            ctx->pc = 0x279DE4u;
            goto label_279de4;
        }
    }
    ctx->pc = 0x279DD4u;
label_279dd4:
    // 0x279dd4: 0xc088f04  jal         func_223C10
label_279dd8:
    if (ctx->pc == 0x279DD8u) {
        ctx->pc = 0x279DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DD4u;
        // 0x279dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DDCu;
        goto label_279ddc;
    }
    ctx->pc = 0x279DD4u;
    SET_GPR_U32(ctx, 31, 0x279DDCu);
    ctx->pc = 0x279DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DD4u;
    // 0x279dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279DD4u, 0x279DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DDCu;
label_279ddc:
    // 0x279ddc: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x279ddcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_279de0:
    // 0x279de0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279de4:
    // 0x279de4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x279de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279de8:
    // 0x279de8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x279de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279dec:
    // 0x279dec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x279decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279df0:
    // 0x279df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279df4:
    // 0x279df4: 0x3e00008  jr          $ra
label_279df8:
    if (ctx->pc == 0x279DF8u) {
        ctx->pc = 0x279DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DF4u;
        // 0x279df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DFCu;
        goto label_279dfc;
    }
    ctx->pc = 0x279DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DF4u;
        // 0x279df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279DFCu;
label_279dfc:
    // 0x279dfc: 0x0  nop
    ctx->pc = 0x279dfcu;
    // NOP
    ctx->pc = 0x279e00u;
}
