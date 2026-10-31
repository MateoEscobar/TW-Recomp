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

// Function: sub_002BCF88
// Address: 0x2bcf88 - 0x2bd180
void sub_002BCF88_0x2bcf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCF88_0x2bcf88");
#endif

    switch (ctx->pc) {
        case 0x2bcf88u: goto label_2bcf88;
        case 0x2bcf8cu: goto label_2bcf8c;
        case 0x2bcf90u: goto label_2bcf90;
        case 0x2bcf94u: goto label_2bcf94;
        case 0x2bcf98u: goto label_2bcf98;
        case 0x2bcf9cu: goto label_2bcf9c;
        case 0x2bcfa0u: goto label_2bcfa0;
        case 0x2bcfa4u: goto label_2bcfa4;
        case 0x2bcfa8u: goto label_2bcfa8;
        case 0x2bcfacu: goto label_2bcfac;
        case 0x2bcfb0u: goto label_2bcfb0;
        case 0x2bcfb4u: goto label_2bcfb4;
        case 0x2bcfb8u: goto label_2bcfb8;
        case 0x2bcfbcu: goto label_2bcfbc;
        case 0x2bcfc0u: goto label_2bcfc0;
        case 0x2bcfc4u: goto label_2bcfc4;
        case 0x2bcfc8u: goto label_2bcfc8;
        case 0x2bcfccu: goto label_2bcfcc;
        case 0x2bcfd0u: goto label_2bcfd0;
        case 0x2bcfd4u: goto label_2bcfd4;
        case 0x2bcfd8u: goto label_2bcfd8;
        case 0x2bcfdcu: goto label_2bcfdc;
        case 0x2bcfe0u: goto label_2bcfe0;
        case 0x2bcfe4u: goto label_2bcfe4;
        case 0x2bcfe8u: goto label_2bcfe8;
        case 0x2bcfecu: goto label_2bcfec;
        case 0x2bcff0u: goto label_2bcff0;
        case 0x2bcff4u: goto label_2bcff4;
        case 0x2bcff8u: goto label_2bcff8;
        case 0x2bcffcu: goto label_2bcffc;
        case 0x2bd000u: goto label_2bd000;
        case 0x2bd004u: goto label_2bd004;
        case 0x2bd008u: goto label_2bd008;
        case 0x2bd00cu: goto label_2bd00c;
        case 0x2bd010u: goto label_2bd010;
        case 0x2bd014u: goto label_2bd014;
        case 0x2bd018u: goto label_2bd018;
        case 0x2bd01cu: goto label_2bd01c;
        case 0x2bd020u: goto label_2bd020;
        case 0x2bd024u: goto label_2bd024;
        case 0x2bd028u: goto label_2bd028;
        case 0x2bd02cu: goto label_2bd02c;
        case 0x2bd030u: goto label_2bd030;
        case 0x2bd034u: goto label_2bd034;
        case 0x2bd038u: goto label_2bd038;
        case 0x2bd03cu: goto label_2bd03c;
        case 0x2bd040u: goto label_2bd040;
        case 0x2bd044u: goto label_2bd044;
        case 0x2bd048u: goto label_2bd048;
        case 0x2bd04cu: goto label_2bd04c;
        case 0x2bd050u: goto label_2bd050;
        case 0x2bd054u: goto label_2bd054;
        case 0x2bd058u: goto label_2bd058;
        case 0x2bd05cu: goto label_2bd05c;
        case 0x2bd060u: goto label_2bd060;
        case 0x2bd064u: goto label_2bd064;
        case 0x2bd068u: goto label_2bd068;
        case 0x2bd06cu: goto label_2bd06c;
        case 0x2bd070u: goto label_2bd070;
        case 0x2bd074u: goto label_2bd074;
        case 0x2bd078u: goto label_2bd078;
        case 0x2bd07cu: goto label_2bd07c;
        case 0x2bd080u: goto label_2bd080;
        case 0x2bd084u: goto label_2bd084;
        case 0x2bd088u: goto label_2bd088;
        case 0x2bd08cu: goto label_2bd08c;
        case 0x2bd090u: goto label_2bd090;
        case 0x2bd094u: goto label_2bd094;
        case 0x2bd098u: goto label_2bd098;
        case 0x2bd09cu: goto label_2bd09c;
        case 0x2bd0a0u: goto label_2bd0a0;
        case 0x2bd0a4u: goto label_2bd0a4;
        case 0x2bd0a8u: goto label_2bd0a8;
        case 0x2bd0acu: goto label_2bd0ac;
        case 0x2bd0b0u: goto label_2bd0b0;
        case 0x2bd0b4u: goto label_2bd0b4;
        case 0x2bd0b8u: goto label_2bd0b8;
        case 0x2bd0bcu: goto label_2bd0bc;
        case 0x2bd0c0u: goto label_2bd0c0;
        case 0x2bd0c4u: goto label_2bd0c4;
        case 0x2bd0c8u: goto label_2bd0c8;
        case 0x2bd0ccu: goto label_2bd0cc;
        case 0x2bd0d0u: goto label_2bd0d0;
        case 0x2bd0d4u: goto label_2bd0d4;
        case 0x2bd0d8u: goto label_2bd0d8;
        case 0x2bd0dcu: goto label_2bd0dc;
        case 0x2bd0e0u: goto label_2bd0e0;
        case 0x2bd0e4u: goto label_2bd0e4;
        case 0x2bd0e8u: goto label_2bd0e8;
        case 0x2bd0ecu: goto label_2bd0ec;
        case 0x2bd0f0u: goto label_2bd0f0;
        case 0x2bd0f4u: goto label_2bd0f4;
        case 0x2bd0f8u: goto label_2bd0f8;
        case 0x2bd0fcu: goto label_2bd0fc;
        case 0x2bd100u: goto label_2bd100;
        case 0x2bd104u: goto label_2bd104;
        case 0x2bd108u: goto label_2bd108;
        case 0x2bd10cu: goto label_2bd10c;
        case 0x2bd110u: goto label_2bd110;
        case 0x2bd114u: goto label_2bd114;
        case 0x2bd118u: goto label_2bd118;
        case 0x2bd11cu: goto label_2bd11c;
        case 0x2bd120u: goto label_2bd120;
        case 0x2bd124u: goto label_2bd124;
        case 0x2bd128u: goto label_2bd128;
        case 0x2bd12cu: goto label_2bd12c;
        case 0x2bd130u: goto label_2bd130;
        case 0x2bd134u: goto label_2bd134;
        case 0x2bd138u: goto label_2bd138;
        case 0x2bd13cu: goto label_2bd13c;
        case 0x2bd140u: goto label_2bd140;
        case 0x2bd144u: goto label_2bd144;
        case 0x2bd148u: goto label_2bd148;
        case 0x2bd14cu: goto label_2bd14c;
        case 0x2bd150u: goto label_2bd150;
        case 0x2bd154u: goto label_2bd154;
        case 0x2bd158u: goto label_2bd158;
        case 0x2bd15cu: goto label_2bd15c;
        case 0x2bd160u: goto label_2bd160;
        case 0x2bd164u: goto label_2bd164;
        case 0x2bd168u: goto label_2bd168;
        case 0x2bd16cu: goto label_2bd16c;
        case 0x2bd170u: goto label_2bd170;
        case 0x2bd174u: goto label_2bd174;
        case 0x2bd178u: goto label_2bd178;
        case 0x2bd17cu: goto label_2bd17c;
        default: break;
    }

    ctx->pc = 0x2bcf88u;

