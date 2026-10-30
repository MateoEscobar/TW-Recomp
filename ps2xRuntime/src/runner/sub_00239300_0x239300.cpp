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

// Function: sub_00239300
// Address: 0x239300 - 0x239340
void sub_00239300_0x239300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239300_0x239300");
#endif

    switch (ctx->pc) {
        case 0x23931cu: goto label_23931c;
        case 0x239324u: goto label_239324;
        default: break;
    }

    ctx->pc = 0x239300u;

    // 0x239300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239304: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239308: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23930c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239314: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239314u;
    SET_GPR_U32(ctx, 31, 0x23931Cu);
    ctx->pc = 0x239318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239314u;
    // 0x239318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239314u, 0x23931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23931Cu;
label_23931c:
    // 0x23931c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23931Cu;
    SET_GPR_U32(ctx, 31, 0x239324u);
    ctx->pc = 0x239320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23931Cu;
    // 0x239320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23931Cu, 0x239324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239324u;
label_239324:
    // 0x239324: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239324u;
    {
        const bool branch_taken_0x239324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239324) {
            ctx->pc = 0x239328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239324u;
            // 0x239328: 0xa050019c  sb          $s0, 0x19C($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 412), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23932Cu;
            goto label_23932c;
        }
    }
    ctx->pc = 0x23932Cu;
label_23932c:
    // 0x23932c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23932cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239334: 0x3e00008  jr          $ra
    ctx->pc = 0x239334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239334u;
        // 0x239338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23933Cu;
    // 0x23933c: 0x0  nop
    ctx->pc = 0x23933cu;
    // NOP
    ctx->pc = 0x239340u;
}
