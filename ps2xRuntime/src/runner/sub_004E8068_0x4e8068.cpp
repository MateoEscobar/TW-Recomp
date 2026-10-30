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

// Function: sub_004E8068
// Address: 0x4e8068 - 0x4e8100
void sub_004E8068_0x4e8068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8068_0x4e8068");
#endif

    switch (ctx->pc) {
        case 0x4e8068u: goto label_4e8068;
        case 0x4e806cu: goto label_4e806c;
        case 0x4e8070u: goto label_4e8070;
        case 0x4e8074u: goto label_4e8074;
        case 0x4e8078u: goto label_4e8078;
        case 0x4e807cu: goto label_4e807c;
        case 0x4e8080u: goto label_4e8080;
        case 0x4e8084u: goto label_4e8084;
        case 0x4e8088u: goto label_4e8088;
        case 0x4e808cu: goto label_4e808c;
        case 0x4e8090u: goto label_4e8090;
        case 0x4e8094u: goto label_4e8094;
        case 0x4e8098u: goto label_4e8098;
        case 0x4e809cu: goto label_4e809c;
        case 0x4e80a0u: goto label_4e80a0;
        case 0x4e80a4u: goto label_4e80a4;
        case 0x4e80a8u: goto label_4e80a8;
        case 0x4e80acu: goto label_4e80ac;
        case 0x4e80b0u: goto label_4e80b0;
        case 0x4e80b4u: goto label_4e80b4;
        case 0x4e80b8u: goto label_4e80b8;
        case 0x4e80bcu: goto label_4e80bc;
        case 0x4e80c0u: goto label_4e80c0;
        case 0x4e80c4u: goto label_4e80c4;
        case 0x4e80c8u: goto label_4e80c8;
        case 0x4e80ccu: goto label_4e80cc;
        case 0x4e80d0u: goto label_4e80d0;
        case 0x4e80d4u: goto label_4e80d4;
        case 0x4e80d8u: goto label_4e80d8;
        case 0x4e80dcu: goto label_4e80dc;
        case 0x4e80e0u: goto label_4e80e0;
        case 0x4e80e4u: goto label_4e80e4;
        case 0x4e80e8u: goto label_4e80e8;
        case 0x4e80ecu: goto label_4e80ec;
        case 0x4e80f0u: goto label_4e80f0;
        case 0x4e80f4u: goto label_4e80f4;
        case 0x4e80f8u: goto label_4e80f8;
        case 0x4e80fcu: goto label_4e80fc;
        default: break;
    }

    ctx->pc = 0x4e8068u;

label_4e8068:
    // 0x4e8068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e8068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e806c:
    // 0x4e806c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e8070:
    // 0x4e8070: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e8070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e8074:
    // 0x4e8074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e8074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8078:
    // 0x4e8078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e8078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e807c:
    // 0x4e807c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e8080:
    // 0x4e8080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e8084:
    // 0x4e8084: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e8084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e8088:
    // 0x4e8088: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4e8088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e808c:
    // 0x4e808c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_4e8090:
    if (ctx->pc == 0x4E8090u) {
        ctx->pc = 0x4E8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E808Cu;
        // 0x4e8090: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8094u;
        goto label_4e8094;
    }
    ctx->pc = 0x4E808Cu;
    {
        const bool branch_taken_0x4e808c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E808Cu;
        // 0x4e8090: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e808c) {
            ctx->pc = 0x4E80D8u;
            goto label_4e80d8;
        }
    }
    ctx->pc = 0x4E8094u;
label_4e8094:
    // 0x4e8094: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4e8094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4e8098:
    // 0x4e8098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e8098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e809c:
    // 0x4e809c: 0x0  nop
    ctx->pc = 0x4e809cu;
    // NOP
label_4e80a0:
    // 0x4e80a0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_4e80a4:
    if (ctx->pc == 0x4E80A4u) {
        ctx->pc = 0x4E80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80A0u;
        // 0x4e80a4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E80A8u;
        goto label_4e80a8;
    }
    ctx->pc = 0x4E80A0u;
    {
        const bool branch_taken_0x4e80a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80A0u;
        // 0x4e80a4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e80a0) {
            ctx->pc = 0x4E80C8u;
            goto label_4e80c8;
        }
    }
    ctx->pc = 0x4E80A8u;
label_4e80a8:
    // 0x4e80a8: 0x8e68b9c0  lw          $t0, -0x4640($s3)
    ctx->pc = 0x4e80a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4e80ac:
    // 0x4e80ac: 0x26465998  addiu       $a2, $s2, 0x5998
    ctx->pc = 0x4e80acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 22936));
label_4e80b0:
    // 0x4e80b0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e80b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e80b4:
    // 0x4e80b4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e80b8:
    // 0x4e80b8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e80b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e80bc:
    // 0x4e80bc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e80c0:
    // 0x4e80c0: 0x60f809  jalr        $v1
label_4e80c4:
    if (ctx->pc == 0x4E80C4u) {
        ctx->pc = 0x4E80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80C0u;
        // 0x4e80c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E80C8u;
        goto label_4e80c8;
    }
    ctx->pc = 0x4E80C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E80C8u);
        ctx->pc = 0x4E80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80C0u;
        // 0x4e80c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E80C0u, 0x4E80C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E80C8u;
label_4e80c8:
    // 0x4e80c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e80cc:
    // 0x4e80cc: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_4e80d0:
    if (ctx->pc == 0x4E80D0u) {
        ctx->pc = 0x4E80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80CCu;
        // 0x4e80d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E80D4u;
        goto label_4e80d4;
    }
    ctx->pc = 0x4E80CCu;
    {
        const bool branch_taken_0x4e80cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80CCu;
        // 0x4e80d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e80cc) {
            ctx->pc = 0x4E80A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e80a0;
        }
    }
    ctx->pc = 0x4E80D4u;
label_4e80d4:
    // 0x4e80d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e80d8:
    // 0x4e80d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e80d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e80dc:
    // 0x4e80dc: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x4e80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_4e80e0:
    // 0x4e80e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e80e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e80e4:
    // 0x4e80e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4e80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e80e8:
    // 0x4e80e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e80e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e80ec:
    // 0x4e80ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e80ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e80f0:
    // 0x4e80f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e80f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e80f4:
    // 0x4e80f4: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x4e80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
label_4e80f8:
    // 0x4e80f8: 0x3e00008  jr          $ra
label_4e80fc:
    if (ctx->pc == 0x4E80FCu) {
        ctx->pc = 0x4E80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80F8u;
        // 0x4e80fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8100u;
        goto label_fallthrough_0x4e80f8;
    }
    ctx->pc = 0x4E80F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E80F8u;
        // 0x4e80fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E80F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e80f8:
    ctx->pc = 0x4E8100u;
}
