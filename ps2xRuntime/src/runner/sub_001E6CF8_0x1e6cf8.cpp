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

// Function: sub_001E6CF8
// Address: 0x1e6cf8 - 0x1e6e20
void sub_001E6CF8_0x1e6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6CF8_0x1e6cf8");
#endif

    switch (ctx->pc) {
        case 0x1e6cf8u: goto label_1e6cf8;
        case 0x1e6cfcu: goto label_1e6cfc;
        case 0x1e6d00u: goto label_1e6d00;
        case 0x1e6d04u: goto label_1e6d04;
        case 0x1e6d08u: goto label_1e6d08;
        case 0x1e6d0cu: goto label_1e6d0c;
        case 0x1e6d10u: goto label_1e6d10;
        case 0x1e6d14u: goto label_1e6d14;
        case 0x1e6d18u: goto label_1e6d18;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d20u: goto label_1e6d20;
        case 0x1e6d24u: goto label_1e6d24;
        case 0x1e6d28u: goto label_1e6d28;
        case 0x1e6d2cu: goto label_1e6d2c;
        case 0x1e6d30u: goto label_1e6d30;
        case 0x1e6d34u: goto label_1e6d34;
        case 0x1e6d38u: goto label_1e6d38;
        case 0x1e6d3cu: goto label_1e6d3c;
        case 0x1e6d40u: goto label_1e6d40;
        case 0x1e6d44u: goto label_1e6d44;
        case 0x1e6d48u: goto label_1e6d48;
        case 0x1e6d4cu: goto label_1e6d4c;
        case 0x1e6d50u: goto label_1e6d50;
        case 0x1e6d54u: goto label_1e6d54;
        case 0x1e6d58u: goto label_1e6d58;
        case 0x1e6d5cu: goto label_1e6d5c;
        case 0x1e6d60u: goto label_1e6d60;
        case 0x1e6d64u: goto label_1e6d64;
        case 0x1e6d68u: goto label_1e6d68;
        case 0x1e6d6cu: goto label_1e6d6c;
        case 0x1e6d70u: goto label_1e6d70;
        case 0x1e6d74u: goto label_1e6d74;
        case 0x1e6d78u: goto label_1e6d78;
        case 0x1e6d7cu: goto label_1e6d7c;
        case 0x1e6d80u: goto label_1e6d80;
        case 0x1e6d84u: goto label_1e6d84;
        case 0x1e6d88u: goto label_1e6d88;
        case 0x1e6d8cu: goto label_1e6d8c;
        case 0x1e6d90u: goto label_1e6d90;
        case 0x1e6d94u: goto label_1e6d94;
        case 0x1e6d98u: goto label_1e6d98;
        case 0x1e6d9cu: goto label_1e6d9c;
        case 0x1e6da0u: goto label_1e6da0;
        case 0x1e6da4u: goto label_1e6da4;
        case 0x1e6da8u: goto label_1e6da8;
        case 0x1e6dacu: goto label_1e6dac;
        case 0x1e6db0u: goto label_1e6db0;
        case 0x1e6db4u: goto label_1e6db4;
        case 0x1e6db8u: goto label_1e6db8;
        case 0x1e6dbcu: goto label_1e6dbc;
        case 0x1e6dc0u: goto label_1e6dc0;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6dc8u: goto label_1e6dc8;
        case 0x1e6dccu: goto label_1e6dcc;
        case 0x1e6dd0u: goto label_1e6dd0;
        case 0x1e6dd4u: goto label_1e6dd4;
        case 0x1e6dd8u: goto label_1e6dd8;
        case 0x1e6ddcu: goto label_1e6ddc;
        case 0x1e6de0u: goto label_1e6de0;
        case 0x1e6de4u: goto label_1e6de4;
        case 0x1e6de8u: goto label_1e6de8;
        case 0x1e6decu: goto label_1e6dec;
        case 0x1e6df0u: goto label_1e6df0;
        case 0x1e6df4u: goto label_1e6df4;
        case 0x1e6df8u: goto label_1e6df8;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e00u: goto label_1e6e00;
        case 0x1e6e04u: goto label_1e6e04;
        case 0x1e6e08u: goto label_1e6e08;
        case 0x1e6e0cu: goto label_1e6e0c;
        case 0x1e6e10u: goto label_1e6e10;
        case 0x1e6e14u: goto label_1e6e14;
        case 0x1e6e18u: goto label_1e6e18;
        case 0x1e6e1cu: goto label_1e6e1c;
        default: break;
    }

    ctx->pc = 0x1e6cf8u;

