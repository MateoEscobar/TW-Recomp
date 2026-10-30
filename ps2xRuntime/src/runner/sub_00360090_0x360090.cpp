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

// Function: sub_00360090
// Address: 0x360090 - 0x3601a8
void sub_00360090_0x360090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360090_0x360090");
#endif

    switch (ctx->pc) {
        case 0x3600c8u: goto label_3600c8;
        case 0x3600d0u: goto label_3600d0;
        case 0x3600e4u: goto label_3600e4;
        case 0x3600ecu: goto label_3600ec;
        case 0x360100u: goto label_360100;
        case 0x360108u: goto label_360108;
        case 0x36011cu: goto label_36011c;
        case 0x360124u: goto label_360124;
        case 0x360138u: goto label_360138;
        case 0x360140u: goto label_360140;
        case 0x360154u: goto label_360154;
        case 0x36015cu: goto label_36015c;
        case 0x360178u: goto label_360178;
        default: break;
    }

    ctx->pc = 0x360090u;

    // 0x360090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x360090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x360094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360098: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x360098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36009c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3600a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3600a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3600a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3600a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3600ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3600acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3600b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3600b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600b4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3600b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3600b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3600b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3600bc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3600bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3600c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3600C0u;
    SET_GPR_U32(ctx, 31, 0x3600C8u);
    ctx->pc = 0x3600C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600C0u;
    // 0x3600c4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3600C0u, 0x3600C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600C8u;
label_3600c8:
    // 0x3600c8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3600C8u;
    SET_GPR_U32(ctx, 31, 0x3600D0u);
    ctx->pc = 0x3600CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600C8u;
    // 0x3600cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3600C8u, 0x3600D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600D0u;
label_3600d0:
    // 0x3600d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3600d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3600d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3600d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3600dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3600DCu;
    SET_GPR_U32(ctx, 31, 0x3600E4u);
    ctx->pc = 0x3600E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600DCu;
    // 0x3600e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3600DCu, 0x3600E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600E4u;
label_3600e4:
    // 0x3600e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3600E4u;
    SET_GPR_U32(ctx, 31, 0x3600ECu);
    ctx->pc = 0x3600E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600E4u;
    // 0x3600e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3600E4u, 0x3600ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600ECu;
label_3600ec:
    // 0x3600ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3600ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3600f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3600f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3600f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3600F8u;
    SET_GPR_U32(ctx, 31, 0x360100u);
    ctx->pc = 0x3600FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600F8u;
    // 0x3600fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3600F8u, 0x360100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360100u;
label_360100:
    // 0x360100: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360100u;
    SET_GPR_U32(ctx, 31, 0x360108u);
    ctx->pc = 0x360104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360100u;
    // 0x360104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360100u, 0x360108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360108u;
label_360108:
    // 0x360108: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36010c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36010cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360110: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x360110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360114: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360114u;
    SET_GPR_U32(ctx, 31, 0x36011Cu);
    ctx->pc = 0x360118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360114u;
    // 0x360118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360114u, 0x36011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36011Cu;
label_36011c:
    // 0x36011c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36011Cu;
    SET_GPR_U32(ctx, 31, 0x360124u);
    ctx->pc = 0x360120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36011Cu;
    // 0x360120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36011Cu, 0x360124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360124u;
label_360124:
    // 0x360124: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x360124u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x360128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36012c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36012cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360130: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360130u;
    SET_GPR_U32(ctx, 31, 0x360138u);
    ctx->pc = 0x360134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360130u;
    // 0x360134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360130u, 0x360138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360138u;
label_360138:
    // 0x360138: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360138u;
    SET_GPR_U32(ctx, 31, 0x360140u);
    ctx->pc = 0x36013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360138u;
    // 0x36013c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360138u, 0x360140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360140u;
label_360140:
    // 0x360140: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360140u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360144: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36014c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36014Cu;
    SET_GPR_U32(ctx, 31, 0x360154u);
    ctx->pc = 0x360150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36014Cu;
    // 0x360150: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36014Cu, 0x360154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360154u;
label_360154:
    // 0x360154: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360154u;
    SET_GPR_U32(ctx, 31, 0x36015Cu);
    ctx->pc = 0x360158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360154u;
    // 0x360158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360154u, 0x36015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36015Cu;
label_36015c:
    // 0x36015c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360160: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360164: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x360164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360168: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x360168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36016c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36016cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x360170: 0xc0b6a04  jal         func_2DA810
    ctx->pc = 0x360170u;
    SET_GPR_U32(ctx, 31, 0x360178u);
    ctx->pc = 0x360174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360170u;
    // 0x360174: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x360170u, 0x360178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360178u;
label_360178:
    // 0x360178: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x360178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36017c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36017cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360180: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x360180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360184: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x360184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360188: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x360188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36018c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36018cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360194: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x360194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360198: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x360198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36019c: 0x3e00008  jr          $ra
    ctx->pc = 0x36019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3601A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36019Cu;
        // 0x3601a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3601A4u;
    // 0x3601a4: 0x0  nop
    ctx->pc = 0x3601a4u;
    // NOP
    ctx->pc = 0x3601a8u;
}
