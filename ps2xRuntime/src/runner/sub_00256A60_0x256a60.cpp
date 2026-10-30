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

// Function: sub_00256A60
// Address: 0x256a60 - 0x256f28
void sub_00256A60_0x256a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256A60_0x256a60");
#endif

    switch (ctx->pc) {
        case 0x256a9cu: goto label_256a9c;
        case 0x256aa8u: goto label_256aa8;
        case 0x256ad0u: goto label_256ad0;
        case 0x256ae8u: goto label_256ae8;
        case 0x256b00u: goto label_256b00;
        case 0x256b0cu: goto label_256b0c;
        case 0x256b24u: goto label_256b24;
        case 0x256b40u: goto label_256b40;
        case 0x256b50u: goto label_256b50;
        case 0x256b60u: goto label_256b60;
        case 0x256b6cu: goto label_256b6c;
        case 0x256b74u: goto label_256b74;
        case 0x256b90u: goto label_256b90;
        case 0x256bccu: goto label_256bcc;
        case 0x256bdcu: goto label_256bdc;
        case 0x256c1cu: goto label_256c1c;
        case 0x256c2cu: goto label_256c2c;
        case 0x256c3cu: goto label_256c3c;
        case 0x256c74u: goto label_256c74;
        case 0x256c94u: goto label_256c94;
        case 0x256ca4u: goto label_256ca4;
        case 0x256cb4u: goto label_256cb4;
        case 0x256cc4u: goto label_256cc4;
        case 0x256ce4u: goto label_256ce4;
        case 0x256cf8u: goto label_256cf8;
        case 0x256d8cu: goto label_256d8c;
        case 0x256da0u: goto label_256da0;
        default: break;
    }

    ctx->pc = 0x256a60u;

    // 0x256a60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x256a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x256a64: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x256a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x256a68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x256a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a6c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x256a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x256a70: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x256a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x256a74: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x256a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x256a78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x256a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x256a7c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x256a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x256a80: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x256a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x256a84: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x256a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x256a88: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x256a88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x256a8c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x256a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x256a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256a94: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x256A94u;
    SET_GPR_U32(ctx, 31, 0x256A9Cu);
    ctx->pc = 0x256A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A94u;
    // 0x256a98: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x256A94u, 0x256A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A9Cu;
label_256a9c:
    // 0x256a9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256aa0: 0xc051fe6  jal         func_147F98
    ctx->pc = 0x256AA0u;
    SET_GPR_U32(ctx, 31, 0x256AA8u);
    ctx->pc = 0x256AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AA0u;
    // 0x256aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F98u, 0x256AA0u, 0x256AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AA8u;
label_256aa8:
    // 0x256aa8: 0x8e3200d4  lw          $s2, 0xD4($s1)
    ctx->pc = 0x256aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x256aac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x256aacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ab0: 0x8ec3b734  lw          $v1, -0x48CC($s6)
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x256ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ab8: 0x8e45014c  lw          $a1, 0x14C($s2)
    ctx->pc = 0x256ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x256abc: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x256abcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x256ac0: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x256ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x256ac4: 0x2059823  subu        $s3, $s0, $a1
    ctx->pc = 0x256ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x256ac8: 0xc088ade  jal         func_222B78
    ctx->pc = 0x256AC8u;
    SET_GPR_U32(ctx, 31, 0x256AD0u);
    ctx->pc = 0x256ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AC8u;
    // 0x256acc: 0x202a023  subu        $s4, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x256AC8u, 0x256AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AD0u;
label_256ad0:
    // 0x256ad0: 0x8443002a  lh          $v1, 0x2A($v0)
    ctx->pc = 0x256ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x256ad4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x256ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x256ad8: 0x0  nop
    ctx->pc = 0x256ad8u;
    // NOP
    // 0x256adc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x256adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x256ae0: 0xc088ade  jal         func_222B78
    ctx->pc = 0x256AE0u;
    SET_GPR_U32(ctx, 31, 0x256AE8u);
    ctx->pc = 0x256AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AE0u;
    // 0x256ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x256AE0u, 0x256AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AE8u;
