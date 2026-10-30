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

// Function: sub_003724D8
// Address: 0x3724d8 - 0x3725f0
void sub_003724D8_0x3724d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003724D8_0x3724d8");
#endif

    switch (ctx->pc) {
        case 0x372508u: goto label_372508;
        case 0x372510u: goto label_372510;
        case 0x372524u: goto label_372524;
        case 0x37252cu: goto label_37252c;
        case 0x372538u: goto label_372538;
        case 0x372550u: goto label_372550;
        case 0x372558u: goto label_372558;
        case 0x372578u: goto label_372578;
        case 0x372580u: goto label_372580;
        case 0x37258cu: goto label_37258c;
        case 0x372598u: goto label_372598;
        case 0x3725a8u: goto label_3725a8;
        case 0x3725bcu: goto label_3725bc;
        default: break;
    }

    ctx->pc = 0x3724d8u;

    // 0x3724d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3724d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3724dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3724dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3724e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3724e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3724e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3724e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3724e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3724e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3724ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3724f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3724f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3724f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3724f8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3724f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3724fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3724fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372500: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372500u;
    SET_GPR_U32(ctx, 31, 0x372508u);
    ctx->pc = 0x372504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372500u;
    // 0x372504: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372500u, 0x372508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372508u;
label_372508:
    // 0x372508: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x372508u;
    SET_GPR_U32(ctx, 31, 0x372510u);
    ctx->pc = 0x37250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372508u;
    // 0x37250c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x372508u, 0x372510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372510u;
label_372510:
    // 0x372510: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372518: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37251c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37251Cu;
    SET_GPR_U32(ctx, 31, 0x372524u);
    ctx->pc = 0x372520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37251Cu;
    // 0x372520: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37251Cu, 0x372524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372524u;
label_372524:
    // 0x372524: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372524u;
    SET_GPR_U32(ctx, 31, 0x37252Cu);
    ctx->pc = 0x372528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372524u;
    // 0x372528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372524u, 0x37252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37252Cu;
label_37252c:
    // 0x37252c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37252cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x372530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372534: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x372534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_372538:
    // 0x372538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x372538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37253c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372540: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372544: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372548: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x372548u;
    SET_GPR_U32(ctx, 31, 0x372550u);
    ctx->pc = 0x37254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372548u;
    // 0x37254c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x372548u, 0x372550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372550u;
label_372550:
    // 0x372550: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372550u;
    SET_GPR_U32(ctx, 31, 0x372558u);
    ctx->pc = 0x372554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372550u;
    // 0x372554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372550u, 0x372558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372558u;
label_372558:
    // 0x372558: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x372558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37255c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37255cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372560: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372560u;
    {
        const bool branch_taken_0x372560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372560u;
        // 0x372564: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372560) {
            ctx->pc = 0x372538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372538;
        }
    }
    ctx->pc = 0x372568u;
    // 0x372568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x372568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37256c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x37256cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372570: 0xc044ede  jal         func_113B78
    ctx->pc = 0x372570u;
    SET_GPR_U32(ctx, 31, 0x372578u);
    ctx->pc = 0x372574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372570u;
    // 0x372574: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B78u, 0x372570u, 0x372578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372578u;
label_372578:
    // 0x372578: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x372578u;
    SET_GPR_U32(ctx, 31, 0x372580u);
    ctx->pc = 0x37257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372578u;
    // 0x37257c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x372578u, 0x372580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372580u;
label_372580:
    // 0x372580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x372580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372584: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x372584u;
    SET_GPR_U32(ctx, 31, 0x37258Cu);
    ctx->pc = 0x372588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372584u;
    // 0x372588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x372584u, 0x37258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37258Cu;
label_37258c:
    // 0x37258c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37258cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372590: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x372590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x372594: 0x0  nop
    ctx->pc = 0x372594u;
    // NOP
label_372598:
    // 0x372598: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x372598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37259c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37259cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3725a0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3725A0u;
    SET_GPR_U32(ctx, 31, 0x3725A8u);
    ctx->pc = 0x3725A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3725A0u;
    // 0x3725a4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3725A0u, 0x3725A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725A8u;
label_3725a8:
    // 0x3725a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3725a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3725ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3725acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3725b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3725b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3725b4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3725B4u;
    SET_GPR_U32(ctx, 31, 0x3725BCu);
    ctx->pc = 0x3725B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3725B4u;
    // 0x3725b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3725B4u, 0x3725BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725BCu;
label_3725bc:
    // 0x3725bc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3725bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3725c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3725C0u;
    {
        const bool branch_taken_0x3725c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3725C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725C0u;
        // 0x3725c4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725c0) {
            ctx->pc = 0x372598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372598;
        }
    }
    ctx->pc = 0x3725C8u;
    // 0x3725c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3725c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3725cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3725ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3725d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3725d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3725d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3725d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3725d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3725d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3725dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3725dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3725e0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3725e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3725e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3725E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3725E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725E4u;
        // 0x3725e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3725E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3725ECu;
    // 0x3725ec: 0x0  nop
    ctx->pc = 0x3725ecu;
    // NOP
    ctx->pc = 0x3725f0u;
}
