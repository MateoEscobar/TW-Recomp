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

// Function: sub_001A4690
// Address: 0x1a4690 - 0x1a46d0
void sub_001A4690_0x1a4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4690_0x1a4690");
#endif

    switch (ctx->pc) {
        case 0x1a46a4u: goto label_1a46a4;
        default: break;
    }

    ctx->pc = 0x1a4690u;

    // 0x1a4690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4694: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a469c: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1A469Cu;
    SET_GPR_U32(ctx, 31, 0x1A46A4u);
    ctx->pc = 0x1A46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A469Cu;
    // 0x1a46a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1A469Cu, 0x1A46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46A4u;
label_1a46a4:
    // 0x1a46a4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1a46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1a46a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a46a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a46ac: 0x246397c8  addiu       $v1, $v1, -0x6838
    ctx->pc = 0x1a46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940616));
    // 0x1a46b0: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x1a46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x1a46b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a46b8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1a46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1a46bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a46bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a46c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a46c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a46c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A46C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46C4u;
        // 0x1a46c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46CCu;
    // 0x1a46cc: 0x0  nop
    ctx->pc = 0x1a46ccu;
    // NOP
    ctx->pc = 0x1a46d0u;
}
