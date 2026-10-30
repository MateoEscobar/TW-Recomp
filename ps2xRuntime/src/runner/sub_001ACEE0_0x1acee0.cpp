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

// Function: sub_001ACEE0
// Address: 0x1acee0 - 0x1ad588
void sub_001ACEE0_0x1acee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACEE0_0x1acee0");
#endif

    switch (ctx->pc) {
        case 0x1acf30u: goto label_1acf30;
        case 0x1acf48u: goto label_1acf48;
        case 0x1acf50u: goto label_1acf50;
        case 0x1acf5cu: goto label_1acf5c;
        case 0x1acf64u: goto label_1acf64;
        case 0x1acf74u: goto label_1acf74;
        case 0x1acf88u: goto label_1acf88;
        case 0x1acf9cu: goto label_1acf9c;
        case 0x1acfd0u: goto label_1acfd0;
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1ad034u: goto label_1ad034;
        case 0x1ad038u: goto label_1ad038;
        case 0x1ad044u: goto label_1ad044;
        case 0x1ad05cu: goto label_1ad05c;
        case 0x1ad06cu: goto label_1ad06c;
        case 0x1ad078u: goto label_1ad078;
        case 0x1ad084u: goto label_1ad084;
        case 0x1ad090u: goto label_1ad090;
        case 0x1ad09cu: goto label_1ad09c;
        case 0x1ad0a8u: goto label_1ad0a8;
        case 0x1ad0b0u: goto label_1ad0b0;
        case 0x1ad0bcu: goto label_1ad0bc;
        case 0x1ad0dcu: goto label_1ad0dc;
        case 0x1ad0e8u: goto label_1ad0e8;
        case 0x1ad0f4u: goto label_1ad0f4;
        case 0x1ad100u: goto label_1ad100;
        case 0x1ad10cu: goto label_1ad10c;
        case 0x1ad11cu: goto label_1ad11c;
        case 0x1ad174u: goto label_1ad174;
        case 0x1ad180u: goto label_1ad180;
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1acu: goto label_1ad1ac;
        case 0x1ad1b8u: goto label_1ad1b8;
        case 0x1ad1c8u: goto label_1ad1c8;
        case 0x1ad1d0u: goto label_1ad1d0;
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad1e0u: goto label_1ad1e0;
        case 0x1ad1f8u: goto label_1ad1f8;
        case 0x1ad204u: goto label_1ad204;
        case 0x1ad220u: goto label_1ad220;
        case 0x1ad22cu: goto label_1ad22c;
        case 0x1ad258u: goto label_1ad258;
        case 0x1ad264u: goto label_1ad264;
        case 0x1ad278u: goto label_1ad278;
        case 0x1ad284u: goto label_1ad284;
        case 0x1ad2b8u: goto label_1ad2b8;
        case 0x1ad2c8u: goto label_1ad2c8;
        case 0x1ad2d8u: goto label_1ad2d8;
        case 0x1ad2e4u: goto label_1ad2e4;
        case 0x1ad308u: goto label_1ad308;
        case 0x1ad314u: goto label_1ad314;
        case 0x1ad338u: goto label_1ad338;
        case 0x1ad344u: goto label_1ad344;
        case 0x1ad370u: goto label_1ad370;
        case 0x1ad384u: goto label_1ad384;
        case 0x1ad38cu: goto label_1ad38c;
        case 0x1ad394u: goto label_1ad394;
        case 0x1ad398u: goto label_1ad398;
        case 0x1ad3a4u: goto label_1ad3a4;
        case 0x1ad3c8u: goto label_1ad3c8;
        case 0x1ad3e8u: goto label_1ad3e8;
        case 0x1ad400u: goto label_1ad400;
        case 0x1ad410u: goto label_1ad410;
        case 0x1ad418u: goto label_1ad418;
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad45cu: goto label_1ad45c;
        case 0x1ad4b4u: goto label_1ad4b4;
        case 0x1ad4c0u: goto label_1ad4c0;
        case 0x1ad4ccu: goto label_1ad4cc;
        case 0x1ad508u: goto label_1ad508;
        case 0x1ad538u: goto label_1ad538;
        default: break;
    }

    ctx->pc = 0x1acee0u;

    // 0x1acee0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1acee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1acee4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1acee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1acee8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1acee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aceec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1aceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1acef0: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x1acef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1acef4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1acef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1acef8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1acef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1acefc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1acefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf00: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1acf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1acf04: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1acf08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1acf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1acf0c: 0x26b00080  addiu       $s0, $s5, 0x80
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1acf10: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1acf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1acf14: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1acf18: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1acf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1acf1c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1acf1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1acf20: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1acf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1acf24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1acf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1acf28: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1ACF28u;
    SET_GPR_U32(ctx, 31, 0x1ACF30u);
    ctx->pc = 0x1ACF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF28u;
    // 0x1acf2c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1ACF28u, 0x1ACF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF30u;
label_1acf30:
    // 0x1acf30: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1acf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1acf34: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1acf38: 0x24429370  addiu       $v0, $v0, -0x6C90
    ctx->pc = 0x1acf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939504));
    // 0x1acf3c: 0x24769408  addiu       $s6, $v1, -0x6BF8
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939656));
    // 0x1acf40: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1acf40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x1acf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acf48:
    // 0x1acf48: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1ACF48u;
    SET_GPR_U32(ctx, 31, 0x1ACF50u);
    ctx->pc = 0x1ACF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF48u;
    // 0x1acf4c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1ACF48u, 0x1ACF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF50u;
