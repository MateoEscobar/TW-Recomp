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

// Function: sub_002F8030
// Address: 0x2f8030 - 0x2f80b0
void sub_002F8030_0x2f8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8030_0x2f8030");
#endif

    switch (ctx->pc) {
        case 0x2f8058u: goto label_2f8058;
        case 0x2f8068u: goto label_2f8068;
        case 0x2f8078u: goto label_2f8078;
        case 0x2f8088u: goto label_2f8088;
        case 0x2f8098u: goto label_2f8098;
        default: break;
    }

    ctx->pc = 0x2f8030u;

    // 0x2f8030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f8030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f8034: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f8034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f8038: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f8038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f803c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f803cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8040: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f8040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f8044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f8044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f8048: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f8048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f804c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f804cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8050: 0xc0a3ba2  jal         func_28EE88
    ctx->pc = 0x2F8050u;
    SET_GPR_U32(ctx, 31, 0x2F8058u);
    ctx->pc = 0x2F8054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8050u;
    // 0x2f8054: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE88u, 0x2F8050u, 0x2F8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8058u;
label_2f8058:
    // 0x2f8058: 0x16120009  bne         $s0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F8058u;
    {
        const bool branch_taken_0x2f8058 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f8058) {
            ctx->pc = 0x2F8080u;
            goto label_2f8080;
        }
    }
    ctx->pc = 0x2F8060u;
    // 0x2f8060: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2F8060u;
    SET_GPR_U32(ctx, 31, 0x2F8068u);
    ctx->pc = 0x2F8064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8060u;
    // 0x2f8064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2F8060u, 0x2F8068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8068u;
label_2f8068:
    // 0x2f8068: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F8068u;
    {
        const bool branch_taken_0x2f8068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8068u;
        // 0x2f806c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8068) {
            ctx->pc = 0x2F809Cu;
            goto label_2f809c;
        }
    }
    ctx->pc = 0x2F8070u;
    // 0x2f8070: 0xc08bfe2  jal         func_22FF88
    ctx->pc = 0x2F8070u;
    SET_GPR_U32(ctx, 31, 0x2F8078u);
    ctx->pc = 0x2F8074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8070u;
    // 0x2f8074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF88u, 0x2F8070u, 0x2F8078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8078u;
label_2f8078:
    // 0x2f8078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8078u;
    {
        const bool branch_taken_0x2f8078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8078u;
        // 0x2f807c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8078) {
            ctx->pc = 0x2F809Cu;
            goto label_2f809c;
        }
    }
    ctx->pc = 0x2F8080u;
label_2f8080:
    // 0x2f8080: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2F8080u;
    SET_GPR_U32(ctx, 31, 0x2F8088u);
    ctx->pc = 0x2F8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8080u;
    // 0x2f8084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2F8080u, 0x2F8088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8088u;
label_2f8088:
    // 0x2f8088: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8088u;
    {
        const bool branch_taken_0x2f8088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8088u;
        // 0x2f808c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8088) {
            ctx->pc = 0x2F809Cu;
            goto label_2f809c;
        }
    }
    ctx->pc = 0x2F8090u;
    // 0x2f8090: 0xc08c050  jal         func_230140
    ctx->pc = 0x2F8090u;
    SET_GPR_U32(ctx, 31, 0x2F8098u);
    ctx->pc = 0x2F8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8090u;
    // 0x2f8094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x2F8090u, 0x2F8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8098u;
label_2f8098:
    // 0x2f8098: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f8098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f809c:
    // 0x2f809c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f809cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f80a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f80a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f80a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f80a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f80a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F80A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80A8u;
        // 0x2f80ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F80A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F80B0u;
}