label_2bcf88:
    // 0x2bcf88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bcf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2bcf8c:
    // 0x2bcf8c: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2bcf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2bcf90:
    // 0x2bcf90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bcf94:
    // 0x2bcf94: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2bcf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2bcf98:
    // 0x2bcf98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bcf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bcf9c:
    // 0x2bcf9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bcf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bcfa0:
    // 0x2bcfa0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2bcfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2bcfa4:
    // 0x2bcfa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bcfa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bcfa8:
    // 0x2bcfa8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2bcfa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2bcfac:
    // 0x2bcfac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2bcfacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcfb0:
    // 0x2bcfb0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2bcfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2bcfb4:
    // 0x2bcfb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bcfb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2bcfb8:
    // 0x2bcfb8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2bcfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2bcfbc:
    // 0x2bcfbc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bcfbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bcfc0:
    // 0x2bcfc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bcfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bcfc4:
    // 0x2bcfc4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2bcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bcfc8:
    // 0x2bcfc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2bcfcc:
    if (ctx->pc == 0x2BCFCCu) {
        ctx->pc = 0x2BCFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFC8u;
        // 0x2bcfcc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFD0u;
        goto label_2bcfd0;
    }
    ctx->pc = 0x2BCFC8u;
    {
        const bool branch_taken_0x2bcfc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFC8u;
        // 0x2bcfcc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfc8) {
            ctx->pc = 0x2BCFD4u;
            goto label_2bcfd4;
        }
    }
    ctx->pc = 0x2BCFD0u;
