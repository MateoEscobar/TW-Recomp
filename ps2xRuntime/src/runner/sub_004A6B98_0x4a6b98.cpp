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

// Function: sub_004A6B98
// Address: 0x4a6b98 - 0x4a6d28
void sub_004A6B98_0x4a6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6B98_0x4a6b98");
#endif

    switch (ctx->pc) {
        case 0x4a6b98u: goto label_4a6b98;
        case 0x4a6b9cu: goto label_4a6b9c;
        case 0x4a6ba0u: goto label_4a6ba0;
        case 0x4a6ba4u: goto label_4a6ba4;
        case 0x4a6ba8u: goto label_4a6ba8;
        case 0x4a6bacu: goto label_4a6bac;
        case 0x4a6bb0u: goto label_4a6bb0;
        case 0x4a6bb4u: goto label_4a6bb4;
        case 0x4a6bb8u: goto label_4a6bb8;
        case 0x4a6bbcu: goto label_4a6bbc;
        case 0x4a6bc0u: goto label_4a6bc0;
        case 0x4a6bc4u: goto label_4a6bc4;
        case 0x4a6bc8u: goto label_4a6bc8;
        case 0x4a6bccu: goto label_4a6bcc;
        case 0x4a6bd0u: goto label_4a6bd0;
        case 0x4a6bd4u: goto label_4a6bd4;
        case 0x4a6bd8u: goto label_4a6bd8;
        case 0x4a6bdcu: goto label_4a6bdc;
        case 0x4a6be0u: goto label_4a6be0;
        case 0x4a6be4u: goto label_4a6be4;
        case 0x4a6be8u: goto label_4a6be8;
        case 0x4a6becu: goto label_4a6bec;
        case 0x4a6bf0u: goto label_4a6bf0;
        case 0x4a6bf4u: goto label_4a6bf4;
        case 0x4a6bf8u: goto label_4a6bf8;
        case 0x4a6bfcu: goto label_4a6bfc;
        case 0x4a6c00u: goto label_4a6c00;
        case 0x4a6c04u: goto label_4a6c04;
        case 0x4a6c08u: goto label_4a6c08;
        case 0x4a6c0cu: goto label_4a6c0c;
        case 0x4a6c10u: goto label_4a6c10;
        case 0x4a6c14u: goto label_4a6c14;
        case 0x4a6c18u: goto label_4a6c18;
        case 0x4a6c1cu: goto label_4a6c1c;
        case 0x4a6c20u: goto label_4a6c20;
        case 0x4a6c24u: goto label_4a6c24;
        case 0x4a6c28u: goto label_4a6c28;
        case 0x4a6c2cu: goto label_4a6c2c;
        case 0x4a6c30u: goto label_4a6c30;
        case 0x4a6c34u: goto label_4a6c34;
        case 0x4a6c38u: goto label_4a6c38;
        case 0x4a6c3cu: goto label_4a6c3c;
        case 0x4a6c40u: goto label_4a6c40;
        case 0x4a6c44u: goto label_4a6c44;
        case 0x4a6c48u: goto label_4a6c48;
        case 0x4a6c4cu: goto label_4a6c4c;
        case 0x4a6c50u: goto label_4a6c50;
        case 0x4a6c54u: goto label_4a6c54;
        case 0x4a6c58u: goto label_4a6c58;
        case 0x4a6c5cu: goto label_4a6c5c;
        case 0x4a6c60u: goto label_4a6c60;
        case 0x4a6c64u: goto label_4a6c64;
        case 0x4a6c68u: goto label_4a6c68;
        case 0x4a6c6cu: goto label_4a6c6c;
        case 0x4a6c70u: goto label_4a6c70;
        case 0x4a6c74u: goto label_4a6c74;
        case 0x4a6c78u: goto label_4a6c78;
        case 0x4a6c7cu: goto label_4a6c7c;
        case 0x4a6c80u: goto label_4a6c80;
        case 0x4a6c84u: goto label_4a6c84;
        case 0x4a6c88u: goto label_4a6c88;
        case 0x4a6c8cu: goto label_4a6c8c;
        case 0x4a6c90u: goto label_4a6c90;
        case 0x4a6c94u: goto label_4a6c94;
        case 0x4a6c98u: goto label_4a6c98;
        case 0x4a6c9cu: goto label_4a6c9c;
        case 0x4a6ca0u: goto label_4a6ca0;
        case 0x4a6ca4u: goto label_4a6ca4;
        case 0x4a6ca8u: goto label_4a6ca8;
        case 0x4a6cacu: goto label_4a6cac;
        case 0x4a6cb0u: goto label_4a6cb0;
        case 0x4a6cb4u: goto label_4a6cb4;
        case 0x4a6cb8u: goto label_4a6cb8;
        case 0x4a6cbcu: goto label_4a6cbc;
        case 0x4a6cc0u: goto label_4a6cc0;
        case 0x4a6cc4u: goto label_4a6cc4;
        case 0x4a6cc8u: goto label_4a6cc8;
        case 0x4a6cccu: goto label_4a6ccc;
        case 0x4a6cd0u: goto label_4a6cd0;
        case 0x4a6cd4u: goto label_4a6cd4;
        case 0x4a6cd8u: goto label_4a6cd8;
        case 0x4a6cdcu: goto label_4a6cdc;
        case 0x4a6ce0u: goto label_4a6ce0;
        case 0x4a6ce4u: goto label_4a6ce4;
        case 0x4a6ce8u: goto label_4a6ce8;
        case 0x4a6cecu: goto label_4a6cec;
        case 0x4a6cf0u: goto label_4a6cf0;
        case 0x4a6cf4u: goto label_4a6cf4;
        case 0x4a6cf8u: goto label_4a6cf8;
        case 0x4a6cfcu: goto label_4a6cfc;
        case 0x4a6d00u: goto label_4a6d00;
        case 0x4a6d04u: goto label_4a6d04;
        case 0x4a6d08u: goto label_4a6d08;
        case 0x4a6d0cu: goto label_4a6d0c;
        case 0x4a6d10u: goto label_4a6d10;
        case 0x4a6d14u: goto label_4a6d14;
        case 0x4a6d18u: goto label_4a6d18;
        case 0x4a6d1cu: goto label_4a6d1c;
        case 0x4a6d20u: goto label_4a6d20;
        case 0x4a6d24u: goto label_4a6d24;
        default: break;
    }

    ctx->pc = 0x4a6b98u;

