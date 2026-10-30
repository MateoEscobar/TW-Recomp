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

// Function: sub_003771C0
// Address: 0x3771c0 - 0x377338
void sub_003771C0_0x3771c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003771C0_0x3771c0");
#endif

    switch (ctx->pc) {
        case 0x3771f8u: goto label_3771f8;
        case 0x377200u: goto label_377200;
        case 0x377218u: goto label_377218;
        case 0x377220u: goto label_377220;
        case 0x377238u: goto label_377238;
        case 0x377240u: goto label_377240;
        case 0x377258u: goto label_377258;
        case 0x377260u: goto label_377260;
        case 0x377278u: goto label_377278;
        case 0x377280u: goto label_377280;
        case 0x377298u: goto label_377298;
        case 0x3772a0u: goto label_3772a0;
        case 0x3772c0u: goto label_3772c0;
        case 0x3772c8u: goto label_3772c8;
        case 0x3772e0u: goto label_3772e0;
        case 0x377304u: goto label_377304;
        default: break;
    }

    ctx->pc = 0x3771c0u;

    // 0x3771c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3771c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3771c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3771c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3771c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3771c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3771cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3771ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3771d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3771d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3771d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3771d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3771d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3771d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3771dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3771dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3771e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3771e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3771e4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3771e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3771e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3771e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3771ec: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3771ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3771f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3771F0u;
    SET_GPR_U32(ctx, 31, 0x3771F8u);
    ctx->pc = 0x3771F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3771F0u;
    // 0x3771f4: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3771F0u, 0x3771F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3771F8u;
label_3771f8:
    // 0x3771f8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3771F8u;
    SET_GPR_U32(ctx, 31, 0x377200u);
    ctx->pc = 0x3771FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3771F8u;
    // 0x3771fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3771F8u, 0x377200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377200u;
label_377200:
    // 0x377200: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x377200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x377204: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x377204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x377208: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x377208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37720c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377210: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377210u;
    SET_GPR_U32(ctx, 31, 0x377218u);
    ctx->pc = 0x377214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377210u;
    // 0x377214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377210u, 0x377218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377218u;
label_377218:
    // 0x377218: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377218u;
    SET_GPR_U32(ctx, 31, 0x377220u);
    ctx->pc = 0x37721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377218u;
    // 0x37721c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377218u, 0x377220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377220u;
label_377220:
    // 0x377220: 0x34068030  ori         $a2, $zero, 0x8030
    ctx->pc = 0x377220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x377224: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377228: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x377228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37722c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377230: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377230u;
    SET_GPR_U32(ctx, 31, 0x377238u);
    ctx->pc = 0x377234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377230u;
    // 0x377234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377230u, 0x377238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377238u;
label_377238:
    // 0x377238: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377238u;
    SET_GPR_U32(ctx, 31, 0x377240u);
    ctx->pc = 0x37723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377238u;
    // 0x37723c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377238u, 0x377240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377240u;
label_377240:
    // 0x377240: 0x34068068  ori         $a2, $zero, 0x8068
    ctx->pc = 0x377240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32872);
    // 0x377244: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377248: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x377248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37724c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377250: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377250u;
    SET_GPR_U32(ctx, 31, 0x377258u);
    ctx->pc = 0x377254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377250u;
    // 0x377254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377250u, 0x377258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377258u;
label_377258:
    // 0x377258: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x377258u;
    SET_GPR_U32(ctx, 31, 0x377260u);
    ctx->pc = 0x37725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377258u;
    // 0x37725c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x377258u, 0x377260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377260u;
label_377260:
    // 0x377260: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x377260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x377264: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377268: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x377268u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37726c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x377270: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377270u;
    SET_GPR_U32(ctx, 31, 0x377278u);
    ctx->pc = 0x377274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377270u;
    // 0x377274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377270u, 0x377278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377278u;
label_377278:
    // 0x377278: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x377278u;
    SET_GPR_U32(ctx, 31, 0x377280u);
    ctx->pc = 0x37727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377278u;
    // 0x37727c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x377278u, 0x377280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377280u;
label_377280:
    // 0x377280: 0x340680b2  ori         $a2, $zero, 0x80B2
    ctx->pc = 0x377280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x377284: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x377284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x377288: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x377288u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37728c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x377290: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377290u;
    SET_GPR_U32(ctx, 31, 0x377298u);
    ctx->pc = 0x377294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377290u;
    // 0x377294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377290u, 0x377298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377298u;
label_377298:
    // 0x377298: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377298u;
    SET_GPR_U32(ctx, 31, 0x3772A0u);
    ctx->pc = 0x37729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377298u;
    // 0x37729c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377298u, 0x3772A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772A0u;
label_3772a0:
    // 0x3772a0: 0x340680fe  ori         $a2, $zero, 0x80FE
    ctx->pc = 0x3772a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33022);
    // 0x3772a4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3772a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3772a8: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x3772a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x3772ac: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x3772acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x3772b0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3772b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3772b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3772b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3772b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3772B8u;
    SET_GPR_U32(ctx, 31, 0x3772C0u);
    ctx->pc = 0x3772BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772B8u;
    // 0x3772bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3772B8u, 0x3772C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772C0u;
label_3772c0:
    // 0x3772c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3772C0u;
    SET_GPR_U32(ctx, 31, 0x3772C8u);
    ctx->pc = 0x3772C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772C0u;
    // 0x3772c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3772C0u, 0x3772C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772C8u;
label_3772c8:
    // 0x3772c8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3772c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3772cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3772ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772d0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3772d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3772d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3772d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3772d8: 0xc102488  jal         func_409220
    ctx->pc = 0x3772D8u;
    SET_GPR_U32(ctx, 31, 0x3772E0u);
    ctx->pc = 0x3772DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772D8u;
    // 0x3772dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3772D8u, 0x3772E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772E0u;
label_3772e0:
    // 0x3772e0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3772e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3772e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3772e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3772ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3772f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3772f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3772f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3772f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3772f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772fc: 0xc0c30aa  jal         func_30C2A8
    ctx->pc = 0x3772FCu;
    SET_GPR_U32(ctx, 31, 0x377304u);
    ctx->pc = 0x377300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772FCu;
    // 0x377300: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C2A8u, 0x3772FCu, 0x377304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377304u;
label_377304:
    // 0x377304: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x377304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37730c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37730cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377310: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x377310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377318: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x377318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37731c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x37731cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377324: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x377324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x377328: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x377328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37732c: 0x3e00008  jr          $ra
    ctx->pc = 0x37732Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37732Cu;
        // 0x377330: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37732Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377334u;
    // 0x377334: 0x0  nop
    ctx->pc = 0x377334u;
    // NOP
    ctx->pc = 0x377338u;
}
