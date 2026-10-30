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

// Function: sub_00423308
// Address: 0x423308 - 0x423338
void sub_00423308_0x423308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423308_0x423308");
#endif

    switch (ctx->pc) {
        case 0x42332cu: goto label_42332c;
        default: break;
    }

    ctx->pc = 0x423308u;

    // 0x423308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x423308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42330c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x42330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x423310: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x423310u;
    {
        const bool branch_taken_0x423310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x423314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423310u;
        // 0x423314: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423310) {
            ctx->pc = 0x42332Cu;
            goto label_42332c;
        }
    }
    ctx->pc = 0x423318u;
    // 0x423318: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x423318u;
    {
        const bool branch_taken_0x423318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423318u;
        // 0x42331c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423318) {
            ctx->pc = 0x423330u;
            goto label_423330;
        }
    }
    ctx->pc = 0x423320u;
    // 0x423320: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x423320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x423324: 0xc1089f6  jal         func_4227D8
    ctx->pc = 0x423324u;
    SET_GPR_U32(ctx, 31, 0x42332Cu);
    ctx->pc = 0x423328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423324u;
    // 0x423328: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4227D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4227D8u, 0x423324u, 0x42332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42332Cu;
label_42332c:
    // 0x42332c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_423330:
    // 0x423330: 0x3e00008  jr          $ra
    ctx->pc = 0x423330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423330u;
        // 0x423334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423338u;
}
