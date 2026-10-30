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

// Function: sub_00376608
// Address: 0x376608 - 0x376718
void sub_00376608_0x376608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376608_0x376608");
#endif

    switch (ctx->pc) {
        case 0x37663cu: goto label_37663c;
        case 0x376644u: goto label_376644;
        case 0x37665cu: goto label_37665c;
        case 0x376664u: goto label_376664;
        case 0x376678u: goto label_376678;
        case 0x37668cu: goto label_37668c;
        case 0x3766a0u: goto label_3766a0;
        case 0x3766b4u: goto label_3766b4;
        case 0x3766c8u: goto label_3766c8;
        case 0x3766e8u: goto label_3766e8;
        default: break;
    }

    ctx->pc = 0x376608u;

    // 0x376608: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x376608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37660c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37660cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376610: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x376610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x376614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37661c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x37661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x376620: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x376620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x376624: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x376624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x376628: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x376628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x37662c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x37662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x376630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376634: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376634u;
    SET_GPR_U32(ctx, 31, 0x37663Cu);
    ctx->pc = 0x376638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376634u;
    // 0x376638: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376634u, 0x37663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37663Cu;
label_37663c:
    // 0x37663c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37663Cu;
    SET_GPR_U32(ctx, 31, 0x376644u);
    ctx->pc = 0x376640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37663Cu;
    // 0x376640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37663Cu, 0x376644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376644u;
label_376644:
    // 0x376644: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x376644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x376648: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x37664c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37664cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376654: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376654u;
    SET_GPR_U32(ctx, 31, 0x37665Cu);
    ctx->pc = 0x376658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376654u;
    // 0x376658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376654u, 0x37665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37665Cu;
label_37665c:
    // 0x37665c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37665Cu;
    SET_GPR_U32(ctx, 31, 0x376664u);
    ctx->pc = 0x376660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37665Cu;
    // 0x376660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37665Cu, 0x376664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376664u;
label_376664:
    // 0x376664: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x376664u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x376668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37666c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376670: 0xc102488  jal         func_409220
    ctx->pc = 0x376670u;
    SET_GPR_U32(ctx, 31, 0x376678u);
    ctx->pc = 0x376674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376670u;
    // 0x376674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376670u, 0x376678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376678u;
label_376678:
    // 0x376678: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x376678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37667c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376680: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x376680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376684: 0xc102488  jal         func_409220
    ctx->pc = 0x376684u;
    SET_GPR_U32(ctx, 31, 0x37668Cu);
    ctx->pc = 0x376688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376684u;
    // 0x376688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376684u, 0x37668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37668Cu;
label_37668c:
    // 0x37668c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37668cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376694: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x376694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x376698: 0xc102488  jal         func_409220
    ctx->pc = 0x376698u;
    SET_GPR_U32(ctx, 31, 0x3766A0u);
    ctx->pc = 0x37669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376698u;
    // 0x37669c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376698u, 0x3766A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766A0u;
label_3766a0:
    // 0x3766a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3766a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3766a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3766a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3766ac: 0xc102488  jal         func_409220
    ctx->pc = 0x3766ACu;
    SET_GPR_U32(ctx, 31, 0x3766B4u);
    ctx->pc = 0x3766B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766ACu;
    // 0x3766b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3766ACu, 0x3766B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766B4u;
label_3766b4:
    // 0x3766b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3766b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3766b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3766bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3766c0: 0xc102488  jal         func_409220
    ctx->pc = 0x3766C0u;
    SET_GPR_U32(ctx, 31, 0x3766C8u);
    ctx->pc = 0x3766C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766C0u;
    // 0x3766c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3766C0u, 0x3766C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766C8u;
label_3766c8:
    // 0x3766c8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3766c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3766ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3766d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3766d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3766d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3766d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3766dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766e0: 0xc0c70d6  jal         func_31C358
    ctx->pc = 0x3766E0u;
    SET_GPR_U32(ctx, 31, 0x3766E8u);
    ctx->pc = 0x3766E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766E0u;
    // 0x3766e4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C358u, 0x3766E0u, 0x3766E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766E8u;
label_3766e8:
    // 0x3766e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3766e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3766ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3766ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3766f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3766f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3766f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3766f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3766f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3766f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3766fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3766fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376700: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x376700u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376708: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x376708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37670c: 0x3e00008  jr          $ra
    ctx->pc = 0x37670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37670Cu;
        // 0x376710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376714u;
    // 0x376714: 0x0  nop
    ctx->pc = 0x376714u;
    // NOP
    ctx->pc = 0x376718u;
}
