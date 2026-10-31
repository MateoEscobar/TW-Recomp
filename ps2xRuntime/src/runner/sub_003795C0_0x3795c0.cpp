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

// Function: sub_003795C0
// Address: 0x3795c0 - 0x3796b8
void sub_003795C0_0x3795c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003795C0_0x3795c0");
#endif

    switch (ctx->pc) {
        case 0x3795f0u: goto label_3795f0;
        case 0x3795f8u: goto label_3795f8;
        case 0x37960cu: goto label_37960c;
        case 0x379614u: goto label_379614;
        case 0x37962cu: goto label_37962c;
        case 0x379634u: goto label_379634;
        case 0x379654u: goto label_379654;
        case 0x37965cu: goto label_37965c;
        case 0x379674u: goto label_379674;
        case 0x37967cu: goto label_37967c;
        case 0x379694u: goto label_379694;
        default: break;
    }

    ctx->pc = 0x3795c0u;

    // 0x3795c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3795c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3795c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3795c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3795c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3795c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3795cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3795ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3795d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3795d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3795d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3795d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3795dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3795dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3795e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3795e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795e4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x3795e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3795e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3795E8u;
    SET_GPR_U32(ctx, 31, 0x3795F0u);
    ctx->pc = 0x3795ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795E8u;
    // 0x3795ec: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3795E8u, 0x3795F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795F0u;
label_3795f0:
    // 0x3795f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3795F0u;
    SET_GPR_U32(ctx, 31, 0x3795F8u);
    ctx->pc = 0x3795F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795F0u;
    // 0x3795f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3795F0u, 0x3795F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795F8u;
label_3795f8:
    // 0x3795f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3795f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3795fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379600: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x379600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379604: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379604u;
    SET_GPR_U32(ctx, 31, 0x37960Cu);
    ctx->pc = 0x379608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379604u;
    // 0x379608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379604u, 0x37960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37960Cu;
label_37960c:
    // 0x37960c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37960Cu;
    SET_GPR_U32(ctx, 31, 0x379614u);
    ctx->pc = 0x379610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37960Cu;
    // 0x379610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37960Cu, 0x379614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379614u;
label_379614:
    // 0x379614: 0x3406ff80  ori         $a2, $zero, 0xFF80
    ctx->pc = 0x379614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x379618: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x379618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37961c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37961cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379620: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379624: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379624u;
    SET_GPR_U32(ctx, 31, 0x37962Cu);
    ctx->pc = 0x379628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379624u;
    // 0x379628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379624u, 0x37962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37962Cu;
label_37962c:
    // 0x37962c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37962Cu;
    SET_GPR_U32(ctx, 31, 0x379634u);
    ctx->pc = 0x379630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37962Cu;
    // 0x379630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37962Cu, 0x379634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379634u;
label_379634:
    // 0x379634: 0x3406fdd1  ori         $a2, $zero, 0xFDD1
    ctx->pc = 0x379634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64977);
    // 0x379638: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x379638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x37963c: 0x34c6eb85  ori         $a2, $a2, 0xEB85
    ctx->pc = 0x37963cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60293);
    // 0x379640: 0x637b8  dsll        $a2, $a2, 30
    ctx->pc = 0x379640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 30);
    // 0x379644: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x379644u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x379648: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37964c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37964Cu;
    SET_GPR_U32(ctx, 31, 0x379654u);
    ctx->pc = 0x379650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37964Cu;
    // 0x379650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37964Cu, 0x379654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379654u;
label_379654:
    // 0x379654: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379654u;
    SET_GPR_U32(ctx, 31, 0x37965Cu);
    ctx->pc = 0x379658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379654u;
    // 0x379658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379654u, 0x37965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37965Cu;
label_37965c:
    // 0x37965c: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37965cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x379660: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x379660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x379664: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x379664u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x379668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37966c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37966Cu;
    SET_GPR_U32(ctx, 31, 0x379674u);
    ctx->pc = 0x379670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37966Cu;
    // 0x379670: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37966Cu, 0x379674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379674u;
label_379674:
    // 0x379674: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379674u;
    SET_GPR_U32(ctx, 31, 0x37967Cu);
    ctx->pc = 0x379678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379674u;
    // 0x379678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379674u, 0x37967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37967Cu;
label_37967c:
    // 0x37967c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x379680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379684: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x379684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x379688: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x379688u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37968c: 0xc0e6f0a  jal         func_39BC28
    ctx->pc = 0x37968Cu;
    SET_GPR_U32(ctx, 31, 0x379694u);
    ctx->pc = 0x379690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37968Cu;
    // 0x379690: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC28u, 0x37968Cu, 0x379694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379694u;
label_379694:
    // 0x379694: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37969c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37969cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3796a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3796a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3796a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3796a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3796a8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3796a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3796ac: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3796acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3796b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3796B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3796B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796B0u;
        // 0x3796b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3796B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3796B8u;
}