label_2bcfd0:
    // 0x2bcfd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2bcfd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcfd4:
    // 0x2bcfd4: 0x90420265  lbu         $v0, 0x265($v0)
    ctx->pc = 0x2bcfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 613)));
label_2bcfd8:
    // 0x2bcfd8: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_2bcfdc:
    if (ctx->pc == 0x2BCFDCu) {
        ctx->pc = 0x2BCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFD8u;
        // 0x2bcfdc: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFE0u;
        goto label_2bcfe0;
    }
    ctx->pc = 0x2BCFD8u;
    {
        const bool branch_taken_0x2bcfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFD8u;
        // 0x2bcfdc: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfd8) {
            ctx->pc = 0x2BD154u;
            goto label_2bd154;
        }
    }
    ctx->pc = 0x2BCFE0u;
label_2bcfe0:
    // 0x2bcfe0: 0xc08a08a  jal         func_228228
label_2bcfe4:
    if (ctx->pc == 0x2BCFE4u) {
        ctx->pc = 0x2BCFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFE0u;
        // 0x2bcfe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFE8u;
        goto label_2bcfe8;
    }
    ctx->pc = 0x2BCFE0u;
    SET_GPR_U32(ctx, 31, 0x2BCFE8u);
    ctx->pc = 0x2BCFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFE0u;
    // 0x2bcfe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BCFE0u, 0x2BCFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFE8u;
label_2bcfe8:
    // 0x2bcfe8: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_2bcfec:
    if (ctx->pc == 0x2BCFECu) {
        ctx->pc = 0x2BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFE8u;
        // 0x2bcfec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFF0u;
        goto label_2bcff0;
    }
    ctx->pc = 0x2BCFE8u;
    {
        const bool branch_taken_0x2bcfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFE8u;
        // 0x2bcfec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfe8) {
            ctx->pc = 0x2BD158u;
            goto label_2bd158;
        }
    }
    ctx->pc = 0x2BCFF0u;
label_2bcff0:
    // 0x2bcff0: 0xc089bfc  jal         func_226FF0
label_2bcff4:
    if (ctx->pc == 0x2BCFF4u) {
        ctx->pc = 0x2BCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFF0u;
        // 0x2bcff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFF8u;
        goto label_2bcff8;
    }
    ctx->pc = 0x2BCFF0u;
    SET_GPR_U32(ctx, 31, 0x2BCFF8u);
    ctx->pc = 0x2BCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFF0u;
    // 0x2bcff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2BCFF0u, 0x2BCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFF8u;
label_2bcff8:
    // 0x2bcff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bcffc:
    if (ctx->pc == 0x2BCFFCu) {
        ctx->pc = 0x2BD000u;
        goto label_2bd000;
    }
    ctx->pc = 0x2BCFF8u;
    {
        const bool branch_taken_0x2bcff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcff8) {
            ctx->pc = 0x2BD008u;
            goto label_2bd008;
        }
    }
    ctx->pc = 0x2BD000u;
label_2bd000:
    // 0x2bd000: 0x16000055  bnez        $s0, . + 4 + (0x55 << 2)
label_2bd004:
    if (ctx->pc == 0x2BD004u) {
        ctx->pc = 0x2BD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD000u;
        // 0x2bd004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD008u;
        goto label_2bd008;
    }
    ctx->pc = 0x2BD000u;
    {
        const bool branch_taken_0x2bd000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD000u;
        // 0x2bd004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd000) {
            ctx->pc = 0x2BD158u;
            goto label_2bd158;
        }
    }
    ctx->pc = 0x2BD008u;
label_2bd008:
    // 0x2bd008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd00c:
    // 0x2bd00c: 0x0  nop
    ctx->pc = 0x2bd00cu;
    // NOP
label_2bd010:
    // 0x2bd010: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bd010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bd014:
    // 0x2bd014: 0x0  nop
    ctx->pc = 0x2bd014u;
    // NOP
