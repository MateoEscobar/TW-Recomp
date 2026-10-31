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

// Function: sub_00331A80
// Address: 0x331a80 - 0x331ad4
void sub_00331A80_0x331a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331A80_0x331a80");
#endif

    switch (ctx->pc) {
        case 0x331ac0u: goto label_331ac0;
        default: break;
    }

    ctx->pc = 0x331a80u;

    // 0x331a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331a84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x331a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x331a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331a8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x331a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x331a90: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x331a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x331a94: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x331A94u;
    {
        const bool branch_taken_0x331a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A94u;
        // 0x331a98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a94) {
            ctx->pc = 0x331AE0u;
            return;
        }
    }
    ctx->pc = 0x331A9Cu;
    // 0x331a9c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x331a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x331aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331aa4: 0x24426350  addiu       $v0, $v0, 0x6350
    ctx->pc = 0x331aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x331aa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x331aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331aac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x331aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331ab0: 0x800008  jr          $a0
    ctx->pc = 0x331AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x331AB8u: goto label_331ab8;
            case 0x331AC8u: goto label_331ac8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331AB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x331AB8u;
label_331ab8:
    // 0x331ab8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x331AB8u;
    SET_GPR_U32(ctx, 31, 0x331AC0u);
    ctx->pc = 0x331ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331AB8u;
    // 0x331abc: 0xdca40008  ld          $a0, 0x8($a1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x331AB8u, 0x331AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AC0u;
label_331ac0:
    // 0x331ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x331AC0u;
    {
        const bool branch_taken_0x331ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331AC0u;
        // 0x331ac4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ac0) {
            ctx->pc = 0x331AE8u;
            return;
        }
    }
    ctx->pc = 0x331AC8u;
label_331ac8:
    // 0x331ac8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x331ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x331acc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x331ACCu;
    {
        const bool branch_taken_0x331acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331ACCu;
        // 0x331ad0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331acc) {
            ctx->pc = 0x331AE8u;
            return;
        }
    }
    ctx->pc = 0x331AD4u;
}
