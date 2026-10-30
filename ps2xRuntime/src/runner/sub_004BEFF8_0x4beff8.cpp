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

// Function: sub_004BEFF8
// Address: 0x4beff8 - 0x4bf070
void sub_004BEFF8_0x4beff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEFF8_0x4beff8");
#endif

    switch (ctx->pc) {
        case 0x4bf03cu: goto label_4bf03c;
        case 0x4bf050u: goto label_4bf050;
        default: break;
    }

    ctx->pc = 0x4beff8u;

    // 0x4beff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4beff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4beffc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4beffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4bf000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bf004: 0x8c4341f4  lw          $v1, 0x41F4($v0)
    ctx->pc = 0x4bf004u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4bf008: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bf008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf00c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4bf010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bf014: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x4bf014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4bf018: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4bf018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bf01c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BF01Cu;
    {
        const bool branch_taken_0x4bf01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF01Cu;
        // 0x4bf020: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf01c) {
            ctx->pc = 0x4BF054u;
            goto label_4bf054;
        }
    }
    ctx->pc = 0x4BF024u;
    // 0x4bf024: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4bf024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4bf028: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BF028u;
    {
        const bool branch_taken_0x4bf028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF028u;
        // 0x4bf02c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf028) {
            ctx->pc = 0x4BF054u;
            goto label_4bf054;
        }
    }
    ctx->pc = 0x4BF030u;
    // 0x4bf030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bf030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bf034: 0xc11c76e  jal         func_471DB8
    ctx->pc = 0x4BF034u;
    SET_GPR_U32(ctx, 31, 0x4BF03Cu);
    ctx->pc = 0x4BF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF034u;
    // 0x4bf038: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DB8u, 0x4BF034u, 0x4BF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF03Cu;
label_4bf03c:
    // 0x4bf03c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bf03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bf040: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x4bf040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x4bf044: 0x24a5f070  addiu       $a1, $a1, -0xF90
    ctx->pc = 0x4bf044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
    // 0x4bf048: 0xc11c766  jal         func_471D98
    ctx->pc = 0x4BF048u;
    SET_GPR_U32(ctx, 31, 0x4BF050u);
    ctx->pc = 0x4BF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF048u;
    // 0x4bf04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x4BF048u, 0x4BF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF050u;
label_4bf050:
    // 0x4bf050: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf054:
    // 0x4bf054: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf060: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF060u;
        // 0x4bf064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF068u;
    // 0x4bf068: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x4bf068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x4bf06c: 0x0  nop
    ctx->pc = 0x4bf06cu;
    // NOP
    ctx->pc = 0x4bf070u;
}
