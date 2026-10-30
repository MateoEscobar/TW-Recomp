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

// Function: sub_003A9C78
// Address: 0x3a9c78 - 0x3a9d90
void sub_003A9C78_0x3a9c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9C78_0x3a9c78");
#endif

    switch (ctx->pc) {
        case 0x3a9c78u: goto label_3a9c78;
        case 0x3a9c7cu: goto label_3a9c7c;
        case 0x3a9c80u: goto label_3a9c80;
        case 0x3a9c84u: goto label_3a9c84;
        case 0x3a9c88u: goto label_3a9c88;
        case 0x3a9c8cu: goto label_3a9c8c;
        case 0x3a9c90u: goto label_3a9c90;
        case 0x3a9c94u: goto label_3a9c94;
        case 0x3a9c98u: goto label_3a9c98;
        case 0x3a9c9cu: goto label_3a9c9c;
        case 0x3a9ca0u: goto label_3a9ca0;
        case 0x3a9ca4u: goto label_3a9ca4;
        case 0x3a9ca8u: goto label_3a9ca8;
        case 0x3a9cacu: goto label_3a9cac;
        case 0x3a9cb0u: goto label_3a9cb0;
        case 0x3a9cb4u: goto label_3a9cb4;
        case 0x3a9cb8u: goto label_3a9cb8;
        case 0x3a9cbcu: goto label_3a9cbc;
        case 0x3a9cc0u: goto label_3a9cc0;
        case 0x3a9cc4u: goto label_3a9cc4;
        case 0x3a9cc8u: goto label_3a9cc8;
        case 0x3a9cccu: goto label_3a9ccc;
        case 0x3a9cd0u: goto label_3a9cd0;
        case 0x3a9cd4u: goto label_3a9cd4;
        case 0x3a9cd8u: goto label_3a9cd8;
        case 0x3a9cdcu: goto label_3a9cdc;
        case 0x3a9ce0u: goto label_3a9ce0;
        case 0x3a9ce4u: goto label_3a9ce4;
        case 0x3a9ce8u: goto label_3a9ce8;
        case 0x3a9cecu: goto label_3a9cec;
        case 0x3a9cf0u: goto label_3a9cf0;
        case 0x3a9cf4u: goto label_3a9cf4;
        case 0x3a9cf8u: goto label_3a9cf8;
        case 0x3a9cfcu: goto label_3a9cfc;
        case 0x3a9d00u: goto label_3a9d00;
        case 0x3a9d04u: goto label_3a9d04;
        case 0x3a9d08u: goto label_3a9d08;
        case 0x3a9d0cu: goto label_3a9d0c;
        case 0x3a9d10u: goto label_3a9d10;
        case 0x3a9d14u: goto label_3a9d14;
        case 0x3a9d18u: goto label_3a9d18;
        case 0x3a9d1cu: goto label_3a9d1c;
        case 0x3a9d20u: goto label_3a9d20;
        case 0x3a9d24u: goto label_3a9d24;
        case 0x3a9d28u: goto label_3a9d28;
        case 0x3a9d2cu: goto label_3a9d2c;
        case 0x3a9d30u: goto label_3a9d30;
        case 0x3a9d34u: goto label_3a9d34;
        case 0x3a9d38u: goto label_3a9d38;
        case 0x3a9d3cu: goto label_3a9d3c;
        case 0x3a9d40u: goto label_3a9d40;
        case 0x3a9d44u: goto label_3a9d44;
        case 0x3a9d48u: goto label_3a9d48;
        case 0x3a9d4cu: goto label_3a9d4c;
        case 0x3a9d50u: goto label_3a9d50;
        case 0x3a9d54u: goto label_3a9d54;
        case 0x3a9d58u: goto label_3a9d58;
        case 0x3a9d5cu: goto label_3a9d5c;
        case 0x3a9d60u: goto label_3a9d60;
        case 0x3a9d64u: goto label_3a9d64;
        case 0x3a9d68u: goto label_3a9d68;
        case 0x3a9d6cu: goto label_3a9d6c;
        case 0x3a9d70u: goto label_3a9d70;
        case 0x3a9d74u: goto label_3a9d74;
        case 0x3a9d78u: goto label_3a9d78;
        case 0x3a9d7cu: goto label_3a9d7c;
        case 0x3a9d80u: goto label_3a9d80;
        case 0x3a9d84u: goto label_3a9d84;
        case 0x3a9d88u: goto label_3a9d88;
        case 0x3a9d8cu: goto label_3a9d8c;
        default: break;
    }

    ctx->pc = 0x3a9c78u;