label_256ae8:
    // 0x256ae8: 0x8443002e  lh          $v1, 0x2E($v0)
    ctx->pc = 0x256ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x256aec: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x256aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x256af0: 0x0  nop
    ctx->pc = 0x256af0u;
    // NOP
    // 0x256af4: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x256af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x256af8: 0xc088c62  jal         func_223188
    ctx->pc = 0x256AF8u;
    SET_GPR_U32(ctx, 31, 0x256B00u);
    ctx->pc = 0x256AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AF8u;
    // 0x256afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223188u, 0x256AF8u, 0x256B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B00u;
label_256b00:
    // 0x256b00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x256b00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b04: 0xc08a0f2  jal         func_2283C8
    ctx->pc = 0x256B04u;
    SET_GPR_U32(ctx, 31, 0x256B0Cu);
    ctx->pc = 0x256B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B04u;
    // 0x256b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283C8u, 0x256B04u, 0x256B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B0Cu;
label_256b0c:
    // 0x256b0c: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x256B0Cu;
    {
        const bool branch_taken_0x256b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256b0c) {
            ctx->pc = 0x256B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B0Cu;
            // 0x256b10: 0xae500154  sw          $s0, 0x154($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C44u;
            goto label_256c44;
        }
    }
    ctx->pc = 0x256B14u;
    // 0x256b14: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x256b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x256b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b1c: 0xc089998  jal         func_226660
    ctx->pc = 0x256B1Cu;
    SET_GPR_U32(ctx, 31, 0x256B24u);
    ctx->pc = 0x256B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B1Cu;
    // 0x256b20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x256B1Cu, 0x256B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B24u;
label_256b24:
    // 0x256b24: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x256B24u;
    {
        const bool branch_taken_0x256b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256b24) {
            ctx->pc = 0x256B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B24u;
            // 0x256b28: 0xae500154  sw          $s0, 0x154($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C44u;
            goto label_256c44;
        }
    }
    ctx->pc = 0x256B2Cu;
    // 0x256b2c: 0x3405e0c0  ori         $a1, $zero, 0xE0C0
    ctx->pc = 0x256b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57536);
    // 0x256b30: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x256b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x256b34: 0x34a53ff0  ori         $a1, $a1, 0x3FF0
    ctx->pc = 0x256b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16368);
    // 0x256b38: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x256B38u;
    SET_GPR_U32(ctx, 31, 0x256B40u);
    ctx->pc = 0x256B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B38u;
    // 0x256b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x256B38u, 0x256B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B40u;
label_256b40:
    // 0x256b40: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x256B40u;
    {
        const bool branch_taken_0x256b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256b40) {
            ctx->pc = 0x256B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B40u;
            // 0x256b44: 0xae500154  sw          $s0, 0x154($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C44u;
            goto label_256c44;
        }
    }
    ctx->pc = 0x256B48u;
    // 0x256b48: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x256B48u;
    SET_GPR_U32(ctx, 31, 0x256B50u);
    ctx->pc = 0x256B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B48u;
    // 0x256b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x256B48u, 0x256B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B50u;
label_256b50:
    // 0x256b50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x256B50u;
    {
        const bool branch_taken_0x256b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b50) {
            ctx->pc = 0x256BD4u;
            goto label_256bd4;
        }
    }
    ctx->pc = 0x256B58u;
    // 0x256b58: 0xc088de4  jal         func_223790
    ctx->pc = 0x256B58u;
    SET_GPR_U32(ctx, 31, 0x256B60u);
    ctx->pc = 0x256B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B58u;
    // 0x256b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223790u, 0x256B58u, 0x256B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B60u;
label_256b60:
    // 0x256b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b64: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x256B64u;
    SET_GPR_U32(ctx, 31, 0x256B6Cu);
    ctx->pc = 0x256B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B64u;
    // 0x256b68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x256B64u, 0x256B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B6Cu;
