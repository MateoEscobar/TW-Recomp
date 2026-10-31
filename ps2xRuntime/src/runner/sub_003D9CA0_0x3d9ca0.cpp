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

// Function: sub_003D9CA0
// Address: 0x3d9ca0 - 0x3d9d48
void sub_003D9CA0_0x3d9ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9CA0_0x3d9ca0");
#endif

    switch (ctx->pc) {
        case 0x3d9ca0u: goto label_3d9ca0;
        case 0x3d9ca4u: goto label_3d9ca4;
        case 0x3d9ca8u: goto label_3d9ca8;
        case 0x3d9cacu: goto label_3d9cac;
        case 0x3d9cb0u: goto label_3d9cb0;
        case 0x3d9cb4u: goto label_3d9cb4;
        case 0x3d9cb8u: goto label_3d9cb8;
        case 0x3d9cbcu: goto label_3d9cbc;
        case 0x3d9cc0u: goto label_3d9cc0;
        case 0x3d9cc4u: goto label_3d9cc4;
        case 0x3d9cc8u: goto label_3d9cc8;
        case 0x3d9cccu: goto label_3d9ccc;
        case 0x3d9cd0u: goto label_3d9cd0;
        case 0x3d9cd4u: goto label_3d9cd4;
        case 0x3d9cd8u: goto label_3d9cd8;
        case 0x3d9cdcu: goto label_3d9cdc;
        case 0x3d9ce0u: goto label_3d9ce0;
        case 0x3d9ce4u: goto label_3d9ce4;
        case 0x3d9ce8u: goto label_3d9ce8;
        case 0x3d9cecu: goto label_3d9cec;
        case 0x3d9cf0u: goto label_3d9cf0;
        case 0x3d9cf4u: goto label_3d9cf4;
        case 0x3d9cf8u: goto label_3d9cf8;
        case 0x3d9cfcu: goto label_3d9cfc;
        case 0x3d9d00u: goto label_3d9d00;
        case 0x3d9d04u: goto label_3d9d04;
        case 0x3d9d08u: goto label_3d9d08;
        case 0x3d9d0cu: goto label_3d9d0c;
        case 0x3d9d10u: goto label_3d9d10;
        case 0x3d9d14u: goto label_3d9d14;
        case 0x3d9d18u: goto label_3d9d18;
        case 0x3d9d1cu: goto label_3d9d1c;
        case 0x3d9d20u: goto label_3d9d20;
        case 0x3d9d24u: goto label_3d9d24;
        case 0x3d9d28u: goto label_3d9d28;
        case 0x3d9d2cu: goto label_3d9d2c;
        case 0x3d9d30u: goto label_3d9d30;
        case 0x3d9d34u: goto label_3d9d34;
        case 0x3d9d38u: goto label_3d9d38;
        case 0x3d9d3cu: goto label_3d9d3c;
        case 0x3d9d40u: goto label_3d9d40;
        case 0x3d9d44u: goto label_3d9d44;
        default: break;
    }

    ctx->pc = 0x3d9ca0u;

label_3d9ca0:
    // 0x3d9ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d9ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d9ca4:
    // 0x3d9ca4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d9ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d9ca8:
    // 0x3d9ca8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d9ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d9cac:
    // 0x3d9cac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d9cb0:
    // 0x3d9cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9cb4:
    // 0x3d9cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d9cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d9cb8:
    // 0x3d9cb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d9cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9cbc:
    // 0x3d9cbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d9cc0:
    // 0x3d9cc0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9cc4:
    // 0x3d9cc4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9cc8:
    // 0x3d9cc8: 0x40f809  jalr        $v0
label_3d9ccc:
    if (ctx->pc == 0x3D9CCCu) {
        ctx->pc = 0x3D9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CC8u;
        // 0x3d9ccc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9CD0u;
        goto label_3d9cd0;
    }
    ctx->pc = 0x3D9CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9CD0u);
        ctx->pc = 0x3D9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CC8u;
        // 0x3d9ccc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9CC8u, 0x3D9CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9CD0u;