label_3a9c78:
    // 0x3a9c78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a9c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3a9c7c:
    // 0x3a9c7c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3a9c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3a9c80:
    // 0x3a9c80: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3a9c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3a9c84:
    // 0x3a9c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a9c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9c88:
    // 0x3a9c88: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3a9c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3a9c8c:
    // 0x3a9c8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a9c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9c90:
    // 0x3a9c90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a9c94:
    // 0x3a9c94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a9c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3a9c98:
    // 0x3a9c98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9c9c:
    // 0x3a9c9c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a9ca0:
    // 0x3a9ca0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a9ca4:
    // 0x3a9ca4: 0x40f809  jalr        $v0
label_3a9ca8:
    if (ctx->pc == 0x3A9CA8u) {
        ctx->pc = 0x3A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CA4u;
        // 0x3a9ca8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CACu;
        goto label_3a9cac;
    }
    ctx->pc = 0x3A9CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9CACu);
        ctx->pc = 0x3A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CA4u;
        // 0x3a9ca8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9CA4u, 0x3A9CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9CACu;
label_3a9cac:
    // 0x3a9cac: 0xc0ea146  jal         func_3A8518
label_3a9cb0:
    if (ctx->pc == 0x3A9CB0u) {
        ctx->pc = 0x3A9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CACu;
        // 0x3a9cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CB4u;
        goto label_3a9cb4;
    }
    ctx->pc = 0x3A9CACu;
    SET_GPR_U32(ctx, 31, 0x3A9CB4u);
    ctx->pc = 0x3A9CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CACu;
    // 0x3a9cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9CACu, 0x3A9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CB4u;
label_3a9cb4:
    // 0x3a9cb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9cb8:
    // 0x3a9cb8: 0xc0ea12a  jal         func_3A84A8
label_3a9cbc:
    if (ctx->pc == 0x3A9CBCu) {
        ctx->pc = 0x3A9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CB8u;
        // 0x3a9cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CC0u;
        goto label_3a9cc0;
    }
    ctx->pc = 0x3A9CB8u;
    SET_GPR_U32(ctx, 31, 0x3A9CC0u);
    ctx->pc = 0x3A9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CB8u;
    // 0x3a9cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9CB8u, 0x3A9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CC0u;
label_3a9cc0:
    // 0x3a9cc0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9cc4:
    // 0x3a9cc4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9cc8:
    // 0x3a9cc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9ccc:
    // 0x3a9ccc: 0xc0ea12a  jal         func_3A84A8
label_3a9cd0:
    if (ctx->pc == 0x3A9CD0u) {
        ctx->pc = 0x3A9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CCCu;
        // 0x3a9cd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CD4u;
        goto label_3a9cd4;
    }
    ctx->pc = 0x3A9CCCu;
    SET_GPR_U32(ctx, 31, 0x3A9CD4u);
    ctx->pc = 0x3A9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CCCu;
    // 0x3a9cd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9CCCu, 0x3A9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CD4u;
label_3a9cd4:
    // 0x3a9cd4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9cd8:
    // 0x3a9cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9cdc:
    // 0x3a9cdc: 0xc0ea146  jal         func_3A8518
label_3a9ce0:
    if (ctx->pc == 0x3A9CE0u) {
        ctx->pc = 0x3A9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CDCu;
        // 0x3a9ce0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CE4u;
        goto label_3a9ce4;
    }
    ctx->pc = 0x3A9CDCu;
    SET_GPR_U32(ctx, 31, 0x3A9CE4u);
    ctx->pc = 0x3A9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CDCu;
    // 0x3a9ce0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9CDCu, 0x3A9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CE4u;
label_3a9ce4:
    // 0x3a9ce4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a9ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9ce8:
    // 0x3a9ce8: 0xc0ea14c  jal         func_3A8530
label_3a9cec:
    if (ctx->pc == 0x3A9CECu) {
        ctx->pc = 0x3A9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CE8u;
        // 0x3a9cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CF0u;
        goto label_3a9cf0;
    }
    ctx->pc = 0x3A9CE8u;
    SET_GPR_U32(ctx, 31, 0x3A9CF0u);
    ctx->pc = 0x3A9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CE8u;
    // 0x3a9cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A9CE8u, 0x3A9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CF0u;
label_3a9cf0:
    // 0x3a9cf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a9cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9cf4:
    // 0x3a9cf4: 0xc0ea146  jal         func_3A8518
label_3a9cf8:
    if (ctx->pc == 0x3A9CF8u) {
        ctx->pc = 0x3A9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CF4u;
        // 0x3a9cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CFCu;
        goto label_3a9cfc;
    }
    ctx->pc = 0x3A9CF4u;
    SET_GPR_U32(ctx, 31, 0x3A9CFCu);
    ctx->pc = 0x3A9CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CF4u;
    // 0x3a9cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9CF4u, 0x3A9CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CFCu;
label_3a9cfc:
    // 0x3a9cfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a9cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a9d00:
    // 0x3a9d00: 0xc0e858c  jal         func_3A1630