label_2bd018:
    // 0x2bd018: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2bd01c:
    if (ctx->pc == 0x2BD01Cu) {
        ctx->pc = 0x2BD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD018u;
        // 0x2bd01c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD020u;
        goto label_2bd020;
    }
    ctx->pc = 0x2BD018u;
    {
        const bool branch_taken_0x2bd018 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD018u;
        // 0x2bd01c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd018) {
            ctx->pc = 0x2BD040u;
            goto label_2bd040;
        }
    }
    ctx->pc = 0x2BD020u;
label_2bd020:
    // 0x2bd020: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2bd020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bd024:
    // 0x2bd024: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2bd028:
    if (ctx->pc == 0x2BD028u) {
        ctx->pc = 0x2BD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD024u;
        // 0x2bd028: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD02Cu;
        goto label_2bd02c;
    }
    ctx->pc = 0x2BD024u;
    {
        const bool branch_taken_0x2bd024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd024) {
            ctx->pc = 0x2BD028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD024u;
            // 0x2bd028: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD02Cu;
            goto label_2bd02c;
        }
    }
    ctx->pc = 0x2BD02Cu;
label_2bd02c:
    // 0x2bd02c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2bd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2bd030:
    // 0x2bd030: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd030u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2bd034:
    // 0x2bd034: 0x2010  mfhi        $a0
    ctx->pc = 0x2bd034u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2bd038:
    // 0x2bd038: 0x14800047  bnez        $a0, . + 4 + (0x47 << 2)
label_2bd03c:
    if (ctx->pc == 0x2BD03Cu) {
        ctx->pc = 0x2BD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD038u;
        // 0x2bd03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD040u;
        goto label_2bd040;
    }
    ctx->pc = 0x2BD038u;
    {
        const bool branch_taken_0x2bd038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD038u;
        // 0x2bd03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd038) {
            ctx->pc = 0x2BD158u;
            goto label_2bd158;
        }
    }
    ctx->pc = 0x2BD040u;
label_2bd040:
    // 0x2bd040: 0x16910004  bne         $s4, $s1, . + 4 + (0x4 << 2)
label_2bd044:
    if (ctx->pc == 0x2BD044u) {
        ctx->pc = 0x2BD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD040u;
        // 0x2bd044: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD048u;
        goto label_2bd048;
    }
    ctx->pc = 0x2BD040u;
    {
        const bool branch_taken_0x2bd040 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x2BD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD040u;
        // 0x2bd044: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd040) {
            ctx->pc = 0x2BD054u;
            goto label_2bd054;
        }
    }
    ctx->pc = 0x2BD048u;
label_2bd048:
    // 0x2bd048: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2bd048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_2bd04c:
    // 0x2bd04c: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x2bd04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_2bd050:
    // 0x2bd050: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2bd050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2bd054:
    // 0x2bd054: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2bd054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_2bd058:
    // 0x2bd058: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd05c:
    // 0x2bd05c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2bd060:
    if (ctx->pc == 0x2BD060u) {
        ctx->pc = 0x2BD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD05Cu;
        // 0x2bd060: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD064u;
        goto label_2bd064;
    }
    ctx->pc = 0x2BD05Cu;
    {
        const bool branch_taken_0x2bd05c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD05Cu;
        // 0x2bd060: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd05c) {
            ctx->pc = 0x2BD06Cu;
            goto label_2bd06c;
        }
    }
    ctx->pc = 0x2BD064u;
label_2bd064:
    // 0x2bd064: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2bd064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_2bd068:
    // 0x2bd068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd06c:
    // 0x2bd06c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2bd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_2bd070:
    // 0x2bd070: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2bd070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2bd074:
    // 0x2bd074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bd078:
    // 0x2bd078: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2bd078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2bd07c:
    // 0x2bd07c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bd07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd080:
    // 0x2bd080: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bd080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bd084:
    // 0x2bd084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bd084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd088:
    // 0x2bd088: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bd088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd08c:
    // 0x2bd08c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bd08cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd090:
    // 0x2bd090: 0xc0a757c  jal         func_29D5F0
label_2bd094:
    if (ctx->pc == 0x2BD094u) {
        ctx->pc = 0x2BD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD090u;
        // 0x2bd094: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD098u;
        goto label_2bd098;
    }
    ctx->pc = 0x2BD090u;
    SET_GPR_U32(ctx, 31, 0x2BD098u);
    ctx->pc = 0x2BD094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD090u;
    // 0x2bd094: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2BD090u, 0x2BD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD098u;