label_4a6b98:
    // 0x4a6b98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a6b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a6b9c:
    // 0x4a6b9c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a6b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4a6ba0:
    // 0x4a6ba0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a6ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4a6ba4:
    // 0x4a6ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a6ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6ba8:
    // 0x4a6ba8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a6ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a6bac:
    // 0x4a6bac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a6bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4a6bb0:
    // 0x4a6bb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a6bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a6bb4:
    // 0x4a6bb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6bb8:
    // 0x4a6bb8: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_4a6bbc:
    if (ctx->pc == 0x4A6BBCu) {
        ctx->pc = 0x4A6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BB8u;
        // 0x4a6bbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BC0u;
        goto label_4a6bc0;
    }
    ctx->pc = 0x4A6BB8u;
    {
        const bool branch_taken_0x4a6bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BB8u;
        // 0x4a6bbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6bb8) {
            ctx->pc = 0x4A6D0Cu;
            goto label_4a6d0c;
        }
    }
    ctx->pc = 0x4A6BC0u;
label_4a6bc0:
    // 0x4a6bc0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4a6bc4:
    // 0x4a6bc4: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a6bc8:
    // 0x4a6bc8: 0x2446ad18  addiu       $a2, $v0, -0x52E8
    ctx->pc = 0x4a6bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4a6bcc:
    // 0x4a6bcc: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x4a6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_4a6bd0:
    // 0x4a6bd0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4a6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4a6bd4:
    // 0x4a6bd4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a6bd8:
    // 0x4a6bd8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4a6bdc:
    // 0x4a6bdc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_4a6be0:
    if (ctx->pc == 0x4A6BE0u) {
        ctx->pc = 0x4A6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BDCu;
        // 0x4a6be0: 0x458818  mult        $s1, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BE4u;
        goto label_4a6be4;
    }
    ctx->pc = 0x4A6BDCu;
    {
        const bool branch_taken_0x4a6bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BDCu;
        // 0x4a6be0: 0x458818  mult        $s1, $v0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6bdc) {
            ctx->pc = 0x4A6C20u;
            goto label_4a6c20;
        }
    }
    ctx->pc = 0x4A6BE4u;
