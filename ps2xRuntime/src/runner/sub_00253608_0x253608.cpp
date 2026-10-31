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

// Function: sub_00253608
// Address: 0x253608 - 0x253688
void sub_00253608_0x253608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253608_0x253608");
#endif

    switch (ctx->pc) {
        case 0x253624u: goto label_253624;
        case 0x253678u: goto label_253678;
        default: break;
    }

    ctx->pc = 0x253608u;

    // 0x253608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25360c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x25360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x253610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253614: 0x244205d8  addiu       $v0, $v0, 0x5D8
    ctx->pc = 0x253614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1496));
    // 0x253618: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x253618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x25361c: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x25361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x253620: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x253620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_253624:
    // 0x253624: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x253624u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253628: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x253628u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25362c: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x25362cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x253630: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x253630u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253634: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x253634u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x253638: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x253638u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x25363c: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x25363cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x253640: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x253640u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x253644: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x253644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x253648: 0x1445fff6  bne         $v0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x253648u;
    {
        const bool branch_taken_0x253648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x25364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253648u;
        // 0x25364c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253648) {
            ctx->pc = 0x253624u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253624;
        }
    }
    ctx->pc = 0x253650u;
    // 0x253650: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x253650u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253654: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x253654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x253658: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x253658u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x25365c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x25365cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x253660: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x253660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x253664: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x253664u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x253668: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253668u;
    {
        const bool branch_taken_0x253668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253668u;
        // 0x25366c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253668) {
            ctx->pc = 0x253678u;
            goto label_253678;
        }
    }
    ctx->pc = 0x253670u;
    // 0x253670: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253670u;
    SET_GPR_U32(ctx, 31, 0x253678u);
    ctx->pc = 0x253674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253670u;
    // 0x253674: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253670u, 0x253678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253678u;
label_253678:
    // 0x253678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25367c: 0x3e00008  jr          $ra
    ctx->pc = 0x25367Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25367Cu;
        // 0x253680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25367Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253684u;
    // 0x253684: 0x0  nop
    ctx->pc = 0x253684u;
    // NOP
    ctx->pc = 0x253688u;
}