label_3d9cd0:
    // 0x3d9cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d9cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9cd4:
    // 0x3d9cd4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3d9cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3d9cd8:
    // 0x3d9cd8: 0xc0e858c  jal         func_3A1630
label_3d9cdc:
    if (ctx->pc == 0x3D9CDCu) {
        ctx->pc = 0x3D9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CD8u;
        // 0x3d9cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9CE0u;
        goto label_3d9ce0;
    }
    ctx->pc = 0x3D9CD8u;
    SET_GPR_U32(ctx, 31, 0x3D9CE0u);
    ctx->pc = 0x3D9CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9CD8u;
    // 0x3d9cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9CD8u, 0x3D9CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9CE0u;
label_3d9ce0:
    // 0x3d9ce0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d9ce4:
    // 0x3d9ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d9ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ce8:
    // 0x3d9ce8: 0xc0ea14c  jal         func_3A8530
label_3d9cec:
    if (ctx->pc == 0x3D9CECu) {
        ctx->pc = 0x3D9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CE8u;
        // 0x3d9cec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9CF0u;
        goto label_3d9cf0;
    }
    ctx->pc = 0x3D9CE8u;
    SET_GPR_U32(ctx, 31, 0x3D9CF0u);
    ctx->pc = 0x3D9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9CE8u;
    // 0x3d9cec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D9CE8u, 0x3D9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9CF0u;
label_3d9cf0:
    // 0x3d9cf0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d9cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9cf4:
    // 0x3d9cf4: 0xc0ea12a  jal         func_3A84A8
label_3d9cf8:
    if (ctx->pc == 0x3D9CF8u) {
        ctx->pc = 0x3D9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CF4u;
        // 0x3d9cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9CFCu;
        goto label_3d9cfc;
    }
    ctx->pc = 0x3D9CF4u;
    SET_GPR_U32(ctx, 31, 0x3D9CFCu);
    ctx->pc = 0x3D9CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9CF4u;
    // 0x3d9cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9CF4u, 0x3D9CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9CFCu;
label_3d9cfc:
    // 0x3d9cfc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d9cfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9d00:
    // 0x3d9d00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d9d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d9d04:
    // 0x3d9d04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9d08:
    // 0x3d9d08: 0xc0ea12a  jal         func_3A84A8
label_3d9d0c:
    if (ctx->pc == 0x3D9D0Cu) {
        ctx->pc = 0x3D9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D08u;
        // 0x3d9d0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9D10u;
        goto label_3d9d10;
    }
    ctx->pc = 0x3D9D08u;
    SET_GPR_U32(ctx, 31, 0x3D9D10u);
    ctx->pc = 0x3D9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9D08u;
    // 0x3d9d0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9D08u, 0x3D9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9D10u;
label_3d9d10:
    // 0x3d9d10: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d9d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9d14:
    // 0x3d9d14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d9d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d9d18:
    // 0x3d9d18: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d9d18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d9d1c:
    // 0x3d9d1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d9d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d9d20:
    // 0x3d9d20: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3d9d20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_3d9d24:
    // 0x3d9d24: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3d9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3d9d28:
    // 0x3d9d28: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3d9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3d9d2c:
    // 0x3d9d2c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3d9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3d9d30:
    // 0x3d9d30: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3d9d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3d9d34:
    // 0x3d9d34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d9d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d9d38:
    // 0x3d9d38: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d9d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d9d3c:
    // 0x3d9d3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d9d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9d40:
    // 0x3d9d40: 0x3e00008  jr          $ra
label_3d9d44:
    if (ctx->pc == 0x3D9D44u) {
        ctx->pc = 0x3D9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D40u;
        // 0x3d9d44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9D48u;
        goto label_fallthrough_0x3d9d40;
    }
    ctx->pc = 0x3D9D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D40u;
        // 0x3d9d44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9d40:
    ctx->pc = 0x3D9D48u;
}
