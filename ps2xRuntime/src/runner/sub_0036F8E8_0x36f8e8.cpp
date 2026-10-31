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

// Function: sub_0036F8E8
// Address: 0x36f8e8 - 0x36fa28
void sub_0036F8E8_0x36f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F8E8_0x36f8e8");
#endif

    switch (ctx->pc) {
        case 0x36f91cu: goto label_36f91c;
        case 0x36f924u: goto label_36f924;
        case 0x36f938u: goto label_36f938;
        case 0x36f94cu: goto label_36f94c;
        case 0x36f954u: goto label_36f954;
        case 0x36f960u: goto label_36f960;
        case 0x36f978u: goto label_36f978;
        case 0x36f980u: goto label_36f980;
        case 0x36f9a4u: goto label_36f9a4;
        case 0x36f9b0u: goto label_36f9b0;
        case 0x36f9c4u: goto label_36f9c4;
        case 0x36f9dcu: goto label_36f9dc;
        case 0x36f9f0u: goto label_36f9f0;
        default: break;
    }

    ctx->pc = 0x36f8e8u;

    // 0x36f8e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x36f8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x36f8ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f8f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x36f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36f8f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36f8f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36f8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36f8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f900: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x36f900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x36f904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36f908: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x36f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x36f90c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x36f90cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36f910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36f914: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F914u;
    SET_GPR_U32(ctx, 31, 0x36F91Cu);
    ctx->pc = 0x36F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F914u;
    // 0x36f918: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F914u, 0x36F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F91Cu;
label_36f91c:
    // 0x36f91c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F91Cu;
    SET_GPR_U32(ctx, 31, 0x36F924u);
    ctx->pc = 0x36F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F91Cu;
    // 0x36f920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F91Cu, 0x36F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F924u;
label_36f924:
    // 0x36f924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f928: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f930: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36F930u;
    SET_GPR_U32(ctx, 31, 0x36F938u);
    ctx->pc = 0x36F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F930u;
    // 0x36f934: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36F930u, 0x36F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F938u;
label_36f938:
    // 0x36f938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36f938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f940: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36f940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f944: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F944u;
    SET_GPR_U32(ctx, 31, 0x36F94Cu);
    ctx->pc = 0x36F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F944u;
    // 0x36f948: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F944u, 0x36F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F94Cu;
label_36f94c:
    // 0x36f94c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36F94Cu;
    SET_GPR_U32(ctx, 31, 0x36F954u);
    ctx->pc = 0x36F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F94Cu;
    // 0x36f950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36F94Cu, 0x36F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F954u;
label_36f954:
    // 0x36f954: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36f954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36f958: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36f958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f95c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36f95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36f960:
    // 0x36f960: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36f960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36f964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f968: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f96c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36f96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f970: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36F970u;
    SET_GPR_U32(ctx, 31, 0x36F978u);
    ctx->pc = 0x36F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F970u;
    // 0x36f974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36F970u, 0x36F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F978u;
label_36f978:
    // 0x36f978: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F978u;
    SET_GPR_U32(ctx, 31, 0x36F980u);
    ctx->pc = 0x36F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F978u;
    // 0x36f97c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F978u, 0x36F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F980u;
label_36f980:
    // 0x36f980: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36f980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36f984: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36f984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36f988: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36F988u;
    {
        const bool branch_taken_0x36f988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F988u;
        // 0x36f98c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f988) {
            ctx->pc = 0x36F960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f960;
        }
    }
    ctx->pc = 0x36F990u;
    // 0x36f990: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36f990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f994: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36f994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f998: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36f998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f99c: 0xc06d53c  jal         func_1B54F0
    ctx->pc = 0x36F99Cu;
    SET_GPR_U32(ctx, 31, 0x36F9A4u);
    ctx->pc = 0x36F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F99Cu;
    // 0x36f9a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54F0u, 0x36F99Cu, 0x36F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F9A4u;
label_36f9a4:
    // 0x36f9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9a8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36f9ac: 0x0  nop
    ctx->pc = 0x36f9acu;
    // NOP
label_36f9b0:
    // 0x36f9b0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x36f9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36f9b4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36f9b8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x36f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36f9bc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36F9BCu;
    SET_GPR_U32(ctx, 31, 0x36F9C4u);
    ctx->pc = 0x36F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F9BCu;
    // 0x36f9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36F9BCu, 0x36F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F9C4u;
label_36f9c4:
    // 0x36f9c4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36F9C4u;
    {
        const bool branch_taken_0x36f9c4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9C4u;
        // 0x36f9c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9c4) {
            ctx->pc = 0x36F9E0u;
            goto label_36f9e0;
        }
    }
    ctx->pc = 0x36F9CCu;
    // 0x36f9cc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36f9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36f9d0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36f9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36f9d4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36F9D4u;
    SET_GPR_U32(ctx, 31, 0x36F9DCu);
    ctx->pc = 0x36F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F9D4u;
    // 0x36f9d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36F9D4u, 0x36F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F9DCu;
label_36f9dc:
    // 0x36f9dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36f9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36f9e0:
    // 0x36f9e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9e8: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36F9E8u;
    SET_GPR_U32(ctx, 31, 0x36F9F0u);
    ctx->pc = 0x36F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F9E8u;
    // 0x36f9ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36F9E8u, 0x36F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F9F0u;
label_36f9f0:
    // 0x36f9f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9f4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x36f9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36f9f8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x36F9F8u;
    {
        const bool branch_taken_0x36f9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9F8u;
        // 0x36f9fc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9f8) {
            ctx->pc = 0x36F9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f9b0;
        }
    }
    ctx->pc = 0x36FA00u;
    // 0x36fa00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x36fa00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36fa04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36fa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x36fa08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36fa0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36fa0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36fa10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36fa10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36fa14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36fa14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fa18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36fa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fa1c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x36fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36fa20: 0x3e00008  jr          $ra
    ctx->pc = 0x36FA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA20u;
        // 0x36fa24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FA28u;
}
