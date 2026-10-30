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

// Function: sub_0039BFB0
// Address: 0x39bfb0 - 0x39c0e0
void sub_0039BFB0_0x39bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BFB0_0x39bfb0");
#endif

    switch (ctx->pc) {
        case 0x39bfb0u: goto label_39bfb0;
        case 0x39bfb4u: goto label_39bfb4;
        case 0x39bfb8u: goto label_39bfb8;
        case 0x39bfbcu: goto label_39bfbc;
        case 0x39bfc0u: goto label_39bfc0;
        case 0x39bfc4u: goto label_39bfc4;
        case 0x39bfc8u: goto label_39bfc8;
        case 0x39bfccu: goto label_39bfcc;
        case 0x39bfd0u: goto label_39bfd0;
        case 0x39bfd4u: goto label_39bfd4;
        case 0x39bfd8u: goto label_39bfd8;
        case 0x39bfdcu: goto label_39bfdc;
        case 0x39bfe0u: goto label_39bfe0;
        case 0x39bfe4u: goto label_39bfe4;
        case 0x39bfe8u: goto label_39bfe8;
        case 0x39bfecu: goto label_39bfec;
        case 0x39bff0u: goto label_39bff0;
        case 0x39bff4u: goto label_39bff4;
        case 0x39bff8u: goto label_39bff8;
        case 0x39bffcu: goto label_39bffc;
        case 0x39c000u: goto label_39c000;
        case 0x39c004u: goto label_39c004;
        case 0x39c008u: goto label_39c008;
        case 0x39c00cu: goto label_39c00c;
        case 0x39c010u: goto label_39c010;
        case 0x39c014u: goto label_39c014;
        case 0x39c018u: goto label_39c018;
        case 0x39c01cu: goto label_39c01c;
        case 0x39c020u: goto label_39c020;
        case 0x39c024u: goto label_39c024;
        case 0x39c028u: goto label_39c028;
        case 0x39c02cu: goto label_39c02c;
        case 0x39c030u: goto label_39c030;
        case 0x39c034u: goto label_39c034;
        case 0x39c038u: goto label_39c038;
        case 0x39c03cu: goto label_39c03c;
        case 0x39c040u: goto label_39c040;
        case 0x39c044u: goto label_39c044;
        case 0x39c048u: goto label_39c048;
        case 0x39c04cu: goto label_39c04c;
        case 0x39c050u: goto label_39c050;
        case 0x39c054u: goto label_39c054;
        case 0x39c058u: goto label_39c058;
        case 0x39c05cu: goto label_39c05c;
        case 0x39c060u: goto label_39c060;
        case 0x39c064u: goto label_39c064;
        case 0x39c068u: goto label_39c068;
        case 0x39c06cu: goto label_39c06c;
        case 0x39c070u: goto label_39c070;
        case 0x39c074u: goto label_39c074;
        case 0x39c078u: goto label_39c078;
        case 0x39c07cu: goto label_39c07c;
        case 0x39c080u: goto label_39c080;
        case 0x39c084u: goto label_39c084;
        case 0x39c088u: goto label_39c088;
        case 0x39c08cu: goto label_39c08c;
        case 0x39c090u: goto label_39c090;
        case 0x39c094u: goto label_39c094;
        case 0x39c098u: goto label_39c098;
        case 0x39c09cu: goto label_39c09c;
        case 0x39c0a0u: goto label_39c0a0;
        case 0x39c0a4u: goto label_39c0a4;
        case 0x39c0a8u: goto label_39c0a8;
        case 0x39c0acu: goto label_39c0ac;
        case 0x39c0b0u: goto label_39c0b0;
        case 0x39c0b4u: goto label_39c0b4;
        case 0x39c0b8u: goto label_39c0b8;
        case 0x39c0bcu: goto label_39c0bc;
        case 0x39c0c0u: goto label_39c0c0;
        case 0x39c0c4u: goto label_39c0c4;
        case 0x39c0c8u: goto label_39c0c8;
        case 0x39c0ccu: goto label_39c0cc;
        case 0x39c0d0u: goto label_39c0d0;
        case 0x39c0d4u: goto label_39c0d4;
        case 0x39c0d8u: goto label_39c0d8;
        case 0x39c0dcu: goto label_39c0dc;
        default: break;
    }

    ctx->pc = 0x39bfb0u;

