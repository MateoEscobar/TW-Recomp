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

// Function: sub_001C8010
// Address: 0x1c8010 - 0x1c80c8
void sub_001C8010_0x1c8010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8010_0x1c8010");
#endif

    switch (ctx->pc) {
        case 0x1c8044u: goto label_1c8044;
        case 0x1c80a0u: goto label_1c80a0;
        default: break;
    }

    ctx->pc = 0x1c8010u;

    // 0x1c8010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c8010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c8014: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c8014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c8018: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c801c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c8020: 0x24b00008  addiu       $s0, $a1, 0x8
    ctx->pc = 0x1c8020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1c8024: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c8024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c8028: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x1c8028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c802c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1c802cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1c8030: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c8030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8034: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c8034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c8038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c803c: 0xc139ab8  jal         func_4E6AE0
    ctx->pc = 0x1C803Cu;
    SET_GPR_U32(ctx, 31, 0x1C8044u);
    ctx->pc = 0x1C8040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C803Cu;
    // 0x1c8040: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6AE0u, 0x1C803Cu, 0x1C8044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8044u;
label_1c8044:
    // 0x1c8044: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c8044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c8048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c804c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8050: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8050u;
    {
        const bool branch_taken_0x1c8050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8050u;
        // 0x1c8054: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8050) {
            ctx->pc = 0x1C806Cu;
            goto label_1c806c;
        }
    }
    ctx->pc = 0x1C8058u;
    // 0x1c8058: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1c8058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c805c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8060: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c8060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c8064: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8064u;
    {
        const bool branch_taken_0x1c8064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8064) {
            ctx->pc = 0x1C8070u;
            goto label_1c8070;
        }
    }
    ctx->pc = 0x1C806Cu;
label_1c806c:
    // 0x1c806c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8070:
    // 0x1c8070: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8070u;
    {
        const bool branch_taken_0x1c8070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8070u;
        // 0x1c8074: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8070) {
            ctx->pc = 0x1C80A8u;
            goto label_1c80a8;
        }
    }
    ctx->pc = 0x1C8078u;
    // 0x1c8078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c807c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c8080: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c8080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c8084: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1c8084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1c8088: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c8088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c808c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8090: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1c8090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1c8094: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c8094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1c8098: 0xc139c12  jal         func_4E7048
    ctx->pc = 0x1C8098u;
    SET_GPR_U32(ctx, 31, 0x1C80A0u);
    ctx->pc = 0x1C809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8098u;
    // 0x1c809c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7048u, 0x1C8098u, 0x1C80A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80A0u;
label_1c80a0:
    // 0x1c80a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c80a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c80a8:
    // 0x1c80a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c80ac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c80acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c80b0: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x1c80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x1c80b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c80b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c80b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c80b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c80bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c80bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c80c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C80C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80C0u;
        // 0x1c80c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C80C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C80C8u;
}