label_256b6c:
    // 0x256b6c: 0xc09ed70  jal         func_27B5C0
    ctx->pc = 0x256B6Cu;
    SET_GPR_U32(ctx, 31, 0x256B74u);
    ctx->pc = 0x256B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B6Cu;
    // 0x256b70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5C0u, 0x256B6Cu, 0x256B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B74u;
label_256b74:
    // 0x256b74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x256B74u;
    {
        const bool branch_taken_0x256b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B74u;
        // 0x256b78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b74) {
            ctx->pc = 0x256BACu;
            goto label_256bac;
        }
    }
    ctx->pc = 0x256B7Cu;
    // 0x256b7c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x256b80: 0x8c4606c8  lw          $a2, 0x6C8($v0)
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x256b84: 0x2484b898  addiu       $a0, $a0, -0x4768
    ctx->pc = 0x256b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    // 0x256b88: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x256B88u;
    SET_GPR_U32(ctx, 31, 0x256B90u);
    ctx->pc = 0x256B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B88u;
    // 0x256b8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x256B88u, 0x256B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B90u;
label_256b90:
    // 0x256b90: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x256b90u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x256b94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256B94u;
    {
        const bool branch_taken_0x256b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b94) {
            ctx->pc = 0x256B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B94u;
            // 0x256b98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256B9Cu;
            goto label_256b9c;
        }
    }
    ctx->pc = 0x256B9Cu;
label_256b9c:
    // 0x256b9c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x256b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x256ba0: 0x1812  mflo        $v1
    ctx->pc = 0x256ba0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x256ba4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x256ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256ba8: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x256ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
label_256bac:
    // 0x256bac: 0x8ec2b734  lw          $v0, -0x48CC($s6)
    ctx->pc = 0x256bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x256bb0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x256bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x256bb4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x256bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x256bb8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x256bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256bbc: 0x461001d  bgez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x256BBCu;
    {
        const bool branch_taken_0x256bbc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x256bbc) {
            ctx->pc = 0x256C34u;
            goto label_256c34;
        }
    }
    ctx->pc = 0x256BC4u;
    // 0x256bc4: 0xc0978b6  jal         func_25E2D8
    ctx->pc = 0x256BC4u;
    SET_GPR_U32(ctx, 31, 0x256BCCu);
    ctx->pc = 0x256BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BC4u;
    // 0x256bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E2D8u, 0x256BC4u, 0x256BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BCCu;
label_256bcc:
    // 0x256bcc: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x256BCCu;
    {
        const bool branch_taken_0x256bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BCCu;
        // 0x256bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bcc) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256BD4u;
label_256bd4:
    // 0x256bd4: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x256BD4u;
    SET_GPR_U32(ctx, 31, 0x256BDCu);
    ctx->pc = 0x256BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BD4u;
    // 0x256bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x256BD4u, 0x256BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BDCu;
label_256bdc:
    // 0x256bdc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x256BDCu;
    {
        const bool branch_taken_0x256bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BDCu;
        // 0x256be0: 0x8ec2b734  lw          $v0, -0x48CC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bdc) {
            ctx->pc = 0x256C24u;
            goto label_256c24;
        }
    }
    ctx->pc = 0x256BE4u;
    // 0x256be4: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x256be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x256be8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x256be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x256bec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x256becu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256bf0: 0x4610010  bgez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x256BF0u;
    {
        const bool branch_taken_0x256bf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x256BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BF0u;
        // 0x256bf4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bf0) {
            ctx->pc = 0x256C34u;
            goto label_256c34;
        }
    }
    ctx->pc = 0x256BF8u;
    // 0x256bf8: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x256bf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x256bfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256c00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256c04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256c08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256c08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256c0c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256C0Cu;
    {
        const bool branch_taken_0x256c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256c0c) {
            ctx->pc = 0x256C34u;
            goto label_256c34;
        }
    }
    ctx->pc = 0x256C14u;
    // 0x256c14: 0xc08be36  jal         func_22F8D8
    ctx->pc = 0x256C14u;
    SET_GPR_U32(ctx, 31, 0x256C1Cu);
    ctx->pc = 0x256C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C14u;
    // 0x256c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x256C14u, 0x256C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C1Cu;
