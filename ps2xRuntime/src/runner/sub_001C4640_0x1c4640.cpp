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

// Function: sub_001C4640
// Address: 0x1c4640 - 0x1c4690
void sub_001C4640_0x1c4640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4640_0x1c4640");
#endif

    switch (ctx->pc) {
        case 0x1c4660u: goto label_1c4660;
        default: break;
    }

    ctx->pc = 0x1c4640u;

    // 0x1c4640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4644: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c4644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c4648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c464c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c464cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4650: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c4650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4658: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C4658u;
    SET_GPR_U32(ctx, 31, 0x1C4660u);
    ctx->pc = 0x1C465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4658u;
    // 0x1c465c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4658u, 0x1C4660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4660u;
label_1c4660:
    // 0x1c4660: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4668: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4668u;
    {
        const bool branch_taken_0x1c4668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4668u;
        // 0x1c466c: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4668) {
            ctx->pc = 0x1C4678u;
            goto label_1c4678;
        }
    }
    ctx->pc = 0x1C4670u;
    // 0x1c4670: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c4674: 0xac510954  sw          $s1, 0x954($v0)
    ctx->pc = 0x1c4674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2388), GPR_U32(ctx, 17));
label_1c4678:
    // 0x1c4678: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c467c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c467cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4684: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4684u;
        // 0x1c4688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C468Cu;
    // 0x1c468c: 0x0  nop
    ctx->pc = 0x1c468cu;
    // NOP
    ctx->pc = 0x1c4690u;
}
