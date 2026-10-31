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

// Function: sub_003858B8
// Address: 0x3858b8 - 0x385918
void sub_003858B8_0x3858b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003858B8_0x3858b8");
#endif

    switch (ctx->pc) {
        case 0x3858b8u: goto label_3858b8;
        case 0x3858bcu: goto label_3858bc;
        case 0x3858c0u: goto label_3858c0;
        case 0x3858c4u: goto label_3858c4;
        case 0x3858c8u: goto label_3858c8;
        case 0x3858ccu: goto label_3858cc;
        case 0x3858d0u: goto label_3858d0;
        case 0x3858d4u: goto label_3858d4;
        case 0x3858d8u: goto label_3858d8;
        case 0x3858dcu: goto label_3858dc;
        case 0x3858e0u: goto label_3858e0;
        case 0x3858e4u: goto label_3858e4;
        case 0x3858e8u: goto label_3858e8;
        case 0x3858ecu: goto label_3858ec;
        case 0x3858f0u: goto label_3858f0;
        case 0x3858f4u: goto label_3858f4;
        case 0x3858f8u: goto label_3858f8;
        case 0x3858fcu: goto label_3858fc;
        case 0x385900u: goto label_385900;
        case 0x385904u: goto label_385904;
        case 0x385908u: goto label_385908;
        case 0x38590cu: goto label_38590c;
        case 0x385910u: goto label_385910;
        case 0x385914u: goto label_385914;
        default: break;
    }

    ctx->pc = 0x3858b8u;

label_3858b8:
    // 0x3858b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3858b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3858bc:
    // 0x3858bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3858bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3858c0:
    // 0x3858c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3858c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3858c4:
    // 0x3858c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3858c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3858c8:
    // 0x3858c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3858c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3858cc:
    // 0x3858cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3858ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3858d0:
    // 0x3858d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3858d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3858d4:
    // 0x3858d4: 0x0  nop
    ctx->pc = 0x3858d4u;
    // NOP
label_3858d8:
    // 0x3858d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3858d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3858dc:
    // 0x3858dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3858dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3858e0:
    // 0x3858e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3858e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3858e4:
    // 0x3858e4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x3858e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_3858e8:
    // 0x3858e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3858e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3858ec:
    // 0x3858ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3858ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3858f0:
    // 0x3858f0: 0x60f809  jalr        $v1
label_3858f4:
    if (ctx->pc == 0x3858F4u) {
        ctx->pc = 0x3858F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858F0u;
        // 0x3858f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3858F8u;
        goto label_3858f8;
    }
    ctx->pc = 0x3858F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3858F8u);
        ctx->pc = 0x3858F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858F0u;
        // 0x3858f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3858F0u, 0x3858F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3858F8u;
label_3858f8:
    // 0x3858f8: 0x2e02001a  sltiu       $v0, $s0, 0x1A
    ctx->pc = 0x3858f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_3858fc:
    // 0x3858fc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_385900:
    if (ctx->pc == 0x385900u) {
        ctx->pc = 0x385900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858FCu;
        // 0x385900: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385904u;
        goto label_385904;
    }
    ctx->pc = 0x3858FCu;
    {
        const bool branch_taken_0x3858fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3858fc) {
            ctx->pc = 0x385900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3858FCu;
            // 0x385900: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3858d8;
        }
    }
    ctx->pc = 0x385904u;
label_385904:
    // 0x385904: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x385904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_385908:
    // 0x385908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x385908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38590c:
    // 0x38590c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38590cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_385910:
    // 0x385910: 0x3e00008  jr          $ra
label_385914:
    if (ctx->pc == 0x385914u) {
        ctx->pc = 0x385914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385910u;
        // 0x385914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385918u;
        goto label_fallthrough_0x385910;
    }
    ctx->pc = 0x385910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385910u;
        // 0x385914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x385910:
    ctx->pc = 0x385918u;
}