label_1acf50:
    // 0x1acf50: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x1acf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x1acf54: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1ACF54u;
    SET_GPR_U32(ctx, 31, 0x1ACF5Cu);
    ctx->pc = 0x1ACF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF54u;
    // 0x1acf58: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1ACF54u, 0x1ACF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF5Cu;
label_1acf5c:
    // 0x1acf5c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1ACF5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF64u);
    ctx->pc = 0x1ACF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF5Cu;
    // 0x1acf60: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1ACF5Cu, 0x1ACF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF64u;
label_1acf64:
    // 0x1acf64: 0xae110240  sw          $s1, 0x240($s0)
    ctx->pc = 0x1acf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 17));
    // 0x1acf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf6c: 0xc068232  jal         func_1A08C8
    ctx->pc = 0x1ACF6Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF74u);
    ctx->pc = 0x1ACF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF6Cu;
    // 0x1acf70: 0x26100250  addiu       $s0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A08C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A08C8u, 0x1ACF6Cu, 0x1ACF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF74u;
label_1acf74:
    // 0x1acf74: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x1ACF74u;
    {
        const bool branch_taken_0x1acf74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1ACF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF74u;
        // 0x1acf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf74) {
            ctx->pc = 0x1ACF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acf48;
        }
    }
    ctx->pc = 0x1ACF7Cu;
    // 0x1acf7c: 0x266413b0  addiu       $a0, $s3, 0x13B0
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5040));
    // 0x1acf80: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1ACF80u;
    SET_GPR_U32(ctx, 31, 0x1ACF88u);
    ctx->pc = 0x1ACF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF80u;
    // 0x1acf84: 0x26b06b40  addiu       $s0, $s5, 0x6B40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 27456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1ACF80u, 0x1ACF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF88u;
label_1acf88:
    // 0x1acf88: 0x26b47660  addiu       $s4, $s5, 0x7660
    ctx->pc = 0x1acf88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 30304));
    // 0x1acf8c: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x1acf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1acf90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1acf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf94: 0xc067ebc  jal         func_19FAF0
    ctx->pc = 0x1ACF94u;
    SET_GPR_U32(ctx, 31, 0x1ACF9Cu);
    ctx->pc = 0x1ACF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF94u;
    // 0x1acf98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FAF0u, 0x1ACF94u, 0x1ACF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF9Cu;
label_1acf9c:
    // 0x1acf9c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1acf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1acfa0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1acfa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1acfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acfa8: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x1acfac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1acfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acfb0: 0x26a46850  addiu       $a0, $s5, 0x6850
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 26704));
    // 0x1acfb4: 0xaea015c0  sw          $zero, 0x15C0($s5)
    ctx->pc = 0x1acfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 5568), GPR_U32(ctx, 0));
    // 0x1acfb8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acfbc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1acfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acfc0: 0x26a315d0  addiu       $v1, $s5, 0x15D0
    ctx->pc = 0x1acfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 5584));
    // 0x1acfc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acfc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1acfc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1acfcc: 0x0  nop
    ctx->pc = 0x1acfccu;
    // NOP
label_1acfd0:
    // 0x1acfd0: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x1acfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1acfd4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1acfd8: 0x24620920  addiu       $v0, $v1, 0x920
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x1acfdc: 0x24682940  addiu       $t0, $v1, 0x2940
    ctx->pc = 0x1acfdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
label_1acfe0:
    // 0x1acfe0: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1acfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1acfe4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1acfe8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x1acfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    // 0x1acfec: 0x0  nop
    ctx->pc = 0x1acfecu;
    // NOP
    // 0x1acff0: 0x14a9fffb  bne         $a1, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ACFF0u;
    {
        const bool branch_taken_0x1acff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x1ACFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFF0u;
        // 0x1acff4: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acff0) {
            ctx->pc = 0x1ACFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1ACFF8u;
    // 0x1acff8: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1acff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x1acffc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1acffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad000: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1ad000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1ad004: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1ad004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1ad008: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x1ad008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ad00c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ad00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1ad010: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1ad010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1ad014: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ad014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ad018: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1ad018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1ad01c: 0xac6a0018  sw          $t2, 0x18($v1)
    ctx->pc = 0x1ad01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 10));
    // 0x1ad020: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1ad020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1ad024: 0x1449ffea  bne         $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1AD024u;
    {
        const bool branch_taken_0x1ad024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x1AD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD024u;
        // 0x1ad028: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad024) {
            ctx->pc = 0x1ACFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acfd0;
        }
    }
    ctx->pc = 0x1AD02Cu;
    // 0x1ad02c: 0xc0734f2  jal         func_1CD3C8
    ctx->pc = 0x1AD02Cu;
    SET_GPR_U32(ctx, 31, 0x1AD034u);
    ctx->pc = 0x1AD030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD02Cu;
    // 0x1ad030: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD3C8u, 0x1AD02Cu, 0x1AD034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD034u;
label_1ad034:
    // 0x1ad034: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ad038:
    // 0x1ad038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad03c: 0xc067bce  jal         func_19EF38
    ctx->pc = 0x1AD03Cu;
    SET_GPR_U32(ctx, 31, 0x1AD044u);
    ctx->pc = 0x1AD040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD03Cu;
    // 0x1ad040: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF38u, 0x1AD03Cu, 0x1AD044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD044u;
