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

// Function: sub_0042F548
// Address: 0x42f548 - 0x42f598
void sub_0042F548_0x42f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F548_0x42f548");
#endif

    switch (ctx->pc) {
        case 0x42f56cu: goto label_42f56c;
        case 0x42f584u: goto label_42f584;
        default: break;
    }

    ctx->pc = 0x42f548u;

    // 0x42f548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f54c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x42f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x42f550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42f554: 0x8c625a20  lw          $v0, 0x5A20($v1)
    ctx->pc = 0x42f554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A20u));
    // 0x42f558: 0x24705a20  addiu       $s0, $v1, 0x5A20
    ctx->pc = 0x42f558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23072));
    // 0x42f55c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42F55Cu;
    {
        const bool branch_taken_0x42f55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F55Cu;
        // 0x42f560: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f55c) {
            ctx->pc = 0x42F584u;
            goto label_42f584;
        }
    }
    ctx->pc = 0x42F564u;
    // 0x42f564: 0xc10b7e0  jal         func_42DF80
    ctx->pc = 0x42F564u;
    SET_GPR_U32(ctx, 31, 0x42F56Cu);
    ctx->pc = 0x42DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DF80u, 0x42F564u, 0x42F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F56Cu;
label_42f56c:
    // 0x42f56c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42f570: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x42f570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x42f574: 0x24a5c360  addiu       $a1, $a1, -0x3CA0
    ctx->pc = 0x42f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951776));
    // 0x42f578: 0x24c671c8  addiu       $a2, $a2, 0x71C8
    ctx->pc = 0x42f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29128));
    // 0x42f57c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x42F57Cu;
    SET_GPR_U32(ctx, 31, 0x42F584u);
    ctx->pc = 0x42F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F57Cu;
    // 0x42f580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x42F57Cu, 0x42F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F584u;
label_42f584:
    // 0x42f584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f590: 0x3e00008  jr          $ra
    ctx->pc = 0x42F590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F590u;
        // 0x42f594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F598u;
}
