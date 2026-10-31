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

// Function: sub_00422A90
// Address: 0x422a90 - 0x422ae8
void sub_00422A90_0x422a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422A90_0x422a90");
#endif

    switch (ctx->pc) {
        case 0x422aa4u: goto label_422aa4;
        case 0x422ab0u: goto label_422ab0;
        default: break;
    }

    ctx->pc = 0x422a90u;

    // 0x422a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x422a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x422a94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x422a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x422a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x422a9c: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x422A9Cu;
    SET_GPR_U32(ctx, 31, 0x422AA4u);
    ctx->pc = 0x422AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422A9Cu;
    // 0x422aa0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x422A9Cu, 0x422AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422AA4u;
label_422aa4:
    // 0x422aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422aa8: 0xc108476  jal         func_4211D8
    ctx->pc = 0x422AA8u;
    SET_GPR_U32(ctx, 31, 0x422AB0u);
    ctx->pc = 0x422AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422AA8u;
    // 0x422aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4211D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4211D8u, 0x422AA8u, 0x422AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422AB0u;
label_422ab0:
    // 0x422ab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x422ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ab4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x422ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x422ab8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x422AB8u;
    {
        const bool branch_taken_0x422ab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x422ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422AB8u;
        // 0x422abc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422ab8) {
            ctx->pc = 0x422AD8u;
            goto label_422ad8;
        }
    }
    ctx->pc = 0x422AC0u;
    // 0x422ac0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x422ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x422ac4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x422ac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ac8: 0x9444584a  lhu         $a0, 0x584A($v0)
    ctx->pc = 0x422ac8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x71584Au));
    // 0x422acc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x422accu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x422ad0: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x422ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x422ad4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x422ad4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_422ad8:
    // 0x422ad8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x422ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x422adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x422AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422AE0u;
        // 0x422ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422AE8u;
}
