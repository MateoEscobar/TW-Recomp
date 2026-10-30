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

// Function: sub_00356A78
// Address: 0x356a78 - 0x356ad0
void sub_00356A78_0x356a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356A78_0x356a78");
#endif

    switch (ctx->pc) {
        case 0x356aa0u: goto label_356aa0;
        case 0x356ab4u: goto label_356ab4;
        default: break;
    }

    ctx->pc = 0x356a78u;

    // 0x356a78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x356a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x356a7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x356a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x356a80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x356a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x356a84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x356a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x356a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x356a8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x356a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x356a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356a98: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x356A98u;
    SET_GPR_U32(ctx, 31, 0x356AA0u);
    ctx->pc = 0x356A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A98u;
    // 0x356a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x356A98u, 0x356AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AA0u;
label_356aa0:
    // 0x356aa0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x356aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x356aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x356aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356aa8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x356aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356aac: 0xc0ca434  jal         func_3290D0
    ctx->pc = 0x356AACu;
    SET_GPR_U32(ctx, 31, 0x356AB4u);
    ctx->pc = 0x356AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AACu;
    // 0x356ab0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3290D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3290D0u, 0x356AACu, 0x356AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AB4u;
label_356ab4:
    // 0x356ab4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x356ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356ab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x356ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356abc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x356abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x356AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AC4u;
        // 0x356ac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356ACCu;
    // 0x356acc: 0x0  nop
    ctx->pc = 0x356accu;
    // NOP
    ctx->pc = 0x356ad0u;
}
