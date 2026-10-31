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

// Function: sub_004718E0
// Address: 0x4718e0 - 0x471958
void sub_004718E0_0x4718e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004718E0_0x4718e0");
#endif

    switch (ctx->pc) {
        case 0x471938u: goto label_471938;
        default: break;
    }

    ctx->pc = 0x4718e0u;

    // 0x4718e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4718e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4718e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4718e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4718e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4718e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4718ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4718ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4718f0: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x4718f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x4718f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4718F4u;
    {
        const bool branch_taken_0x4718f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4718F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718F4u;
        // 0x4718f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4718f4) {
            ctx->pc = 0x471940u;
            goto label_471940;
        }
    }
    ctx->pc = 0x4718FCu;
    // 0x4718fc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x4718fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x471900: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x471900u;
    {
        const bool branch_taken_0x471900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x471904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471900u;
        // 0x471904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471900) {
            ctx->pc = 0x471930u;
            goto label_471930;
        }
    }
    ctx->pc = 0x471908u;
    // 0x471908: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x471908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47190c: 0x2445ad18  addiu       $a1, $v0, -0x52E8
    ctx->pc = 0x47190cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x471910: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x471910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD1Cu));
    // 0x471914: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x471914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x471918: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x471918u;
    {
        const bool branch_taken_0x471918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x471918) {
            ctx->pc = 0x47191Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471918u;
            // 0x47191c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471930u;
            goto label_471930;
        }
    }
    ctx->pc = 0x471920u;
    // 0x471920: 0x8f828a88  lw          $v0, -0x7578($gp)
    ctx->pc = 0x471920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x471924: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x471924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x471928: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x471928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x47192c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_471930:
    // 0x471930: 0xc129622  jal         func_4A5888
    ctx->pc = 0x471930u;
    SET_GPR_U32(ctx, 31, 0x471938u);
    ctx->pc = 0x471934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471930u;
    // 0x471934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x471930u, 0x471938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471938u;
label_471938:
    // 0x471938: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x471938u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x47193c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47193cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_471940:
    // 0x471940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x471940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x471944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x471948: 0x3e00008  jr          $ra
    ctx->pc = 0x471948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471948u;
        // 0x47194c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471950u;
    // 0x471950: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x471950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x471954: 0x0  nop
    ctx->pc = 0x471954u;
    // NOP
    ctx->pc = 0x471958u;
}
