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

// Function: sub_002B8A30
// Address: 0x2b8a30 - 0x2b8ad8
void sub_002B8A30_0x2b8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8A30_0x2b8a30");
#endif

    switch (ctx->pc) {
        case 0x2b8a60u: goto label_2b8a60;
        case 0x2b8a70u: goto label_2b8a70;
        case 0x2b8a7cu: goto label_2b8a7c;
        case 0x2b8aacu: goto label_2b8aac;
        default: break;
    }

    ctx->pc = 0x2b8a30u;

    // 0x2b8a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b8a34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b8a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b8a38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b8a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b8a3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b8a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b8a44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8a48: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b8a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b8a4c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2b8a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b8a50: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2b8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b8a54: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2b8a54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b8a58: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B8A58u;
    SET_GPR_U32(ctx, 31, 0x2B8A60u);
    ctx->pc = 0x2B8A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A58u;
    // 0x2b8a5c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B8A58u, 0x2B8A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A60u;
label_2b8a60:
    // 0x2b8a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a68: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2B8A68u;
    SET_GPR_U32(ctx, 31, 0x2B8A70u);
    ctx->pc = 0x2B8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A68u;
    // 0x2b8a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2B8A68u, 0x2B8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A70u;
label_2b8a70:
    // 0x2b8a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a74: 0xc087420  jal         func_21D080
    ctx->pc = 0x2B8A74u;
    SET_GPR_U32(ctx, 31, 0x2B8A7Cu);
    ctx->pc = 0x2B8A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A74u;
    // 0x2b8a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2B8A74u, 0x2B8A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A7Cu;
label_2b8a7c:
    // 0x2b8a7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b8a7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8a80: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B8A80u;
    {
        const bool branch_taken_0x2b8a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A80u;
        // 0x2b8a84: 0x7e430010  sq          $v1, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a80) {
            ctx->pc = 0x2B8ABCu;
            goto label_2b8abc;
        }
    }
    ctx->pc = 0x2B8A88u;
    // 0x2b8a88: 0x7a0202b0  lq          $v0, 0x2B0($s0)
    ctx->pc = 0x2b8a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2b8a8c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2b8a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2b8a90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b8a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b8a94: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2b8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2b8a98: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x2b8a98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x2b8a9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b8a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8aa0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2b8aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2b8aa4: 0xc094904  jal         func_252410
    ctx->pc = 0x2B8AA4u;
    SET_GPR_U32(ctx, 31, 0x2B8AACu);
    ctx->pc = 0x2B8AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AA4u;
    // 0x2b8aa8: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2B8AA4u, 0x2B8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AACu;
label_2b8aac:
    // 0x2b8aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8AACu;
    {
        const bool branch_taken_0x2b8aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AACu;
        // 0x2b8ab0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8aac) {
            ctx->pc = 0x2B8AC0u;
            goto label_2b8ac0;
        }
    }
    ctx->pc = 0x2B8AB4u;
    // 0x2b8ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ab8: 0xa242003d  sb          $v0, 0x3D($s2)
    ctx->pc = 0x2b8ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 2));
label_2b8abc:
    // 0x2b8abc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b8abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b8ac0:
    // 0x2b8ac0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b8ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8ac4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b8ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8ac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b8ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8acc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ACCu;
        // 0x2b8ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8AD4u;
    // 0x2b8ad4: 0x0  nop
    ctx->pc = 0x2b8ad4u;
    // NOP
    ctx->pc = 0x2b8ad8u;
}
