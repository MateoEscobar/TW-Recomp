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

// Function: sub_00363018
// Address: 0x363018 - 0x363128
void sub_00363018_0x363018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363018_0x363018");
#endif

    switch (ctx->pc) {
        case 0x36304cu: goto label_36304c;
        case 0x363054u: goto label_363054;
        case 0x363068u: goto label_363068;
        case 0x363070u: goto label_363070;
        case 0x363088u: goto label_363088;
        case 0x363090u: goto label_363090;
        case 0x3630a8u: goto label_3630a8;
        case 0x3630b0u: goto label_3630b0;
        case 0x3630c4u: goto label_3630c4;
        case 0x3630ccu: goto label_3630cc;
        case 0x3630e0u: goto label_3630e0;
        case 0x3630fcu: goto label_3630fc;
        default: break;
    }

    ctx->pc = 0x363018u;

    // 0x363018: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x363018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36301c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363020: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x363020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x363024: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x363024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x363028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36302c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36302cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363030: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x363030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x363034: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x363034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x363038: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36303c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x363040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363044: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363044u;
    SET_GPR_U32(ctx, 31, 0x36304Cu);
    ctx->pc = 0x363048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363044u;
    // 0x363048: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363044u, 0x36304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36304Cu;
label_36304c:
    // 0x36304c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36304Cu;
    SET_GPR_U32(ctx, 31, 0x363054u);
    ctx->pc = 0x363050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36304Cu;
    // 0x363050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36304Cu, 0x363054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363054u;
label_363054:
    // 0x363054: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363058: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x363058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36305c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363060: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363060u;
    SET_GPR_U32(ctx, 31, 0x363068u);
    ctx->pc = 0x363064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363060u;
    // 0x363064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363060u, 0x363068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363068u;
label_363068:
    // 0x363068: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x363068u;
    SET_GPR_U32(ctx, 31, 0x363070u);
    ctx->pc = 0x36306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363068u;
    // 0x36306c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x363068u, 0x363070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363070u;
label_363070:
    // 0x363070: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x363070u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x363074: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x363074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x363078: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x363078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36307c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36307cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363080: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363080u;
    SET_GPR_U32(ctx, 31, 0x363088u);
    ctx->pc = 0x363084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363080u;
    // 0x363084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363080u, 0x363088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363088u;
label_363088:
    // 0x363088: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x363088u;
    SET_GPR_U32(ctx, 31, 0x363090u);
    ctx->pc = 0x36308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363088u;
    // 0x36308c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x363088u, 0x363090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363090u;
label_363090:
    // 0x363090: 0x34068092  ori         $a2, $zero, 0x8092
    ctx->pc = 0x363090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32914);
    // 0x363094: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x363094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x363098: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x363098u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36309c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3630a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3630A0u;
    SET_GPR_U32(ctx, 31, 0x3630A8u);
    ctx->pc = 0x3630A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630A0u;
    // 0x3630a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3630A0u, 0x3630A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630A8u;
label_3630a8:
    // 0x3630a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3630A8u;
    SET_GPR_U32(ctx, 31, 0x3630B0u);
    ctx->pc = 0x3630ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630A8u;
    // 0x3630ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3630A8u, 0x3630B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630B0u;
label_3630b0:
    // 0x3630b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3630b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3630b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3630b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3630bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3630BCu;
    SET_GPR_U32(ctx, 31, 0x3630C4u);
    ctx->pc = 0x3630C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630BCu;
    // 0x3630c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3630BCu, 0x3630C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630C4u;
label_3630c4:
    // 0x3630c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3630C4u;
    SET_GPR_U32(ctx, 31, 0x3630CCu);
    ctx->pc = 0x3630C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630C4u;
    // 0x3630c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3630C4u, 0x3630CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630CCu;
label_3630cc:
    // 0x3630cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3630ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3630d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3630d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3630d8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3630D8u;
    SET_GPR_U32(ctx, 31, 0x3630E0u);
    ctx->pc = 0x3630DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630D8u;
    // 0x3630dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3630D8u, 0x3630E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630E0u;
label_3630e0:
    // 0x3630e0: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x3630e0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3630e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3630e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3630e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3630ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3630f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3630f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630f4: 0xc0b1b22  jal         func_2C6C88
    ctx->pc = 0x3630F4u;
    SET_GPR_U32(ctx, 31, 0x3630FCu);
    ctx->pc = 0x3630F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630F4u;
    // 0x3630f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C88u, 0x3630F4u, 0x3630FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630FCu;
label_3630fc:
    // 0x3630fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3630fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363104: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x363104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363108: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x363108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36310c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36310cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363110: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x363110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363118: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x363118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36311c: 0x3e00008  jr          $ra
    ctx->pc = 0x36311Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36311Cu;
        // 0x363120: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36311Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363124u;
    // 0x363124: 0x0  nop
    ctx->pc = 0x363124u;
    // NOP
    ctx->pc = 0x363128u;
}
