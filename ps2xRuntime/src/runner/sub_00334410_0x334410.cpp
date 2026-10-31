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

// Function: sub_00334410
// Address: 0x334410 - 0x334478
void sub_00334410_0x334410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334410_0x334410");
#endif

    switch (ctx->pc) {
        case 0x334450u: goto label_334450;
        case 0x334460u: goto label_334460;
        default: break;
    }

    ctx->pc = 0x334410u;

    // 0x334410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x334410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x334414: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x334414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x334418: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x334418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33441c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33441cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334420: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x334420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x334424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33442c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33442cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334430: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x334430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334434: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x334434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x334438: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x334438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x33443c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x33443cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x334440: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334440u;
    {
        const bool branch_taken_0x334440 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x334440) {
            ctx->pc = 0x334444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334440u;
            // 0x334444: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334454u;
            goto label_334454;
        }
    }
    ctx->pc = 0x334448u;
    // 0x334448: 0xc0ca206  jal         func_328818
    ctx->pc = 0x334448u;
    SET_GPR_U32(ctx, 31, 0x334450u);
    ctx->pc = 0x328818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328818u, 0x334448u, 0x334450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334450u;
label_334450:
    // 0x334450: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x334450u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_334454:
    // 0x334454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334458: 0xc0cd0c0  jal         func_334300
    ctx->pc = 0x334458u;
    SET_GPR_U32(ctx, 31, 0x334460u);
    ctx->pc = 0x33445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334458u;
    // 0x33445c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334300u, 0x334458u, 0x334460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334460u;
label_334460:
    // 0x334460: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x334460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334464: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x334464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334468: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x334468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33446c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334470: 0x3e00008  jr          $ra
    ctx->pc = 0x334470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334470u;
        // 0x334474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334478u;
}
