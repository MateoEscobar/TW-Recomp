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

// Function: sub_0037B670
// Address: 0x37b670 - 0x37b6a8
void sub_0037B670_0x37b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B670_0x37b670");
#endif

    switch (ctx->pc) {
        case 0x37b684u: goto label_37b684;
        case 0x37b690u: goto label_37b690;
        default: break;
    }

    ctx->pc = 0x37b670u;

    // 0x37b670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b67c: 0xc10776e  jal         func_41DDB8
    ctx->pc = 0x37B67Cu;
    SET_GPR_U32(ctx, 31, 0x37B684u);
    ctx->pc = 0x37B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B67Cu;
    // 0x37b680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DDB8u, 0x37B67Cu, 0x37B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B684u;
label_37b684:
    // 0x37b684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b688: 0xc102562  jal         func_409588
    ctx->pc = 0x37B688u;
    SET_GPR_U32(ctx, 31, 0x37B690u);
    ctx->pc = 0x37B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B688u;
    // 0x37b68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37B688u, 0x37B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B690u;
label_37b690:
    // 0x37b690: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b69c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B69Cu;
        // 0x37b6a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B6A4u;
    // 0x37b6a4: 0x0  nop
    ctx->pc = 0x37b6a4u;
    // NOP
    ctx->pc = 0x37b6a8u;
}