label_3a9d04:
    if (ctx->pc == 0x3A9D04u) {
        ctx->pc = 0x3A9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D00u;
        // 0x3a9d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D08u;
        goto label_3a9d08;
    }
    ctx->pc = 0x3A9D00u;
    SET_GPR_U32(ctx, 31, 0x3A9D08u);
    ctx->pc = 0x3A9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D00u;
    // 0x3a9d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A9D00u, 0x3A9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D08u;
label_3a9d08:
    // 0x3a9d08: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3a9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3a9d0c:
    // 0x3a9d0c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3a9d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3a9d10:
    // 0x3a9d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d14:
    // 0x3a9d14: 0xc0e896e  jal         func_3A25B8
label_3a9d18:
    if (ctx->pc == 0x3A9D18u) {
        ctx->pc = 0x3A9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D14u;
        // 0x3a9d18: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D1Cu;
        goto label_3a9d1c;
    }
    ctx->pc = 0x3A9D14u;
    SET_GPR_U32(ctx, 31, 0x3A9D1Cu);
    ctx->pc = 0x3A9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D14u;
    // 0x3a9d18: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3A9D14u, 0x3A9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D1Cu;
label_3a9d1c:
    // 0x3a9d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a9d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d20:
    // 0x3a9d20: 0xc0e862e  jal         func_3A18B8
label_3a9d24:
    if (ctx->pc == 0x3A9D24u) {
        ctx->pc = 0x3A9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D20u;
        // 0x3a9d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D28u;
        goto label_3a9d28;
    }
    ctx->pc = 0x3A9D20u;
    SET_GPR_U32(ctx, 31, 0x3A9D28u);
    ctx->pc = 0x3A9D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D20u;
    // 0x3a9d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3A9D20u, 0x3A9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D28u;
label_3a9d28:
    // 0x3a9d28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a9d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d2c:
    // 0x3a9d2c: 0xc0e896c  jal         func_3A25B0
label_3a9d30:
    if (ctx->pc == 0x3A9D30u) {
        ctx->pc = 0x3A9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D2Cu;
        // 0x3a9d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D34u;
        goto label_3a9d34;
    }
    ctx->pc = 0x3A9D2Cu;
    SET_GPR_U32(ctx, 31, 0x3A9D34u);
    ctx->pc = 0x3A9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D2Cu;
    // 0x3a9d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3A9D2Cu, 0x3A9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D34u;
label_3a9d34:
    // 0x3a9d34: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a9d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9d38:
    // 0x3a9d38: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3a9d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9d3c:
    // 0x3a9d3c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3a9d3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9d40:
    // 0x3a9d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a9d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d44:
    // 0x3a9d44: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3a9d44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3a9d48:
    // 0x3a9d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d4c:
    // 0x3a9d4c: 0xc0e90ca  jal         func_3A4328
label_3a9d50:
    if (ctx->pc == 0x3A9D50u) {
        ctx->pc = 0x3A9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D4Cu;
        // 0x3a9d50: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D54u;
        goto label_3a9d54;
    }
    ctx->pc = 0x3A9D4Cu;
    SET_GPR_U32(ctx, 31, 0x3A9D54u);
    ctx->pc = 0x3A9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D4Cu;
    // 0x3a9d50: 0x7e030020  sq          $v1, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A9D4Cu, 0x3A9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D54u;
label_3a9d54:
    // 0x3a9d54: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3a9d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3a9d58:
    // 0x3a9d58: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3a9d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3a9d5c:
    // 0x3a9d5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a9d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3a9d60:
    // 0x3a9d60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a9d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a9d64:
    // 0x3a9d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d68:
    // 0x3a9d68: 0xc0f15f6  jal         func_3C57D8
label_3a9d6c:
    if (ctx->pc == 0x3A9D6Cu) {
        ctx->pc = 0x3A9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D68u;
        // 0x3a9d6c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D70u;
        goto label_3a9d70;
    }
    ctx->pc = 0x3A9D68u;
    SET_GPR_U32(ctx, 31, 0x3A9D70u);
    ctx->pc = 0x3A9D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D68u;
    // 0x3a9d6c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3A9D68u, 0x3A9D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D70u;
label_3a9d70:
    // 0x3a9d70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a9d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a9d74:
    // 0x3a9d74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3a9d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a9d78:
    // 0x3a9d78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3a9d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a9d7c:
    // 0x3a9d7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a9d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a9d80:
    // 0x3a9d80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a9d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a9d84:
    // 0x3a9d84: 0x3e00008  jr          $ra
label_3a9d88:
    if (ctx->pc == 0x3A9D88u) {
        ctx->pc = 0x3A9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D84u;
        // 0x3a9d88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D8Cu;
        goto label_3a9d8c;
    }
    ctx->pc = 0x3A9D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D84u;
        // 0x3a9d88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9D8Cu;
label_3a9d8c:
    // 0x3a9d8c: 0x0  nop
    ctx->pc = 0x3a9d8cu;
    // NOP
    ctx->pc = 0x3a9d90u;
}