label_2bd098:
    // 0x2bd098: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2bd098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2bd09c:
    // 0x2bd09c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd0a0:
    // 0x2bd0a0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2bd0a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bd0a4:
    // 0x2bd0a4: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_2bd0a8:
    if (ctx->pc == 0x2BD0A8u) {
        ctx->pc = 0x2BD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0A4u;
        // 0x2bd0a8: 0x2470f2f0  addiu       $s0, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0ACu;
        goto label_2bd0ac;
    }
    ctx->pc = 0x2BD0A4u;
    {
        const bool branch_taken_0x2bd0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0A4u;
        // 0x2bd0a8: 0x2470f2f0  addiu       $s0, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0a4) {
            ctx->pc = 0x2BD150u;
            goto label_2bd150;
        }
    }
    ctx->pc = 0x2BD0ACu;
label_2bd0ac:
    // 0x2bd0ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bd0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bd0b0:
    // 0x2bd0b0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2bd0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2bd0b4:
    // 0x2bd0b4: 0x8c645704  lw          $a0, 0x5704($v1)
    ctx->pc = 0x2bd0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22276)));
label_2bd0b8:
    // 0x2bd0b8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_2bd0bc:
    if (ctx->pc == 0x2BD0BCu) {
        ctx->pc = 0x2BD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0B8u;
        // 0x2bd0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0C0u;
        goto label_2bd0c0;
    }
    ctx->pc = 0x2BD0B8u;
    {
        const bool branch_taken_0x2bd0b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0B8u;
        // 0x2bd0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0b8) {
            ctx->pc = 0x2BD0E0u;
            goto label_2bd0e0;
        }
    }
    ctx->pc = 0x2BD0C0u;
label_2bd0c0:
    // 0x2bd0c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bd0c4:
    // 0x2bd0c4: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x2bd0c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2bd0c8:
    // 0x2bd0c8: 0xc0e44cc  jal         func_391330
label_2bd0cc:
    if (ctx->pc == 0x2BD0CCu) {
        ctx->pc = 0x2BD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0C8u;
        // 0x2bd0cc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0D0u;
        goto label_2bd0d0;
    }
    ctx->pc = 0x2BD0C8u;
    SET_GPR_U32(ctx, 31, 0x2BD0D0u);
    ctx->pc = 0x2BD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0C8u;
    // 0x2bd0cc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2BD0C8u, 0x2BD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0D0u;
label_2bd0d0:
    // 0x2bd0d0: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x2bd0d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_2bd0d4:
    // 0x2bd0d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bd0d8:
    // 0x2bd0d8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_2bd0dc:
    if (ctx->pc == 0x2BD0DCu) {
        ctx->pc = 0x2BD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0D8u;
        // 0x2bd0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0E0u;
        goto label_2bd0e0;
    }
    ctx->pc = 0x2BD0D8u;
    {
        const bool branch_taken_0x2bd0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0D8u;
        // 0x2bd0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0d8) {
            ctx->pc = 0x2BD150u;
            goto label_2bd150;
        }
    }
    ctx->pc = 0x2BD0E0u;
label_2bd0e0:
    // 0x2bd0e0: 0xc0e5452  jal         func_395148
label_2bd0e4:
    if (ctx->pc == 0x2BD0E4u) {
        ctx->pc = 0x2BD0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0E0u;
        // 0x2bd0e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0E8u;
        goto label_2bd0e8;
    }
    ctx->pc = 0x2BD0E0u;
    SET_GPR_U32(ctx, 31, 0x2BD0E8u);
    ctx->pc = 0x2BD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0E0u;
    // 0x2bd0e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395148u, 0x2BD0E0u, 0x2BD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0E8u;
label_2bd0e8:
    // 0x2bd0e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2bd0ec:
    if (ctx->pc == 0x2BD0ECu) {
        ctx->pc = 0x2BD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0E8u;
        // 0x2bd0ec: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0F0u;
        goto label_2bd0f0;
    }
    ctx->pc = 0x2BD0E8u;
    {
        const bool branch_taken_0x2bd0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd0e8) {
            ctx->pc = 0x2BD0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD0E8u;
            // 0x2bd0ec: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD100u;
            goto label_2bd100;
        }
    }
    ctx->pc = 0x2BD0F0u;
label_2bd0f0:
    // 0x2bd0f0: 0x2683f2f0  addiu       $v1, $s4, -0xD10
    ctx->pc = 0x2bd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
