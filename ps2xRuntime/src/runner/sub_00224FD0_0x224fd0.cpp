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

// Function: sub_00224FD0
// Address: 0x224fd0 - 0x225030
void sub_00224FD0_0x224fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224FD0_0x224fd0");
#endif

    switch (ctx->pc) {
        case 0x224ffcu: goto label_224ffc;
        case 0x225014u: goto label_225014;
        default: break;
    }

    ctx->pc = 0x224fd0u;

    // 0x224fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224fd4: 0x3405b007  ori         $a1, $zero, 0xB007
    ctx->pc = 0x224fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45063);
    // 0x224fd8: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x224fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x224fdc: 0x34a5f0c0  ori         $a1, $a1, 0xF0C0
    ctx->pc = 0x224fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61632);
    // 0x224fe0: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x224fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
    // 0x224fe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x224fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224ff4: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x224FF4u;
    SET_GPR_U32(ctx, 31, 0x224FFCu);
    ctx->pc = 0x224FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FF4u;
    // 0x224ff8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224FF4u, 0x224FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FFCu;
label_224ffc:
    // 0x224ffc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224FFCu;
    {
        const bool branch_taken_0x224ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FFCu;
        // 0x225000: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ffc) {
            ctx->pc = 0x22501Cu;
            goto label_22501c;
        }
    }
    ctx->pc = 0x225004u;
    // 0x225004: 0x3c0500c0  lui         $a1, 0xC0
    ctx->pc = 0x225004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
    // 0x225008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22500c: 0xc089998  jal         func_226660
    ctx->pc = 0x22500Cu;
    SET_GPR_U32(ctx, 31, 0x225014u);
    ctx->pc = 0x225010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22500Cu;
    // 0x225010: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22500Cu, 0x225014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225014u;
label_225014:
    // 0x225014: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225014u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x225018: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22501c:
    // 0x22501c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22501cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225028: 0x3e00008  jr          $ra
    ctx->pc = 0x225028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225028u;
        // 0x22502c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225030u;
}