label_1ad044:
    // 0x1ad044: 0x0  nop
    ctx->pc = 0x1ad044u;
    // NOP
    // 0x1ad048: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD048u;
    {
        const bool branch_taken_0x1ad048 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD048u;
        // 0x1ad04c: 0x26100590  addiu       $s0, $s0, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad048) {
            ctx->pc = 0x1AD038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad038;
        }
    }
    ctx->pc = 0x1AD050u;
    // 0x1ad050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad054: 0xc06ed6a  jal         func_1BB5A8
    ctx->pc = 0x1AD054u;
    SET_GPR_U32(ctx, 31, 0x1AD05Cu);
    ctx->pc = 0x1AD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD054u;
    // 0x1ad058: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB5A8u, 0x1AD054u, 0x1AD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD05Cu;
label_1ad05c:
    // 0x1ad05c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad060: 0x34048960  ori         $a0, $zero, 0x8960
    ctx->pc = 0x1ad060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35168);
    // 0x1ad064: 0xc07097a  jal         func_1C25E8
    ctx->pc = 0x1AD064u;
    SET_GPR_U32(ctx, 31, 0x1AD06Cu);
    ctx->pc = 0x1AD068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD064u;
    // 0x1ad068: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25E8u, 0x1AD064u, 0x1AD06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD06Cu;
label_1ad06c:
    // 0x1ad06c: 0x34048a10  ori         $a0, $zero, 0x8A10
    ctx->pc = 0x1ad06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
    // 0x1ad070: 0xc073638  jal         func_1CD8E0
    ctx->pc = 0x1AD070u;
    SET_GPR_U32(ctx, 31, 0x1AD078u);
    ctx->pc = 0x1AD074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD070u;
    // 0x1ad074: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD8E0u, 0x1AD070u, 0x1AD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD078u;
label_1ad078:
    // 0x1ad078: 0x34048dd0  ori         $a0, $zero, 0x8DD0
    ctx->pc = 0x1ad078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
    // 0x1ad07c: 0xc0721fc  jal         func_1C87F0
    ctx->pc = 0x1AD07Cu;
    SET_GPR_U32(ctx, 31, 0x1AD084u);
    ctx->pc = 0x1AD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD07Cu;
    // 0x1ad080: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87F0u, 0x1AD07Cu, 0x1AD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD084u;
label_1ad084:
    // 0x1ad084: 0x34049350  ori         $a0, $zero, 0x9350
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
    // 0x1ad088: 0xc06b30a  jal         func_1ACC28
    ctx->pc = 0x1AD088u;
    SET_GPR_U32(ctx, 31, 0x1AD090u);
    ctx->pc = 0x1AD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD088u;
    // 0x1ad08c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACC28u, 0x1AD088u, 0x1AD090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD090u;
label_1ad090:
    // 0x1ad090: 0x34049540  ori         $a0, $zero, 0x9540
    ctx->pc = 0x1ad090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38208);
    // 0x1ad094: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD094u;
    SET_GPR_U32(ctx, 31, 0x1AD09Cu);
    ctx->pc = 0x1AD098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD094u;
    // 0x1ad098: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD094u, 0x1AD09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD09Cu;
label_1ad09c:
    // 0x1ad09c: 0x34049640  ori         $a0, $zero, 0x9640
    ctx->pc = 0x1ad09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38464);
    // 0x1ad0a0: 0xc068f12  jal         func_1A3C48
    ctx->pc = 0x1AD0A0u;
    SET_GPR_U32(ctx, 31, 0x1AD0A8u);
    ctx->pc = 0x1AD0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0A0u;
    // 0x1ad0a4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3C48u, 0x1AD0A0u, 0x1AD0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0A8u;
label_1ad0a8:
    // 0x1ad0a8: 0x34039970  ori         $v1, $zero, 0x9970
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39280);
    // 0x1ad0ac: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x1ad0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1ad0b0:
    // 0x1ad0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0b4: 0xc070734  jal         func_1C1CD0
    ctx->pc = 0x1AD0B4u;
    SET_GPR_U32(ctx, 31, 0x1AD0BCu);
    ctx->pc = 0x1AD0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0B4u;
    // 0x1ad0b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CD0u, 0x1AD0B4u, 0x1AD0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0BCu;
label_1ad0bc:
    // 0x1ad0bc: 0x0  nop
    ctx->pc = 0x1ad0bcu;
    // NOP
    // 0x1ad0c0: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD0C0u;
    {
        const bool branch_taken_0x1ad0c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0C0u;
        // 0x1ad0c4: 0x261003f0  addiu       $s0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0c0) {
            ctx->pc = 0x1AD0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad0b0;
        }
    }
    ctx->pc = 0x1AD0C8u;
    // 0x1ad0c8: 0x3404a940  ori         $a0, $zero, 0xA940
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43328);
    // 0x1ad0cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ad0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad0d0: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ad0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1ad0d4: 0xc068d98  jal         func_1A3660
    ctx->pc = 0x1AD0D4u;
    SET_GPR_U32(ctx, 31, 0x1AD0DCu);
    ctx->pc = 0x1AD0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0D4u;
    // 0x1ad0d8: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3660u, 0x1AD0D4u, 0x1AD0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0DCu;
label_1ad0dc:
    // 0x1ad0dc: 0x3404acb0  ori         $a0, $zero, 0xACB0
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44208);
    // 0x1ad0e0: 0xc070b74  jal         func_1C2DD0
    ctx->pc = 0x1AD0E0u;
    SET_GPR_U32(ctx, 31, 0x1AD0E8u);
    ctx->pc = 0x1AD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0E0u;
    // 0x1ad0e4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2DD0u, 0x1AD0E0u, 0x1AD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0E8u;
