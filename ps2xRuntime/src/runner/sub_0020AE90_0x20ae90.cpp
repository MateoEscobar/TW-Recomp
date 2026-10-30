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

// Function: sub_0020AE90
// Address: 0x20ae90 - 0x20aee8
void sub_0020AE90_0x20ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AE90_0x20ae90");
#endif

    switch (ctx->pc) {
        case 0x20ae90u: goto label_20ae90;
        case 0x20ae94u: goto label_20ae94;
        case 0x20ae98u: goto label_20ae98;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aea0u: goto label_20aea0;
        case 0x20aea4u: goto label_20aea4;
        case 0x20aea8u: goto label_20aea8;
        case 0x20aeacu: goto label_20aeac;
        case 0x20aeb0u: goto label_20aeb0;
        case 0x20aeb4u: goto label_20aeb4;
        case 0x20aeb8u: goto label_20aeb8;
        case 0x20aebcu: goto label_20aebc;
        case 0x20aec0u: goto label_20aec0;
        case 0x20aec4u: goto label_20aec4;
        case 0x20aec8u: goto label_20aec8;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aed0u: goto label_20aed0;
        case 0x20aed4u: goto label_20aed4;
        case 0x20aed8u: goto label_20aed8;
        case 0x20aedcu: goto label_20aedc;
        case 0x20aee0u: goto label_20aee0;
        case 0x20aee4u: goto label_20aee4;
        default: break;
    }

    ctx->pc = 0x20ae90u;

label_20ae90:
    // 0x20ae90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20ae94:
    // 0x20ae94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20ae98:
    // 0x20ae98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20ae9c:
    // 0x20ae9c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_20aea0:
    // 0x20aea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20aea4:
    // 0x20aea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20aea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20aea8:
    // 0x20aea8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20aeac:
    // 0x20aeac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20aeb0:
    // 0x20aeb0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20aeb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20aeb4:
    // 0x20aeb4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20aeb8:
    // 0x20aeb8: 0xa0f809  jalr        $a1
label_20aebc:
    if (ctx->pc == 0x20AEBCu) {
        ctx->pc = 0x20AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEB8u;
        // 0x20aebc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEC0u;
        goto label_20aec0;
    }
    ctx->pc = 0x20AEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20AEC0u);
        ctx->pc = 0x20AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEB8u;
        // 0x20aebc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AEB8u, 0x20AEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AEC0u;
label_20aec0:
    // 0x20aec0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20aec4:
    // 0x20aec4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20aec8:
    // 0x20aec8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20aecc:
    // 0x20aecc: 0x60f809  jalr        $v1
label_20aed0:
    if (ctx->pc == 0x20AED0u) {
        ctx->pc = 0x20AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AECCu;
        // 0x20aed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AED4u;
        goto label_20aed4;
    }
    ctx->pc = 0x20AECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AED4u);
        ctx->pc = 0x20AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AECCu;
        // 0x20aed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AECCu, 0x20AED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AED4u;
label_20aed4:
    // 0x20aed4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x20aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20aed8:
    // 0x20aed8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20aed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20aedc:
    // 0x20aedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20aedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20aee0:
    // 0x20aee0: 0x3e00008  jr          $ra
label_20aee4:
    if (ctx->pc == 0x20AEE4u) {
        ctx->pc = 0x20AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEE0u;
        // 0x20aee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEE8u;
        goto label_fallthrough_0x20aee0;
    }
    ctx->pc = 0x20AEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEE0u;
        // 0x20aee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20aee0:
    ctx->pc = 0x20AEE8u;
}