label_1e6cf8:
    // 0x1e6cf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e6cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e6cfc:
    // 0x1e6cfc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e6cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1e6d00:
    // 0x1e6d00: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e6d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1e6d04:
    // 0x1e6d04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e6d04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d08:
    // 0x1e6d08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e6d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1e6d0c:
    // 0x1e6d0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e6d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e6d10:
    // 0x1e6d10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e6d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e6d14:
    // 0x1e6d14: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e6d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1e6d18:
    // 0x1e6d18: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1e6d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1e6d1c:
    // 0x1e6d1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e6d20:
    // 0x1e6d20: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1e6d24:
    // 0x1e6d24: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1e6d28:
    if (ctx->pc == 0x1E6D28u) {
        ctx->pc = 0x1E6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D24u;
        // 0x1e6d28: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D2Cu;
        goto label_1e6d2c;
    }
    ctx->pc = 0x1E6D24u;
    {
        const bool branch_taken_0x1e6d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D24u;
        // 0x1e6d28: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d24) {
            ctx->pc = 0x1E6DFCu;
            goto label_1e6dfc;
        }
    }
    ctx->pc = 0x1E6D2Cu;
label_1e6d2c:
    // 0x1e6d2c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e6d30:
    // 0x1e6d30: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1e6d34:
    if (ctx->pc == 0x1E6D34u) {
        ctx->pc = 0x1E6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D30u;
        // 0x1e6d34: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D38u;
        goto label_1e6d38;
    }
    ctx->pc = 0x1E6D30u;
    {
        const bool branch_taken_0x1e6d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D30u;
        // 0x1e6d34: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d30) {
            ctx->pc = 0x1E6E00u;
            goto label_1e6e00;
        }
    }
    ctx->pc = 0x1E6D38u;
label_1e6d38:
    // 0x1e6d38: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1e6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e6d3c:
    // 0x1e6d3c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1e6d40:
    if (ctx->pc == 0x1E6D40u) {
        ctx->pc = 0x1E6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D3Cu;
        // 0x1e6d40: 0x269008b0  addiu       $s0, $s4, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D44u;
        goto label_1e6d44;
    }
    ctx->pc = 0x1E6D3Cu;
    {
        const bool branch_taken_0x1e6d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D3Cu;
        // 0x1e6d40: 0x269008b0  addiu       $s0, $s4, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d3c) {
            ctx->pc = 0x1E6DF8u;
            goto label_1e6df8;
        }
    }
    ctx->pc = 0x1E6D44u;
label_1e6d44:
    // 0x1e6d44: 0x92851d70  lbu         $a1, 0x1D70($s4)
    ctx->pc = 0x1e6d44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7536)));
label_1e6d48:
    // 0x1e6d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d4c:
    // 0x1e6d4c: 0xc06898e  jal         func_1A2638
label_1e6d50:
    if (ctx->pc == 0x1E6D50u) {
        ctx->pc = 0x1E6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D4Cu;
        // 0x1e6d50: 0x269109b0  addiu       $s1, $s4, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D54u;
        goto label_1e6d54;
    }
    ctx->pc = 0x1E6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D54u);
    ctx->pc = 0x1E6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D4Cu;
    // 0x1e6d50: 0x269109b0  addiu       $s1, $s4, 0x9B0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E6D4Cu, 0x1E6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D54u;
label_1e6d54:
    // 0x1e6d54: 0x269207b0  addiu       $s2, $s4, 0x7B0
    ctx->pc = 0x1e6d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1968));
label_1e6d58:
    // 0x1e6d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d5c:
    // 0x1e6d5c: 0xc068998  jal         func_1A2660
label_1e6d60:
    if (ctx->pc == 0x1E6D60u) {
        ctx->pc = 0x1E6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D5Cu;
        // 0x1e6d60: 0x26930ab0  addiu       $s3, $s4, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 2736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D64u;
        goto label_1e6d64;
    }
    ctx->pc = 0x1E6D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D64u);
    ctx->pc = 0x1E6D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D5Cu;
    // 0x1e6d60: 0x26930ab0  addiu       $s3, $s4, 0xAB0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 2736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E6D5Cu, 0x1E6D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D64u;
