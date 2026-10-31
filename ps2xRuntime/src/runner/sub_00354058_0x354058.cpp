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

// Function: sub_00354058
// Address: 0x354058 - 0x3540b8
void sub_00354058_0x354058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354058_0x354058");
#endif

    switch (ctx->pc) {
        case 0x35406cu: goto label_35406c;
        default: break;
    }

    ctx->pc = 0x354058u;

    // 0x354058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35405c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x354060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354064: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x354064u;
    SET_GPR_U32(ctx, 31, 0x35406Cu);
    ctx->pc = 0x354068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354064u;
    // 0x354068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x354064u, 0x35406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35406Cu;
label_35406c:
    // 0x35406c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35406cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354070: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x354070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x354074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x354074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x354078: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x354078u;
    {
        const bool branch_taken_0x354078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354078u;
        // 0x35407c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354078) {
            ctx->pc = 0x3540A8u;
            goto label_3540a8;
        }
    }
    ctx->pc = 0x354080u;
    // 0x354080: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x354080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354084: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x354084u;
    {
        const bool branch_taken_0x354084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354084) {
            ctx->pc = 0x354088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354084u;
            // 0x354088: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3540ACu;
            goto label_3540ac;
        }
    }
    ctx->pc = 0x35408Cu;
    // 0x35408c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x354090: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354090u;
    {
        const bool branch_taken_0x354090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x354094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354090u;
        // 0x354094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354090) {
            ctx->pc = 0x3540A8u;
            goto label_3540a8;
        }
    }
    ctx->pc = 0x354098u;
    // 0x354098: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x354098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x35409c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x35409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x3540a0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3540a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3540a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3540a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3540a8:
    // 0x3540a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3540a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3540ac:
    // 0x3540ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3540acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3540b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3540B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3540B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3540B0u;
        // 0x3540b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3540B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3540B8u;
}