label_256c1c:
    // 0x256c1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x256C1Cu;
    {
        const bool branch_taken_0x256c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c1c) {
            ctx->pc = 0x256C34u;
            goto label_256c34;
        }
    }
    ctx->pc = 0x256C24u;
label_256c24:
    // 0x256c24: 0xc088edc  jal         func_223B70
    ctx->pc = 0x256C24u;
    SET_GPR_U32(ctx, 31, 0x256C2Cu);
    ctx->pc = 0x256C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C24u;
    // 0x256c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x256C24u, 0x256C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C2Cu;
label_256c2c:
    // 0x256c2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256C2Cu;
    {
        const bool branch_taken_0x256c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c2c) {
            ctx->pc = 0x256C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C2Cu;
            // 0x256c30: 0xae500154  sw          $s0, 0x154($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C44u;
            goto label_256c44;
        }
    }
    ctx->pc = 0x256C34u;
label_256c34:
    // 0x256c34: 0xc09655e  jal         func_259578
    ctx->pc = 0x256C34u;
    SET_GPR_U32(ctx, 31, 0x256C3Cu);
    ctx->pc = 0x256C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C34u;
    // 0x256c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259578u, 0x256C34u, 0x256C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C3Cu;
label_256c3c:
    // 0x256c3c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x256C3Cu;
    {
        const bool branch_taken_0x256c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C3Cu;
        // 0x256c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c3c) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256C44u;
label_256c44:
    // 0x256c44: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x256c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x256c48: 0xae50014c  sw          $s0, 0x14C($s2)
    ctx->pc = 0x256c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 16));
    // 0x256c4c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x256c4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x256c50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256c54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256c58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256c5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256c60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256C60u;
    {
        const bool branch_taken_0x256c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c60) {
            ctx->pc = 0x256C80u;
            goto label_256c80;
        }
    }
    ctx->pc = 0x256C68u;
    // 0x256c68: 0xa655014a  sh          $s5, 0x14A($s2)
    ctx->pc = 0x256c68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 330), (uint16_t)GPR_U32(ctx, 21));
    // 0x256c6c: 0xc088c1a  jal         func_223068
    ctx->pc = 0x256C6Cu;
    SET_GPR_U32(ctx, 31, 0x256C74u);
    ctx->pc = 0x256C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C6Cu;
    // 0x256c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x256C6Cu, 0x256C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C74u;
label_256c74:
    // 0x256c74: 0xa6420148  sh          $v0, 0x148($s2)
    ctx->pc = 0x256c74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x256c78: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x256C78u;
    {
        const bool branch_taken_0x256c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C78u;
        // 0x256c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c78) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256C80u;
label_256c80:
    // 0x256c80: 0x3405e0c0  ori         $a1, $zero, 0xE0C0
    ctx->pc = 0x256c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57536);
    // 0x256c84: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x256c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x256c88: 0x34a53ff0  ori         $a1, $a1, 0x3FF0
    ctx->pc = 0x256c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16368);
    // 0x256c8c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x256C8Cu;
    SET_GPR_U32(ctx, 31, 0x256C94u);
    ctx->pc = 0x256C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C8Cu;
    // 0x256c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x256C8Cu, 0x256C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C94u;
