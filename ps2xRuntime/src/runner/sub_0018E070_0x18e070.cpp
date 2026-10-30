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

// Function: sub_0018E070
// Address: 0x18e070 - 0x18e0f8
void sub_0018E070_0x18e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E070_0x18e070");
#endif

    switch (ctx->pc) {
        case 0x18e0c0u: goto label_18e0c0;
        case 0x18e0d4u: goto label_18e0d4;
        default: break;
    }

    ctx->pc = 0x18e070u;

    // 0x18e070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e074: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e078: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18e07c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18e080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18e080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e088: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18e088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18e08c: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x18e08cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18e090: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x18e090u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e094: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x18e094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e098: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x18e098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e09c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x18e09cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18e0a0: 0xa3a60004  sb          $a2, 0x4($sp)
    ctx->pc = 0x18e0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x18e0a4: 0xa3a50005  sb          $a1, 0x5($sp)
    ctx->pc = 0x18e0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x18e0a8: 0xa3a20006  sb          $v0, 0x6($sp)
    ctx->pc = 0x18e0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x18e0ac: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x18e0acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e0b0: 0xa3a70009  sb          $a3, 0x9($sp)
    ctx->pc = 0x18e0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x18e0b4: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x18e0b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18e0b8: 0xa3a00007  sb          $zero, 0x7($sp)
    ctx->pc = 0x18e0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e0bc: 0x0  nop
    ctx->pc = 0x18e0bcu;
    // NOP
label_18e0c0:
    // 0x18e0c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e0c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18e0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e0c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0cc: 0xc062eb8  jal         func_18BAE0
    ctx->pc = 0x18E0CCu;
    SET_GPR_U32(ctx, 31, 0x18E0D4u);
    ctx->pc = 0x18E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E0CCu;
    // 0x18e0d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BAE0u, 0x18E0CCu, 0x18E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E0D4u;
label_18e0d4:
    // 0x18e0d4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18e0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18e0d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E0D8u;
    {
        const bool branch_taken_0x18e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D8u;
        // 0x18e0dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0d8) {
            ctx->pc = 0x18E0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e0c0;
        }
    }
    ctx->pc = 0x18E0E0u;
    // 0x18e0e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18e0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e0e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18e0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e0e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18E0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0ECu;
        // 0x18e0f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E0F4u;
    // 0x18e0f4: 0x0  nop
    ctx->pc = 0x18e0f4u;
    // NOP
    ctx->pc = 0x18e0f8u;
}
