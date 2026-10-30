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

// Function: sub_00223400
// Address: 0x223400 - 0x223440
void sub_00223400_0x223400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223400_0x223400");
#endif

    switch (ctx->pc) {
        case 0x223424u: goto label_223424;
        default: break;
    }

    ctx->pc = 0x223400u;

    // 0x223400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223404: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22340c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22340cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223410: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x223410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x223414: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x223414u;
    {
        const bool branch_taken_0x223414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223414) {
            ctx->pc = 0x223418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223414u;
            // 0x223418: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223430u;
            goto label_223430;
        }
    }
    ctx->pc = 0x22341Cu;
    // 0x22341c: 0xc088c1a  jal         func_223068
    ctx->pc = 0x22341Cu;
    SET_GPR_U32(ctx, 31, 0x223424u);
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x22341Cu, 0x223424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223424u;
label_223424:
    // 0x223424: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x223424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x223428: 0xa4620148  sh          $v0, 0x148($v1)
    ctx->pc = 0x223428u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x22342c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22342cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223430:
    // 0x223430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223434: 0x3e00008  jr          $ra
    ctx->pc = 0x223434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223434u;
        // 0x223438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22343Cu;
    // 0x22343c: 0x0  nop
    ctx->pc = 0x22343cu;
    // NOP
    ctx->pc = 0x223440u;
}
