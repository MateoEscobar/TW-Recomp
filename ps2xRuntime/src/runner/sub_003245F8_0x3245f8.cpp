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

// Function: sub_003245F8
// Address: 0x3245f8 - 0x324648
void sub_003245F8_0x3245f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003245F8_0x3245f8");
#endif

    switch (ctx->pc) {
        case 0x324614u: goto label_324614;
        case 0x324634u: goto label_324634;
        default: break;
    }

    ctx->pc = 0x3245f8u;

    // 0x3245f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3245f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3245fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3245fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x324600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32460c: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x32460Cu;
    SET_GPR_U32(ctx, 31, 0x324614u);
    ctx->pc = 0x324610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32460Cu;
    // 0x324610: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x32460Cu, 0x324614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324614u;
label_324614:
    // 0x324614: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x324614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324618: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x324618u;
    {
        const bool branch_taken_0x324618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x324618) {
            ctx->pc = 0x32461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324618u;
            // 0x32461c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324638u;
            goto label_324638;
        }
    }
    ctx->pc = 0x324620u;
    // 0x324620: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x324620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x324624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x324628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32462c: 0xc0c910e  jal         func_324438
    ctx->pc = 0x32462Cu;
    SET_GPR_U32(ctx, 31, 0x324634u);
    ctx->pc = 0x324630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32462Cu;
    // 0x324630: 0x24c648a8  addiu       $a2, $a2, 0x48A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x32462Cu, 0x324634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324634u;
label_324634:
    // 0x324634: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x324634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_324638:
    // 0x324638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32463c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324640: 0x3e00008  jr          $ra
    ctx->pc = 0x324640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324640u;
        // 0x324644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324648u;
}
