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

// Function: sub_0026D510
// Address: 0x26d510 - 0x26d570
void sub_0026D510_0x26d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D510_0x26d510");
#endif

    switch (ctx->pc) {
        case 0x26d528u: goto label_26d528;
        case 0x26d538u: goto label_26d538;
        case 0x26d55cu: goto label_26d55c;
        default: break;
    }

    ctx->pc = 0x26d510u;

    // 0x26d510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26d514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26d518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26d518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d520: 0xc0e409a  jal         func_390268
    ctx->pc = 0x26D520u;
    SET_GPR_U32(ctx, 31, 0x26D528u);
    ctx->pc = 0x26D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D520u;
    // 0x26d524: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26D520u, 0x26D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D528u;
label_26d528:
    // 0x26d528: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D528u;
    {
        const bool branch_taken_0x26d528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D528u;
        // 0x26d52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d528) {
            ctx->pc = 0x26D540u;
            goto label_26d540;
        }
    }
    ctx->pc = 0x26D530u;
    // 0x26d530: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x26D530u;
    SET_GPR_U32(ctx, 31, 0x26D538u);
    ctx->pc = 0x26D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D530u;
    // 0x26d534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26D530u, 0x26D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D538u;
label_26d538:
    // 0x26d538: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26D538u;
    {
        const bool branch_taken_0x26d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D538u;
        // 0x26d53c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d538) {
            ctx->pc = 0x26D560u;
            goto label_26d560;
        }
    }
    ctx->pc = 0x26D540u;
label_26d540:
    // 0x26d540: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x26d540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x26d544: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26d544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x26d548: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26d548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d54c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d550: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x26d550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x26d554: 0xc09db66  jal         func_276D98
    ctx->pc = 0x26D554u;
    SET_GPR_U32(ctx, 31, 0x26D55Cu);
    ctx->pc = 0x26D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D554u;
    // 0x26d558: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D98u, 0x26D554u, 0x26D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D55Cu;
label_26d55c:
    // 0x26d55c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26d55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26d560:
    // 0x26d560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d564: 0x3e00008  jr          $ra
    ctx->pc = 0x26D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D564u;
        // 0x26d568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D56Cu;
    // 0x26d56c: 0x0  nop
    ctx->pc = 0x26d56cu;
    // NOP
    ctx->pc = 0x26d570u;
}
