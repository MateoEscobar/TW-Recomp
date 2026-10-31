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

// Function: sub_004124F8
// Address: 0x4124f8 - 0x412550
void sub_004124F8_0x4124f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004124F8_0x4124f8");
#endif

    switch (ctx->pc) {
        case 0x41250cu: goto label_41250c;
        case 0x412528u: goto label_412528;
        case 0x412534u: goto label_412534;
        case 0x412540u: goto label_412540;
        default: break;
    }

    ctx->pc = 0x4124f8u;

    // 0x4124f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4124f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4124fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4124fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x412500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x412504: 0xc051048  jal         func_144120
    ctx->pc = 0x412504u;
    SET_GPR_U32(ctx, 31, 0x41250Cu);
    ctx->pc = 0x412508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412504u;
    // 0x412508: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x412504u, 0x41250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41250Cu;
label_41250c:
    // 0x41250c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412510: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x412510u;
    {
        const bool branch_taken_0x412510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x412514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412510u;
        // 0x412514: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412510) {
            ctx->pc = 0x412520u;
            goto label_412520;
        }
    }
    ctx->pc = 0x412518u;
    // 0x412518: 0x24425bf0  addiu       $v0, $v0, 0x5BF0
    ctx->pc = 0x412518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
    // 0x41251c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41251cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_412520:
    // 0x412520: 0xc051048  jal         func_144120
    ctx->pc = 0x412520u;
    SET_GPR_U32(ctx, 31, 0x412528u);
    ctx->pc = 0x412524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412520u;
    // 0x412524: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x412520u, 0x412528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412528u;
label_412528:
    // 0x412528: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x412528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x41252c: 0xc051048  jal         func_144120
    ctx->pc = 0x41252Cu;
    SET_GPR_U32(ctx, 31, 0x412534u);
    ctx->pc = 0x412530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41252Cu;
    // 0x412530: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x41252Cu, 0x412534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412534u;
label_412534:
    // 0x412534: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x412534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x412538: 0xc051032  jal         func_1440C8
    ctx->pc = 0x412538u;
    SET_GPR_U32(ctx, 31, 0x412540u);
    ctx->pc = 0x41253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412538u;
    // 0x41253c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1440C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440C8u, 0x412538u, 0x412540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412540u;
label_412540:
    // 0x412540: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x412540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x412544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x412548: 0x3e00008  jr          $ra
    ctx->pc = 0x412548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412548u;
        // 0x41254c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412550u;
}
