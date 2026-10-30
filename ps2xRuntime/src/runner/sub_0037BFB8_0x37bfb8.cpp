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

// Function: sub_0037BFB8
// Address: 0x37bfb8 - 0x37c348
void sub_0037BFB8_0x37bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BFB8_0x37bfb8");
#endif

    switch (ctx->pc) {
        case 0x37c00cu: goto label_37c00c;
        case 0x37c014u: goto label_37c014;
        case 0x37c028u: goto label_37c028;
        case 0x37c030u: goto label_37c030;
        case 0x37c044u: goto label_37c044;
        case 0x37c04cu: goto label_37c04c;
        case 0x37c060u: goto label_37c060;
        case 0x37c068u: goto label_37c068;
        case 0x37c07cu: goto label_37c07c;
        case 0x37c084u: goto label_37c084;
        case 0x37c098u: goto label_37c098;
        case 0x37c0a0u: goto label_37c0a0;
        case 0x37c0b4u: goto label_37c0b4;
        case 0x37c0bcu: goto label_37c0bc;
        case 0x37c0d0u: goto label_37c0d0;
        case 0x37c0d8u: goto label_37c0d8;
        case 0x37c0ecu: goto label_37c0ec;
        case 0x37c0f4u: goto label_37c0f4;
        case 0x37c108u: goto label_37c108;
        case 0x37c110u: goto label_37c110;
        case 0x37c124u: goto label_37c124;
        case 0x37c12cu: goto label_37c12c;
        case 0x37c148u: goto label_37c148;
        case 0x37c160u: goto label_37c160;
        case 0x37c168u: goto label_37c168;
        case 0x37c180u: goto label_37c180;
        case 0x37c198u: goto label_37c198;
        case 0x37c1a0u: goto label_37c1a0;
        case 0x37c1b8u: goto label_37c1b8;
        case 0x37c1d0u: goto label_37c1d0;
        case 0x37c1d8u: goto label_37c1d8;
        case 0x37c224u: goto label_37c224;
        case 0x37c230u: goto label_37c230;
        case 0x37c248u: goto label_37c248;
        case 0x37c254u: goto label_37c254;
        case 0x37c260u: goto label_37c260;
        case 0x37c270u: goto label_37c270;
        case 0x37c284u: goto label_37c284;
        case 0x37c298u: goto label_37c298;
        case 0x37c2a8u: goto label_37c2a8;
        case 0x37c2bcu: goto label_37c2bc;
        case 0x37c2d0u: goto label_37c2d0;
        case 0x37c2e0u: goto label_37c2e0;
        case 0x37c2f4u: goto label_37c2f4;
        default: break;
    }

    ctx->pc = 0x37bfb8u;

    // 0x37bfb8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x37bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x37bfbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bfc0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x37bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x37bfc4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x37bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x37bfc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37bfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bfcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37bfccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bfd0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x37bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x37bfd4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x37bfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x37bfd8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x37bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x37bfdc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x37bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x37bfe0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x37bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x37bfe4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37bfe8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x37bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x37bfec: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x37bfecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x37bff0: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x37bff0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x37bff4: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x37bff4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x37bff8: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x37bff8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x37bffc: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x37bffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x37c000: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x37c004: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C004u;
    SET_GPR_U32(ctx, 31, 0x37C00Cu);
    ctx->pc = 0x37C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C004u;
    // 0x37c008: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C004u, 0x37C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C00Cu;
label_37c00c:
    // 0x37c00c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C00Cu;
    SET_GPR_U32(ctx, 31, 0x37C014u);
    ctx->pc = 0x37C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C00Cu;
    // 0x37c010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C00Cu, 0x37C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C014u;
label_37c014:
    // 0x37c014: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x37c014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x37c018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c01c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c020: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C020u;
    SET_GPR_U32(ctx, 31, 0x37C028u);
    ctx->pc = 0x37C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C020u;
    // 0x37c024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C020u, 0x37C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C028u;
label_37c028:
    // 0x37c028: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C028u;
    SET_GPR_U32(ctx, 31, 0x37C030u);
    ctx->pc = 0x37C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C028u;
    // 0x37c02c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C028u, 0x37C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C030u;
label_37c030:
    // 0x37c030: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x37c030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x37c034: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c038: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37c038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37c03c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C03Cu;
    SET_GPR_U32(ctx, 31, 0x37C044u);
    ctx->pc = 0x37C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C03Cu;
    // 0x37c040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C03Cu, 0x37C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C044u;
