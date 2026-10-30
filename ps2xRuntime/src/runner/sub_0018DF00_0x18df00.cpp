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

// Function: sub_0018DF00
// Address: 0x18df00 - 0x18dfa8
void sub_0018DF00_0x18df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DF00_0x18df00");
#endif

    switch (ctx->pc) {
        case 0x18df70u: goto label_18df70;
        case 0x18df84u: goto label_18df84;
        default: break;
    }

    ctx->pc = 0x18df00u;

    // 0x18df00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18df04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18df04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18df08: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18df08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18df0c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18df0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18df10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18df10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18df18: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18df18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18df1c: 0x90aa0010  lbu         $t2, 0x10($a1)
    ctx->pc = 0x18df1cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x18df20: 0x90a90000  lbu         $t1, 0x0($a1)
    ctx->pc = 0x18df20u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18df24: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x18df24u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18df28: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x18df28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x18df2c: 0x90a2000c  lbu         $v0, 0xC($a1)
    ctx->pc = 0x18df2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18df30: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x18df30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x18df34: 0xa3a90008  sb          $t1, 0x8($sp)
    ctx->pc = 0x18df34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 9));
    // 0x18df38: 0xa3a80009  sb          $t0, 0x9($sp)
    ctx->pc = 0x18df38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 8));
    // 0x18df3c: 0xa3a3000a  sb          $v1, 0xA($sp)
    ctx->pc = 0x18df3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x18df40: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x18df40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x18df44: 0xa3aa0031  sb          $t2, 0x31($sp)
    ctx->pc = 0x18df44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 10));
    // 0x18df48: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x18df48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18df4c: 0xe7ad0010  swc1        $f13, 0x10($sp)
    ctx->pc = 0x18df4cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18df50: 0xe7ae0014  swc1        $f14, 0x14($sp)
    ctx->pc = 0x18df50u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18df54: 0xe7af0018  swc1        $f15, 0x18($sp)
    ctx->pc = 0x18df54u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18df58: 0xe7b0001c  swc1        $f16, 0x1C($sp)
    ctx->pc = 0x18df58u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18df5c: 0xe7b10020  swc1        $f17, 0x20($sp)
    ctx->pc = 0x18df5cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18df60: 0xe7b20024  swc1        $f18, 0x24($sp)
    ctx->pc = 0x18df60u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18df64: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x18df64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x18df68: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x18df68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x18df6c: 0xa3a0000b  sb          $zero, 0xB($sp)
    ctx->pc = 0x18df6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 0));
label_18df70:
    // 0x18df70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18df70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18df74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18df74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18df78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18df78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df7c: 0xc062eb8  jal         func_18BAE0
    ctx->pc = 0x18DF7Cu;
    SET_GPR_U32(ctx, 31, 0x18DF84u);
    ctx->pc = 0x18DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF7Cu;
    // 0x18df80: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BAE0u, 0x18DF7Cu, 0x18DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF84u;
label_18df84:
    // 0x18df84: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18df84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18df88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18DF88u;
    {
        const bool branch_taken_0x18df88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF88u;
        // 0x18df8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df88) {
            ctx->pc = 0x18DF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18df70;
        }
    }
    ctx->pc = 0x18DF90u;
    // 0x18df90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18df90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18df94: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18df94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18df98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18df98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18df9c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF9Cu;
        // 0x18dfa0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DFA4u;
    // 0x18dfa4: 0x0  nop
    ctx->pc = 0x18dfa4u;
    // NOP
    ctx->pc = 0x18dfa8u;
}
