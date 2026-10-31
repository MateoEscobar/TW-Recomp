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

// Function: sub_00487018
// Address: 0x487018 - 0x487080
void sub_00487018_0x487018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487018_0x487018");
#endif

    switch (ctx->pc) {
        case 0x487040u: goto label_487040;
        case 0x487048u: goto label_487048;
        default: break;
    }

    ctx->pc = 0x487018u;

    // 0x487018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x487018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48701c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48701cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x487020: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x487020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x487024: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x487024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x487028: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x487028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x48702c: 0x2451add4  addiu       $s1, $v0, -0x522C
    ctx->pc = 0x48702cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946260));
    // 0x487030: 0x8c50add4  lw          $s0, -0x522C($v0)
    ctx->pc = 0x487030u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x487034: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x487034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487038: 0x12110006  beq         $s0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x487038u;
    {
        const bool branch_taken_0x487038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x48703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487038u;
        // 0x48703c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487038) {
            ctx->pc = 0x487054u;
            goto label_487054;
        }
    }
    ctx->pc = 0x487040u;
label_487040:
    // 0x487040: 0xc121b8e  jal         func_486E38
    ctx->pc = 0x487040u;
    SET_GPR_U32(ctx, 31, 0x487048u);
    ctx->pc = 0x487044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487040u;
    // 0x487044: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486E38u, 0x487040u, 0x487048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487048u;
label_487048:
    // 0x487048: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x487048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48704c: 0x1611fffc  bne         $s0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x48704Cu;
    {
        const bool branch_taken_0x48704c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x48704c) {
            ctx->pc = 0x487040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487040;
        }
    }
    ctx->pc = 0x487054u;
label_487054:
    // 0x487054: 0x2643add4  addiu       $v1, $s2, -0x522C
    ctx->pc = 0x487054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946260));
    // 0x487058: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x487058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48705c: 0xae43add4  sw          $v1, -0x522C($s2)
    ctx->pc = 0x48705cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294946260), GPR_U32(ctx, 3));
    // 0x487060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x487060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x487064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x487064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487068: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x487068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48706c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48706cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487070: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x487070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x487074: 0x3e00008  jr          $ra
    ctx->pc = 0x487074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487074u;
        // 0x487078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48707Cu;
    // 0x48707c: 0x0  nop
    ctx->pc = 0x48707cu;
    // NOP
    ctx->pc = 0x487080u;
}
