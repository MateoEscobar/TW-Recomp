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

// Function: sub_0035E140
// Address: 0x35e140 - 0x35e258
void sub_0035E140_0x35e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E140_0x35e140");
#endif

    switch (ctx->pc) {
        case 0x35e178u: goto label_35e178;
        case 0x35e180u: goto label_35e180;
        case 0x35e194u: goto label_35e194;
        case 0x35e19cu: goto label_35e19c;
        case 0x35e1b0u: goto label_35e1b0;
        case 0x35e1b8u: goto label_35e1b8;
        case 0x35e1ccu: goto label_35e1cc;
        case 0x35e1d4u: goto label_35e1d4;
        case 0x35e1e8u: goto label_35e1e8;
        case 0x35e1f0u: goto label_35e1f0;
        case 0x35e204u: goto label_35e204;
        case 0x35e20cu: goto label_35e20c;
        case 0x35e228u: goto label_35e228;
        default: break;
    }

    ctx->pc = 0x35e140u;

    // 0x35e140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35e144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e148: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e14c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35e150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35e154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e15c: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x35e15cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x35e160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e164: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x35e164u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35e168: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x35e168u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35e16c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x35e16cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35e170: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E170u;
    SET_GPR_U32(ctx, 31, 0x35E178u);
    ctx->pc = 0x35E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E170u;
    // 0x35e174: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E170u, 0x35E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E178u;
label_35e178:
    // 0x35e178: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E178u;
    SET_GPR_U32(ctx, 31, 0x35E180u);
    ctx->pc = 0x35E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E178u;
    // 0x35e17c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E178u, 0x35E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E180u;
label_35e180:
    // 0x35e180: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x35e180u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x35e184: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e188: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35e188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e18c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E18Cu;
    SET_GPR_U32(ctx, 31, 0x35E194u);
    ctx->pc = 0x35E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E18Cu;
    // 0x35e190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E18Cu, 0x35E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E194u;
label_35e194:
    // 0x35e194: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E194u;
    SET_GPR_U32(ctx, 31, 0x35E19Cu);
    ctx->pc = 0x35E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E194u;
    // 0x35e198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E194u, 0x35E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E19Cu;
label_35e19c:
    // 0x35e19c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x35e19cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x35e1a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e1a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E1A8u;
    SET_GPR_U32(ctx, 31, 0x35E1B0u);
    ctx->pc = 0x35E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1A8u;
    // 0x35e1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E1A8u, 0x35E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1B0u;
label_35e1b0:
    // 0x35e1b0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E1B0u;
    SET_GPR_U32(ctx, 31, 0x35E1B8u);
    ctx->pc = 0x35E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1B0u;
    // 0x35e1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E1B0u, 0x35E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1B8u;
label_35e1b8:
    // 0x35e1b8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x35e1b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x35e1bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35e1c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E1C4u;
    SET_GPR_U32(ctx, 31, 0x35E1CCu);
    ctx->pc = 0x35E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1C4u;
    // 0x35e1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E1C4u, 0x35E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1CCu;
label_35e1cc:
    // 0x35e1cc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E1CCu;
    SET_GPR_U32(ctx, 31, 0x35E1D4u);
    ctx->pc = 0x35E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1CCu;
    // 0x35e1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E1CCu, 0x35E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1D4u;
label_35e1d4:
    // 0x35e1d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x35e1d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x35e1d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35e1e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E1E0u;
    SET_GPR_U32(ctx, 31, 0x35E1E8u);
    ctx->pc = 0x35E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1E0u;
    // 0x35e1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E1E0u, 0x35E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1E8u;
label_35e1e8:
    // 0x35e1e8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E1E8u;
    SET_GPR_U32(ctx, 31, 0x35E1F0u);
    ctx->pc = 0x35E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1E8u;
    // 0x35e1ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E1E8u, 0x35E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1F0u;
label_35e1f0:
    // 0x35e1f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35e1f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35e1f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35e1fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E1FCu;
    SET_GPR_U32(ctx, 31, 0x35E204u);
    ctx->pc = 0x35E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1FCu;
    // 0x35e200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E1FCu, 0x35E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E204u;
label_35e204:
    // 0x35e204: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E204u;
    SET_GPR_U32(ctx, 31, 0x35E20Cu);
    ctx->pc = 0x35E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E204u;
    // 0x35e208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E204u, 0x35E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E20Cu;
label_35e20c:
    // 0x35e20c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x35e20cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x35e210: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x35e210u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x35e214: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x35e214u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x35e218: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x35e218u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x35e21c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x35e21cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x35e220: 0xc08e9e8  jal         func_23A7A0
    ctx->pc = 0x35E220u;
    SET_GPR_U32(ctx, 31, 0x35E228u);
    ctx->pc = 0x35E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E220u;
    // 0x35e224: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7A0u, 0x35E220u, 0x35E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E228u;
label_35e228:
    // 0x35e228: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e22c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e238: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x35e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x35e23c: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x35e23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x35e240: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x35e240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x35e244: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x35e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35e248: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35e24c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E24Cu;
        // 0x35e250: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E254u;
    // 0x35e254: 0x0  nop
    ctx->pc = 0x35e254u;
    // NOP
    ctx->pc = 0x35e258u;
}