label_4a6be4:
    // 0x4a6be4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4a6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4a6be8:
    // 0x4a6be8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x4a6be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4a6bec:
    // 0x4a6bec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4a6bf0:
    if (ctx->pc == 0x4A6BF0u) {
        ctx->pc = 0x4A6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BECu;
        // 0x4a6bf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BF4u;
        goto label_4a6bf4;
    }
    ctx->pc = 0x4A6BECu;
    {
        const bool branch_taken_0x4a6bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BECu;
        // 0x4a6bf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6bec) {
            ctx->pc = 0x4A6C04u;
            goto label_4a6c04;
        }
    }
    ctx->pc = 0x4A6BF4u;
label_4a6bf4:
    // 0x4a6bf4: 0xc129662  jal         func_4A5988
label_4a6bf8:
    if (ctx->pc == 0x4A6BF8u) {
        ctx->pc = 0x4A6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BF4u;
        // 0x4a6bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BFCu;
        goto label_4a6bfc;
    }
    ctx->pc = 0x4A6BF4u;
    SET_GPR_U32(ctx, 31, 0x4A6BFCu);
    ctx->pc = 0x4A6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6BF4u;
    // 0x4a6bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5988u, 0x4A6BF4u, 0x4A6BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6BFCu;
label_4a6bfc:
    // 0x4a6bfc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_4a6c00:
    if (ctx->pc == 0x4A6C00u) {
        ctx->pc = 0x4A6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BFCu;
        // 0x4a6c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C04u;
        goto label_4a6c04;
    }
    ctx->pc = 0x4A6BFCu;
    {
        const bool branch_taken_0x4a6bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BFCu;
        // 0x4a6c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6bfc) {
            ctx->pc = 0x4A6D0Cu;
            goto label_4a6d0c;
        }
    }
    ctx->pc = 0x4A6C04u;
label_4a6c04:
    // 0x4a6c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a6c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c08:
    // 0x4a6c08: 0xc1296c0  jal         func_4A5B00
label_4a6c0c:
    if (ctx->pc == 0x4A6C0Cu) {
        ctx->pc = 0x4A6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C08u;
        // 0x4a6c0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C10u;
        goto label_4a6c10;
    }
    ctx->pc = 0x4A6C08u;
    SET_GPR_U32(ctx, 31, 0x4A6C10u);
    ctx->pc = 0x4A6C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6C08u;
    // 0x4a6c0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5B00u, 0x4A6C08u, 0x4A6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6C10u;
label_4a6c10:
    // 0x4a6c10: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_4a6c14:
    if (ctx->pc == 0x4A6C14u) {
        ctx->pc = 0x4A6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C10u;
        // 0x4a6c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C18u;
        goto label_4a6c18;
    }
    ctx->pc = 0x4A6C10u;
    {
        const bool branch_taken_0x4a6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C10u;
        // 0x4a6c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c10) {
            ctx->pc = 0x4A6C74u;
            goto label_4a6c74;
        }
    }
    ctx->pc = 0x4A6C18u;
label_4a6c18:
    // 0x4a6c18: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4a6c1c:
    if (ctx->pc == 0x4A6C1Cu) {
        ctx->pc = 0x4A6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C18u;
        // 0x4a6c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C20u;
        goto label_4a6c20;
    }
    ctx->pc = 0x4A6C18u;
    {
        const bool branch_taken_0x4a6c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C18u;
        // 0x4a6c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c18) {
            ctx->pc = 0x4A6D0Cu;
            goto label_4a6d0c;
        }
    }
    ctx->pc = 0x4A6C20u;
label_4a6c20:
    // 0x4a6c20: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x4a6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_4a6c24:
    // 0x4a6c24: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x4a6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_4a6c28:
    // 0x4a6c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a6c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c2c:
    // 0x4a6c2c: 0x40f809  jalr        $v0
label_4a6c30:
    if (ctx->pc == 0x4A6C30u) {
        ctx->pc = 0x4A6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C2Cu;
        // 0x4a6c30: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C34u;
        goto label_4a6c34;
    }
    ctx->pc = 0x4A6C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6C34u);
        ctx->pc = 0x4A6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C2Cu;
        // 0x4a6c30: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6C2Cu, 0x4A6C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6C34u;
