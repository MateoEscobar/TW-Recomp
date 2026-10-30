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

// Function: sub_00332AC0
// Address: 0x332ac0 - 0x332b10
void sub_00332AC0_0x332ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332AC0_0x332ac0");
#endif

    switch (ctx->pc) {
        case 0x332ae8u: goto label_332ae8;
        case 0x332af8u: goto label_332af8;
        default: break;
    }

    ctx->pc = 0x332ac0u;

    // 0x332ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332ac4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x332ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x332ac8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x332ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x332ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ad4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x332ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ae0: 0xc0cd494  jal         func_335250
    ctx->pc = 0x332AE0u;
    SET_GPR_U32(ctx, 31, 0x332AE8u);
    ctx->pc = 0x332AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332AE0u;
    // 0x332ae4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335250u, 0x332AE0u, 0x332AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AE8u;
label_332ae8:
    // 0x332ae8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x332AE8u;
    {
        const bool branch_taken_0x332ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AE8u;
        // 0x332aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ae8) {
            ctx->pc = 0x332AF8u;
            goto label_332af8;
        }
    }
    ctx->pc = 0x332AF0u;
    // 0x332af0: 0xc0cca7c  jal         func_3329F0
    ctx->pc = 0x332AF0u;
    SET_GPR_U32(ctx, 31, 0x332AF8u);
    ctx->pc = 0x332AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332AF0u;
    // 0x332af4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329F0u, 0x332AF0u, 0x332AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AF8u;
label_332af8:
    // 0x332af8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x332af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332b04: 0x3e00008  jr          $ra
    ctx->pc = 0x332B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B04u;
        // 0x332b08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332B0Cu;
    // 0x332b0c: 0x0  nop
    ctx->pc = 0x332b0cu;
    // NOP
    ctx->pc = 0x332b10u;
}
