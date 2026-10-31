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

// Function: sub_00483C88
// Address: 0x483c88 - 0x483d58
void sub_00483C88_0x483c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483C88_0x483c88");
#endif

    ctx->pc = 0x483c88u;

    // 0x483c88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x483c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c8c: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x483c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x483c90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x483c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x483c94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x483c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x483c98: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x483c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x483c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x483c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x483ca0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x483ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x483ca4: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x483ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x483ca8: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x483ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x483cac: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x483cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x483cb0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x483cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x483cb4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x483cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x483cb8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x483cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x483cbc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x483cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x483cc0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x483cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x483cc4: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x483cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x483cc8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x483cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x483ccc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x483cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x483cd0: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x483cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x483cd4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x483cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x483cd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x483cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x483cdc: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x483cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x483ce0: 0x8cc700a0  lw          $a3, 0xA0($a2)
    ctx->pc = 0x483ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x483ce4: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x483ce4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x483ce8: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x483ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x483cec: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x483CECu;
    {
        const bool branch_taken_0x483cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483cec) {
            ctx->pc = 0x483CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483CECu;
            // 0x483cf0: 0x8cc500a0  lw          $a1, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483D30u;
            goto label_483d30;
        }
    }
    ctx->pc = 0x483CF4u;
    // 0x483cf4: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x483cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x483cf8: 0x8ca3add4  lw          $v1, -0x522C($a1)
    ctx->pc = 0x483cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483cfc: 0x24a4add4  addiu       $a0, $a1, -0x522C
    ctx->pc = 0x483cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946260));
    // 0x483d00: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x483d00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x483d04: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x483d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x483d08: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x483d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x483d0c: 0x8cc300a0  lw          $v1, 0xA0($a2)
    ctx->pc = 0x483d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x483d10: 0x8ca4add4  lw          $a0, -0x522C($a1)
    ctx->pc = 0x483d10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483d14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x483d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x483d18: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x483d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x483d1c: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x483d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x483d20: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x483d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x483d24: 0xaca2add4  sw          $v0, -0x522C($a1)
    ctx->pc = 0x483d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70ADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADD4u, _value); } while (0);
    // 0x483d28: 0x8cc500a0  lw          $a1, 0xA0($a2)
    ctx->pc = 0x483d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x483d2c: 0x0  nop
    ctx->pc = 0x483d2cu;
    // NOP
label_483d30:
    // 0x483d30: 0x35040003  ori         $a0, $t0, 0x3
    ctx->pc = 0x483d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
    // 0x483d34: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x483d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483d38: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x483d38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x483d3c: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x483d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x483d40: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x483d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x483d44: 0x3e00008  jr          $ra
    ctx->pc = 0x483D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483D44u;
        // 0x483d48: 0xa0c30003  sb          $v1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483D4Cu;
    // 0x483d4c: 0x0  nop
    ctx->pc = 0x483d4cu;
    // NOP
    // 0x483d50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x483d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x483d54: 0x0  nop
    ctx->pc = 0x483d54u;
    // NOP
    ctx->pc = 0x483d58u;
}
