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

// Function: sub_003A2CF0
// Address: 0x3a2cf0 - 0x3a2d20
void sub_003A2CF0_0x3a2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2CF0_0x3a2cf0");
#endif

    switch (ctx->pc) {
        case 0x3a2d08u: goto label_3a2d08;
        default: break;
    }

    ctx->pc = 0x3a2cf0u;

    // 0x3a2cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a2cf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a2cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2cf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a2cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a2cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a2d00: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x3A2D00u;
    SET_GPR_U32(ctx, 31, 0x3A2D08u);
    ctx->pc = 0x3A2D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2D00u;
    // 0x3a2d04: 0x30d0ffff  andi        $s0, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x3A2D00u, 0x3A2D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2D08u;
label_3a2d08:
    // 0x3a2d08: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A2D08u;
    {
        const bool branch_taken_0x3a2d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2d08) {
            ctx->pc = 0x3A2D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2D08u;
            // 0x3a2d0c: 0xa45000da  sh          $s0, 0xDA($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 218), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2D10u;
            goto label_3a2d10;
        }
    }
    ctx->pc = 0x3A2D10u;
label_3a2d10:
    // 0x3a2d10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a2d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2d18: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D18u;
        // 0x3a2d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2D20u;
}
