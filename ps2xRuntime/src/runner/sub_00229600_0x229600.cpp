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

// Function: sub_00229600
// Address: 0x229600 - 0x229620
void sub_00229600_0x229600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229600_0x229600");
#endif

    switch (ctx->pc) {
        case 0x229614u: goto label_229614;
        default: break;
    }

    ctx->pc = 0x229600u;

    // 0x229600: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x229600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x229604: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x229608: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x229608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22960c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x22960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x229610: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x229610u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_229614:
    // 0x229614: 0x3e00008  jr          $ra
    ctx->pc = 0x229614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229614u;
        // 0x229618: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22961Cu;
    // 0x22961c: 0x0  nop
    ctx->pc = 0x22961cu;
    // NOP
    ctx->pc = 0x229620u;
}
