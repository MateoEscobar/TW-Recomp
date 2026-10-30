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

// Function: sub_00375A20
// Address: 0x375a20 - 0x375b48
void sub_00375A20_0x375a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375A20_0x375a20");
#endif

    switch (ctx->pc) {
        case 0x375a58u: goto label_375a58;
        case 0x375a60u: goto label_375a60;
        case 0x375a74u: goto label_375a74;
        case 0x375a7cu: goto label_375a7c;
        case 0x375a94u: goto label_375a94;
        case 0x375a9cu: goto label_375a9c;
        case 0x375ab4u: goto label_375ab4;
        case 0x375abcu: goto label_375abc;
        case 0x375ad0u: goto label_375ad0;
        case 0x375ae4u: goto label_375ae4;
        case 0x375af8u: goto label_375af8;
        case 0x375b18u: goto label_375b18;
        default: break;
    }

    ctx->pc = 0x375a20u;

    // 0x375a20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x375a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x375a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x375a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375a28: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x375a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x375a2c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x375a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x375a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x375a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x375a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x375a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x375a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x375a40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a44: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x375a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x375a48: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x375a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x375a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375a50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375A50u;
    SET_GPR_U32(ctx, 31, 0x375A58u);
    ctx->pc = 0x375A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A50u;
    // 0x375a54: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375A50u, 0x375A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A58u;
label_375a58:
    // 0x375a58: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375A58u;
    SET_GPR_U32(ctx, 31, 0x375A60u);
    ctx->pc = 0x375A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A58u;
    // 0x375a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375A58u, 0x375A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A60u;
label_375a60:
    // 0x375a60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x375a64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375a6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375A6Cu;
    SET_GPR_U32(ctx, 31, 0x375A74u);
    ctx->pc = 0x375A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A6Cu;
    // 0x375a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375A6Cu, 0x375A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A74u;
label_375a74:
    // 0x375a74: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375A74u;
    SET_GPR_U32(ctx, 31, 0x375A7Cu);
    ctx->pc = 0x375A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A74u;
    // 0x375a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375A74u, 0x375A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A7Cu;
label_375a7c:
    // 0x375a7c: 0x34068028  ori         $a2, $zero, 0x8028
    ctx->pc = 0x375a7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x375a80: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x375a84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375a8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375A8Cu;
    SET_GPR_U32(ctx, 31, 0x375A94u);
    ctx->pc = 0x375A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A8Cu;
    // 0x375a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375A8Cu, 0x375A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A94u;
label_375a94:
    // 0x375a94: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375A94u;
    SET_GPR_U32(ctx, 31, 0x375A9Cu);
    ctx->pc = 0x375A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A94u;
    // 0x375a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375A94u, 0x375A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A9Cu;
label_375a9c:
    // 0x375a9c: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x375a9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x375aa0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x375aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x375aa4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x375aa4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x375aa8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x375aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375aac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375AACu;
    SET_GPR_U32(ctx, 31, 0x375AB4u);
    ctx->pc = 0x375AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375AACu;
    // 0x375ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375AACu, 0x375AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AB4u;
label_375ab4:
    // 0x375ab4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375AB4u;
    SET_GPR_U32(ctx, 31, 0x375ABCu);
    ctx->pc = 0x375AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375AB4u;
    // 0x375ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375AB4u, 0x375ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375ABCu;
label_375abc:
    // 0x375abc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ac4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x375ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x375ac8: 0xc102488  jal         func_409220
    ctx->pc = 0x375AC8u;
    SET_GPR_U32(ctx, 31, 0x375AD0u);
    ctx->pc = 0x375ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375AC8u;
    // 0x375acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375AC8u, 0x375AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AD0u;
label_375ad0:
    // 0x375ad0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x375ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ad8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375adc: 0xc102488  jal         func_409220
    ctx->pc = 0x375ADCu;
    SET_GPR_U32(ctx, 31, 0x375AE4u);
    ctx->pc = 0x375AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375ADCu;
    // 0x375ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375ADCu, 0x375AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AE4u;
label_375ae4:
    // 0x375ae4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x375ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375aec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x375aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x375af0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375AF0u;
    SET_GPR_U32(ctx, 31, 0x375AF8u);
    ctx->pc = 0x375AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375AF0u;
    // 0x375af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375AF0u, 0x375AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AF8u;
label_375af8:
    // 0x375af8: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x375af8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x375afc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x375afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x375b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x375b04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x375b08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x375b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x375b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b10: 0xc0c59ba  jal         func_3166E8
    ctx->pc = 0x375B10u;
    SET_GPR_U32(ctx, 31, 0x375B18u);
    ctx->pc = 0x375B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375B10u;
    // 0x375b14: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3166E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3166E8u, 0x375B10u, 0x375B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B18u;
label_375b18:
    // 0x375b18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x375b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x375b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b20: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x375b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375b24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x375b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375b28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x375b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375b2c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x375b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375b30: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x375b30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375b38: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x375b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x375B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B3Cu;
        // 0x375b40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375B44u;
    // 0x375b44: 0x0  nop
    ctx->pc = 0x375b44u;
    // NOP
    ctx->pc = 0x375b48u;
}
