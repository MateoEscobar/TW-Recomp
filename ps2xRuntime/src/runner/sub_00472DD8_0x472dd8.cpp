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

// Function: sub_00472DD8
// Address: 0x472dd8 - 0x472ec0
void sub_00472DD8_0x472dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472DD8_0x472dd8");
#endif

    switch (ctx->pc) {
        case 0x472e48u: goto label_472e48;
        case 0x472e5cu: goto label_472e5c;
        case 0x472e70u: goto label_472e70;
        case 0x472e80u: goto label_472e80;
        case 0x472e88u: goto label_472e88;
        default: break;
    }

    ctx->pc = 0x472dd8u;

    // 0x472dd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x472dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x472ddc: 0x8f828520  lw          $v0, -0x7AE0($gp)
    ctx->pc = 0x472ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935840)));
    // 0x472de0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x472de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x472de4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x472de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x472de8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x472de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472dec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x472decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x472df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x472df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472df4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x472df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x472df8: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x472df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x472dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x472e00: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x472e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x472e04: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x472e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x472e08: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472e0c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x472e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x472e10: 0x24a537d8  addiu       $a1, $a1, 0x37D8
    ctx->pc = 0x472e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14296));
    // 0x472e14: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x472e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x472e18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x472e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472e1c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x472e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x472e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472e24: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x472e24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x472e28: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x472e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x472e2c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x472e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x472e30: 0xae27002c  sw          $a3, 0x2C($s1)
    ctx->pc = 0x472e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 7));
    // 0x472e34: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x472e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x472e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x472e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x472e3c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x472e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x472e40: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x472E40u;
    SET_GPR_U32(ctx, 31, 0x472E48u);
    ctx->pc = 0x472E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472E40u;
    // 0x472e44: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x472E40u, 0x472E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472E48u;
label_472e48:
    // 0x472e48: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472e50: 0x24a53850  addiu       $a1, $a1, 0x3850
    ctx->pc = 0x472e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14416));
    // 0x472e54: 0xc11a7f0  jal         func_469FC0
    ctx->pc = 0x472E54u;
    SET_GPR_U32(ctx, 31, 0x472E5Cu);
    ctx->pc = 0x472E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472E54u;
    // 0x472e58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469FC0u, 0x472E54u, 0x472E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472E5Cu;
label_472e5c:
    // 0x472e5c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472e64: 0x24a538c8  addiu       $a1, $a1, 0x38C8
    ctx->pc = 0x472e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14536));
    // 0x472e68: 0xc11a810  jal         func_46A040
    ctx->pc = 0x472E68u;
    SET_GPR_U32(ctx, 31, 0x472E70u);
    ctx->pc = 0x472E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472E68u;
    // 0x472e6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A040u, 0x472E68u, 0x472E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472E70u;
label_472e70:
    // 0x472e70: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x472E70u;
    {
        const bool branch_taken_0x472e70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x472E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472E70u;
        // 0x472e74: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472e70) {
            ctx->pc = 0x472E88u;
            goto label_472e88;
        }
    }
    ctx->pc = 0x472E78u;
    // 0x472e78: 0xc11f2aa  jal         func_47CAA8
    ctx->pc = 0x472E78u;
    SET_GPR_U32(ctx, 31, 0x472E80u);
    ctx->pc = 0x472E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472E78u;
    // 0x472e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CAA8u, 0x472E78u, 0x472E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472E80u;
label_472e80:
    // 0x472e80: 0xc12105a  jal         func_484168
    ctx->pc = 0x472E80u;
    SET_GPR_U32(ctx, 31, 0x472E88u);
    ctx->pc = 0x472E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472E80u;
    // 0x472e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x472E80u, 0x472E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472E88u;
label_472e88:
    // 0x472e88: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x472e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x472e8c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x472e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x472e90: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x472e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
    // 0x472e94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x472e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472e98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x472e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x472e9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x472e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472ea0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x472ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x472ea4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x472ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x472ea8: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x472ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x472eac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x472eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472eb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x472eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x472EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472EB8u;
        // 0x472ebc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472EC0u;
}