label_37c044:
    // 0x37c044: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C044u;
    SET_GPR_U32(ctx, 31, 0x37C04Cu);
    ctx->pc = 0x37C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C044u;
    // 0x37c048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C044u, 0x37C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C04Cu;
label_37c04c:
    // 0x37c04c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c050: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x37c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37c054: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x37c054u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x37c058: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C058u;
    SET_GPR_U32(ctx, 31, 0x37C060u);
    ctx->pc = 0x37C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C058u;
    // 0x37c05c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C058u, 0x37C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C060u;
label_37c060:
    // 0x37c060: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C060u;
    SET_GPR_U32(ctx, 31, 0x37C068u);
    ctx->pc = 0x37C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C060u;
    // 0x37c064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C060u, 0x37C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C068u;
label_37c068:
    // 0x37c068: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c06c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x37c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37c070: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x37c070u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x37c074: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C074u;
    SET_GPR_U32(ctx, 31, 0x37C07Cu);
    ctx->pc = 0x37C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C074u;
    // 0x37c078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C074u, 0x37C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C07Cu;
label_37c07c:
    // 0x37c07c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C07Cu;
    SET_GPR_U32(ctx, 31, 0x37C084u);
    ctx->pc = 0x37C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C07Cu;
    // 0x37c080: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C07Cu, 0x37C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C084u;
label_37c084:
    // 0x37c084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c088: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x37c088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37c08c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x37c08cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x37c090: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C090u;
    SET_GPR_U32(ctx, 31, 0x37C098u);
    ctx->pc = 0x37C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C090u;
    // 0x37c094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C090u, 0x37C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C098u;
label_37c098:
    // 0x37c098: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C098u;
    SET_GPR_U32(ctx, 31, 0x37C0A0u);
    ctx->pc = 0x37C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C098u;
    // 0x37c09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C098u, 0x37C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0A0u;
label_37c0a0:
    // 0x37c0a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c0a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37c0a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37c0a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37c0ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C0ACu;
    SET_GPR_U32(ctx, 31, 0x37C0B4u);
    ctx->pc = 0x37C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0ACu;
    // 0x37c0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C0ACu, 0x37C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0B4u;
label_37c0b4:
    // 0x37c0b4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C0B4u;
    SET_GPR_U32(ctx, 31, 0x37C0BCu);
    ctx->pc = 0x37C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0B4u;
    // 0x37c0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C0B4u, 0x37C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0BCu;
label_37c0bc:
    // 0x37c0bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37c0bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37c0c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c0c4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x37c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x37c0c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C0C8u;
    SET_GPR_U32(ctx, 31, 0x37C0D0u);
    ctx->pc = 0x37C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0C8u;
    // 0x37c0cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C0C8u, 0x37C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0D0u;
label_37c0d0:
    // 0x37c0d0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C0D0u;
    SET_GPR_U32(ctx, 31, 0x37C0D8u);
    ctx->pc = 0x37C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0D0u;
    // 0x37c0d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C0D0u, 0x37C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0D8u;
label_37c0d8:
    // 0x37c0d8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x37c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x37c0dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c0e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x37c0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37c0e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C0E4u;
    SET_GPR_U32(ctx, 31, 0x37C0ECu);
    ctx->pc = 0x37C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0E4u;
    // 0x37c0e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C0E4u, 0x37C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0ECu;
label_37c0ec:
    // 0x37c0ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C0ECu;
    SET_GPR_U32(ctx, 31, 0x37C0F4u);
    ctx->pc = 0x37C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0ECu;
    // 0x37c0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C0ECu, 0x37C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0F4u;
label_37c0f4:
    // 0x37c0f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c0f8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x37c0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x37c0fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c100: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C100u;
    SET_GPR_U32(ctx, 31, 0x37C108u);
    ctx->pc = 0x37C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C100u;
    // 0x37c104: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C100u, 0x37C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C108u;
label_37c108:
    // 0x37c108: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C108u;
    SET_GPR_U32(ctx, 31, 0x37C110u);
    ctx->pc = 0x37C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C108u;
    // 0x37c10c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C108u, 0x37C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C110u;