label_1ad0e8:
    // 0x1ad0e8: 0x3404e050  ori         $a0, $zero, 0xE050
    ctx->pc = 0x1ad0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
    // 0x1ad0ec: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD0ECu;
    SET_GPR_U32(ctx, 31, 0x1AD0F4u);
    ctx->pc = 0x1AD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0ECu;
    // 0x1ad0f0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD0ECu, 0x1AD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD0F4u;
label_1ad0f4:
    // 0x1ad0f4: 0x3404e150  ori         $a0, $zero, 0xE150
    ctx->pc = 0x1ad0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57680);
    // 0x1ad0f8: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1AD0F8u;
    SET_GPR_U32(ctx, 31, 0x1AD100u);
    ctx->pc = 0x1AD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0F8u;
    // 0x1ad0fc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1AD0F8u, 0x1AD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD100u;
label_1ad100:
    // 0x1ad100: 0x3404e340  ori         $a0, $zero, 0xE340
    ctx->pc = 0x1ad100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58176);
    // 0x1ad104: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1AD104u;
    SET_GPR_U32(ctx, 31, 0x1AD10Cu);
    ctx->pc = 0x1AD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD104u;
    // 0x1ad108: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1AD104u, 0x1AD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD10Cu;
label_1ad10c:
    // 0x1ad10c: 0x3410e530  ori         $s0, $zero, 0xE530
    ctx->pc = 0x1ad10cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58672);
    // 0x1ad110: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ad110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ad114: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1AD114u;
    SET_GPR_U32(ctx, 31, 0x1AD11Cu);
    ctx->pc = 0x1AD118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD114u;
    // 0x1ad118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1AD114u, 0x1AD11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD11Cu;
label_1ad11c:
    // 0x1ad11c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1ad11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1ad120: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1ad120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ad124: 0x24828510  addiu       $v0, $a0, -0x7AF0
    ctx->pc = 0x1ad124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
    // 0x1ad128: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1ad128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1ad12c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1ad12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1ad130: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1ad130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1ad134: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ad134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ad138: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1ad138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1ad13c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1ad13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1ad140: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ad140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1ad144: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ad144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ad148: 0x24a5d418  addiu       $a1, $a1, -0x2BE8
    ctx->pc = 0x1ad148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956056));
    // 0x1ad14c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ad14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1ad150: 0x2442d440  addiu       $v0, $v0, -0x2BC0
    ctx->pc = 0x1ad150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956096));
    // 0x1ad154: 0x3404e650  ori         $a0, $zero, 0xE650
    ctx->pc = 0x1ad154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58960);
    // 0x1ad158: 0xae060100  sw          $a2, 0x100($s0)
    ctx->pc = 0x1ad158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 6));
    // 0x1ad15c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ad15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1ad160: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1ad160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x1ad164: 0xae0600f8  sw          $a2, 0xF8($s0)
    ctx->pc = 0x1ad164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 6));
    // 0x1ad168: 0xae0600fc  sw          $a2, 0xFC($s0)
    ctx->pc = 0x1ad168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 6));
    // 0x1ad16c: 0xc0677ec  jal         func_19DFB0
    ctx->pc = 0x1AD16Cu;
    SET_GPR_U32(ctx, 31, 0x1AD174u);
    ctx->pc = 0x1AD170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD16Cu;
    // 0x1ad170: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DFB0u, 0x1AD16Cu, 0x1AD174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD174u;
label_1ad174:
    // 0x1ad174: 0x3404ea30  ori         $a0, $zero, 0xEA30
    ctx->pc = 0x1ad174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59952);
    // 0x1ad178: 0xc06a43e  jal         func_1A90F8
    ctx->pc = 0x1AD178u;
    SET_GPR_U32(ctx, 31, 0x1AD180u);
    ctx->pc = 0x1AD17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD178u;
    // 0x1ad17c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A90F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A90F8u, 0x1AD178u, 0x1AD180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD180u;
label_1ad180:
    // 0x1ad180: 0x3403ebc0  ori         $v1, $zero, 0xEBC0
    ctx->pc = 0x1ad180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60352);
    // 0x1ad184: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ad184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ad188: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x1ad188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1ad18c: 0x24549568  addiu       $s4, $v0, -0x6A98
    ctx->pc = 0x1ad18cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940008));
    // 0x1ad190: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ad190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1ad194: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x1ad194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1ad198: 0x247394a0  addiu       $s3, $v1, -0x6B60
    ctx->pc = 0x1ad198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939808));
    // 0x1ad19c: 0x0  nop
    ctx->pc = 0x1ad19cu;
    // NOP
label_1ad1a0:
    // 0x1ad1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1a4: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1AD1A4u;
    SET_GPR_U32(ctx, 31, 0x1AD1ACu);
    ctx->pc = 0x1AD1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1A4u;
    // 0x1ad1a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1AD1A4u, 0x1AD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1ACu;
label_1ad1ac:
    // 0x1ad1ac: 0xae34feb0  sw          $s4, -0x150($s1)
    ctx->pc = 0x1ad1acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966960), GPR_U32(ctx, 20));
    // 0x1ad1b0: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD1B0u;
    SET_GPR_U32(ctx, 31, 0x1AD1B8u);
    ctx->pc = 0x1AD1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1B0u;
    // 0x1ad1b4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD1B0u, 0x1AD1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1B8u;
