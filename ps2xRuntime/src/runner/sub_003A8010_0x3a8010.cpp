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

// Function: sub_003A8010
// Address: 0x3a8010 - 0x3a8100
void sub_003A8010_0x3a8010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8010_0x3a8010");
#endif

    switch (ctx->pc) {
        case 0x3a8078u: goto label_3a8078;
        case 0x3a80a8u: goto label_3a80a8;
        case 0x3a80b4u: goto label_3a80b4;
        case 0x3a80c0u: goto label_3a80c0;
        case 0x3a80ccu: goto label_3a80cc;
        case 0x3a80d8u: goto label_3a80d8;
        default: break;
    }

    ctx->pc = 0x3a8010u;

    // 0x3a8010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a8010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3a8014: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x3a8014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a8018: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3a8018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3a801c: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x3a801cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8020: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3a8020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3a8024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8028: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3a8028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3a802c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a802cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a8030: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3a8030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3a8034: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3a8034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a8038: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3a8038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3a803c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3a803cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a8040: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a8040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a8044: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x3a8044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a8048: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a8048u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a804c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x3a804cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a8050: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x3a8050u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a8054: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x3a8054u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a8058: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a8058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3a805c: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x3a805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x3a8060: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3a8060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a8064: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3a8064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x3a8068: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a8068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a806c: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3a806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3a8070: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a8070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3a8074: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a8074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3a8078:
    // 0x3a8078: 0x0  nop
    ctx->pc = 0x3a8078u;
    // NOP
    // 0x3a807c: 0x0  nop
    ctx->pc = 0x3a807cu;
    // NOP
    // 0x3a8080: 0x0  nop
    ctx->pc = 0x3a8080u;
    // NOP
    // 0x3a8084: 0x0  nop
    ctx->pc = 0x3a8084u;
    // NOP
    // 0x3a8088: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A8088u;
    {
        const bool branch_taken_0x3a8088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8088u;
        // 0x3a808c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8088) {
            ctx->pc = 0x3A8078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8078;
        }
    }
    ctx->pc = 0x3A8090u;
    // 0x3a8090: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a8090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a8094: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a8094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a8098: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a8098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a809c: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a809cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a80a0: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A80A0u;
    SET_GPR_U32(ctx, 31, 0x3A80A8u);
    ctx->pc = 0x3A80A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80A0u;
    // 0x3a80a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A80A0u, 0x3A80A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80A8u;
label_3a80a8:
    // 0x3a80a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a80a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80ac: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A80ACu;
    SET_GPR_U32(ctx, 31, 0x3A80B4u);
    ctx->pc = 0x3A80B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80ACu;
    // 0x3a80b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A80ACu, 0x3A80B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80B4u;
label_3a80b4:
    // 0x3a80b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a80b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80b8: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A80B8u;
    SET_GPR_U32(ctx, 31, 0x3A80C0u);
    ctx->pc = 0x3A80BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80B8u;
    // 0x3a80bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A80B8u, 0x3A80C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80C0u;
label_3a80c0:
    // 0x3a80c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a80c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80c4: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A80C4u;
    SET_GPR_U32(ctx, 31, 0x3A80CCu);
    ctx->pc = 0x3A80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80C4u;
    // 0x3a80c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A80C4u, 0x3A80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80CCu;
label_3a80cc:
    // 0x3a80cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a80ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80d0: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A80D0u;
    SET_GPR_U32(ctx, 31, 0x3A80D8u);
    ctx->pc = 0x3A80D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80D0u;
    // 0x3a80d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A80D0u, 0x3A80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80D8u;
label_3a80d8:
    // 0x3a80d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a80d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80dc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3a80dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a80e0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3a80e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a80e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3a80e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a80e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3a80e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a80ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3a80ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a80f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a80f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a80f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A80F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80F4u;
        // 0x3a80f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A80F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A80FCu;
    // 0x3a80fc: 0x0  nop
    ctx->pc = 0x3a80fcu;
    // NOP
    ctx->pc = 0x3a8100u;
}
