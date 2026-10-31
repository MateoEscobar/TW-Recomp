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

// Function: sub_001D1C48
// Address: 0x1d1c48 - 0x1d1cd8
void sub_001D1C48_0x1d1c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1C48_0x1d1c48");
#endif

    switch (ctx->pc) {
        case 0x1d1c48u: goto label_1d1c48;
        case 0x1d1c4cu: goto label_1d1c4c;
        case 0x1d1c50u: goto label_1d1c50;
        case 0x1d1c54u: goto label_1d1c54;
        case 0x1d1c58u: goto label_1d1c58;
        case 0x1d1c5cu: goto label_1d1c5c;
        case 0x1d1c60u: goto label_1d1c60;
        case 0x1d1c64u: goto label_1d1c64;
        case 0x1d1c68u: goto label_1d1c68;
        case 0x1d1c6cu: goto label_1d1c6c;
        case 0x1d1c70u: goto label_1d1c70;
        case 0x1d1c74u: goto label_1d1c74;
        case 0x1d1c78u: goto label_1d1c78;
        case 0x1d1c7cu: goto label_1d1c7c;
        case 0x1d1c80u: goto label_1d1c80;
        case 0x1d1c84u: goto label_1d1c84;
        case 0x1d1c88u: goto label_1d1c88;
        case 0x1d1c8cu: goto label_1d1c8c;
        case 0x1d1c90u: goto label_1d1c90;
        case 0x1d1c94u: goto label_1d1c94;
        case 0x1d1c98u: goto label_1d1c98;
        case 0x1d1c9cu: goto label_1d1c9c;
        case 0x1d1ca0u: goto label_1d1ca0;
        case 0x1d1ca4u: goto label_1d1ca4;
        case 0x1d1ca8u: goto label_1d1ca8;
        case 0x1d1cacu: goto label_1d1cac;
        case 0x1d1cb0u: goto label_1d1cb0;
        case 0x1d1cb4u: goto label_1d1cb4;
        case 0x1d1cb8u: goto label_1d1cb8;
        case 0x1d1cbcu: goto label_1d1cbc;
        case 0x1d1cc0u: goto label_1d1cc0;
        case 0x1d1cc4u: goto label_1d1cc4;
        case 0x1d1cc8u: goto label_1d1cc8;
        case 0x1d1cccu: goto label_1d1ccc;
        case 0x1d1cd0u: goto label_1d1cd0;
        case 0x1d1cd4u: goto label_1d1cd4;
        default: break;
    }

    ctx->pc = 0x1d1c48u;

label_1d1c48:
    // 0x1d1c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d1c4c:
    // 0x1d1c4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d1c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d1c50:
    // 0x1d1c50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d1c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d1c54:
    // 0x1d1c54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d1c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d1c58:
    // 0x1d1c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c5c:
    // 0x1d1c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1c60:
    // 0x1d1c60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d1c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c64:
    // 0x1d1c64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1c68:
    // 0x1d1c68: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1d1c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1d1c6c:
    // 0x1d1c6c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1d1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1d1c70:
    // 0x1d1c70: 0x60f809  jalr        $v1
label_1d1c74:
    if (ctx->pc == 0x1D1C74u) {
        ctx->pc = 0x1D1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C70u;
        // 0x1d1c74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C78u;
        goto label_1d1c78;
    }
    ctx->pc = 0x1D1C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1C78u);
        ctx->pc = 0x1D1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C70u;
        // 0x1d1c74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C70u, 0x1D1C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C78u;
label_1d1c78:
    // 0x1d1c78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1d1c7c:
    // 0x1d1c7c: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_1d1c80:
    // 0x1d1c80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1c84:
    // 0x1d1c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c88:
    // 0x1d1c88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d1c8c:
    // 0x1d1c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c90:
    // 0x1d1c90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c94:
    // 0x1d1c94: 0xc063514  jal         func_18D450
label_1d1c98:
    if (ctx->pc == 0x1D1C98u) {
        ctx->pc = 0x1D1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C94u;
        // 0x1d1c98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C9Cu;
        goto label_1d1c9c;
    }
    ctx->pc = 0x1D1C94u;
    SET_GPR_U32(ctx, 31, 0x1D1C9Cu);
    ctx->pc = 0x1D1C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C94u;
    // 0x1d1c98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x1D1C94u, 0x1D1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C9Cu;
label_1d1c9c:
    // 0x1d1c9c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1d1c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d1ca0:
    // 0x1d1ca0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1d1ca4:
    if (ctx->pc == 0x1D1CA4u) {
        ctx->pc = 0x1D1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CA0u;
        // 0x1d1ca4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1CA8u;
        goto label_1d1ca8;
    }
    ctx->pc = 0x1D1CA0u;
    {
        const bool branch_taken_0x1d1ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CA0u;
        // 0x1d1ca4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ca0) {
            ctx->pc = 0x1D1C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1c80;
        }
    }
    ctx->pc = 0x1D1CA8u;
label_1d1ca8:
    // 0x1d1ca8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1d1cac:
    // 0x1d1cac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d1cb0:
    if (ctx->pc == 0x1D1CB0u) {
        ctx->pc = 0x1D1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CACu;
        // 0x1d1cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1CB4u;
        goto label_1d1cb4;
    }
    ctx->pc = 0x1D1CACu;
    {
        const bool branch_taken_0x1d1cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CACu;
        // 0x1d1cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cac) {
            ctx->pc = 0x1D1CC0u;
            goto label_1d1cc0;
        }
    }
    ctx->pc = 0x1D1CB4u;
label_1d1cb4:
    // 0x1d1cb4: 0xa062001b  sb          $v0, 0x1B($v1)
    ctx->pc = 0x1d1cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 2));
label_1d1cb8:
    // 0x1d1cb8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1d1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1d1cbc:
    // 0x1d1cbc: 0xa060001e  sb          $zero, 0x1E($v1)
    ctx->pc = 0x1d1cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 0));
label_1d1cc0:
    // 0x1d1cc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d1cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1cc4:
    // 0x1d1cc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d1cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1cc8:
    // 0x1d1cc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d1cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1ccc:
    // 0x1d1ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1cd0:
    // 0x1d1cd0: 0x3e00008  jr          $ra
label_1d1cd4:
    if (ctx->pc == 0x1D1CD4u) {
        ctx->pc = 0x1D1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CD0u;
        // 0x1d1cd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1CD8u;
        goto label_fallthrough_0x1d1cd0;
    }
    ctx->pc = 0x1D1CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CD0u;
        // 0x1d1cd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d1cd0:
    ctx->pc = 0x1D1CD8u;
}