label_1ad1b8:
    // 0x1ad1b8: 0xae330068  sw          $s3, 0x68($s1)
    ctx->pc = 0x1ad1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 19));
    // 0x1ad1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1c0: 0xc068426  jal         func_1A1098
    ctx->pc = 0x1AD1C0u;
    SET_GPR_U32(ctx, 31, 0x1AD1C8u);
    ctx->pc = 0x1AD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1C0u;
    // 0x1ad1c4: 0x26310430  addiu       $s1, $s1, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x1AD1C0u, 0x1AD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1C8u;
label_1ad1c8:
    // 0x1ad1c8: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1AD1C8u;
    SET_GPR_U32(ctx, 31, 0x1AD1D0u);
    ctx->pc = 0x1AD1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1C8u;
    // 0x1ad1cc: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1AD1C8u, 0x1AD1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1D0u;
label_1ad1d0:
    // 0x1ad1d0: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1AD1D0u;
    SET_GPR_U32(ctx, 31, 0x1AD1D8u);
    ctx->pc = 0x1AD1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1D0u;
    // 0x1ad1d4: 0x26040290  addiu       $a0, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1AD1D0u, 0x1AD1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1D8u;
label_1ad1d8:
    // 0x1ad1d8: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1AD1D8u;
    SET_GPR_U32(ctx, 31, 0x1AD1E0u);
    ctx->pc = 0x1AD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1D8u;
    // 0x1ad1dc: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1AD1D8u, 0x1AD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1E0u;
label_1ad1e0:
    // 0x1ad1e0: 0x1656ffef  bne         $s2, $s6, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1AD1E0u;
    {
        const bool branch_taken_0x1ad1e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x1AD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1E0u;
        // 0x1ad1e4: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1e0) {
            ctx->pc = 0x1AD1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad1a0;
        }
    }
    ctx->pc = 0x1AD1E8u;
    // 0x1ad1e8: 0x3402f420  ori         $v0, $zero, 0xF420
    ctx->pc = 0x1ad1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
    // 0x1ad1ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad1f0: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1ad1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ad1f4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ad1f8:
    // 0x1ad1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1fc: 0xc06de26  jal         func_1B7898
    ctx->pc = 0x1AD1FCu;
    SET_GPR_U32(ctx, 31, 0x1AD204u);
    ctx->pc = 0x1AD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1FCu;
    // 0x1ad200: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7898u, 0x1AD1FCu, 0x1AD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD204u;
label_1ad204:
    // 0x1ad204: 0x0  nop
    ctx->pc = 0x1ad204u;
    // NOP
    // 0x1ad208: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD208u;
    {
        const bool branch_taken_0x1ad208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD208u;
        // 0x1ad20c: 0x26100540  addiu       $s0, $s0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad208) {
            ctx->pc = 0x1AD1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad1f8;
        }
    }
    ctx->pc = 0x1AD210u;
    // 0x1ad210: 0x3402fea0  ori         $v0, $zero, 0xFEA0
    ctx->pc = 0x1ad210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65184);
    // 0x1ad214: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ad214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad218: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1ad218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ad21c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad21cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ad220:
    // 0x1ad220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad224: 0xc072606  jal         func_1C9818
    ctx->pc = 0x1AD224u;
    SET_GPR_U32(ctx, 31, 0x1AD22Cu);
    ctx->pc = 0x1AD228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD224u;
    // 0x1ad228: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9818u, 0x1AD224u, 0x1AD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD22Cu;
label_1ad22c:
    // 0x1ad22c: 0x0  nop
    ctx->pc = 0x1ad22cu;
    // NOP
    // 0x1ad230: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD230u;
    {
        const bool branch_taken_0x1ad230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD230u;
        // 0x1ad234: 0x26100b10  addiu       $s0, $s0, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad230) {
            ctx->pc = 0x1AD220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad220;
        }
    }
    ctx->pc = 0x1AD238u;
    // 0x1ad238: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ad23c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ad23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1ad240: 0x344214c0  ori         $v0, $v0, 0x14C0
    ctx->pc = 0x1ad240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5312);
    // 0x1ad244: 0x24779aa8  addiu       $s7, $v1, -0x6558
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941352));
    // 0x1ad248: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x1ad248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ad24c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ad24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad250: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1ad250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad254: 0x0  nop
    ctx->pc = 0x1ad254u;
    // NOP
label_1ad258:
    // 0x1ad258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad25c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1AD25Cu;
    SET_GPR_U32(ctx, 31, 0x1AD264u);
    ctx->pc = 0x1AD260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD25Cu;
    // 0x1ad260: 0x2614ffff  addiu       $s4, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1AD25Cu, 0x1AD264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD264u;
label_1ad264:
    // 0x1ad264: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x1ad264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1ad268: 0xae570000  sw          $s7, 0x0($s2)
    ctx->pc = 0x1ad268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
    // 0x1ad26c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1ad26cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad270: 0x26530450  addiu       $s3, $s2, 0x450
    ctx->pc = 0x1ad270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
    // 0x1ad274: 0x0  nop
    ctx->pc = 0x1ad274u;
    // NOP
label_1ad278:
    // 0x1ad278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad27c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD27Cu;
    SET_GPR_U32(ctx, 31, 0x1AD284u);
    ctx->pc = 0x1AD280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD27Cu;
    // 0x1ad280: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD27Cu, 0x1AD284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD284u;
