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

// Function: sub_002385F8
// Address: 0x2385f8 - 0x238640
void sub_002385F8_0x2385f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002385F8_0x2385f8");
#endif

    switch (ctx->pc) {
        case 0x238614u: goto label_238614;
        case 0x23861cu: goto label_23861c;
        case 0x23862cu: goto label_23862c;
        default: break;
    }

    ctx->pc = 0x2385f8u;

    // 0x2385f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2385f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2385fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2385fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238600: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23860c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23860Cu;
    SET_GPR_U32(ctx, 31, 0x238614u);
    ctx->pc = 0x238610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23860Cu;
    // 0x238610: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23860Cu, 0x238614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238614u;
label_238614:
    // 0x238614: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238614u;
    SET_GPR_U32(ctx, 31, 0x23861Cu);
    ctx->pc = 0x238618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238614u;
    // 0x238618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238614u, 0x23861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23861Cu;
label_23861c:
    // 0x23861c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23861Cu;
    {
        const bool branch_taken_0x23861c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23861Cu;
        // 0x238620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23861c) {
            ctx->pc = 0x23862Cu;
            goto label_23862c;
        }
    }
    ctx->pc = 0x238624u;
    // 0x238624: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x238624u;
    SET_GPR_U32(ctx, 31, 0x23862Cu);
    ctx->pc = 0x238628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238624u;
    // 0x238628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x238624u, 0x23862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23862Cu;
label_23862c:
    // 0x23862c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238634: 0x3e00008  jr          $ra
    ctx->pc = 0x238634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238634u;
        // 0x238638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23863Cu;
    // 0x23863c: 0x0  nop
    ctx->pc = 0x23863cu;
    // NOP
    ctx->pc = 0x238640u;
}