label_4a6c34:
    // 0x4a6c34: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_4a6c38:
    if (ctx->pc == 0x4A6C38u) {
        ctx->pc = 0x4A6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C34u;
        // 0x4a6c38: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C3Cu;
        goto label_4a6c3c;
    }
    ctx->pc = 0x4A6C34u;
    {
        const bool branch_taken_0x4a6c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C34u;
        // 0x4a6c38: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c34) {
            ctx->pc = 0x4A6C68u;
            goto label_4a6c68;
        }
    }
    ctx->pc = 0x4A6C3Cu;
label_4a6c3c:
    // 0x4a6c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6c40:
    // 0x4a6c40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a6c44:
    // 0x4a6c44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a6c48:
    // 0x4a6c48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a6c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c4c:
    // 0x4a6c4c: 0xc11eff2  jal         func_47BFC8
label_4a6c50:
    if (ctx->pc == 0x4A6C50u) {
        ctx->pc = 0x4A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C4Cu;
        // 0x4a6c50: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C54u;
        goto label_4a6c54;
    }
    ctx->pc = 0x4A6C4Cu;
    SET_GPR_U32(ctx, 31, 0x4A6C54u);
    ctx->pc = 0x4A6C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6C4Cu;
    // 0x4a6c50: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A6C4Cu, 0x4A6C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6C54u;
label_4a6c54:
    // 0x4a6c54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c58:
    // 0x4a6c58: 0xc11f024  jal         func_47C090
label_4a6c5c:
    if (ctx->pc == 0x4A6C5Cu) {
        ctx->pc = 0x4A6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C58u;
        // 0x4a6c5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C60u;
        goto label_4a6c60;
    }
    ctx->pc = 0x4A6C58u;
    SET_GPR_U32(ctx, 31, 0x4A6C60u);
    ctx->pc = 0x4A6C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6C58u;
    // 0x4a6c5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A6C58u, 0x4A6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6C60u;
label_4a6c60:
    // 0x4a6c60: 0x1000002a  b           . + 4 + (0x2A << 2)
label_4a6c64:
    if (ctx->pc == 0x4A6C64u) {
        ctx->pc = 0x4A6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C60u;
        // 0x4a6c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C68u;
        goto label_4a6c68;
    }
    ctx->pc = 0x4A6C60u;
    {
        const bool branch_taken_0x4a6c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C60u;
        // 0x4a6c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c60) {
            ctx->pc = 0x4A6D0Cu;
            goto label_4a6d0c;
        }
    }
    ctx->pc = 0x4A6C68u;
label_4a6c68:
    // 0x4a6c68: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x4a6c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_4a6c6c:
    // 0x4a6c6c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4a6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4a6c70:
    // 0x4a6c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6c74:
    // 0x4a6c74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4a6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a6c78:
    // 0x4a6c78: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_4a6c7c:
    if (ctx->pc == 0x4A6C7Cu) {
        ctx->pc = 0x4A6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C78u;
        // 0x4a6c7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C80u;
        goto label_4a6c80;
    }
    ctx->pc = 0x4A6C78u;
    {
        const bool branch_taken_0x4a6c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C78u;
        // 0x4a6c7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c78) {
            ctx->pc = 0x4A6D08u;
            goto label_4a6d08;
        }
    }
    ctx->pc = 0x4A6C80u;
label_4a6c80:
    // 0x4a6c80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a6c84:
    // 0x4a6c84: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4a6c88:
    if (ctx->pc == 0x4A6C88u) {
        ctx->pc = 0x4A6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C84u;
        // 0x4a6c88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C8Cu;
        goto label_4a6c8c;
    }
    ctx->pc = 0x4A6C84u;
    {
        const bool branch_taken_0x4a6c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C84u;
        // 0x4a6c88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c84) {
            ctx->pc = 0x4A6D08u;
            goto label_4a6d08;
        }
    }
    ctx->pc = 0x4A6C8Cu;
label_4a6c8c:
    // 0x4a6c8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a6c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c90:
    // 0x4a6c90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a6c94:
    // 0x4a6c94: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x4a6c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4a6c98:
    // 0x4a6c98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a6c9c:
    // 0x4a6c9c: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x4a6c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4a6ca0:
    // 0x4a6ca0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4a6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4a6ca4:
    // 0x4a6ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a6ca8:
    if (ctx->pc == 0x4A6CA8u) {
        ctx->pc = 0x4A6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CA4u;
        // 0x4a6ca8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6CACu;
        goto label_4a6cac;
    }
    ctx->pc = 0x4A6CA4u;
    {
        const bool branch_taken_0x4a6ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6ca4) {
            ctx->pc = 0x4A6CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6CA4u;
            // 0x4a6ca8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6CB8u;
            goto label_4a6cb8;
        }
    }
    ctx->pc = 0x4A6CACu;