label_1ad284:
    // 0x1ad284: 0x0  nop
    ctx->pc = 0x1ad284u;
    // NOP
    // 0x1ad288: 0x1636fffb  bne         $s1, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD288u;
    {
        const bool branch_taken_0x1ad288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x1AD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD288u;
        // 0x1ad28c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad288) {
            ctx->pc = 0x1AD278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad278;
        }
    }
    ctx->pc = 0x1AD290u;
    // 0x1ad290: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1ad290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1ad294: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1ad294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad298: 0x1616ffef  bne         $s0, $s6, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1AD298u;
    {
        const bool branch_taken_0x1ad298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x1AD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD298u;
        // 0x1ad29c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad298) {
            ctx->pc = 0x1AD258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad258;
        }
    }
    ctx->pc = 0x1AD2A0u;
    // 0x1ad2a0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ad2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1ad2a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ad2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad2a8: 0x34841d60  ori         $a0, $a0, 0x1D60
    ctx->pc = 0x1ad2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7520);
    // 0x1ad2ac: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad2acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad2b0: 0xc06dd1e  jal         func_1B7478
    ctx->pc = 0x1AD2B0u;
    SET_GPR_U32(ctx, 31, 0x1AD2B8u);
    ctx->pc = 0x1AD2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2B0u;
    // 0x1ad2b4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7478u, 0x1AD2B0u, 0x1AD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2B8u;
label_1ad2b8:
    // 0x1ad2b8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ad2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1ad2bc: 0x348434a0  ori         $a0, $a0, 0x34A0
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13472);
    // 0x1ad2c0: 0xc06dbec  jal         func_1B6FB0
    ctx->pc = 0x1AD2C0u;
    SET_GPR_U32(ctx, 31, 0x1AD2C8u);
    ctx->pc = 0x1AD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2C0u;
    // 0x1ad2c4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB0u, 0x1AD2C0u, 0x1AD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2C8u;
label_1ad2c8:
    // 0x1ad2c8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ad2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ad2cc: 0x346335e0  ori         $v1, $v1, 0x35E0
    ctx->pc = 0x1ad2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13792);
    // 0x1ad2d0: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x1ad2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1ad2d4: 0x0  nop
    ctx->pc = 0x1ad2d4u;
    // NOP
label_1ad2d8:
    // 0x1ad2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2dc: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD2DCu;
    SET_GPR_U32(ctx, 31, 0x1AD2E4u);
    ctx->pc = 0x1AD2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2DCu;
    // 0x1ad2e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD2DCu, 0x1AD2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2E4u;
label_1ad2e4:
    // 0x1ad2e4: 0x0  nop
    ctx->pc = 0x1ad2e4u;
    // NOP
    // 0x1ad2e8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD2E8u;
    {
        const bool branch_taken_0x1ad2e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2E8u;
        // 0x1ad2ec: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2e8) {
            ctx->pc = 0x1AD2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad2d8;
        }
    }
    ctx->pc = 0x1AD2F0u;
    // 0x1ad2f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ad2f4: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x1ad2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ad2f8: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1ad2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
    // 0x1ad2fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad300: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1ad300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ad304: 0x0  nop
    ctx->pc = 0x1ad304u;
    // NOP
label_1ad308:
    // 0x1ad308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad30c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD30Cu;
    SET_GPR_U32(ctx, 31, 0x1AD314u);
    ctx->pc = 0x1AD310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD30Cu;
    // 0x1ad310: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD30Cu, 0x1AD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD314u;
label_1ad314:
    // 0x1ad314: 0x0  nop
    ctx->pc = 0x1ad314u;
    // NOP
    // 0x1ad318: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD318u;
    {
        const bool branch_taken_0x1ad318 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD318u;
        // 0x1ad31c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad318) {
            ctx->pc = 0x1AD308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad308;
        }
    }
    ctx->pc = 0x1AD320u;
    // 0x1ad320: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ad324: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ad324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad328: 0x34424ae0  ori         $v0, $v0, 0x4AE0
    ctx->pc = 0x1ad328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19168);
    // 0x1ad32c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad32cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad330: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1ad330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ad334: 0x0  nop
    ctx->pc = 0x1ad334u;
    // NOP
label_1ad338:
    // 0x1ad338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad33c: 0xc07338c  jal         func_1CCE30
    ctx->pc = 0x1AD33Cu;
    SET_GPR_U32(ctx, 31, 0x1AD344u);
    ctx->pc = 0x1AD340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD33Cu;
    // 0x1ad340: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCE30u, 0x1AD33Cu, 0x1AD344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD344u;
label_1ad344:
    // 0x1ad344: 0x0  nop
    ctx->pc = 0x1ad344u;
    // NOP
    // 0x1ad348: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD348u;
    {
        const bool branch_taken_0x1ad348 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD348u;
        // 0x1ad34c: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad348) {
            ctx->pc = 0x1AD338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad338;
        }
    }
    ctx->pc = 0x1AD350u;
    // 0x1ad350: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1ad350u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1ad354: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1ad354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ad358: 0x36106b30  ori         $s0, $s0, 0x6B30
    ctx->pc = 0x1ad358u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)27440);
    // 0x1ad35c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad360: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ad364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad368: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1AD368u;
    SET_GPR_U32(ctx, 31, 0x1AD370u);
    ctx->pc = 0x1AD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD368u;
    // 0x1ad36c: 0x26110340  addiu       $s1, $s0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1AD368u, 0x1AD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD370u;
