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

// Function: sub_00375038
// Address: 0x375038 - 0x3751d0
void sub_00375038_0x375038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375038_0x375038");
#endif

    switch (ctx->pc) {
        case 0x37507cu: goto label_37507c;
        case 0x375084u: goto label_375084;
        case 0x37509cu: goto label_37509c;
        case 0x3750a4u: goto label_3750a4;
        case 0x3750b8u: goto label_3750b8;
        case 0x3750c0u: goto label_3750c0;
        case 0x3750d4u: goto label_3750d4;
        case 0x3750ecu: goto label_3750ec;
        case 0x3750f4u: goto label_3750f4;
        case 0x37510cu: goto label_37510c;
        case 0x375114u: goto label_375114;
        case 0x375128u: goto label_375128;
        case 0x37513cu: goto label_37513c;
        case 0x375150u: goto label_375150;
        case 0x375164u: goto label_375164;
        case 0x375194u: goto label_375194;
        default: break;
    }

    ctx->pc = 0x375038u;

    // 0x375038: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x375038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x37503c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37503cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375040: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x375040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x375044: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x375044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x375048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37504c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37504cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375050: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x375050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x375054: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x375054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x375058: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37505c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x375060: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x375060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x375064: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x375064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x375068: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x375068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x37506c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x37506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x375070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375074: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375074u;
    SET_GPR_U32(ctx, 31, 0x37507Cu);
    ctx->pc = 0x375078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375074u;
    // 0x375078: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375074u, 0x37507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37507Cu;
label_37507c:
    // 0x37507c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37507Cu;
    SET_GPR_U32(ctx, 31, 0x375084u);
    ctx->pc = 0x375080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37507Cu;
    // 0x375080: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37507Cu, 0x375084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375084u;
label_375084:
    // 0x375084: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x375084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x375088: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x37508c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x37508cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375090: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375094: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375094u;
    SET_GPR_U32(ctx, 31, 0x37509Cu);
    ctx->pc = 0x375098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375094u;
    // 0x375098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375094u, 0x37509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37509Cu;
label_37509c:
    // 0x37509c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37509Cu;
    SET_GPR_U32(ctx, 31, 0x3750A4u);
    ctx->pc = 0x3750A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37509Cu;
    // 0x3750a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37509Cu, 0x3750A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750A4u;
label_3750a4:
    // 0x3750a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3750a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3750a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3750a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3750ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3750acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3750b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3750B0u;
    SET_GPR_U32(ctx, 31, 0x3750B8u);
    ctx->pc = 0x3750B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750B0u;
    // 0x3750b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3750B0u, 0x3750B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750B8u;
label_3750b8:
    // 0x3750b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3750B8u;
    SET_GPR_U32(ctx, 31, 0x3750C0u);
    ctx->pc = 0x3750BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750B8u;
    // 0x3750bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3750B8u, 0x3750C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750C0u;
label_3750c0:
    // 0x3750c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3750c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3750c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3750c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3750c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3750c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3750cc: 0xc102488  jal         func_409220
    ctx->pc = 0x3750CCu;
    SET_GPR_U32(ctx, 31, 0x3750D4u);
    ctx->pc = 0x3750D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750CCu;
    // 0x3750d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3750CCu, 0x3750D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750D4u;
label_3750d4:
    // 0x3750d4: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x3750d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3750d8: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3750d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3750dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3750dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3750e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3750e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3750e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3750E4u;
    SET_GPR_U32(ctx, 31, 0x3750ECu);
    ctx->pc = 0x3750E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750E4u;
    // 0x3750e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3750E4u, 0x3750ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750ECu;
label_3750ec:
    // 0x3750ec: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3750ECu;
    SET_GPR_U32(ctx, 31, 0x3750F4u);
    ctx->pc = 0x3750F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750ECu;
    // 0x3750f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3750ECu, 0x3750F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750F4u;
label_3750f4:
    // 0x3750f4: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x3750f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3750f8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3750f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3750fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3750fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x375100: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375104: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375104u;
    SET_GPR_U32(ctx, 31, 0x37510Cu);
    ctx->pc = 0x375108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375104u;
    // 0x375108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375104u, 0x37510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37510Cu;
label_37510c:
    // 0x37510c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37510Cu;
    SET_GPR_U32(ctx, 31, 0x375114u);
    ctx->pc = 0x375110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37510Cu;
    // 0x375110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37510Cu, 0x375114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375114u;
label_375114:
    // 0x375114: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37511c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x37511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x375120: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375120u;
    SET_GPR_U32(ctx, 31, 0x375128u);
    ctx->pc = 0x375124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375120u;
    // 0x375124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375120u, 0x375128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375128u;
label_375128:
    // 0x375128: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x375128u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37512c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375130: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x375130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x375134: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375134u;
    SET_GPR_U32(ctx, 31, 0x37513Cu);
    ctx->pc = 0x375138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375134u;
    // 0x375138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375134u, 0x37513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37513Cu;
label_37513c:
    // 0x37513c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x37513cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x375140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375144: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x375144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x375148: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375148u;
    SET_GPR_U32(ctx, 31, 0x375150u);
    ctx->pc = 0x37514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375148u;
    // 0x37514c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375148u, 0x375150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375150u;
label_375150:
    // 0x375150: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x375150u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x375154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375158: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x375158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37515c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37515Cu;
    SET_GPR_U32(ctx, 31, 0x375164u);
    ctx->pc = 0x375160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37515Cu;
    // 0x375160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37515Cu, 0x375164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375164u;
label_375164:
    // 0x375164: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x375164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x375168: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x375168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37516c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x375170: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x375170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375174: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x375174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375178: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x375178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37517c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37517cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x375180: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x375180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375184: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x375184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375188: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x375188u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37518c: 0xc0c582a  jal         func_3160A8
    ctx->pc = 0x37518Cu;
    SET_GPR_U32(ctx, 31, 0x375194u);
    ctx->pc = 0x375190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37518Cu;
    // 0x375190: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3160A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3160A8u, 0x37518Cu, 0x375194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375194u;
label_375194:
    // 0x375194: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x375194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x375198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37519c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x37519cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3751a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3751a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3751a4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3751a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3751a8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3751a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3751ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3751acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3751b0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3751b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3751b4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3751b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3751b8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3751b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3751bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3751bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3751c0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3751c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3751c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3751C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3751C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751C4u;
        // 0x3751c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3751C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3751CCu;
    // 0x3751cc: 0x0  nop
    ctx->pc = 0x3751ccu;
    // NOP
    ctx->pc = 0x3751d0u;
}
