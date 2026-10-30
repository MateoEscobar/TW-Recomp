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

// Function: sub_00303E90
// Address: 0x303e90 - 0x303ef0
void sub_00303E90_0x303e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303E90_0x303e90");
#endif

    switch (ctx->pc) {
        case 0x303edcu: goto label_303edc;
        default: break;
    }

    ctx->pc = 0x303e90u;

    // 0x303e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303e94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x303e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x303e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303e9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x303e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303ea4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x303ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x303ea8: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x303ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x303eac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x303EACu;
    {
        const bool branch_taken_0x303eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EACu;
        // 0x303eb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303eac) {
            ctx->pc = 0x303EF0u;
            return;
        }
    }
    ctx->pc = 0x303EB4u;
    // 0x303eb4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x303eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x303eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x303eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303ebc: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x303ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x303ec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x303ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303ec8: 0x800008  jr          $a0
    ctx->pc = 0x303EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303ED0u: goto label_303ed0;
            case 0x303EE8u: goto label_303ee8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x303ED0u;
label_303ed0:
    // 0x303ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ed4: 0xc0c0d1a  jal         func_303468
    ctx->pc = 0x303ED4u;
    SET_GPR_U32(ctx, 31, 0x303EDCu);
    ctx->pc = 0x303ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303ED4u;
    // 0x303ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303468u, 0x303ED4u, 0x303EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EDCu;
label_303edc:
    // 0x303edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303ee0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x303EE0u;
    {
        const bool branch_taken_0x303ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x303EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EE0u;
        // 0x303ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ee0) {
            ctx->pc = 0x303EF4u;
            return;
        }
    }
    ctx->pc = 0x303EE8u;
label_303ee8:
    // 0x303ee8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x303EE8u;
    {
        const bool branch_taken_0x303ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EE8u;
        // 0x303eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ee8) {
            ctx->pc = 0x303EFCu;
            return;
        }
    }
    ctx->pc = 0x303EF0u;
}