label_39bfb0:
    // 0x39bfb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_39bfb4:
    // 0x39bfb4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x39bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_39bfb8:
    // 0x39bfb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39bfbc:
    // 0x39bfbc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x39bfbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39bfc0:
    // 0x39bfc0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x39bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_39bfc4:
    // 0x39bfc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39bfc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39bfc8:
    // 0x39bfc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x39bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_39bfcc:
    // 0x39bfcc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39bfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39bfd0:
    // 0x39bfd0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x39bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_39bfd4:
    // 0x39bfd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39bfd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39bfd8:
    // 0x39bfd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39bfdc:
    // 0x39bfdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39bfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39bfe0:
    // 0x39bfe0: 0xc0e4060  jal         func_390180
label_39bfe4:
    if (ctx->pc == 0x39BFE4u) {
        ctx->pc = 0x39BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFE0u;
        // 0x39bfe4: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BFE8u;
        goto label_39bfe8;
    }
    ctx->pc = 0x39BFE0u;
    SET_GPR_U32(ctx, 31, 0x39BFE8u);
    ctx->pc = 0x39BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFE0u;
    // 0x39bfe4: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39BFE0u, 0x39BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BFE8u;
label_39bfe8:
    // 0x39bfe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39bfec:
    if (ctx->pc == 0x39BFECu) {
        ctx->pc = 0x39BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFE8u;
        // 0x39bfec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BFF0u;
        goto label_39bff0;
    }
    ctx->pc = 0x39BFE8u;
    {
        const bool branch_taken_0x39bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFE8u;
        // 0x39bfec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfe8) {
            ctx->pc = 0x39BFFCu;
            goto label_39bffc;
        }
    }
    ctx->pc = 0x39BFF0u;
label_39bff0:
    // 0x39bff0: 0xc0e4060  jal         func_390180
label_39bff4:
    if (ctx->pc == 0x39BFF4u) {
        ctx->pc = 0x39BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFF0u;
        // 0x39bff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BFF8u;
        goto label_39bff8;
    }
    ctx->pc = 0x39BFF0u;
    SET_GPR_U32(ctx, 31, 0x39BFF8u);
    ctx->pc = 0x39BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFF0u;
    // 0x39bff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39BFF0u, 0x39BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BFF8u;
label_39bff8:
    // 0x39bff8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39bff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39bffc:
    // 0x39bffc: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x39bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39c000:
    // 0x39c000: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x39c000u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_39c004:
    // 0x39c004: 0xc607000c  lwc1        $f7, 0xC($s0)
    ctx->pc = 0x39c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_39c008:
    // 0x39c008: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x39c008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c00c:
    // 0x39c00c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x39c00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39c010:
    // 0x39c010: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x39c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39c014:
    // 0x39c014: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x39c014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39c018:
    // 0x39c018: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x39c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39c01c:
    // 0x39c01c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39c01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39c020:
    // 0x39c020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39c020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39c024:
    // 0x39c024: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39c024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_39c028:
    // 0x39c028: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x39c028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39c02c:
    // 0x39c02c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x39c02cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_39c030:
    // 0x39c030: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x39c030u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_39c034:
    // 0x39c034: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x39c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_39c038:
    // 0x39c038: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x39c038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_39c03c:
    // 0x39c03c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x39c03cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_39c040:
    // 0x39c040: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x39c040u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_39c044:
    // 0x39c044: 0xc0e8b48  jal         func_3A2D20
label_39c048:
    if (ctx->pc == 0x39C048u) {
        ctx->pc = 0x39C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C044u;
        // 0x39c048: 0xe7a7001c  swc1        $f7, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C04Cu;
        goto label_39c04c;
    }
    ctx->pc = 0x39C044u;
    SET_GPR_U32(ctx, 31, 0x39C04Cu);
    ctx->pc = 0x39C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C044u;
    // 0x39c048: 0xe7a7001c  swc1        $f7, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39C044u, 0x39C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C04Cu;
label_39c04c:
    // 0x39c04c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_39c050:
    // 0x39c050: 0xc0e8b58  jal         func_3A2D60
label_39c054:
    if (ctx->pc == 0x39C054u) {
        ctx->pc = 0x39C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C050u;
        // 0x39c054: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C058u;
        goto label_39c058;
    }
    ctx->pc = 0x39C050u;
    SET_GPR_U32(ctx, 31, 0x39C058u);
    ctx->pc = 0x39C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C050u;
    // 0x39c054: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39C050u, 0x39C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C058u;