label_256c94:
    // 0x256c94: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x256C94u;
    {
        const bool branch_taken_0x256c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C94u;
        // 0x256c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c94) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256C9Cu;
    // 0x256c9c: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x256C9Cu;
    SET_GPR_U32(ctx, 31, 0x256CA4u);
    ctx->pc = 0x256CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C9Cu;
    // 0x256ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x256C9Cu, 0x256CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CA4u;
label_256ca4:
    // 0x256ca4: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x256CA4u;
    {
        const bool branch_taken_0x256ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CA4u;
        // 0x256ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ca4) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256CACu;
    // 0x256cac: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x256CACu;
    SET_GPR_U32(ctx, 31, 0x256CB4u);
    ctx->pc = 0x256CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CACu;
    // 0x256cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x256CACu, 0x256CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CB4u;
label_256cb4:
    // 0x256cb4: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x256CB4u;
    {
        const bool branch_taken_0x256cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CB4u;
        // 0x256cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cb4) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256CBCu;
    // 0x256cbc: 0xc088e98  jal         func_223A60
    ctx->pc = 0x256CBCu;
    SET_GPR_U32(ctx, 31, 0x256CC4u);
    ctx->pc = 0x256CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CBCu;
    // 0x256cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x256CBCu, 0x256CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CC4u;
label_256cc4:
    // 0x256cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256CC4u;
    {
        const bool branch_taken_0x256cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CC4u;
        // 0x256cc8: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cc4) {
            ctx->pc = 0x256CD8u;
            goto label_256cd8;
        }
    }
    ctx->pc = 0x256CCCu;
    // 0x256ccc: 0x16e00089  bnez        $s7, . + 4 + (0x89 << 2)
    ctx->pc = 0x256CCCu;
    {
        const bool branch_taken_0x256ccc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x256CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CCCu;
        // 0x256cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ccc) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256CD4u;
    // 0x256cd4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x256cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_256cd8:
    // 0x256cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256cdc: 0xc089998  jal         func_226660
    ctx->pc = 0x256CDCu;
    SET_GPR_U32(ctx, 31, 0x256CE4u);
    ctx->pc = 0x256CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CDCu;
    // 0x256ce0: 0x34a5a420  ori         $a1, $a1, 0xA420 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42016);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x256CDCu, 0x256CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CE4u;
label_256ce4:
    // 0x256ce4: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x256CE4u;
    {
        const bool branch_taken_0x256ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CE4u;
        // 0x256ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ce4) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256CECu;
    // 0x256cec: 0x86500148  lh          $s0, 0x148($s2)
    ctx->pc = 0x256cecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x256cf0: 0xc088c1a  jal         func_223068
    ctx->pc = 0x256CF0u;
    SET_GPR_U32(ctx, 31, 0x256CF8u);
    ctx->pc = 0x256CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CF0u;
    // 0x256cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x256CF0u, 0x256CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CF8u;
label_256cf8:
    // 0x256cf8: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x256cf8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256cfc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256CFCu;
    {
        const bool branch_taken_0x256cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x256cfc) {
            ctx->pc = 0x256D14u;
            goto label_256d14;
        }
    }
    ctx->pc = 0x256D04u;
    // 0x256d04: 0x8642014a  lh          $v0, 0x14A($s2)
    ctx->pc = 0x256d04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 330)));
    // 0x256d08: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x256d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x256d0c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x256D0Cu;
    {
        const bool branch_taken_0x256d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D0Cu;
        // 0x256d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d0c) {
            ctx->pc = 0x256EF4u;
            goto label_256ef4;
        }
    }
    ctx->pc = 0x256D14u;
label_256d14:
    // 0x256d14: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x256d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x256d18: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x256d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x256d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256d20: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x256D20u;
    {
        const bool branch_taken_0x256d20 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x256D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D20u;
        // 0x256d24: 0x4600a042  mul.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d20) {
            ctx->pc = 0x256D3Cu;
            goto label_256d3c;
        }
    }
    ctx->pc = 0x256D28u;
    // 0x256d28: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x256d28u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256d2c: 0x0  nop
    ctx->pc = 0x256d2cu;
    // NOP
    // 0x256d30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256d34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x256D34u;
    {
        const bool branch_taken_0x256d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D34u;
        // 0x256d38: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d34) {
            ctx->pc = 0x256D5Cu;
            goto label_256d5c;
        }
    }
    ctx->pc = 0x256D3Cu;
