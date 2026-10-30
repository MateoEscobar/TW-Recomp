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

// Function: sub_00239200
// Address: 0x239200 - 0x239240
void sub_00239200_0x239200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239200_0x239200");
#endif

    switch (ctx->pc) {
        case 0x23921cu: goto label_23921c;
        case 0x239224u: goto label_239224;
        default: break;
    }

    ctx->pc = 0x239200u;

    // 0x239200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239204: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239208: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23920c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23920cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239214: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239214u;
    SET_GPR_U32(ctx, 31, 0x23921Cu);
    ctx->pc = 0x239218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239214u;
    // 0x239218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239214u, 0x23921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23921Cu;
label_23921c:
    // 0x23921c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23921Cu;
    SET_GPR_U32(ctx, 31, 0x239224u);
    ctx->pc = 0x239220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23921Cu;
    // 0x239220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23921Cu, 0x239224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239224u;
label_239224:
    // 0x239224: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239224u;
    {
        const bool branch_taken_0x239224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239224) {
            ctx->pc = 0x239228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239224u;
            // 0x239228: 0xa0500198  sb          $s0, 0x198($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 408), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23922Cu;
            goto label_23922c;
        }
    }
    ctx->pc = 0x23922Cu;
label_23922c:
    // 0x23922c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23922cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239234: 0x3e00008  jr          $ra
    ctx->pc = 0x239234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239234u;
        // 0x239238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23923Cu;
    // 0x23923c: 0x0  nop
    ctx->pc = 0x23923cu;
    // NOP
    ctx->pc = 0x239240u;
}
