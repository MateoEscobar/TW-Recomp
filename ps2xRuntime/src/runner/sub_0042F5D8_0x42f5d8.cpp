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

// Function: sub_0042F5D8
// Address: 0x42f5d8 - 0x42f618
void sub_0042F5D8_0x42f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F5D8_0x42f5d8");
#endif

    switch (ctx->pc) {
        case 0x42f604u: goto label_42f604;
        default: break;
    }

    ctx->pc = 0x42f5d8u;

    // 0x42f5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f5dc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x42f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x42f5e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42f5e4: 0x8c6271d0  lw          $v0, 0x71D0($v1)
    ctx->pc = 0x42f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5971D0u));
    // 0x42f5e8: 0x247071d0  addiu       $s0, $v1, 0x71D0
    ctx->pc = 0x42f5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29136));
    // 0x42f5ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42F5ECu;
    {
        const bool branch_taken_0x42f5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F5ECu;
        // 0x42f5f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f5ec) {
            ctx->pc = 0x42F604u;
            goto label_42f604;
        }
    }
    ctx->pc = 0x42F5F4u;
    // 0x42f5f4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42f5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42f5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f5fc: 0xc10bc00  jal         func_42F000
    ctx->pc = 0x42F5FCu;
    SET_GPR_U32(ctx, 31, 0x42F604u);
    ctx->pc = 0x42F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F5FCu;
    // 0x42f600: 0x24a5c370  addiu       $a1, $a1, -0x3C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F000u, 0x42F5FCu, 0x42F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F604u;
label_42f604:
    // 0x42f604: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f610: 0x3e00008  jr          $ra
    ctx->pc = 0x42F610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F610u;
        // 0x42f614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F618u;
}