label_2bd0f4:
    // 0x2bd0f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd0f8:
    // 0x2bd0f8: 0x10000017  b           . + 4 + (0x17 << 2)
label_2bd0fc:
    if (ctx->pc == 0x2BD0FCu) {
        ctx->pc = 0x2BD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0F8u;
        // 0x2bd0fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD100u;
        goto label_2bd100;
    }
    ctx->pc = 0x2BD0F8u;
    {
        const bool branch_taken_0x2bd0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0F8u;
        // 0x2bd0fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0f8) {
            ctx->pc = 0x2BD158u;
            goto label_2bd158;
        }
    }
    ctx->pc = 0x2BD100u;
label_2bd100:
    // 0x2bd100: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2bd100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2bd104:
    // 0x2bd104: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bd104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bd108:
    // 0x2bd108: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bd108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bd10c:
    // 0x2bd10c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bd110:
    // 0x2bd110: 0x40f809  jalr        $v0
label_2bd114:
    if (ctx->pc == 0x2BD114u) {
        ctx->pc = 0x2BD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD110u;
        // 0x2bd114: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD118u;
        goto label_2bd118;
    }
    ctx->pc = 0x2BD110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BD118u);
        ctx->pc = 0x2BD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD110u;
        // 0x2bd114: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD110u, 0x2BD118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BD118u;
label_2bd118:
    // 0x2bd118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bd118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bd11c:
    // 0x2bd11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd120:
    // 0x2bd120: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bd120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bd124:
    // 0x2bd124: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bd124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bd128:
    // 0x2bd128: 0x40f809  jalr        $v0
label_2bd12c:
    if (ctx->pc == 0x2BD12Cu) {
        ctx->pc = 0x2BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD128u;
        // 0x2bd12c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD130u;
        goto label_2bd130;
    }
    ctx->pc = 0x2BD128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BD130u);
        ctx->pc = 0x2BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD128u;
        // 0x2bd12c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD128u, 0x2BD130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BD130u;
label_2bd130:
    // 0x2bd130: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bd130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd134:
    // 0x2bd134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd138:
    // 0x2bd138: 0xc0b71c2  jal         func_2DC708
label_2bd13c:
    if (ctx->pc == 0x2BD13Cu) {
        ctx->pc = 0x2BD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD138u;
        // 0x2bd13c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD140u;
        goto label_2bd140;
    }
    ctx->pc = 0x2BD138u;
    SET_GPR_U32(ctx, 31, 0x2BD140u);
    ctx->pc = 0x2BD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD138u;
    // 0x2bd13c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2BD138u, 0x2BD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD140u;
label_2bd140:
    // 0x2bd140: 0x2683f2f0  addiu       $v1, $s4, -0xD10
    ctx->pc = 0x2bd140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
label_2bd144:
    // 0x2bd144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd148:
    // 0x2bd148: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bd14c:
    if (ctx->pc == 0x2BD14Cu) {
        ctx->pc = 0x2BD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD148u;
        // 0x2bd14c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD150u;
        goto label_2bd150;
    }
    ctx->pc = 0x2BD148u;
    {
        const bool branch_taken_0x2bd148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD148u;
        // 0x2bd14c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd148) {
            ctx->pc = 0x2BD158u;
            goto label_2bd158;
        }
    }
    ctx->pc = 0x2BD150u;
label_2bd150:
    // 0x2bd150: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2bd150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_2bd154:
    // 0x2bd154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd158:
    // 0x2bd158: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2bd158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bd15c:
    // 0x2bd15c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2bd15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bd160:
    // 0x2bd160: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2bd160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bd164:
    // 0x2bd164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bd164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bd168:
    // 0x2bd168: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2bd168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bd16c:
    // 0x2bd16c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd170:
    // 0x2bd170: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2bd170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bd174:
    // 0x2bd174: 0x3e00008  jr          $ra
label_2bd178:
    if (ctx->pc == 0x2BD178u) {
        ctx->pc = 0x2BD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD174u;
        // 0x2bd178: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD17Cu;
        goto label_2bd17c;
    }
    ctx->pc = 0x2BD174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD174u;
        // 0x2bd178: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD17Cu;
label_2bd17c:
    // 0x2bd17c: 0x0  nop
    ctx->pc = 0x2bd17cu;
    // NOP
    ctx->pc = 0x2bd180u;
}
