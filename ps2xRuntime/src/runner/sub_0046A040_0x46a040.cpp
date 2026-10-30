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

// Function: sub_0046A040
// Address: 0x46a040 - 0x46a0c0
void sub_0046A040_0x46a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A040_0x46a040");
#endif

    switch (ctx->pc) {
        case 0x46a040u: goto label_46a040;
        case 0x46a044u: goto label_46a044;
        case 0x46a048u: goto label_46a048;
        case 0x46a04cu: goto label_46a04c;
        case 0x46a050u: goto label_46a050;
        case 0x46a054u: goto label_46a054;
        case 0x46a058u: goto label_46a058;
        case 0x46a05cu: goto label_46a05c;
        case 0x46a060u: goto label_46a060;
        case 0x46a064u: goto label_46a064;
        case 0x46a068u: goto label_46a068;
        case 0x46a06cu: goto label_46a06c;
        case 0x46a070u: goto label_46a070;
        case 0x46a074u: goto label_46a074;
        case 0x46a078u: goto label_46a078;
        case 0x46a07cu: goto label_46a07c;
        case 0x46a080u: goto label_46a080;
        case 0x46a084u: goto label_46a084;
        case 0x46a088u: goto label_46a088;
        case 0x46a08cu: goto label_46a08c;
        case 0x46a090u: goto label_46a090;
        case 0x46a094u: goto label_46a094;
        case 0x46a098u: goto label_46a098;
        case 0x46a09cu: goto label_46a09c;
        case 0x46a0a0u: goto label_46a0a0;
        case 0x46a0a4u: goto label_46a0a4;
        case 0x46a0a8u: goto label_46a0a8;
        case 0x46a0acu: goto label_46a0ac;
        case 0x46a0b0u: goto label_46a0b0;
        case 0x46a0b4u: goto label_46a0b4;
        case 0x46a0b8u: goto label_46a0b8;
        case 0x46a0bcu: goto label_46a0bc;
        default: break;
    }

    ctx->pc = 0x46a040u;

label_46a040:
    // 0x46a040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46a044:
    // 0x46a044: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x46a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_46a048:
    // 0x46a048: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46a04c:
    // 0x46a04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46a04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46a050:
    // 0x46a050: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x46a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_46a054:
    // 0x46a054: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x46a054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_46a058:
    // 0x46a058: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x46a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_46a05c:
    // 0x46a05c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x46a05cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46a060:
    // 0x46a060: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x46a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_46a064:
    // 0x46a064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46a068:
    // 0x46a068: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x46a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_46a06c:
    // 0x46a06c: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_46a070:
    if (ctx->pc == 0x46A070u) {
        ctx->pc = 0x46A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A06Cu;
        // 0x46a070: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A074u;
        goto label_46a074;
    }
    ctx->pc = 0x46A06Cu;
    {
        const bool branch_taken_0x46a06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x46A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A06Cu;
        // 0x46a070: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a06c) {
            ctx->pc = 0x46A09Cu;
            goto label_46a09c;
        }
    }
    ctx->pc = 0x46A074u;
label_46a074:
    // 0x46a074: 0x8f8484bc  lw          $a0, -0x7B44($gp)
    ctx->pc = 0x46a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
label_46a078:
    // 0x46a078: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46a078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46a07c:
    // 0x46a07c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46a07cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a080:
    // 0x46a080: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x46a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_46a084:
    // 0x46a084: 0x280f809  jalr        $s4
label_46a088:
    if (ctx->pc == 0x46A088u) {
        ctx->pc = 0x46A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A084u;
        // 0x46a088: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A08Cu;
        goto label_46a08c;
    }
    ctx->pc = 0x46A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x46A08Cu);
        ctx->pc = 0x46A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A084u;
        // 0x46a088: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A084u, 0x46A08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46A08Cu;
label_46a08c:
    // 0x46a08c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46a090:
    if (ctx->pc == 0x46A090u) {
        ctx->pc = 0x46A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A08Cu;
        // 0x46a090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A094u;
        goto label_46a094;
    }
    ctx->pc = 0x46A08Cu;
    {
        const bool branch_taken_0x46a08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A08Cu;
        // 0x46a090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a08c) {
            ctx->pc = 0x46A09Cu;
            goto label_46a09c;
        }
    }
    ctx->pc = 0x46A094u;
label_46a094:
    // 0x46a094: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_46a098:
    if (ctx->pc == 0x46A098u) {
        ctx->pc = 0x46A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A094u;
        // 0x46a098: 0x8f8484bc  lw          $a0, -0x7B44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A09Cu;
        goto label_46a09c;
    }
    ctx->pc = 0x46A094u;
    {
        const bool branch_taken_0x46a094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x46a094) {
            ctx->pc = 0x46A098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A094u;
            // 0x46a098: 0x8f8484bc  lw          $a0, -0x7B44($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46a078;
        }
    }
    ctx->pc = 0x46A09Cu;
label_46a09c:
    // 0x46a09c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46a09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46a0a0:
    // 0x46a0a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46a0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46a0a4:
    // 0x46a0a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x46a0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46a0a8:
    // 0x46a0a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46a0a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46a0ac:
    // 0x46a0ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46a0acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46a0b0:
    // 0x46a0b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x46a0b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46a0b4:
    // 0x46a0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46a0b8:
    // 0x46a0b8: 0x3e00008  jr          $ra
label_46a0bc:
    if (ctx->pc == 0x46A0BCu) {
        ctx->pc = 0x46A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A0B8u;
        // 0x46a0bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A0C0u;
        goto label_fallthrough_0x46a0b8;
    }
    ctx->pc = 0x46A0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A0B8u;
        // 0x46a0bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46a0b8:
    ctx->pc = 0x46A0C0u;
}
