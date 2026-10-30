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

// Function: sub_003A8790
// Address: 0x3a8790 - 0x3a87d8
void sub_003A8790_0x3a8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8790_0x3a8790");
#endif

    switch (ctx->pc) {
        case 0x3a8790u: goto label_3a8790;
        case 0x3a8794u: goto label_3a8794;
        case 0x3a8798u: goto label_3a8798;
        case 0x3a879cu: goto label_3a879c;
        case 0x3a87a0u: goto label_3a87a0;
        case 0x3a87a4u: goto label_3a87a4;
        case 0x3a87a8u: goto label_3a87a8;
        case 0x3a87acu: goto label_3a87ac;
        case 0x3a87b0u: goto label_3a87b0;
        case 0x3a87b4u: goto label_3a87b4;
        case 0x3a87b8u: goto label_3a87b8;
        case 0x3a87bcu: goto label_3a87bc;
        case 0x3a87c0u: goto label_3a87c0;
        case 0x3a87c4u: goto label_3a87c4;
        case 0x3a87c8u: goto label_3a87c8;
        case 0x3a87ccu: goto label_3a87cc;
        case 0x3a87d0u: goto label_3a87d0;
        case 0x3a87d4u: goto label_3a87d4;
        default: break;
    }

    ctx->pc = 0x3a8790u;

label_3a8790:
    // 0x3a8790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a8794:
    // 0x3a8794: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a8794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a8798:
    // 0x3a8798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a879c:
    // 0x3a879c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a87a0:
    // 0x3a87a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a87a4:
    // 0x3a87a4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3a87a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a87a8:
    // 0x3a87a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a87ac:
    // 0x3a87ac: 0x40f809  jalr        $v0
label_3a87b0:
    if (ctx->pc == 0x3A87B0u) {
        ctx->pc = 0x3A87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87ACu;
        // 0x3a87b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A87B4u;
        goto label_3a87b4;
    }
    ctx->pc = 0x3A87ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A87B4u);
        ctx->pc = 0x3A87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87ACu;
        // 0x3a87b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A87ACu, 0x3A87B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A87B4u;
label_3a87b4:
    // 0x3a87b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a87b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a87b8:
    // 0x3a87b8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3a87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3a87bc:
    // 0x3a87bc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_3a87c0:
    if (ctx->pc == 0x3A87C0u) {
        ctx->pc = 0x3A87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87BCu;
        // 0x3a87c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A87C4u;
        goto label_3a87c4;
    }
    ctx->pc = 0x3A87BCu;
    {
        const bool branch_taken_0x3a87bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87BCu;
        // 0x3a87c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87bc) {
            ctx->pc = 0x3A87CCu;
            goto label_3a87cc;
        }
    }
    ctx->pc = 0x3A87C4u;
label_3a87c4:
    // 0x3a87c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a87c8:
    // 0x3a87c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3a87cc:
    // 0x3a87cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a87ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a87d0:
    // 0x3a87d0: 0x3e00008  jr          $ra
label_3a87d4:
    if (ctx->pc == 0x3A87D4u) {
        ctx->pc = 0x3A87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87D0u;
        // 0x3a87d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A87D8u;
        goto label_fallthrough_0x3a87d0;
    }
    ctx->pc = 0x3A87D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87D0u;
        // 0x3a87d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A87D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a87d0:
    ctx->pc = 0x3A87D8u;
}
