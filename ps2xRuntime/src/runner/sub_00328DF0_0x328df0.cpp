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

// Function: sub_00328DF0
// Address: 0x328df0 - 0x328eb0
void sub_00328DF0_0x328df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328DF0_0x328df0");
#endif

    switch (ctx->pc) {
        case 0x328e40u: goto label_328e40;
        case 0x328e58u: goto label_328e58;
        default: break;
    }

    ctx->pc = 0x328df0u;

    // 0x328df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x328df4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x328df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x328df8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x328df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x328dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328e04: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x328e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x328e08: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x328e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x328e0c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x328e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x328e10: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x328e10u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x328e14: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x328e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x328e18: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x328e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x328e1c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x328e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x328e20: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x328E20u;
    {
        const bool branch_taken_0x328e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e20) {
            ctx->pc = 0x328E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328E20u;
            // 0x328e24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x328E28u;
            goto label_328e28;
        }
    }
    ctx->pc = 0x328E28u;
label_328e28:
    // 0x328e28: 0x1812  mflo        $v1
    ctx->pc = 0x328e28u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x328e2c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x328e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328e30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328E30u;
    {
        const bool branch_taken_0x328e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E30u;
        // 0x328e34: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e30) {
            ctx->pc = 0x328E44u;
            goto label_328e44;
        }
    }
    ctx->pc = 0x328E38u;
    // 0x328e38: 0xc0ca846  jal         func_32A118
    ctx->pc = 0x328E38u;
    SET_GPR_U32(ctx, 31, 0x328E40u);
    ctx->pc = 0x328E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E38u;
    // 0x328e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A118u, 0x328E38u, 0x328E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E40u;
label_328e40:
    // 0x328e40: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x328e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_328e44:
    // 0x328e44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x328e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e48: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x328e48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x328e4c: 0x24a58d98  addiu       $a1, $a1, -0x7268
    ctx->pc = 0x328e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938008));
    // 0x328e50: 0xc0ca48e  jal         func_329238
    ctx->pc = 0x328E50u;
    SET_GPR_U32(ctx, 31, 0x328E58u);
    ctx->pc = 0x328E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E50u;
    // 0x328e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329238u, 0x328E50u, 0x328E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E58u;
label_328e58:
    // 0x328e58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x328e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e5c: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x328E5Cu;
    {
        const bool branch_taken_0x328e5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x328E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E5Cu;
        // 0x328e60: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e5c) {
            ctx->pc = 0x328E90u;
            goto label_328e90;
        }
    }
    ctx->pc = 0x328E64u;
    // 0x328e64: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x328e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x328e68: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x328e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x328e6c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x328e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x328e70: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x328e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
    // 0x328e74: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x328e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x328e78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x328e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x328e7c: 0xa3202b  sltu        $a0, $a1, $v1
    ctx->pc = 0x328e7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328e80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328E80u;
    {
        const bool branch_taken_0x328e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E80u;
        // 0x328e84: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e80) {
            ctx->pc = 0x328E98u;
            goto label_328e98;
        }
    }
    ctx->pc = 0x328E88u;
    // 0x328e88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x328E88u;
    {
        const bool branch_taken_0x328e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E88u;
        // 0x328e8c: 0xae05005c  sw          $a1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e88) {
            ctx->pc = 0x328E98u;
            goto label_328e98;
        }
    }
    ctx->pc = 0x328E90u;
label_328e90:
    // 0x328e90: 0x38c20001  xori        $v0, $a2, 0x1
    ctx->pc = 0x328e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x328e94: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x328e94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_328e98:
    // 0x328e98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x328e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328e9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x328e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ea0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x328ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x328EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EA8u;
        // 0x328eac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328EB0u;
}
