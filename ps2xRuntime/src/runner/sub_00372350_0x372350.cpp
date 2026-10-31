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

// Function: sub_00372350
// Address: 0x372350 - 0x3724d8
void sub_00372350_0x372350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372350_0x372350");
#endif

    switch (ctx->pc) {
        case 0x37238cu: goto label_37238c;
        case 0x372394u: goto label_372394;
        case 0x3723a8u: goto label_3723a8;
        case 0x3723b0u: goto label_3723b0;
        case 0x3723c4u: goto label_3723c4;
        case 0x3723ccu: goto label_3723cc;
        case 0x3723e0u: goto label_3723e0;
        case 0x3723e8u: goto label_3723e8;
        case 0x3723fcu: goto label_3723fc;
        case 0x372404u: goto label_372404;
        case 0x372410u: goto label_372410;
        case 0x372428u: goto label_372428;
        case 0x372430u: goto label_372430;
        case 0x37245cu: goto label_37245c;
        case 0x372464u: goto label_372464;
        case 0x372470u: goto label_372470;
        case 0x372478u: goto label_372478;
        case 0x372488u: goto label_372488;
        case 0x37249cu: goto label_37249c;
        default: break;
    }

    ctx->pc = 0x372350u;

    // 0x372350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x372350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x372354: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372358: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x372358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x37235c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x372360: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372364: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x372364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372368: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x372368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x37236c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x372370: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x372370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x372374: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x372374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x372378: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x372378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x37237c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x37237cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x372380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372384: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372384u;
    SET_GPR_U32(ctx, 31, 0x37238Cu);
    ctx->pc = 0x372388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372384u;
    // 0x372388: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372384u, 0x37238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37238Cu;
label_37238c:
    // 0x37238c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37238Cu;
    SET_GPR_U32(ctx, 31, 0x372394u);
    ctx->pc = 0x372390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37238Cu;
    // 0x372390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37238Cu, 0x372394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372394u;
label_372394:
    // 0x372394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372398: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37239c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3723A0u;
    SET_GPR_U32(ctx, 31, 0x3723A8u);
    ctx->pc = 0x3723A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723A0u;
    // 0x3723a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3723A0u, 0x3723A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723A8u;
label_3723a8:
    // 0x3723a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3723A8u;
    SET_GPR_U32(ctx, 31, 0x3723B0u);
    ctx->pc = 0x3723ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723A8u;
    // 0x3723ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3723A8u, 0x3723B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723B0u;
label_3723b0:
    // 0x3723b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3723b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3723b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3723b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3723b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3723BCu;
    SET_GPR_U32(ctx, 31, 0x3723C4u);
    ctx->pc = 0x3723C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723BCu;
    // 0x3723c0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3723BCu, 0x3723C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723C4u;
label_3723c4:
    // 0x3723c4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3723C4u;
    SET_GPR_U32(ctx, 31, 0x3723CCu);
    ctx->pc = 0x3723C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723C4u;
    // 0x3723c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3723C4u, 0x3723CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723CCu;
label_3723cc:
    // 0x3723cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3723ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3723d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3723d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3723d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3723d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3723D8u;
    SET_GPR_U32(ctx, 31, 0x3723E0u);
    ctx->pc = 0x3723DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723D8u;
    // 0x3723dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3723D8u, 0x3723E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723E0u;
label_3723e0:
    // 0x3723e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3723E0u;
    SET_GPR_U32(ctx, 31, 0x3723E8u);
    ctx->pc = 0x3723E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723E0u;
    // 0x3723e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3723E0u, 0x3723E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723E8u;
label_3723e8:
    // 0x3723e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3723e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3723ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3723f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3723f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3723F4u;
    SET_GPR_U32(ctx, 31, 0x3723FCu);
    ctx->pc = 0x3723F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723F4u;
    // 0x3723f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3723F4u, 0x3723FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723FCu;
label_3723fc:
    // 0x3723fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3723FCu;
    SET_GPR_U32(ctx, 31, 0x372404u);
    ctx->pc = 0x372400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723FCu;
    // 0x372400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3723FCu, 0x372404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372404u;
label_372404:
    // 0x372404: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x372404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372408: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37240c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37240cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_372410:
    // 0x372410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x372410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x372414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37241c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37241cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372420: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x372420u;
    SET_GPR_U32(ctx, 31, 0x372428u);
    ctx->pc = 0x372424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372420u;
    // 0x372424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x372420u, 0x372428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372428u;
label_372428:
    // 0x372428: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372428u;
    SET_GPR_U32(ctx, 31, 0x372430u);
    ctx->pc = 0x37242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372428u;
    // 0x37242c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372428u, 0x372430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372430u;
label_372430:
    // 0x372430: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x372430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x372434: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x372434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372438: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372438u;
    {
        const bool branch_taken_0x372438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372438u;
        // 0x37243c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372438) {
            ctx->pc = 0x372410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372410;
        }
    }
    ctx->pc = 0x372440u;
    // 0x372440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x372440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372444: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x372444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372448: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x372448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37244c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37244cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x372450: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x372450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372454: 0xc044eca  jal         func_113B28
    ctx->pc = 0x372454u;
    SET_GPR_U32(ctx, 31, 0x37245Cu);
    ctx->pc = 0x372458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372454u;
    // 0x372458: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B28u, 0x372454u, 0x37245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37245Cu;
label_37245c:
    // 0x37245c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37245Cu;
    SET_GPR_U32(ctx, 31, 0x372464u);
    ctx->pc = 0x372460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37245Cu;
    // 0x372460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37245Cu, 0x372464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372464u;
label_372464:
    // 0x372464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x372464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372468: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x372468u;
    SET_GPR_U32(ctx, 31, 0x372470u);
    ctx->pc = 0x37246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372468u;
    // 0x37246c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x372468u, 0x372470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372470u;
label_372470:
    // 0x372470: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372474: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x372474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_372478:
    // 0x372478: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x372478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37247c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37247cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x372480: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x372480u;
    SET_GPR_U32(ctx, 31, 0x372488u);
    ctx->pc = 0x372484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372480u;
    // 0x372484: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x372480u, 0x372488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372488u;
label_372488:
    // 0x372488: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x372488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37248c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37248cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372494: 0xc102576  jal         func_4095D8
    ctx->pc = 0x372494u;
    SET_GPR_U32(ctx, 31, 0x37249Cu);
    ctx->pc = 0x372498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372494u;
    // 0x372498: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x372494u, 0x37249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37249Cu;
label_37249c:
    // 0x37249c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37249cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3724a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3724A0u;
    {
        const bool branch_taken_0x3724a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3724A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724A0u;
        // 0x3724a4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3724a0) {
            ctx->pc = 0x372478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372478;
        }
    }
    ctx->pc = 0x3724A8u;
    // 0x3724a8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3724a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3724ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3724acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3724b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3724b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3724b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3724b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3724b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3724b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3724bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3724bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3724c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3724c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3724c4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3724c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3724c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3724c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3724cc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3724ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3724d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3724D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3724D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724D0u;
        // 0x3724d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3724D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3724D8u;
}
