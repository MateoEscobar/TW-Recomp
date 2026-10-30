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

// Function: sub_0017FAF8
// Address: 0x17faf8 - 0x17fbc8
void sub_0017FAF8_0x17faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FAF8_0x17faf8");
#endif

    switch (ctx->pc) {
        case 0x17fb30u: goto label_17fb30;
        case 0x17fb44u: goto label_17fb44;
        case 0x17fb60u: goto label_17fb60;
        case 0x17fb70u: goto label_17fb70;
        case 0x17fb8cu: goto label_17fb8c;
        case 0x17fba0u: goto label_17fba0;
        default: break;
    }

    ctx->pc = 0x17faf8u;

    // 0x17faf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17faf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17fafc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17fb00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17fb0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17fb0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17fb14: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17fb14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x17fb1c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x17fb1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17fb24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17fb24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb28: 0xc05fd94  jal         func_17F650
    ctx->pc = 0x17FB28u;
    SET_GPR_U32(ctx, 31, 0x17FB30u);
    ctx->pc = 0x17FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB28u;
    // 0x17fb2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F650u, 0x17FB28u, 0x17FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB30u;
label_17fb30:
    // 0x17fb30: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x17fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x17fb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb38: 0x24638d08  addiu       $v1, $v1, -0x72F8
    ctx->pc = 0x17fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937864));
    // 0x17fb3c: 0xc05fdb4  jal         func_17F6D0
    ctx->pc = 0x17FB3Cu;
    SET_GPR_U32(ctx, 31, 0x17FB44u);
    ctx->pc = 0x17FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB3Cu;
    // 0x17fb40: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F6D0u, 0x17FB3Cu, 0x17FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB44u;
label_17fb44:
    // 0x17fb44: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x17fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x17fb48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17fb48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb4c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17fb4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17fb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17fb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb58: 0xc05fe3e  jal         func_17F8F8
    ctx->pc = 0x17FB58u;
    SET_GPR_U32(ctx, 31, 0x17FB60u);
    ctx->pc = 0x17FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB58u;
    // 0x17fb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8F8u, 0x17FB58u, 0x17FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB60u;
label_17fb60:
    // 0x17fb60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17fb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb68: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x17FB68u;
    SET_GPR_U32(ctx, 31, 0x17FB70u);
    ctx->pc = 0x17FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB68u;
    // 0x17fb6c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x17FB68u, 0x17FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB70u;
label_17fb70:
    // 0x17fb70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17fb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17fb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb7c: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x17fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x17fb80: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x17fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17fb84: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x17FB84u;
    SET_GPR_U32(ctx, 31, 0x17FB8Cu);
    ctx->pc = 0x17FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB84u;
    // 0x17fb88: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x17FB84u, 0x17FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB8Cu;
label_17fb8c:
    // 0x17fb8c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x17fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x17fb90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17fb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb94: 0x24a525d0  addiu       $a1, $a1, 0x25D0
    ctx->pc = 0x17fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
    // 0x17fb98: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x17FB98u;
    SET_GPR_U32(ctx, 31, 0x17FBA0u);
    ctx->pc = 0x17FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB98u;
    // 0x17fb9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x17FB98u, 0x17FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBA0u;
label_17fba0:
    // 0x17fba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17fba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fba4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17fba8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17fba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fbac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17fbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fbb0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17fbb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fbb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fbb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fbb8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17fbb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fbbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17fbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x17FBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBC0u;
        // 0x17fbc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FBC8u;
}
