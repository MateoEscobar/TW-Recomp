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

// Function: sub_0043A8F8
// Address: 0x43a8f8 - 0x43a950
void sub_0043A8F8_0x43a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A8F8_0x43a8f8");
#endif

    switch (ctx->pc) {
        case 0x43a91cu: goto label_43a91c;
        default: break;
    }

    ctx->pc = 0x43a8f8u;

    // 0x43a8f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43a8fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43a900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43a904: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x43a904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x43a908: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43a908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43a910: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x43a910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a914: 0xc10f5e2  jal         func_43D788
    ctx->pc = 0x43A914u;
    SET_GPR_U32(ctx, 31, 0x43A91Cu);
    ctx->pc = 0x43A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A914u;
    // 0x43a918: 0xae0071d8  sw          $zero, 0x71D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 29144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D788u, 0x43A914u, 0x43A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A91Cu;
label_43a91c:
    // 0x43a91c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43a91cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a920: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43a920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a924: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43A924u;
    {
        const bool branch_taken_0x43a924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43a924) {
            ctx->pc = 0x43A928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43A924u;
            // 0x43a928: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43A93Cu;
            goto label_43a93c;
        }
    }
    ctx->pc = 0x43A92Cu;
    // 0x43a92c: 0x8e0271d8  lw          $v0, 0x71D8($s0)
    ctx->pc = 0x43a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29144)));
    // 0x43a930: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43A930u;
    {
        const bool branch_taken_0x43a930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43a930) {
            ctx->pc = 0x43A934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43A930u;
            // 0x43a934: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43A938u;
            goto label_43a938;
        }
    }
    ctx->pc = 0x43A938u;
label_43a938:
    // 0x43a938: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43a938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43a93c:
    // 0x43a93c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43a93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43a940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43a944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a948: 0x3e00008  jr          $ra
    ctx->pc = 0x43A948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A948u;
        // 0x43a94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43A948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43A950u;
}
