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

// Function: sub_001130C8
// Address: 0x1130c8 - 0x113118
void sub_001130C8_0x1130c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001130C8_0x1130c8");
#endif

    switch (ctx->pc) {
        case 0x1130c8u: goto label_1130c8;
        case 0x1130ccu: goto label_1130cc;
        case 0x1130d0u: goto label_1130d0;
        case 0x1130d4u: goto label_1130d4;
        case 0x1130d8u: goto label_1130d8;
        case 0x1130dcu: goto label_1130dc;
        case 0x1130e0u: goto label_1130e0;
        case 0x1130e4u: goto label_1130e4;
        case 0x1130e8u: goto label_1130e8;
        case 0x1130ecu: goto label_1130ec;
        case 0x1130f0u: goto label_1130f0;
        case 0x1130f4u: goto label_1130f4;
        case 0x1130f8u: goto label_1130f8;
        case 0x1130fcu: goto label_1130fc;
        case 0x113100u: goto label_113100;
        case 0x113104u: goto label_113104;
        case 0x113108u: goto label_113108;
        case 0x11310cu: goto label_11310c;
        case 0x113110u: goto label_113110;
        case 0x113114u: goto label_113114;
        default: break;
    }

    ctx->pc = 0x1130c8u;

label_1130c8:
    // 0x1130c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1130c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1130cc:
    // 0x1130cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1130ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1130d0:
    // 0x1130d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1130d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1130d4:
    // 0x1130d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1130d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1130d8:
    // 0x1130d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1130d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1130dc:
    // 0x1130dc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1130e0:
    if (ctx->pc == 0x1130E0u) {
        ctx->pc = 0x1130E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130DCu;
        // 0x1130e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130E4u;
        goto label_1130e4;
    }
    ctx->pc = 0x1130DCu;
    {
        const bool branch_taken_0x1130dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1130E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130DCu;
        // 0x1130e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130dc) {
            ctx->pc = 0x113100u;
            goto label_113100;
        }
    }
    ctx->pc = 0x1130E4u;
label_1130e4:
    // 0x1130e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1130e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1130e8:
    // 0x1130e8: 0x8c45bce4  lw          $a1, -0x431C($v0)
    ctx->pc = 0x1130e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_1130ec:
    // 0x1130ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1130ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1130f0:
    // 0x1130f0: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1130f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1130f4:
    // 0x1130f4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1130f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1130f8:
    // 0x1130f8: 0x40f809  jalr        $v0
label_1130fc:
    if (ctx->pc == 0x1130FCu) {
        ctx->pc = 0x1130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130F8u;
        // 0x1130fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113100u;
        goto label_113100;
    }
    ctx->pc = 0x1130F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x113100u);
        ctx->pc = 0x1130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130F8u;
        // 0x1130fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130F8u, 0x113100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113100u;
label_113100:
    // 0x113100: 0xae3001c4  sw          $s0, 0x1C4($s1)
    ctx->pc = 0x113100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
label_113104:
    // 0x113104: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x113104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_113108:
    // 0x113108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11310c:
    // 0x11310c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113110:
    // 0x113110: 0x3e00008  jr          $ra
label_113114:
    if (ctx->pc == 0x113114u) {
        ctx->pc = 0x113114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113110u;
        // 0x113114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113118u;
        goto label_fallthrough_0x113110;
    }
    ctx->pc = 0x113110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113110u;
        // 0x113114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x113110:
    ctx->pc = 0x113118u;
}