label_256d3c:
    // 0x256d3c: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x256d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x256d40: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x256d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x256d44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256d4c: 0x0  nop
    ctx->pc = 0x256d4cu;
    // NOP
    // 0x256d50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256d54: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x256d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x256d58: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x256d58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_256d5c:
    // 0x256d5c: 0x96420148  lhu         $v0, 0x148($s2)
    ctx->pc = 0x256d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x256d60: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x256d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d68: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x256d68u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x256d6c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x256d70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x256d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x256d74: 0xe6540150  swc1        $f20, 0x150($s2)
    ctx->pc = 0x256d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
    // 0x256d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256d7c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x256d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x256d80: 0xa6420148  sh          $v0, 0x148($s2)
    ctx->pc = 0x256d80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x256d84: 0xc088c1a  jal         func_223068
    ctx->pc = 0x256D84u;
    SET_GPR_U32(ctx, 31, 0x256D8Cu);
    ctx->pc = 0x256D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D84u;
    // 0x256d88: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x256D84u, 0x256D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D8Cu;
label_256d8c:
    // 0x256d8c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x256d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x256d90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256D90u;
    {
        const bool branch_taken_0x256d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256d90) {
            ctx->pc = 0x256D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256D90u;
            // 0x256d94: 0xc6400150  lwc1        $f0, 0x150($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x256DA8u;
            goto label_256da8;
        }
    }
    ctx->pc = 0x256D98u;
    // 0x256d98: 0xc088c1a  jal         func_223068
    ctx->pc = 0x256D98u;
    SET_GPR_U32(ctx, 31, 0x256DA0u);
    ctx->pc = 0x256D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D98u;
    // 0x256d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x256D98u, 0x256DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DA0u;
label_256da0:
    // 0x256da0: 0xa6420148  sh          $v0, 0x148($s2)
    ctx->pc = 0x256da0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x256da4: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x256da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256da8:
    // 0x256da8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x256da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256dac: 0x0  nop
    ctx->pc = 0x256dacu;
    // NOP
    // 0x256db0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x256db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256db4: 0x0  nop
    ctx->pc = 0x256db4u;
    // NOP
    // 0x256db8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x256DB8u;
    {
        const bool branch_taken_0x256db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DB8u;
        // 0x256dbc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256db8) {
            ctx->pc = 0x256DD0u;
            goto label_256dd0;
        }
    }
    ctx->pc = 0x256DC0u;
    // 0x256dc0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x256dc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x256dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x256dc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x256DC8u;
    {
        const bool branch_taken_0x256dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256dc8) {
            ctx->pc = 0x256DF8u;
            goto label_256df8;
        }
    }
    ctx->pc = 0x256DD0u;
label_256dd0:
    // 0x256dd0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x256dd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x256dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x256dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256ddc: 0x0  nop
    ctx->pc = 0x256ddcu;
    // NOP
    // 0x256de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256de4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x256de4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256de8: 0x0  nop
    ctx->pc = 0x256de8u;
    // NOP
    // 0x256dec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x256DECu;
    {
        const bool branch_taken_0x256dec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x256DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DECu;
        // 0x256df0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dec) {
            ctx->pc = 0x256E04u;
            goto label_256e04;
        }
    }
    ctx->pc = 0x256DF4u;
    // 0x256df4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_256df8:
    // 0x256df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256dfc: 0x0  nop
    ctx->pc = 0x256dfcu;
    // NOP
    // 0x256e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_256e04:
    // 0x256e04: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x256e04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x256e08: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x256e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x256e0c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x256e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x256e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256e14: 0xe6410150  swc1        $f1, 0x150($s2)
    ctx->pc = 0x256e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
    // 0x256e18: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x256E18u;
    {
        const bool branch_taken_0x256e18 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x256E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E18u;
        // 0x256e1c: 0x4600a882  mul.s       $f2, $f21, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e18) {
            ctx->pc = 0x256E34u;
            goto label_256e34;
        }
    }
    ctx->pc = 0x256E20u;
    // 0x256e20: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x256e20u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256e24: 0x0  nop
    ctx->pc = 0x256e24u;
    // NOP
    // 0x256e28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256e2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x256E2Cu;
    {
        const bool branch_taken_0x256e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E2Cu;
        // 0x256e30: 0x46001542  mul.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e2c) {
            ctx->pc = 0x256E54u;
            goto label_256e54;
        }
    }
    ctx->pc = 0x256E34u;
