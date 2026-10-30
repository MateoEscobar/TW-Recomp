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

// Function: sub_003EB060
// Address: 0x3eb060 - 0x3eb0d0
void sub_003EB060_0x3eb060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB060_0x3eb060");
#endif

    switch (ctx->pc) {
        case 0x3eb060u: goto label_3eb060;
        case 0x3eb064u: goto label_3eb064;
        case 0x3eb068u: goto label_3eb068;
        case 0x3eb06cu: goto label_3eb06c;
        case 0x3eb070u: goto label_3eb070;
        case 0x3eb074u: goto label_3eb074;
        case 0x3eb078u: goto label_3eb078;
        case 0x3eb07cu: goto label_3eb07c;
        case 0x3eb080u: goto label_3eb080;
        case 0x3eb084u: goto label_3eb084;
        case 0x3eb088u: goto label_3eb088;
        case 0x3eb08cu: goto label_3eb08c;
        case 0x3eb090u: goto label_3eb090;
        case 0x3eb094u: goto label_3eb094;
        case 0x3eb098u: goto label_3eb098;
        case 0x3eb09cu: goto label_3eb09c;
        case 0x3eb0a0u: goto label_3eb0a0;
        case 0x3eb0a4u: goto label_3eb0a4;
        case 0x3eb0a8u: goto label_3eb0a8;
        case 0x3eb0acu: goto label_3eb0ac;
        case 0x3eb0b0u: goto label_3eb0b0;
        case 0x3eb0b4u: goto label_3eb0b4;
        case 0x3eb0b8u: goto label_3eb0b8;
        case 0x3eb0bcu: goto label_3eb0bc;
        case 0x3eb0c0u: goto label_3eb0c0;
        case 0x3eb0c4u: goto label_3eb0c4;
        case 0x3eb0c8u: goto label_3eb0c8;
        case 0x3eb0ccu: goto label_3eb0cc;
        default: break;
    }

    ctx->pc = 0x3eb060u;

label_3eb060:
    // 0x3eb060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3eb060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3eb064:
    // 0x3eb064: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3eb064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3eb068:
    // 0x3eb068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eb068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eb06c:
    // 0x3eb06c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eb06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb070:
    // 0x3eb070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eb070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eb074:
    // 0x3eb074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb078:
    // 0x3eb078: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb07c:
    // 0x3eb07c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb080:
    // 0x3eb080: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb084:
    // 0x3eb084: 0x40f809  jalr        $v0
label_3eb088:
    if (ctx->pc == 0x3EB088u) {
        ctx->pc = 0x3EB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB084u;
        // 0x3eb088: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB08Cu;
        goto label_3eb08c;
    }
    ctx->pc = 0x3EB084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB08Cu);
        ctx->pc = 0x3EB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB084u;
        // 0x3eb088: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB084u, 0x3EB08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB08Cu;
label_3eb08c:
    // 0x3eb08c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3eb08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb090:
    // 0x3eb090: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3eb090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3eb094:
    // 0x3eb094: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_3eb098:
    if (ctx->pc == 0x3EB098u) {
        ctx->pc = 0x3EB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB094u;
        // 0x3eb098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB09Cu;
        goto label_3eb09c;
    }
    ctx->pc = 0x3EB094u;
    {
        const bool branch_taken_0x3eb094 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB094u;
        // 0x3eb098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb094) {
            ctx->pc = 0x3EB0BCu;
            goto label_3eb0bc;
        }
    }
    ctx->pc = 0x3EB09Cu;
label_3eb09c:
    // 0x3eb09c: 0xc0fabce  jal         func_3EAF38
label_3eb0a0:
    if (ctx->pc == 0x3EB0A0u) {
        ctx->pc = 0x3EB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB09Cu;
        // 0x3eb0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0A4u;
        goto label_3eb0a4;
    }
    ctx->pc = 0x3EB09Cu;
    SET_GPR_U32(ctx, 31, 0x3EB0A4u);
    ctx->pc = 0x3EB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB09Cu;
    // 0x3eb0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAF38u, 0x3EB09Cu, 0x3EB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB0A4u;
label_3eb0a4:
    // 0x3eb0a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb0a8:
    // 0x3eb0a8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3eb0a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3eb0ac:
    // 0x3eb0ac: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3eb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3eb0b0:
    // 0x3eb0b0: 0x60f809  jalr        $v1
label_3eb0b4:
    if (ctx->pc == 0x3EB0B4u) {
        ctx->pc = 0x3EB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0B0u;
        // 0x3eb0b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0B8u;
        goto label_3eb0b8;
    }
    ctx->pc = 0x3EB0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EB0B8u);
        ctx->pc = 0x3EB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0B0u;
        // 0x3eb0b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB0B0u, 0x3EB0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB0B8u;
label_3eb0b8:
    // 0x3eb0b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3eb0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb0bc:
    // 0x3eb0bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eb0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb0c0:
    // 0x3eb0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eb0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb0c4:
    // 0x3eb0c4: 0x3e00008  jr          $ra
label_3eb0c8:
    if (ctx->pc == 0x3EB0C8u) {
        ctx->pc = 0x3EB0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0C4u;
        // 0x3eb0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0CCu;
        goto label_3eb0cc;
    }
    ctx->pc = 0x3EB0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0C4u;
        // 0x3eb0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB0CCu;
label_3eb0cc:
    // 0x3eb0cc: 0x0  nop
    ctx->pc = 0x3eb0ccu;
    // NOP
    ctx->pc = 0x3eb0d0u;
}
