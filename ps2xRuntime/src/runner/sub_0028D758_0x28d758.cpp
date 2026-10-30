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

// Function: sub_0028D758
// Address: 0x28d758 - 0x28d7d8
void sub_0028D758_0x28d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D758_0x28d758");
#endif

    switch (ctx->pc) {
        case 0x28d79cu: goto label_28d79c;
        case 0x28d7a4u: goto label_28d7a4;
        case 0x28d7bcu: goto label_28d7bc;
        default: break;
    }

    ctx->pc = 0x28d758u;

    // 0x28d758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d75c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28d760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d76c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28d76cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28d770: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D770u;
    {
        const bool branch_taken_0x28d770 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D770u;
        // 0x28d774: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d770) {
            ctx->pc = 0x28D788u;
            goto label_28d788;
        }
    }
    ctx->pc = 0x28D778u;
    // 0x28d778: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d77c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D780u;
    {
        const bool branch_taken_0x28d780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D780u;
        // 0x28d784: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d780) {
            ctx->pc = 0x28D78Cu;
            goto label_28d78c;
        }
    }
    ctx->pc = 0x28D788u;
label_28d788:
    // 0x28d788: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d78c:
    // 0x28d78c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D78Cu;
    {
        const bool branch_taken_0x28d78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d78c) {
            ctx->pc = 0x28D79Cu;
            goto label_28d79c;
        }
    }
    ctx->pc = 0x28D794u;
    // 0x28d794: 0xc0a7ba8  jal         func_29EEA0
    ctx->pc = 0x28D794u;
    SET_GPR_U32(ctx, 31, 0x28D79Cu);
    ctx->pc = 0x29EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EEA0u, 0x28D794u, 0x28D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D79Cu;
label_28d79c:
    // 0x28d79c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x28D79Cu;
    SET_GPR_U32(ctx, 31, 0x28D7A4u);
    ctx->pc = 0x28D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D79Cu;
    // 0x28d7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28D79Cu, 0x28D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7A4u;
label_28d7a4:
    // 0x28d7a4: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x28d7a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28d7a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28d7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d7b4: 0xc0a2b1a  jal         func_28AC68
    ctx->pc = 0x28D7B4u;
    SET_GPR_U32(ctx, 31, 0x28D7BCu);
    ctx->pc = 0x28D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7B4u;
    // 0x28d7b8: 0xa203002c  sb          $v1, 0x2C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC68u, 0x28D7B4u, 0x28D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7BCu;
label_28d7bc:
    // 0x28d7bc: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28d7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28d7c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28d7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d7c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7CCu;
        // 0x28d7d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D7D4u;
    // 0x28d7d4: 0x0  nop
    ctx->pc = 0x28d7d4u;
    // NOP
    ctx->pc = 0x28d7d8u;
}
