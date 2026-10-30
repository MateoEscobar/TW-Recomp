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

// Function: sub_002D5CF0
// Address: 0x2d5cf0 - 0x2d5db8
void sub_002D5CF0_0x2d5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5CF0_0x2d5cf0");
#endif

    switch (ctx->pc) {
        case 0x2d5d58u: goto label_2d5d58;
        case 0x2d5d68u: goto label_2d5d68;
        case 0x2d5d78u: goto label_2d5d78;
        case 0x2d5d88u: goto label_2d5d88;
        case 0x2d5d9cu: goto label_2d5d9c;
        default: break;
    }

    ctx->pc = 0x2d5cf0u;

    // 0x2d5cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d5cf4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2d5cf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d5cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d5cfc: 0x24421110  addiu       $v0, $v0, 0x1110
    ctx->pc = 0x2d5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4368));
    // 0x2d5d00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d5d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d5d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d5d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d5d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d18: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x2d5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x2d5d1c: 0xae2a0008  sw          $t2, 0x8($s1)
    ctx->pc = 0x2d5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 10));
    // 0x2d5d20: 0xe62c0028  swc1        $f12, 0x28($s1)
    ctx->pc = 0x2d5d20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2d5d24: 0xa2270031  sb          $a3, 0x31($s1)
    ctx->pc = 0x2d5d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d5d28: 0xa2280032  sb          $t0, 0x32($s1)
    ctx->pc = 0x2d5d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 8));
    // 0x2d5d2c: 0xa2290033  sb          $t1, 0x33($s1)
    ctx->pc = 0x2d5d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 9));
    // 0x2d5d30: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d5d34: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2d5d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2d5d38: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2d5d38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5d3c: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2d5d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5d40: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2d5d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2d5d44: 0xa2200030  sb          $zero, 0x30($s1)
    ctx->pc = 0x2d5d44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5d48: 0xa2200034  sb          $zero, 0x34($s1)
    ctx->pc = 0x2d5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5d4c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2d5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2d5d50: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D5D50u;
    SET_GPR_U32(ctx, 31, 0x2D5D58u);
    ctx->pc = 0x2D5D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D50u;
    // 0x2d5d54: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D5D50u, 0x2D5D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D58u;
label_2d5d58:
    // 0x2d5d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d5d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d60: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2D5D60u;
    SET_GPR_U32(ctx, 31, 0x2D5D68u);
    ctx->pc = 0x2D5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D60u;
    // 0x2d5d64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D5D60u, 0x2D5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D68u;
label_2d5d68:
    // 0x2d5d68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5D68u;
    {
        const bool branch_taken_0x2d5d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d68) {
            ctx->pc = 0x2D5D80u;
            goto label_2d5d80;
        }
    }
    ctx->pc = 0x2D5D70u;
    // 0x2d5d70: 0xc087420  jal         func_21D080
    ctx->pc = 0x2D5D70u;
    SET_GPR_U32(ctx, 31, 0x2D5D78u);
    ctx->pc = 0x2D5D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D70u;
    // 0x2d5d74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2D5D70u, 0x2D5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D78u;
label_2d5d78:
    // 0x2d5d78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5D78u;
    {
        const bool branch_taken_0x2d5d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D78u;
        // 0x2d5d7c: 0x78420000  lq          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d78) {
            ctx->pc = 0x2D5D8Cu;
            goto label_2d5d8c;
        }
    }
    ctx->pc = 0x2D5D80u;
label_2d5d80:
    // 0x2d5d80: 0xc087420  jal         func_21D080
    ctx->pc = 0x2D5D80u;
    SET_GPR_U32(ctx, 31, 0x2D5D88u);
    ctx->pc = 0x2D5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D80u;
    // 0x2d5d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2D5D80u, 0x2D5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D88u;
label_2d5d88:
    // 0x2d5d88: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d5d88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5d8c:
    // 0x2d5d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5d94: 0xc0b5820  jal         func_2D6080
    ctx->pc = 0x2D5D94u;
    SET_GPR_U32(ctx, 31, 0x2D5D9Cu);
    ctx->pc = 0x2D5D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D94u;
    // 0x2d5d98: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6080u, 0x2D5D94u, 0x2D5D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D9Cu;
label_2d5d9c:
    // 0x2d5d9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d5d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5da0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d5da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5da4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d5da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5da8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5db0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DB0u;
        // 0x2d5db4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5DB8u;
}
