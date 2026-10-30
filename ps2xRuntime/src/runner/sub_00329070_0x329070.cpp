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

// Function: sub_00329070
// Address: 0x329070 - 0x3290d0
void sub_00329070_0x329070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329070_0x329070");
#endif

    switch (ctx->pc) {
        case 0x3290a0u: goto label_3290a0;
        case 0x3290b8u: goto label_3290b8;
        default: break;
    }

    ctx->pc = 0x329070u;

    // 0x329070: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x329070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x329074: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x329074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x329078: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x329078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x32907c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32907cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329080: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x329080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x329084: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x329084u;
    {
        const bool branch_taken_0x329084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x329088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329084u;
        // 0x329088: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329084) {
            ctx->pc = 0x329094u;
            goto label_329094;
        }
    }
    ctx->pc = 0x32908Cu;
    // 0x32908c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x32908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x329090: 0x244753b8  addiu       $a3, $v0, 0x53B8
    ctx->pc = 0x329090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 21432));
label_329094:
    // 0x329094: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x329094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329098: 0xc0cd45e  jal         func_335178
    ctx->pc = 0x329098u;
    SET_GPR_U32(ctx, 31, 0x3290A0u);
    ctx->pc = 0x32909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329098u;
    // 0x32909c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335178u, 0x329098u, 0x3290A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290A0u;
label_3290a0:
    // 0x3290a0: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x3290a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3290a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3290a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3290a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290ac: 0x38c6001b  xori        $a2, $a2, 0x1B
    ctx->pc = 0x3290acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)27);
    // 0x3290b0: 0xc0ca37c  jal         func_328DF0
    ctx->pc = 0x3290B0u;
    SET_GPR_U32(ctx, 31, 0x3290B8u);
    ctx->pc = 0x3290B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290B0u;
    // 0x3290b4: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x328DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328DF0u, 0x3290B0u, 0x3290B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290B8u;
label_3290b8:
    // 0x3290b8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x3290b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3290bc: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x3290bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3290c0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3290c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3290c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3290C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3290C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290C4u;
        // 0x3290c8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3290C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3290CCu;
    // 0x3290cc: 0x0  nop
    ctx->pc = 0x3290ccu;
    // NOP
    ctx->pc = 0x3290d0u;
}
