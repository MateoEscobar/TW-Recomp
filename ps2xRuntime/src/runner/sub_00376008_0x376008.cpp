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

// Function: sub_00376008
// Address: 0x376008 - 0x3760c0
void sub_00376008_0x376008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376008_0x376008");
#endif

    switch (ctx->pc) {
        case 0x376034u: goto label_376034;
        case 0x37603cu: goto label_37603c;
        case 0x376050u: goto label_376050;
        case 0x376058u: goto label_376058;
        case 0x376070u: goto label_376070;
        case 0x376078u: goto label_376078;
        case 0x37608cu: goto label_37608c;
        case 0x3760a0u: goto label_3760a0;
        default: break;
    }

    ctx->pc = 0x376008u;

    // 0x376008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x376008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37600c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376010: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x376010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x376014: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x376014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x376018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37601c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37601cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376020: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x376020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x376024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376028: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x376028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37602c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37602Cu;
    SET_GPR_U32(ctx, 31, 0x376034u);
    ctx->pc = 0x376030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37602Cu;
    // 0x376030: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37602Cu, 0x376034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376034u;
label_376034:
    // 0x376034: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376034u;
    SET_GPR_U32(ctx, 31, 0x37603Cu);
    ctx->pc = 0x376038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376034u;
    // 0x376038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376034u, 0x37603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37603Cu;
label_37603c:
    // 0x37603c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37603cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376040: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x376040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376044: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376048: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376048u;
    SET_GPR_U32(ctx, 31, 0x376050u);
    ctx->pc = 0x37604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376048u;
    // 0x37604c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376048u, 0x376050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376050u;
label_376050:
    // 0x376050: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376050u;
    SET_GPR_U32(ctx, 31, 0x376058u);
    ctx->pc = 0x376054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376050u;
    // 0x376054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376050u, 0x376058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376058u;
label_376058:
    // 0x376058: 0x34068010  ori         $a2, $zero, 0x8010
    ctx->pc = 0x376058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x37605c: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x37605cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376060: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x376060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376064: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x376064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376068: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376068u;
    SET_GPR_U32(ctx, 31, 0x376070u);
    ctx->pc = 0x37606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376068u;
    // 0x37606c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376068u, 0x376070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376070u;
label_376070:
    // 0x376070: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376070u;
    SET_GPR_U32(ctx, 31, 0x376078u);
    ctx->pc = 0x376074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376070u;
    // 0x376074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376070u, 0x376078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376078u;
label_376078:
    // 0x376078: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x376078u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37607c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376080: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x376080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376084: 0xc102488  jal         func_409220
    ctx->pc = 0x376084u;
    SET_GPR_U32(ctx, 31, 0x37608Cu);
    ctx->pc = 0x376088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376084u;
    // 0x376088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376084u, 0x37608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37608Cu;
label_37608c:
    // 0x37608c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37608cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376094: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x376094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376098: 0xc0c5acc  jal         func_316B30
    ctx->pc = 0x376098u;
    SET_GPR_U32(ctx, 31, 0x3760A0u);
    ctx->pc = 0x37609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376098u;
    // 0x37609c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x316B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316B30u, 0x376098u, 0x3760A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760A0u;
label_3760a0:
    // 0x3760a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3760a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3760a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3760a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3760a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3760a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3760ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3760acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3760b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3760b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3760b4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3760b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3760b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3760B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3760BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3760B8u;
        // 0x3760bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3760B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3760C0u;
}
