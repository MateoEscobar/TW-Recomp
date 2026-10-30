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

// Function: sub_00208E58
// Address: 0x208e58 - 0x208eb0
void sub_00208E58_0x208e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208E58_0x208e58");
#endif

    switch (ctx->pc) {
        case 0x208e58u: goto label_208e58;
        case 0x208e5cu: goto label_208e5c;
        case 0x208e60u: goto label_208e60;
        case 0x208e64u: goto label_208e64;
        case 0x208e68u: goto label_208e68;
        case 0x208e6cu: goto label_208e6c;
        case 0x208e70u: goto label_208e70;
        case 0x208e74u: goto label_208e74;
        case 0x208e78u: goto label_208e78;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e80u: goto label_208e80;
        case 0x208e84u: goto label_208e84;
        case 0x208e88u: goto label_208e88;
        case 0x208e8cu: goto label_208e8c;
        case 0x208e90u: goto label_208e90;
        case 0x208e94u: goto label_208e94;
        case 0x208e98u: goto label_208e98;
        case 0x208e9cu: goto label_208e9c;
        case 0x208ea0u: goto label_208ea0;
        case 0x208ea4u: goto label_208ea4;
        case 0x208ea8u: goto label_208ea8;
        case 0x208eacu: goto label_208eac;
        default: break;
    }

    ctx->pc = 0x208e58u;

label_208e58:
    // 0x208e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_208e5c:
    // 0x208e5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_208e60:
    // 0x208e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x208e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_208e64:
    // 0x208e64: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x208e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_208e68:
    // 0x208e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208e6c:
    // 0x208e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208e70:
    // 0x208e70: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x208e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_208e74:
    // 0x208e74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x208e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208e78:
    // 0x208e78: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x208e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_208e7c:
    // 0x208e7c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x208e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_208e80:
    // 0x208e80: 0xa0f809  jalr        $a1
label_208e84:
    if (ctx->pc == 0x208E84u) {
        ctx->pc = 0x208E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E80u;
        // 0x208e84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E88u;
        goto label_208e88;
    }
    ctx->pc = 0x208E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x208E88u);
        ctx->pc = 0x208E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E80u;
        // 0x208e84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E80u, 0x208E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208E88u;
label_208e88:
    // 0x208e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208e8c:
    // 0x208e8c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x208e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_208e90:
    // 0x208e90: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x208e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_208e94:
    // 0x208e94: 0x60f809  jalr        $v1
label_208e98:
    if (ctx->pc == 0x208E98u) {
        ctx->pc = 0x208E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E94u;
        // 0x208e98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E9Cu;
        goto label_208e9c;
    }
    ctx->pc = 0x208E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208E9Cu);
        ctx->pc = 0x208E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E94u;
        // 0x208e98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E94u, 0x208E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208E9Cu;
label_208e9c:
    // 0x208e9c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x208e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_208ea0:
    // 0x208ea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x208ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208ea4:
    // 0x208ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208ea8:
    // 0x208ea8: 0x3e00008  jr          $ra
label_208eac:
    if (ctx->pc == 0x208EACu) {
        ctx->pc = 0x208EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA8u;
        // 0x208eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EB0u;
        goto label_fallthrough_0x208ea8;
    }
    ctx->pc = 0x208EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA8u;
        // 0x208eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208ea8:
    ctx->pc = 0x208EB0u;
}
