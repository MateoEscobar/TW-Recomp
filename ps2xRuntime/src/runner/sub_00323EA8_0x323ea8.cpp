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

// Function: sub_00323EA8
// Address: 0x323ea8 - 0x323f10
void sub_00323EA8_0x323ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323EA8_0x323ea8");
#endif

    switch (ctx->pc) {
        case 0x323ef8u: goto label_323ef8;
        default: break;
    }

    ctx->pc = 0x323ea8u;

    // 0x323ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323eac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323eb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x323eb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323eb8: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x323EB8u;
    {
        const bool branch_taken_0x323eb8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EB8u;
        // 0x323ebc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323eb8) {
            ctx->pc = 0x323ED8u;
            goto label_323ed8;
        }
    }
    ctx->pc = 0x323EC0u;
    // 0x323ec0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323ec4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x323ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x323ec8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x323ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x323ecc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x323eccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323ed0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323ED0u;
    {
        const bool branch_taken_0x323ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323ED0u;
        // 0x323ed4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ed0) {
            ctx->pc = 0x323EE8u;
            goto label_323ee8;
        }
    }
    ctx->pc = 0x323ED8u;
label_323ed8:
    // 0x323ed8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x323ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323edc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323ee0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x323ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x323ee4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x323ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_323ee8:
    // 0x323ee8: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x323ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x323eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ef0: 0xc0cceae  jal         func_333AB8
    ctx->pc = 0x323EF0u;
    SET_GPR_U32(ctx, 31, 0x323EF8u);
    ctx->pc = 0x323EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323EF0u;
    // 0x323ef4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333AB8u, 0x323EF0u, 0x323EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EF8u;
label_323ef8:
    // 0x323ef8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x323ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x323efc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323f08: 0x3e00008  jr          $ra
    ctx->pc = 0x323F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F08u;
        // 0x323f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323F10u;
}