label_1ad370:
    // 0x1ad370: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ad370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1ad374: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1ad374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ad378: 0x24639f38  addiu       $v1, $v1, -0x60C8
    ctx->pc = 0x1ad378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942520));
    // 0x1ad37c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD37Cu;
    SET_GPR_U32(ctx, 31, 0x1AD384u);
    ctx->pc = 0x1AD380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD37Cu;
    // 0x1ad380: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD37Cu, 0x1AD384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD384u;
label_1ad384:
    // 0x1ad384: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD384u;
    SET_GPR_U32(ctx, 31, 0x1AD38Cu);
    ctx->pc = 0x1AD388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD384u;
    // 0x1ad388: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD384u, 0x1AD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD38Cu;
label_1ad38c:
    // 0x1ad38c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD38Cu;
    SET_GPR_U32(ctx, 31, 0x1AD394u);
    ctx->pc = 0x1AD390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD38Cu;
    // 0x1ad390: 0x26040240  addiu       $a0, $s0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD38Cu, 0x1AD394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD394u;
label_1ad394:
    // 0x1ad394: 0x0  nop
    ctx->pc = 0x1ad394u;
    // NOP
label_1ad398:
    // 0x1ad398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad39c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1AD39Cu;
    SET_GPR_U32(ctx, 31, 0x1AD3A4u);
    ctx->pc = 0x1AD3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD39Cu;
    // 0x1ad3a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1AD39Cu, 0x1AD3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3A4u;
label_1ad3a4:
    // 0x1ad3a4: 0x0  nop
    ctx->pc = 0x1ad3a4u;
    // NOP
    // 0x1ad3a8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD3A8u;
    {
        const bool branch_taken_0x1ad3a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3A8u;
        // 0x1ad3ac: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3a8) {
            ctx->pc = 0x1AD398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad398;
        }
    }
    ctx->pc = 0x1AD3B0u;
    // 0x1ad3b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ad3b4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1ad3b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad3b8: 0x344277d0  ori         $v0, $v0, 0x77D0
    ctx->pc = 0x1ad3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30672);
    // 0x1ad3bc: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x1ad3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ad3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad3c4: 0x0  nop
    ctx->pc = 0x1ad3c4u;
    // NOP
label_1ad3c8:
    // 0x1ad3c8: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x1ad3c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ad3cc: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ad3d0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ad3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad3d4: 0x26330450  addiu       $s3, $s1, 0x450
    ctx->pc = 0x1ad3d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    // 0x1ad3d8: 0x26340890  addiu       $s4, $s1, 0x890
    ctx->pc = 0x1ad3d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x1ad3dc: 0x26360ab0  addiu       $s6, $s1, 0xAB0
    ctx->pc = 0x1ad3dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
    // 0x1ad3e0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ad3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ad3e4: 0x0  nop
    ctx->pc = 0x1ad3e4u;
    // NOP
label_1ad3e8:
    // 0x1ad3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3ec: 0x244298c8  addiu       $v0, $v0, -0x6738
    ctx->pc = 0x1ad3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940872));
    // 0x1ad3f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ad3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ad3f4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x1ad3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x1ad3f8: 0xc069770  jal         func_1A5DC0
    ctx->pc = 0x1AD3F8u;
    SET_GPR_U32(ctx, 31, 0x1AD400u);
    ctx->pc = 0x1AD3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3F8u;
    // 0x1ad3fc: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DC0u, 0x1AD3F8u, 0x1AD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD400u;
label_1ad400:
    // 0x1ad400: 0x165efff9  bne         $s2, $fp, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AD400u;
    {
        const bool branch_taken_0x1ad400 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        ctx->pc = 0x1AD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD400u;
        // 0x1ad404: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad400) {
            ctx->pc = 0x1AD3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad3e8;
        }
    }
    ctx->pc = 0x1AD408u;
    // 0x1ad408: 0xc079ba6  jal         func_1E6E98
    ctx->pc = 0x1AD408u;
    SET_GPR_U32(ctx, 31, 0x1AD410u);
    ctx->pc = 0x1AD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD408u;
    // 0x1ad40c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E98u, 0x1AD408u, 0x1AD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD410u;
label_1ad410:
    // 0x1ad410: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1AD410u;
    SET_GPR_U32(ctx, 31, 0x1AD418u);
    ctx->pc = 0x1AD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD410u;
    // 0x1ad414: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1AD410u, 0x1AD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD418u;
label_1ad418:
    // 0x1ad418: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ad418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad41c: 0xae200a98  sw          $zero, 0xA98($s1)
    ctx->pc = 0x1ad41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2712), GPR_U32(ctx, 0));
    // 0x1ad420: 0xae240a94  sw          $a0, 0xA94($s1)
    ctx->pc = 0x1ad420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 4));
    // 0x1ad424: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1ad424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad428: 0x145effe7  bne         $v0, $fp, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1AD428u;
    {
        const bool branch_taken_0x1ad428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1AD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD428u;
        // 0x1ad42c: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad428) {
            ctx->pc = 0x1AD3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad3c8;
        }
    }
    ctx->pc = 0x1AD430u;
    // 0x1ad430: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1ad434: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ad434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad438: 0x34848d30  ori         $a0, $a0, 0x8D30
    ctx->pc = 0x1ad438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36144);
    // 0x1ad43c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ad43cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad440: 0xc072a26  jal         func_1CA898
    ctx->pc = 0x1AD440u;
    SET_GPR_U32(ctx, 31, 0x1AD448u);
    ctx->pc = 0x1AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD440u;
    // 0x1ad444: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA898u, 0x1AD440u, 0x1AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD448u;
