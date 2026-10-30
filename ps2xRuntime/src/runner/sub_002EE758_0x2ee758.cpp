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

// Function: sub_002EE758
// Address: 0x2ee758 - 0x2ee7b0
void sub_002EE758_0x2ee758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE758_0x2ee758");
#endif

    switch (ctx->pc) {
        case 0x2ee784u: goto label_2ee784;
        case 0x2ee79cu: goto label_2ee79c;
        default: break;
    }

    ctx->pc = 0x2ee758u;

    // 0x2ee758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee75c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ee75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ee760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ee764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee76c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ee76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ee770: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x2ee770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2ee774: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE774u;
    {
        const bool branch_taken_0x2ee774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE774u;
        // 0x2ee778: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee774) {
            ctx->pc = 0x2EE79Cu;
            goto label_2ee79c;
        }
    }
    ctx->pc = 0x2EE77Cu;
    // 0x2ee77c: 0xc0bb9b8  jal         func_2EE6E0
    ctx->pc = 0x2EE77Cu;
    SET_GPR_U32(ctx, 31, 0x2EE784u);
    ctx->pc = 0x2EE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE77Cu;
    // 0x2ee780: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE6E0u, 0x2EE77Cu, 0x2EE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE784u;
label_2ee784:
    // 0x2ee784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE784u;
    {
        const bool branch_taken_0x2ee784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE784u;
        // 0x2ee788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee784) {
            ctx->pc = 0x2EE79Cu;
            goto label_2ee79c;
        }
    }
    ctx->pc = 0x2EE78Cu;
    // 0x2ee78c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ee78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee790: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ee790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee794: 0xc0930a0  jal         func_24C280
    ctx->pc = 0x2EE794u;
    SET_GPR_U32(ctx, 31, 0x2EE79Cu);
    ctx->pc = 0x2EE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE794u;
    // 0x2ee798: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x2EE794u, 0x2EE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE79Cu;
label_2ee79c:
    // 0x2ee79c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ee79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7A4u;
        // 0x2ee7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE7ACu;
    // 0x2ee7ac: 0x0  nop
    ctx->pc = 0x2ee7acu;
    // NOP
    ctx->pc = 0x2ee7b0u;
}
