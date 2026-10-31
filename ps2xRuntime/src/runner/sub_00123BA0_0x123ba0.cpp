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

// Function: sub_00123BA0
// Address: 0x123ba0 - 0x123bf0
void sub_00123BA0_0x123ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123BA0_0x123ba0");
#endif

    switch (ctx->pc) {
        case 0x123ba0u: goto label_123ba0;
        case 0x123ba4u: goto label_123ba4;
        case 0x123ba8u: goto label_123ba8;
        case 0x123bacu: goto label_123bac;
        case 0x123bb0u: goto label_123bb0;
        case 0x123bb4u: goto label_123bb4;
        case 0x123bb8u: goto label_123bb8;
        case 0x123bbcu: goto label_123bbc;
        case 0x123bc0u: goto label_123bc0;
        case 0x123bc4u: goto label_123bc4;
        case 0x123bc8u: goto label_123bc8;
        case 0x123bccu: goto label_123bcc;
        case 0x123bd0u: goto label_123bd0;
        case 0x123bd4u: goto label_123bd4;
        case 0x123bd8u: goto label_123bd8;
        case 0x123bdcu: goto label_123bdc;
        case 0x123be0u: goto label_123be0;
        case 0x123be4u: goto label_123be4;
        case 0x123be8u: goto label_123be8;
        case 0x123becu: goto label_123bec;
        default: break;
    }

    ctx->pc = 0x123ba0u;

label_123ba0:
    // 0x123ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_123ba4:
    // 0x123ba4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x123ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_123ba8:
    // 0x123ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_123bac:
    // 0x123bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123bb0:
    // 0x123bb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x123bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_123bb4:
    // 0x123bb4: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x123bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_123bb8:
    // 0x123bb8: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_123bbc:
    // 0x123bbc: 0x40f809  jalr        $v0
label_123bc0:
    if (ctx->pc == 0x123BC0u) {
        ctx->pc = 0x123BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BBCu;
        // 0x123bc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BC4u;
        goto label_123bc4;
    }
    ctx->pc = 0x123BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123BC4u);
        ctx->pc = 0x123BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BBCu;
        // 0x123bc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123BBCu, 0x123BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123BC4u;
label_123bc4:
    // 0x123bc4: 0xc047e6c  jal         func_11F9B0
label_123bc8:
    if (ctx->pc == 0x123BC8u) {
        ctx->pc = 0x123BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BC4u;
        // 0x123bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BCCu;
        goto label_123bcc;
    }
    ctx->pc = 0x123BC4u;
    SET_GPR_U32(ctx, 31, 0x123BCCu);
    ctx->pc = 0x123BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BC4u;
    // 0x123bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x123BC4u, 0x123BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BCCu;
label_123bcc:
    // 0x123bcc: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_123bd0:
    if (ctx->pc == 0x123BD0u) {
        ctx->pc = 0x123BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BCCu;
        // 0x123bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BD4u;
        goto label_123bd4;
    }
    ctx->pc = 0x123BCCu;
    {
        const bool branch_taken_0x123bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x123BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BCCu;
        // 0x123bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bcc) {
            ctx->pc = 0x123BDCu;
            goto label_123bdc;
        }
    }
    ctx->pc = 0x123BD4u;
label_123bd4:
    // 0x123bd4: 0xc047910  jal         func_11E440
label_123bd8:
    if (ctx->pc == 0x123BD8u) {
        ctx->pc = 0x123BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BD4u;
        // 0x123bd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BDCu;
        goto label_123bdc;
    }
    ctx->pc = 0x123BD4u;
    SET_GPR_U32(ctx, 31, 0x123BDCu);
    ctx->pc = 0x123BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BD4u;
    // 0x123bd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x123BD4u, 0x123BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BDCu;
label_123bdc:
    // 0x123bdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x123bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123be0:
    // 0x123be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123be4:
    // 0x123be4: 0x3e00008  jr          $ra
label_123be8:
    if (ctx->pc == 0x123BE8u) {
        ctx->pc = 0x123BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BE4u;
        // 0x123be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BECu;
        goto label_123bec;
    }
    ctx->pc = 0x123BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BE4u;
        // 0x123be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123BECu;
label_123bec:
    // 0x123bec: 0x0  nop
    ctx->pc = 0x123becu;
    // NOP
    ctx->pc = 0x123bf0u;
}