label_39c058:
    // 0x39c058: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_39c05c:
    // 0x39c05c: 0xc0e8b58  jal         func_3A2D60
label_39c060:
    if (ctx->pc == 0x39C060u) {
        ctx->pc = 0x39C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C05Cu;
        // 0x39c060: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C064u;
        goto label_39c064;
    }
    ctx->pc = 0x39C05Cu;
    SET_GPR_U32(ctx, 31, 0x39C064u);
    ctx->pc = 0x39C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C05Cu;
    // 0x39c060: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39C05Cu, 0x39C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C064u;
label_39c064:
    // 0x39c064: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_39c068:
    // 0x39c068: 0xc0e8b70  jal         func_3A2DC0
label_39c06c:
    if (ctx->pc == 0x39C06Cu) {
        ctx->pc = 0x39C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C068u;
        // 0x39c06c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C070u;
        goto label_39c070;
    }
    ctx->pc = 0x39C068u;
    SET_GPR_U32(ctx, 31, 0x39C070u);
    ctx->pc = 0x39C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C068u;
    // 0x39c06c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x39C068u, 0x39C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C070u;
label_39c070:
    // 0x39c070: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39c070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_39c074:
    // 0x39c074: 0xc0e8b90  jal         func_3A2E40
label_39c078:
    if (ctx->pc == 0x39C078u) {
        ctx->pc = 0x39C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C074u;
        // 0x39c078: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C07Cu;
        goto label_39c07c;
    }
    ctx->pc = 0x39C074u;
    SET_GPR_U32(ctx, 31, 0x39C07Cu);
    ctx->pc = 0x39C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C074u;
    // 0x39c078: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x39C074u, 0x39C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C07Cu;
label_39c07c:
    // 0x39c07c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x39c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_39c080:
    // 0x39c080: 0xc0e8b50  jal         func_3A2D40
label_39c084:
    if (ctx->pc == 0x39C084u) {
        ctx->pc = 0x39C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C080u;
        // 0x39c084: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C088u;
        goto label_39c088;
    }
    ctx->pc = 0x39C080u;
    SET_GPR_U32(ctx, 31, 0x39C088u);
    ctx->pc = 0x39C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C080u;
    // 0x39c084: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39C080u, 0x39C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C088u;
label_39c088:
    // 0x39c088: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c08c:
    // 0x39c08c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39c08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39c090:
    // 0x39c090: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39c094:
    // 0x39c094: 0x40f809  jalr        $v0
label_39c098:
    if (ctx->pc == 0x39C098u) {
        ctx->pc = 0x39C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C094u;
        // 0x39c098: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C09Cu;
        goto label_39c09c;
    }
    ctx->pc = 0x39C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C09Cu);
        ctx->pc = 0x39C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C094u;
        // 0x39c098: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C094u, 0x39C09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C09Cu;
label_39c09c:
    // 0x39c09c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x39c09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39c0a0:
    // 0x39c0a0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x39c0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39c0a4:
    // 0x39c0a4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x39c0a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c0a8:
    // 0x39c0a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x39c0a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c0ac:
    // 0x39c0ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39c0acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c0b0:
    // 0x39c0b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39c0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39c0b4:
    // 0x39c0b4: 0x3e00008  jr          $ra
label_39c0b8:
    if (ctx->pc == 0x39C0B8u) {
        ctx->pc = 0x39C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0B4u;
        // 0x39c0b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C0BCu;
        goto label_39c0bc;
    }
    ctx->pc = 0x39C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0B4u;
        // 0x39c0b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C0BCu;
label_39c0bc:
    // 0x39c0bc: 0x0  nop
    ctx->pc = 0x39c0bcu;
    // NOP
label_39c0c0:
    // 0x39c0c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x39c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39c0c4:
    // 0x39c0c4: 0x0  nop
    ctx->pc = 0x39c0c4u;
    // NOP
label_39c0c8:
    // 0x39c0c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x39c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39c0cc:
    // 0x39c0cc: 0x0  nop
    ctx->pc = 0x39c0ccu;
    // NOP
label_39c0d0:
    // 0x39c0d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39c0d4:
    // 0x39c0d4: 0x0  nop
    ctx->pc = 0x39c0d4u;
    // NOP
label_39c0d8:
    // 0x39c0d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x39c0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39c0dc:
    // 0x39c0dc: 0x0  nop
    ctx->pc = 0x39c0dcu;
    // NOP
    ctx->pc = 0x39c0e0u;
}
