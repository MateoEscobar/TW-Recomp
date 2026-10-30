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

// Function: sub_003297D0
// Address: 0x3297d0 - 0x329820
void sub_003297D0_0x3297d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003297D0_0x3297d0");
#endif

    switch (ctx->pc) {
        case 0x329800u: goto label_329800;
        default: break;
    }

    ctx->pc = 0x3297d0u;

    // 0x3297d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3297d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3297d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3297d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3297d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3297d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3297dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3297dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3297e0: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x3297e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3297e4: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3297E4u;
    {
        const bool branch_taken_0x3297e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x3297E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E4u;
        // 0x3297e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297e4) {
            ctx->pc = 0x32980Cu;
            goto label_32980c;
        }
    }
    ctx->pc = 0x3297ECu;
    // 0x3297ec: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x3297ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3297f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3297F0u;
    {
        const bool branch_taken_0x3297f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3297f0) {
            ctx->pc = 0x3297F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3297F0u;
            // 0x3297f4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329804u;
            goto label_329804;
        }
    }
    ctx->pc = 0x3297F8u;
    // 0x3297f8: 0xc0ca578  jal         func_3295E0
    ctx->pc = 0x3297F8u;
    SET_GPR_U32(ctx, 31, 0x329800u);
    ctx->pc = 0x3297FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297F8u;
    // 0x3297fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3295E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3295E0u, 0x3297F8u, 0x329800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329800u;
label_329800:
    // 0x329800: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x329800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_329804:
    // 0x329804: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x329804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x329808: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x329808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_32980c:
    // 0x32980c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32980cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329818: 0x3e00008  jr          $ra
    ctx->pc = 0x329818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329818u;
        // 0x32981c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329820u;
}
