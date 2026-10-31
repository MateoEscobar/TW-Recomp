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

// Function: sub_001B7958
// Address: 0x1b7958 - 0x1b79f8
void sub_001B7958_0x1b7958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7958_0x1b7958");
#endif

    switch (ctx->pc) {
        case 0x1b7958u: goto label_1b7958;
        case 0x1b795cu: goto label_1b795c;
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7964u: goto label_1b7964;
        case 0x1b7968u: goto label_1b7968;
        case 0x1b796cu: goto label_1b796c;
        case 0x1b7970u: goto label_1b7970;
        case 0x1b7974u: goto label_1b7974;
        case 0x1b7978u: goto label_1b7978;
        case 0x1b797cu: goto label_1b797c;
        case 0x1b7980u: goto label_1b7980;
        case 0x1b7984u: goto label_1b7984;
        case 0x1b7988u: goto label_1b7988;
        case 0x1b798cu: goto label_1b798c;
        case 0x1b7990u: goto label_1b7990;
        case 0x1b7994u: goto label_1b7994;
        case 0x1b7998u: goto label_1b7998;
        case 0x1b799cu: goto label_1b799c;
        case 0x1b79a0u: goto label_1b79a0;
        case 0x1b79a4u: goto label_1b79a4;
        case 0x1b79a8u: goto label_1b79a8;
        case 0x1b79acu: goto label_1b79ac;
        case 0x1b79b0u: goto label_1b79b0;
        case 0x1b79b4u: goto label_1b79b4;
        case 0x1b79b8u: goto label_1b79b8;
        case 0x1b79bcu: goto label_1b79bc;
        case 0x1b79c0u: goto label_1b79c0;
        case 0x1b79c4u: goto label_1b79c4;
        case 0x1b79c8u: goto label_1b79c8;
        case 0x1b79ccu: goto label_1b79cc;
        case 0x1b79d0u: goto label_1b79d0;
        case 0x1b79d4u: goto label_1b79d4;
        case 0x1b79d8u: goto label_1b79d8;
        case 0x1b79dcu: goto label_1b79dc;
        case 0x1b79e0u: goto label_1b79e0;
        case 0x1b79e4u: goto label_1b79e4;
        case 0x1b79e8u: goto label_1b79e8;
        case 0x1b79ecu: goto label_1b79ec;
        case 0x1b79f0u: goto label_1b79f0;
        case 0x1b79f4u: goto label_1b79f4;
        default: break;
    }

    ctx->pc = 0x1b7958u;

label_1b7958:
    // 0x1b7958: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b795c:
    // 0x1b795c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1b7960:
    // 0x1b7960: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b7960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b7964:
    // 0x1b7964: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x1b7964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
label_1b7968:
    // 0x1b7968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b796c:
    // 0x1b796c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b7970:
    // 0x1b7970: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b7970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b7974:
    // 0x1b7974: 0x26300340  addiu       $s0, $s1, 0x340
    ctx->pc = 0x1b7974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_1b7978:
    // 0x1b7978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b797c:
    // 0x1b797c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b797cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7980:
    // 0x1b7980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b7984:
    // 0x1b7984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7988:
    // 0x1b7988: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b7988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b798c:
    // 0x1b798c: 0xc06870c  jal         func_1A1C30
label_1b7990:
    if (ctx->pc == 0x1B7990u) {
        ctx->pc = 0x1B7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B798Cu;
        // 0x1b7990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7994u;
        goto label_1b7994;
    }
    ctx->pc = 0x1B798Cu;
    SET_GPR_U32(ctx, 31, 0x1B7994u);
    ctx->pc = 0x1B7990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B798Cu;
    // 0x1b7990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1B798Cu, 0x1B7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7994u;
label_1b7994:
    // 0x1b7994: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1b7994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1b7998:
    // 0x1b7998: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b799c:
    if (ctx->pc == 0x1B799Cu) {
        ctx->pc = 0x1B799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7998u;
        // 0x1b799c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79A0u;
        goto label_1b79a0;
    }
    ctx->pc = 0x1B7998u;
    {
        const bool branch_taken_0x1b7998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7998u;
        // 0x1b799c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7998) {
            ctx->pc = 0x1B79D4u;
            goto label_1b79d4;
        }
    }
    ctx->pc = 0x1B79A0u;
label_1b79a0:
    // 0x1b79a0: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
label_1b79a4:
    if (ctx->pc == 0x1B79A4u) {
        ctx->pc = 0x1B79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79A0u;
        // 0x1b79a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79A8u;
        goto label_1b79a8;
    }
    ctx->pc = 0x1B79A0u;
    {
        const bool branch_taken_0x1b79a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79A0u;
        // 0x1b79a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79a0) {
            ctx->pc = 0x1B79D4u;
            goto label_1b79d4;
        }
    }
    ctx->pc = 0x1B79A8u;
label_1b79a8:
    // 0x1b79a8: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x1b79a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_1b79ac:
    // 0x1b79ac: 0x0  nop
    ctx->pc = 0x1b79acu;
    // NOP
label_1b79b0:
    // 0x1b79b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b79b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b79b4:
    // 0x1b79b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b79b8:
    // 0x1b79b8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1b79b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1b79bc:
    // 0x1b79bc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1b79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1b79c0:
    // 0x1b79c0: 0x60f809  jalr        $v1
label_1b79c4:
    if (ctx->pc == 0x1B79C4u) {
        ctx->pc = 0x1B79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79C0u;
        // 0x1b79c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79C8u;
        goto label_1b79c8;
    }
    ctx->pc = 0x1B79C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B79C8u);
        ctx->pc = 0x1B79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79C0u;
        // 0x1b79c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B79C0u, 0x1B79C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B79C8u;
label_1b79c8:
    // 0x1b79c8: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_1b79cc:
    if (ctx->pc == 0x1B79CCu) {
        ctx->pc = 0x1B79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79C8u;
        // 0x1b79cc: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79D0u;
        goto label_1b79d0;
    }
    ctx->pc = 0x1B79C8u;
    {
        const bool branch_taken_0x1b79c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79C8u;
        // 0x1b79cc: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79c8) {
            ctx->pc = 0x1B79B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b79b0;
        }
    }
    ctx->pc = 0x1B79D0u;
label_1b79d0:
    // 0x1b79d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b79d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b79d4:
    // 0x1b79d4: 0xc06a39e  jal         func_1A8E78
label_1b79d8:
    if (ctx->pc == 0x1B79D8u) {
        ctx->pc = 0x1B79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D4u;
        // 0x1b79d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79DCu;
        goto label_1b79dc;
    }
    ctx->pc = 0x1B79D4u;
    SET_GPR_U32(ctx, 31, 0x1B79DCu);
    ctx->pc = 0x1B79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79D4u;
    // 0x1b79d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1B79D4u, 0x1B79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79DCu;
label_1b79dc:
    // 0x1b79dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b79dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b79e0:
    // 0x1b79e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b79e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b79e4:
    // 0x1b79e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b79e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b79e8:
    // 0x1b79e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b79e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b79ec:
    // 0x1b79ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b79ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b79f0:
    // 0x1b79f0: 0x3e00008  jr          $ra
label_1b79f4:
    if (ctx->pc == 0x1B79F4u) {
        ctx->pc = 0x1B79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F0u;
        // 0x1b79f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79F8u;
        goto label_fallthrough_0x1b79f0;
    }
    ctx->pc = 0x1B79F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F0u;
        // 0x1b79f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B79F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b79f0:
    ctx->pc = 0x1B79F8u;
}
