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

// Function: sub_00159490
// Address: 0x159490 - 0x1594c0
void sub_00159490_0x159490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159490_0x159490");
#endif

    switch (ctx->pc) {
        case 0x1594b4u: goto label_1594b4;
        default: break;
    }

    ctx->pc = 0x159490u;

    // 0x159490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159494: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x159494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x159498: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159498u;
    {
        const bool branch_taken_0x159498 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159498u;
        // 0x15949c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159498) {
            ctx->pc = 0x1594B4u;
            goto label_1594b4;
        }
    }
    ctx->pc = 0x1594A0u;
    // 0x1594a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1594A0u;
    {
        const bool branch_taken_0x1594a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594A0u;
        // 0x1594a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594a0) {
            ctx->pc = 0x1594B8u;
            goto label_1594b8;
        }
    }
    ctx->pc = 0x1594A8u;
    // 0x1594a8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1594a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1594ac: 0xc0560aa  jal         func_1582A8
    ctx->pc = 0x1594ACu;
    SET_GPR_U32(ctx, 31, 0x1594B4u);
    ctx->pc = 0x1594B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594ACu;
    // 0x1594b0: 0x248456b8  addiu       $a0, $a0, 0x56B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1582A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1582A8u, 0x1594ACu, 0x1594B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594B4u;
label_1594b4:
    // 0x1594b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1594b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1594b8:
    // 0x1594b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1594B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594B8u;
        // 0x1594bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1594B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1594C0u;
}
