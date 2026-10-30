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

// Function: sub_004A4E00
// Address: 0x4a4e00 - 0x4a4ec0
void sub_004A4E00_0x4a4e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4E00_0x4a4e00");
#endif

    switch (ctx->pc) {
        case 0x4a4e4cu: goto label_4a4e4c;
        case 0x4a4e5cu: goto label_4a4e5c;
        case 0x4a4e70u: goto label_4a4e70;
        case 0x4a4e88u: goto label_4a4e88;
        case 0x4a4e94u: goto label_4a4e94;
        default: break;
    }

    ctx->pc = 0x4a4e00u;

    // 0x4a4e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a4e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a4e04: 0x8f838a84  lw          $v1, -0x757C($gp)
    ctx->pc = 0x4a4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x4a4e08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a4e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a4e0c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4e10: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4a4e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e14: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x4a4e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a4e1c: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x4a4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4a4e20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a4e24: 0xaf868a80  sw          $a2, -0x7580($gp)
    ctx->pc = 0x4a4e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937216), GPR_U32(ctx, 6));
    // 0x4a4e28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a4e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e2c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a4e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a4e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a4e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a4e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a4e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4e3c: 0xaf838a84  sw          $v1, -0x757C($gp)
    ctx->pc = 0x4a4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937220), GPR_U32(ctx, 3));
    // 0x4a4e40: 0xaf8287c0  sw          $v0, -0x7840($gp)
    ctx->pc = 0x4a4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U32(ctx, 2));
    // 0x4a4e44: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4A4E44u;
    SET_GPR_U32(ctx, 31, 0x4A4E4Cu);
    ctx->pc = 0x4A4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4E44u;
    // 0x4a4e48: 0x2406007c  addiu       $a2, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4A4E44u, 0x4A4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4E4Cu;
label_4a4e4c:
    // 0x4a4e4c: 0x2612001c  addiu       $s2, $s0, 0x1C
    ctx->pc = 0x4a4e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4a4e50: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4e54: 0xc12a51e  jal         func_4A9478
    ctx->pc = 0x4A4E54u;
    SET_GPR_U32(ctx, 31, 0x4A4E5Cu);
    ctx->pc = 0x4A4E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4E54u;
    // 0x4a4e58: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9478u, 0x4A4E54u, 0x4A4E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4E5Cu;
label_4a4e5c:
    // 0x4a4e5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A4E5Cu;
    {
        const bool branch_taken_0x4a4e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4E5Cu;
        // 0x4a4e60: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4e5c) {
            ctx->pc = 0x4A4E78u;
            goto label_4a4e78;
        }
    }
    ctx->pc = 0x4A4E64u;
    // 0x4a4e64: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4e68: 0xc12a520  jal         func_4A9480
    ctx->pc = 0x4A4E68u;
    SET_GPR_U32(ctx, 31, 0x4A4E70u);
    ctx->pc = 0x4A4E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4E68u;
    // 0x4a4e6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9480u, 0x4A4E68u, 0x4A4E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4E70u;
label_4a4e70:
    // 0x4a4e70: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4A4E70u;
    {
        const bool branch_taken_0x4a4e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4e70) {
            ctx->pc = 0x4A4E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4E70u;
            // 0x4a4e74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4EA4u;
            goto label_4a4ea4;
        }
    }
    ctx->pc = 0x4A4E78u;
label_4a4e78:
    // 0x4a4e78: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4e7c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4a4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4a4e80: 0xc12a524  jal         func_4A9490
    ctx->pc = 0x4A4E80u;
    SET_GPR_U32(ctx, 31, 0x4A4E88u);
    ctx->pc = 0x4A4E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4E80u;
    // 0x4a4e84: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9490u, 0x4A4E80u, 0x4A4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4E88u;
label_4a4e88:
    // 0x4a4e88: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4e8c: 0xc12a522  jal         func_4A9488
    ctx->pc = 0x4A4E8Cu;
    SET_GPR_U32(ctx, 31, 0x4A4E94u);
    ctx->pc = 0x4A4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4E8Cu;
    // 0x4a4e90: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9488u, 0x4A4E8Cu, 0x4A4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4E94u;
label_4a4e94:
    // 0x4a4e94: 0x8f838a84  lw          $v1, -0x757C($gp)
    ctx->pc = 0x4a4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x4a4e98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a4e9c: 0xaf838a84  sw          $v1, -0x757C($gp)
    ctx->pc = 0x4a4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937220), GPR_U32(ctx, 3));
    // 0x4a4ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a4ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a4ea4:
    // 0x4a4ea4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a4ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4ea8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a4ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4eac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a4eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4EB4u;
        // 0x4a4eb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4EBCu;
    // 0x4a4ebc: 0x0  nop
    ctx->pc = 0x4a4ebcu;
    // NOP
    ctx->pc = 0x4a4ec0u;
}
