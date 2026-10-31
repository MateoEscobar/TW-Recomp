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

// Function: sub_00250BB8
// Address: 0x250bb8 - 0x250c00
void sub_00250BB8_0x250bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250BB8_0x250bb8");
#endif

    switch (ctx->pc) {
        case 0x250bd4u: goto label_250bd4;
        default: break;
    }

    ctx->pc = 0x250bb8u;

    // 0x250bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250bbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x250bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x250bc0: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x250bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x250bc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x250bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250bcc: 0xc094258  jal         func_250960
    ctx->pc = 0x250BCCu;
    SET_GPR_U32(ctx, 31, 0x250BD4u);
    ctx->pc = 0x250BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250BCCu;
    // 0x250bd0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250960u, 0x250BCCu, 0x250BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250BD4u;
label_250bd4:
    // 0x250bd4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x250BD4u;
    {
        const bool branch_taken_0x250bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250bd4) {
            ctx->pc = 0x250BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250BD4u;
            // 0x250bd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250BF4u;
            goto label_250bf4;
        }
    }
    ctx->pc = 0x250BDCu;
    // 0x250bdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x250bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250be0: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x250be0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x250be4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x250be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x250be8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x250BE8u;
    {
        const bool branch_taken_0x250be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250be8) {
            ctx->pc = 0x250BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250BE8u;
            // 0x250bec: 0xa4500004  sh          $s0, 0x4($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250BF0u;
            goto label_250bf0;
        }
    }
    ctx->pc = 0x250BF0u;
label_250bf0:
    // 0x250bf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x250bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_250bf4:
    // 0x250bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x250BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BF8u;
        // 0x250bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250C00u;
}