label_1e6d64:
    // 0x1e6d64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d68:
    // 0x1e6d68: 0x92851d70  lbu         $a1, 0x1D70($s4)
    ctx->pc = 0x1e6d68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7536)));
label_1e6d6c:
    // 0x1e6d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d70:
    // 0x1e6d70: 0x26951b70  addiu       $s5, $s4, 0x1B70
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 7024));
label_1e6d74:
    // 0x1e6d74: 0xc06898e  jal         func_1A2638
label_1e6d78:
    if (ctx->pc == 0x1E6D78u) {
        ctx->pc = 0x1E6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D74u;
        // 0x1e6d78: 0x26900bb0  addiu       $s0, $s4, 0xBB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D7Cu;
        goto label_1e6d7c;
    }
    ctx->pc = 0x1E6D74u;
    SET_GPR_U32(ctx, 31, 0x1E6D7Cu);
    ctx->pc = 0x1E6D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D74u;
    // 0x1e6d78: 0x26900bb0  addiu       $s0, $s4, 0xBB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E6D74u, 0x1E6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D7Cu;
label_1e6d7c:
    // 0x1e6d7c: 0xc068998  jal         func_1A2660
label_1e6d80:
    if (ctx->pc == 0x1E6D80u) {
        ctx->pc = 0x1E6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D7Cu;
        // 0x1e6d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D84u;
        goto label_1e6d84;
    }
    ctx->pc = 0x1E6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D84u);
    ctx->pc = 0x1E6D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D7Cu;
    // 0x1e6d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E6D7Cu, 0x1E6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D84u;
label_1e6d84:
    // 0x1e6d84: 0x92851d70  lbu         $a1, 0x1D70($s4)
    ctx->pc = 0x1e6d84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7536)));
label_1e6d88:
    // 0x1e6d88: 0xc06898e  jal         func_1A2638
label_1e6d8c:
    if (ctx->pc == 0x1E6D8Cu) {
        ctx->pc = 0x1E6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D88u;
        // 0x1e6d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D90u;
        goto label_1e6d90;
    }
    ctx->pc = 0x1E6D88u;
    SET_GPR_U32(ctx, 31, 0x1E6D90u);
    ctx->pc = 0x1E6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D88u;
    // 0x1e6d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E6D88u, 0x1E6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D90u;
label_1e6d90:
    // 0x1e6d90: 0xc068998  jal         func_1A2660
label_1e6d94:
    if (ctx->pc == 0x1E6D94u) {
        ctx->pc = 0x1E6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D90u;
        // 0x1e6d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D98u;
        goto label_1e6d98;
    }
    ctx->pc = 0x1E6D90u;
    SET_GPR_U32(ctx, 31, 0x1E6D98u);
    ctx->pc = 0x1E6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D90u;
    // 0x1e6d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E6D90u, 0x1E6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D98u;
label_1e6d98:
    // 0x1e6d98: 0x92851d70  lbu         $a1, 0x1D70($s4)
    ctx->pc = 0x1e6d98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7536)));
label_1e6d9c:
    // 0x1e6d9c: 0xc06898e  jal         func_1A2638
label_1e6da0:
    if (ctx->pc == 0x1E6DA0u) {
        ctx->pc = 0x1E6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D9Cu;
        // 0x1e6da0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DA4u;
        goto label_1e6da4;
    }
    ctx->pc = 0x1E6D9Cu;
    SET_GPR_U32(ctx, 31, 0x1E6DA4u);
    ctx->pc = 0x1E6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D9Cu;
    // 0x1e6da0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1E6D9Cu, 0x1E6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DA4u;
label_1e6da4:
    // 0x1e6da4: 0xc068998  jal         func_1A2660
label_1e6da8:
    if (ctx->pc == 0x1E6DA8u) {
        ctx->pc = 0x1E6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DA4u;
        // 0x1e6da8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DACu;
        goto label_1e6dac;
    }
    ctx->pc = 0x1E6DA4u;
    SET_GPR_U32(ctx, 31, 0x1E6DACu);
    ctx->pc = 0x1E6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DA4u;
    // 0x1e6da8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E6DA4u, 0x1E6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DACu;