label_256e34:
    // 0x256e34: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x256e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x256e38: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x256e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x256e3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x256e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256e44: 0x0  nop
    ctx->pc = 0x256e44u;
    // NOP
    // 0x256e48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256e4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x256e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x256e50: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x256e50u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_256e54:
    // 0x256e54: 0x9643014a  lhu         $v1, 0x14A($s2)
    ctx->pc = 0x256e54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 330)));
    // 0x256e58: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x256e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256e5c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x256e5cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x256e60: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256e60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x256e64: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x256e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x256e68: 0xe6550158  swc1        $f21, 0x158($s2)
    ctx->pc = 0x256e68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 344), bits); }
    // 0x256e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x256e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256e70: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x256e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x256e74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x256e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x256e78: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x256e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256e7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x256E7Cu;
    {
        const bool branch_taken_0x256e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E7Cu;
        // 0x256e80: 0xa643014a  sh          $v1, 0x14A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 330), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e7c) {
            ctx->pc = 0x256E88u;
            goto label_256e88;
        }
    }
    ctx->pc = 0x256E84u;
    // 0x256e84: 0xa655014a  sh          $s5, 0x14A($s2)
    ctx->pc = 0x256e84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 330), (uint16_t)GPR_U32(ctx, 21));
label_256e88:
    // 0x256e88: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x256e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256e8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x256e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256e90: 0x0  nop
    ctx->pc = 0x256e90u;
    // NOP
    // 0x256e94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x256e94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256e98: 0x0  nop
    ctx->pc = 0x256e98u;
    // NOP
    // 0x256e9c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x256E9Cu;
    {
        const bool branch_taken_0x256e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E9Cu;
        // 0x256ea0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e9c) {
            ctx->pc = 0x256EB4u;
            goto label_256eb4;
        }
    }
    ctx->pc = 0x256EA4u;
    // 0x256ea4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x256ea8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x256ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x256eac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x256EACu;
    {
        const bool branch_taken_0x256eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256eac) {
            ctx->pc = 0x256EDCu;
            goto label_256edc;
        }
    }
    ctx->pc = 0x256EB4u;
label_256eb4:
    // 0x256eb4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x256eb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x256eb8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x256eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x256ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256ec0: 0x0  nop
    ctx->pc = 0x256ec0u;
    // NOP
    // 0x256ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256ec8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x256ec8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256ecc: 0x0  nop
    ctx->pc = 0x256eccu;
    // NOP
    // 0x256ed0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x256ED0u;
    {
        const bool branch_taken_0x256ed0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x256ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256ED0u;
        // 0x256ed4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ed0) {
            ctx->pc = 0x256EE8u;
            goto label_256ee8;
        }
    }
    ctx->pc = 0x256ED8u;
    // 0x256ed8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_256edc:
    // 0x256edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256ee0: 0x0  nop
    ctx->pc = 0x256ee0u;
    // NOP
    // 0x256ee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_256ee8:
    // 0x256ee8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x256ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x256eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ef0: 0xe6400158  swc1        $f0, 0x158($s2)
    ctx->pc = 0x256ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 344), bits); }
label_256ef4:
    // 0x256ef4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x256ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256ef8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x256ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256efc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x256efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256f00: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x256f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256f04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256f08: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x256f08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256f0c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x256f0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256f10: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x256f10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256f18: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x256f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x256f1c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x256f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x256f20: 0x3e00008  jr          $ra
    ctx->pc = 0x256F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F20u;
        // 0x256f24: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256F28u;
}