label_37c110:
    // 0x37c110: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c118: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x37c118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37c11c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C11Cu;
    SET_GPR_U32(ctx, 31, 0x37C124u);
    ctx->pc = 0x37C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C11Cu;
    // 0x37c120: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C11Cu, 0x37C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C124u;
label_37c124:
    // 0x37c124: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C124u;
    SET_GPR_U32(ctx, 31, 0x37C12Cu);
    ctx->pc = 0x37C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C124u;
    // 0x37c128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C124u, 0x37C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C12Cu;
label_37c12c:
    // 0x37c12c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x37c12cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37c130: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x37c130u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c134: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x37c134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37c138: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x37c138u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37c13c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c140: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x37c140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c144: 0x0  nop
    ctx->pc = 0x37c144u;
    // NOP
label_37c148:
    // 0x37c148: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37c148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37c14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c150: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c154: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c158: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37C158u;
    SET_GPR_U32(ctx, 31, 0x37C160u);
    ctx->pc = 0x37C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C158u;
    // 0x37c15c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37C158u, 0x37C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C160u;
label_37c160:
    // 0x37c160: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C160u;
    SET_GPR_U32(ctx, 31, 0x37C168u);
    ctx->pc = 0x37C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C160u;
    // 0x37c164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C160u, 0x37C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C168u;
label_37c168:
    // 0x37c168: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37c168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37c16c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37c16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37c170: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37C170u;
    {
        const bool branch_taken_0x37c170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C170u;
        // 0x37c174: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c170) {
            ctx->pc = 0x37C148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c148;
        }
    }
    ctx->pc = 0x37C178u;
    // 0x37c178: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c17c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x37c17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37c180:
    // 0x37c180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37c180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37c184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c188: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37c188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37c18c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c190: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37C190u;
    SET_GPR_U32(ctx, 31, 0x37C198u);
    ctx->pc = 0x37C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C190u;
    // 0x37c194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37C190u, 0x37C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C198u;
label_37c198:
    // 0x37c198: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C198u;
    SET_GPR_U32(ctx, 31, 0x37C1A0u);
    ctx->pc = 0x37C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C198u;
    // 0x37c19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C198u, 0x37C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C1A0u;
label_37c1a0:
    // 0x37c1a0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37c1a4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37c1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37c1a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37C1A8u;
    {
        const bool branch_taken_0x37c1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1A8u;
        // 0x37c1ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c1a8) {
            ctx->pc = 0x37C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c180;
        }
    }
    ctx->pc = 0x37C1B0u;
    // 0x37c1b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c1b4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x37c1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37c1b8:
    // 0x37c1b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37c1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37c1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c1c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37c1c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c1c8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37C1C8u;
    SET_GPR_U32(ctx, 31, 0x37C1D0u);
    ctx->pc = 0x37C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C1C8u;
    // 0x37c1cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37C1C8u, 0x37C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C1D0u;
label_37c1d0:
    // 0x37c1d0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C1D0u;
    SET_GPR_U32(ctx, 31, 0x37C1D8u);
    ctx->pc = 0x37C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C1D0u;
    // 0x37c1d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C1D0u, 0x37C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C1D8u;
label_37c1d8:
    // 0x37c1d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37c1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37c1dc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37c1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x37c1e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37C1E0u;
    {
        const bool branch_taken_0x37c1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1E0u;
        // 0x37c1e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c1e0) {
            ctx->pc = 0x37C1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c1b8;
        }
    }
    ctx->pc = 0x37C1E8u;
    // 0x37c1e8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x37c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c1ec: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x37c1ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x37c1f0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x37c1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x37c1f4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x37c1f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x37c1f8: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x37c1f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37c1fc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x37c1fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x37c200: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x37c200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x37c204: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x37c204u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x37c208: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x37c208u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x37c20c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x37c20cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c210: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x37c210u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c214: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x37c214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37c218: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x37c218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c21c: 0xc05fbc8  jal         func_17EF20
    ctx->pc = 0x37C21Cu;
    SET_GPR_U32(ctx, 31, 0x37C224u);
    ctx->pc = 0x37C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C21Cu;
    // 0x37c220: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF20u, 0x37C21Cu, 0x37C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C224u;
label_37c224:
    // 0x37c224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37c224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c228: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37C228u;
    SET_GPR_U32(ctx, 31, 0x37C230u);
    ctx->pc = 0x37C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C228u;
    // 0x37c22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37C228u, 0x37C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C230u;