label_1ad448:
    // 0x1ad448: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1ad44c: 0x36108e60  ori         $s0, $s0, 0x8E60
    ctx->pc = 0x1ad44cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)36448);
    // 0x1ad450: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ad450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ad454: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1AD454u;
    SET_GPR_U32(ctx, 31, 0x1AD45Cu);
    ctx->pc = 0x1AD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD454u;
    // 0x1ad458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1AD454u, 0x1AD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD45Cu;
label_1ad45c:
    // 0x1ad45c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ad45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1ad460: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1ad460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1ad464: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
    // 0x1ad468: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x1ad468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1ad46c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ad46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ad470: 0x24828510  addiu       $v0, $a0, -0x7AF0
    ctx->pc = 0x1ad470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
    // 0x1ad474: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ad474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1ad478: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1ad47c: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1ad47cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x1ad480: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ad480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1ad484: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ad484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ad488: 0x2463abc0  addiu       $v1, $v1, -0x5440
    ctx->pc = 0x1ad488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945728));
    // 0x1ad48c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1ad48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1ad490: 0x2442abe8  addiu       $v0, $v0, -0x5418
    ctx->pc = 0x1ad490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945768));
    // 0x1ad494: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1ad494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1ad498: 0x34848ee0  ori         $a0, $a0, 0x8EE0
    ctx->pc = 0x1ad498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36576);
    // 0x1ad49c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1ad49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1ad4a0: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1ad4a4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1ad4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1ad4a8: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1ad4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1ad4ac: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1AD4ACu;
    SET_GPR_U32(ctx, 31, 0x1AD4B4u);
    ctx->pc = 0x1AD4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4ACu;
    // 0x1ad4b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1AD4ACu, 0x1AD4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4B4u;
label_1ad4b4:
    // 0x1ad4b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ad4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ad4b8: 0x34639130  ori         $v1, $v1, 0x9130
    ctx->pc = 0x1ad4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37168);
    // 0x1ad4bc: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x1ad4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1ad4c0:
    // 0x1ad4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4c4: 0xc084728  jal         func_211CA0
    ctx->pc = 0x1AD4C4u;
    SET_GPR_U32(ctx, 31, 0x1AD4CCu);
    ctx->pc = 0x1AD4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4C4u;
    // 0x1ad4c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CA0u, 0x1AD4C4u, 0x1AD4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4CCu;
label_1ad4cc:
    // 0x1ad4cc: 0x0  nop
    ctx->pc = 0x1ad4ccu;
    // NOP
    // 0x1ad4d0: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD4D0u;
    {
        const bool branch_taken_0x1ad4d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4D0u;
        // 0x1ad4d4: 0x26104a50  addiu       $s0, $s0, 0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4d0) {
            ctx->pc = 0x1AD4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad4c0;
        }
    }
    ctx->pc = 0x1AD4D8u;
    // 0x1ad4d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ad4dc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1ad4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1ad4e0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ad4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ad4e4: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ad4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1ad4e8: 0xac4077a4  sw          $zero, 0x77A4($v0)
    ctx->pc = 0x1ad4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30628), GPR_U32(ctx, 0));
    // 0x1ad4ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ad4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ad4f0: 0xac4077b8  sw          $zero, 0x77B8($v0)
    ctx->pc = 0x1ad4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30648), GPR_U32(ctx, 0));
    // 0x1ad4f4: 0x346377bc  ori         $v1, $v1, 0x77BC
    ctx->pc = 0x1ad4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30652);
    // 0x1ad4f8: 0xa08025d5  sb          $zero, 0x25D5($a0)
    ctx->pc = 0x1ad4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9685), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad500: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1ad500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1ad504: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1ad504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ad508:
    // 0x1ad508: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ad508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ad50c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ad50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ad510: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ad510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ad514: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ad514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ad518: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1ad518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ad51c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD51Cu;
    {
        const bool branch_taken_0x1ad51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD51Cu;
        // 0x1ad520: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad51c) {
            ctx->pc = 0x1AD508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad508;
        }
    }
    ctx->pc = 0x1AD524u;
    // 0x1ad524: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ad528: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ad528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad52c: 0x34429130  ori         $v0, $v0, 0x9130
    ctx->pc = 0x1ad52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37168);
    // 0x1ad530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad534: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x1ad534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ad538:
    // 0x1ad538: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ad538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ad53c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ad53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ad540: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ad540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1ad544: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1ad544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ad548: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AD548u;
    {
        const bool branch_taken_0x1ad548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD548u;
        // 0x1ad54c: 0x24634a50  addiu       $v1, $v1, 0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad548) {
            ctx->pc = 0x1AD538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad538;
        }
    }
    ctx->pc = 0x1AD550u;
    // 0x1ad550: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1ad550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad554: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1ad554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ad558: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1ad558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ad55c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1ad55cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ad560: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1ad560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ad564: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ad564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ad568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad56c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1ad56cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad570: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1ad570u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad574: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1ad574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad57c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD57Cu;
        // 0x1ad580: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD584u;
    // 0x1ad584: 0x0  nop
    ctx->pc = 0x1ad584u;
    // NOP
    ctx->pc = 0x1ad588u;
}