label_4a6cac:
    // 0x4a6cac: 0x40f809  jalr        $v0
label_4a6cb0:
    if (ctx->pc == 0x4A6CB0u) {
        ctx->pc = 0x4A6CB4u;
        goto label_4a6cb4;
    }
    ctx->pc = 0x4A6CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6CB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6CACu, 0x4A6CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6CB4u;
label_4a6cb4:
    // 0x4a6cb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a6cb8:
    // 0x4a6cb8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4a6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4a6cbc:
    // 0x4a6cbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a6cc0:
    // 0x4a6cc0: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x4a6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4a6cc4:
    // 0x4a6cc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a6cc8:
    // 0x4a6cc8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_4a6ccc:
    if (ctx->pc == 0x4A6CCCu) {
        ctx->pc = 0x4A6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CC8u;
        // 0x4a6ccc: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6CD0u;
        goto label_4a6cd0;
    }
    ctx->pc = 0x4A6CC8u;
    {
        const bool branch_taken_0x4a6cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CC8u;
        // 0x4a6ccc: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6cc8) {
            ctx->pc = 0x4A6CE8u;
            goto label_4a6ce8;
        }
    }
    ctx->pc = 0x4A6CD0u;
label_4a6cd0:
    // 0x4a6cd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4a6cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4a6cd4:
    // 0x4a6cd4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4a6cd8:
    if (ctx->pc == 0x4A6CD8u) {
        ctx->pc = 0x4A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CD4u;
        // 0x4a6cd8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6CDCu;
        goto label_4a6cdc;
    }
    ctx->pc = 0x4A6CD4u;
    {
        const bool branch_taken_0x4a6cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CD4u;
        // 0x4a6cd8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6cd4) {
            ctx->pc = 0x4A6CECu;
            goto label_4a6cec;
        }
    }
    ctx->pc = 0x4A6CDCu;
label_4a6cdc:
    // 0x4a6cdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4a6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4a6ce0:
    // 0x4a6ce0: 0x60f809  jalr        $v1
label_4a6ce4:
    if (ctx->pc == 0x4A6CE4u) {
        ctx->pc = 0x4A6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CE0u;
        // 0x4a6ce4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6CE8u;
        goto label_4a6ce8;
    }
    ctx->pc = 0x4A6CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A6CE8u);
        ctx->pc = 0x4A6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CE0u;
        // 0x4a6ce4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6CE0u, 0x4A6CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6CE8u;
label_4a6ce8:
    // 0x4a6ce8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a6cec:
    // 0x4a6cec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a6cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4a6cf0:
    // 0x4a6cf0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4a6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4a6cf4:
    // 0x4a6cf4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4a6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_4a6cf8:
    // 0x4a6cf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a6cfc:
    // 0x4a6cfc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4a6cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a6d00:
    // 0x4a6d00: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_4a6d04:
    if (ctx->pc == 0x4A6D04u) {
        ctx->pc = 0x4A6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D00u;
        // 0x4a6d04: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D08u;
        goto label_4a6d08;
    }
    ctx->pc = 0x4A6D00u;
    {
        const bool branch_taken_0x4a6d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D00u;
        // 0x4a6d04: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d00) {
            ctx->pc = 0x4A6C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6c90;
        }
    }
    ctx->pc = 0x4A6D08u;
label_4a6d08:
    // 0x4a6d08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a6d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6d0c:
    // 0x4a6d0c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a6d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a6d10:
    // 0x4a6d10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a6d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6d14:
    // 0x4a6d14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a6d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6d18:
    // 0x4a6d18: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a6d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6d1c:
    // 0x4a6d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a6d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6d20:
    // 0x4a6d20: 0x3e00008  jr          $ra
label_4a6d24:
    if (ctx->pc == 0x4A6D24u) {
        ctx->pc = 0x4A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D20u;
        // 0x4a6d24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D28u;
        goto label_fallthrough_0x4a6d20;
    }
    ctx->pc = 0x4A6D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D20u;
        // 0x4a6d24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a6d20:
    ctx->pc = 0x4A6D28u;
}