label_37c230:
    // 0x37c230: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37C230u;
    {
        const bool branch_taken_0x37c230 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C230u;
        // 0x37c234: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c230) {
            ctx->pc = 0x37C24Cu;
            goto label_37c24c;
        }
    }
    ctx->pc = 0x37C238u;
    // 0x37c238: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37c238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37c23c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37c23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37c240: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37C240u;
    SET_GPR_U32(ctx, 31, 0x37C248u);
    ctx->pc = 0x37C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C240u;
    // 0x37c244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37C240u, 0x37C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C248u;
label_37c248:
    // 0x37c248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37c248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c24c:
    // 0x37c24c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37C24Cu;
    SET_GPR_U32(ctx, 31, 0x37C254u);
    ctx->pc = 0x37C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C24Cu;
    // 0x37c250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37C24Cu, 0x37C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C254u;
label_37c254:
    // 0x37c254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c258: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37c258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37c25c: 0x0  nop
    ctx->pc = 0x37c25cu;
    // NOP
label_37c260:
    // 0x37c260: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x37c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37c264: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37c264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37c268: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37C268u;
    SET_GPR_U32(ctx, 31, 0x37C270u);
    ctx->pc = 0x37C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C268u;
    // 0x37c26c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37C268u, 0x37C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C270u;
label_37c270:
    // 0x37c270: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37c270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c278: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c27c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37C27Cu;
    SET_GPR_U32(ctx, 31, 0x37C284u);
    ctx->pc = 0x37C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C27Cu;
    // 0x37c280: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37C27Cu, 0x37C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C284u;
label_37c284:
    // 0x37c284: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37c284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37c288: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37C288u;
    {
        const bool branch_taken_0x37c288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C288u;
        // 0x37c28c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c288) {
            ctx->pc = 0x37C260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c260;
        }
    }
    ctx->pc = 0x37C290u;
    // 0x37c290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c294: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37c294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37c298:
    // 0x37c298: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37c29c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37c29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37c2a0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37C2A0u;
    SET_GPR_U32(ctx, 31, 0x37C2A8u);
    ctx->pc = 0x37C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2A0u;
    // 0x37c2a4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37C2A0u, 0x37C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2A8u;
label_37c2a8:
    // 0x37c2a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37c2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37c2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37c2b4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37C2B4u;
    SET_GPR_U32(ctx, 31, 0x37C2BCu);
    ctx->pc = 0x37C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2B4u;
    // 0x37c2b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37C2B4u, 0x37C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2BCu;
label_37c2bc:
    // 0x37c2bc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37c2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37c2c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37C2C0u;
    {
        const bool branch_taken_0x37c2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2C0u;
        // 0x37c2c4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c2c0) {
            ctx->pc = 0x37C298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c298;
        }
    }
    ctx->pc = 0x37C2C8u;
    // 0x37c2c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37c2d0:
    // 0x37c2d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37c2d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37c2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37c2d8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37C2D8u;
    SET_GPR_U32(ctx, 31, 0x37C2E0u);
    ctx->pc = 0x37C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2D8u;
    // 0x37c2dc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37C2D8u, 0x37C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2E0u;
label_37c2e0:
    // 0x37c2e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37c2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37c2ec: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37C2ECu;
    SET_GPR_U32(ctx, 31, 0x37C2F4u);
    ctx->pc = 0x37C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2ECu;
    // 0x37c2f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37C2ECu, 0x37C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2F4u;
label_37c2f4:
    // 0x37c2f4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37c2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x37c2f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37C2F8u;
    {
        const bool branch_taken_0x37c2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2F8u;
        // 0x37c2fc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c2f8) {
            ctx->pc = 0x37C2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c2d0;
        }
    }
    ctx->pc = 0x37C300u;
    // 0x37c300: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x37c300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x37c304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c308: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x37c308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x37c30c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x37c30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37c310: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x37c310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37c314: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x37c314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37c318: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x37c318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37c31c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x37c31cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37c320: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x37c320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37c324: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x37c324u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37c328: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37c328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37c32c: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x37c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x37c330: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x37c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37c334: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x37c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37c338: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x37c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37c33c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x37c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37c340: 0x3e00008  jr          $ra
    ctx->pc = 0x37C340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C340u;
        // 0x37c344: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C348u;
}