label_1e6dac:
    // 0x1e6dac: 0x0  nop
    ctx->pc = 0x1e6dacu;
    // NOP
label_1e6db0:
    // 0x1e6db0: 0x92851d70  lbu         $a1, 0x1D70($s4)
    ctx->pc = 0x1e6db0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7536)));
label_1e6db4:
    // 0x1e6db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6db8:
    // 0x1e6db8: 0xc070962  jal         func_1C2588
label_1e6dbc:
    if (ctx->pc == 0x1E6DBCu) {
        ctx->pc = 0x1E6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DB8u;
        // 0x1e6dbc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DC0u;
        goto label_1e6dc0;
    }
    ctx->pc = 0x1E6DB8u;
    SET_GPR_U32(ctx, 31, 0x1E6DC0u);
    ctx->pc = 0x1E6DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DB8u;
    // 0x1e6dbc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2588u, 0x1E6DB8u, 0x1E6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DC0u;
label_1e6dc0:
    // 0x1e6dc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6dc4:
    // 0x1e6dc4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e6dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e6dc8:
    // 0x1e6dc8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e6dcc:
    // 0x1e6dcc: 0x60f809  jalr        $v1
label_1e6dd0:
    if (ctx->pc == 0x1E6DD0u) {
        ctx->pc = 0x1E6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DCCu;
        // 0x1e6dd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DD4u;
        goto label_1e6dd4;
    }
    ctx->pc = 0x1E6DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E6DD4u);
        ctx->pc = 0x1E6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DCCu;
        // 0x1e6dd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6DCCu, 0x1E6DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6DD4u;
label_1e6dd4:
    // 0x1e6dd4: 0x2ec20004  sltiu       $v0, $s6, 0x4
    ctx->pc = 0x1e6dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1e6dd8:
    // 0x1e6dd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1e6ddc:
    if (ctx->pc == 0x1E6DDCu) {
        ctx->pc = 0x1E6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DD8u;
        // 0x1e6ddc: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DE0u;
        goto label_1e6de0;
    }
    ctx->pc = 0x1E6DD8u;
    {
        const bool branch_taken_0x1e6dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DD8u;
        // 0x1e6ddc: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dd8) {
            ctx->pc = 0x1E6DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6db0;
        }
    }
    ctx->pc = 0x1E6DE0u;
label_1e6de0:
    // 0x1e6de0: 0x92831d70  lbu         $v1, 0x1D70($s4)
    ctx->pc = 0x1e6de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7536)));
label_1e6de4:
    // 0x1e6de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6de8:
    // 0x1e6de8: 0xaea201b4  sw          $v0, 0x1B4($s5)
    ctx->pc = 0x1e6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 436), GPR_U32(ctx, 2));
label_1e6dec:
    // 0x1e6dec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e6decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e6df0:
    // 0x1e6df0: 0xc06ec70  jal         func_1BB1C0
label_1e6df4:
    if (ctx->pc == 0x1E6DF4u) {
        ctx->pc = 0x1E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DF0u;
        // 0x1e6df4: 0xa2a301b1  sb          $v1, 0x1B1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 433), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DF8u;
        goto label_1e6df8;
    }
    ctx->pc = 0x1E6DF0u;
    SET_GPR_U32(ctx, 31, 0x1E6DF8u);
    ctx->pc = 0x1E6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DF0u;
    // 0x1e6df4: 0xa2a301b1  sb          $v1, 0x1B1($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 433), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1E6DF0u, 0x1E6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DF8u;
label_1e6df8:
    // 0x1e6df8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e6df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e6dfc:
    // 0x1e6dfc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e6dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e6e00:
    // 0x1e6e00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e6e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6e04:
    // 0x1e6e04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e6e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6e08:
    // 0x1e6e08: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e6e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6e0c:
    // 0x1e6e0c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e6e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6e10:
    // 0x1e6e10: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1e6e10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6e14:
    // 0x1e6e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6e18:
    // 0x1e6e18: 0x3e00008  jr          $ra
label_1e6e1c:
    if (ctx->pc == 0x1E6E1Cu) {
        ctx->pc = 0x1E6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E18u;
        // 0x1e6e1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E20u;
        goto label_fallthrough_0x1e6e18;
    }
    ctx->pc = 0x1E6E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E18u;
        // 0x1e6e1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6e18:
    ctx->pc = 0x1E6E20u;
}
