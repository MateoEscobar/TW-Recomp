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

// Function: sub_00333380
// Address: 0x333380 - 0x333548
void sub_00333380_0x333380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333380_0x333380");
#endif

    switch (ctx->pc) {
        case 0x3333a4u: goto label_3333a4;
        case 0x3333b0u: goto label_3333b0;
        case 0x3333d0u: goto label_3333d0;
        case 0x333404u: goto label_333404;
        case 0x33341cu: goto label_33341c;
        case 0x333450u: goto label_333450;
        case 0x333458u: goto label_333458;
        case 0x333468u: goto label_333468;
        case 0x333488u: goto label_333488;
        case 0x3334a0u: goto label_3334a0;
        case 0x3334b8u: goto label_3334b8;
        case 0x3334d0u: goto label_3334d0;
        case 0x3334e8u: goto label_3334e8;
        case 0x333500u: goto label_333500;
        case 0x333518u: goto label_333518;
        case 0x333528u: goto label_333528;
        default: break;
    }

    ctx->pc = 0x333380u;

    // 0x333380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x333380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x333384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x333388: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x333388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x33338c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33338cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333390: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x333390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x333394: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x333394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x333398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33339c: 0xc0ccc9a  jal         func_333268
    ctx->pc = 0x33339Cu;
    SET_GPR_U32(ctx, 31, 0x3333A4u);
    ctx->pc = 0x3333A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33339Cu;
    // 0x3333a0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333268u, 0x33339Cu, 0x3333A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333A4u;
label_3333a4:
    // 0x3333a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3333a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333a8: 0xc0cca8e  jal         func_332A38
    ctx->pc = 0x3333A8u;
    SET_GPR_U32(ctx, 31, 0x3333B0u);
    ctx->pc = 0x3333ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333A8u;
    // 0x3333ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A38u, 0x3333A8u, 0x3333B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333B0u;
label_3333b0:
    // 0x3333b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3333b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333b4: 0x2a220041  slti        $v0, $s1, 0x41
    ctx->pc = 0x3333b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x3333b8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3333B8u;
    {
        const bool branch_taken_0x3333b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3333BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3333B8u;
        // 0x3333bc: 0x2a220040  slti        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333b8) {
            ctx->pc = 0x333408u;
            goto label_333408;
        }
    }
    ctx->pc = 0x3333C0u;
    // 0x3333c0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x3333c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x3333c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3333c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333c8: 0xc0cca76  jal         func_3329D8
    ctx->pc = 0x3333C8u;
    SET_GPR_U32(ctx, 31, 0x3333D0u);
    ctx->pc = 0x3333CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333C8u;
    // 0x3333cc: 0x261066f8  addiu       $s0, $s0, 0x66F8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329D8u, 0x3333C8u, 0x3333D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333D0u;
label_3333d0:
    // 0x3333d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3333d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3333d4: 0x2627000f  addiu       $a3, $s1, 0xF
    ctx->pc = 0x3333d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x3333d8: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x3333d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3333dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3333dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333e0: 0x223380b  movn        $a3, $s1, $v1
    ctx->pc = 0x3333e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
    // 0x3333e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3333e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333e8: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x3333e8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x3333ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3333ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333f0: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x3333f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3333f4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x3333f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3333f8: 0x2284023  subu        $t0, $s1, $t0
    ctx->pc = 0x3333f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x3333fc: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3333FCu;
    SET_GPR_U32(ctx, 31, 0x333404u);
    ctx->pc = 0x333400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333FCu;
    // 0x333400: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3333FCu, 0x333404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333404u;
label_333404:
    // 0x333404: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x333404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
label_333408:
    // 0x333408: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x333408u;
    {
        const bool branch_taken_0x333408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333408u;
        // 0x33340c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333408) {
            ctx->pc = 0x333450u;
            goto label_333450;
        }
    }
    ctx->pc = 0x333410u;
    // 0x333410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x333410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333414: 0xc0cca76  jal         func_3329D8
    ctx->pc = 0x333414u;
    SET_GPR_U32(ctx, 31, 0x33341Cu);
    ctx->pc = 0x333418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333414u;
    // 0x333418: 0x26106738  addiu       $s0, $s0, 0x6738 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329D8u, 0x333414u, 0x33341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33341Cu;
label_33341c:
    // 0x33341c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x333420: 0x2627000f  addiu       $a3, $s1, 0xF
    ctx->pc = 0x333420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x333424: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x333424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x333428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33342c: 0x223380b  movn        $a3, $s1, $v1
    ctx->pc = 0x33342cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 17));
    // 0x333430: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x333430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333434: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x333434u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x333438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33343c: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x33343cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x333440: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x333440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x333444: 0x2284023  subu        $t0, $s1, $t0
    ctx->pc = 0x333444u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x333448: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x333448u;
    SET_GPR_U32(ctx, 31, 0x333450u);
    ctx->pc = 0x33344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333448u;
    // 0x33344c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x333448u, 0x333450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333450u;
label_333450:
    // 0x333450: 0xc0ccda0  jal         func_333680
    ctx->pc = 0x333450u;
    SET_GPR_U32(ctx, 31, 0x333458u);
    ctx->pc = 0x333680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333680u, 0x333450u, 0x333458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333458u;
label_333458:
    // 0x333458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33345c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33345cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333460: 0xc0cca8e  jal         func_332A38
    ctx->pc = 0x333460u;
    SET_GPR_U32(ctx, 31, 0x333468u);
    ctx->pc = 0x333464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333460u;
    // 0x333464: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A38u, 0x333460u, 0x333468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333468u;
label_333468:
    // 0x333468: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x333468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x33346c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x33346cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x333470: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x333470u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x333474: 0x24c66778  addiu       $a2, $a2, 0x6778
    ctx->pc = 0x333474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26488));
    // 0x333478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33347c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33347cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333480: 0xc0cccbc  jal         func_3332F0
    ctx->pc = 0x333480u;
    SET_GPR_U32(ctx, 31, 0x333488u);
    ctx->pc = 0x333484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333480u;
    // 0x333484: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3332F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332F0u, 0x333480u, 0x333488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333488u;
label_333488:
    // 0x333488: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x333488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x33348c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333490: 0x24c66788  addiu       $a2, $a2, 0x6788
    ctx->pc = 0x333490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26504));
    // 0x333494: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x333494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333498: 0xc0cccbc  jal         func_3332F0
    ctx->pc = 0x333498u;
    SET_GPR_U32(ctx, 31, 0x3334A0u);
    ctx->pc = 0x33349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333498u;
    // 0x33349c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3332F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332F0u, 0x333498u, 0x3334A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334A0u;
label_3334a0:
    // 0x3334a0: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3334a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x3334a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3334a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334a8: 0x24c66798  addiu       $a2, $a2, 0x6798
    ctx->pc = 0x3334a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26520));
    // 0x3334ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3334acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334b0: 0xc0cccbc  jal         func_3332F0
    ctx->pc = 0x3334B0u;
    SET_GPR_U32(ctx, 31, 0x3334B8u);
    ctx->pc = 0x3334B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334B0u;
    // 0x3334b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3332F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332F0u, 0x3334B0u, 0x3334B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334B8u;
label_3334b8:
    // 0x3334b8: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3334b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x3334bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3334bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334c0: 0x24c667b0  addiu       $a2, $a2, 0x67B0
    ctx->pc = 0x3334c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26544));
    // 0x3334c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3334c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334c8: 0xc0cccbc  jal         func_3332F0
    ctx->pc = 0x3334C8u;
    SET_GPR_U32(ctx, 31, 0x3334D0u);
    ctx->pc = 0x3334CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334C8u;
    // 0x3334cc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3332F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332F0u, 0x3334C8u, 0x3334D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334D0u;
label_3334d0:
    // 0x3334d0: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3334d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x3334d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3334d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334d8: 0x24c667c8  addiu       $a2, $a2, 0x67C8
    ctx->pc = 0x3334d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26568));
    // 0x3334dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3334dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334e0: 0xc0cccbc  jal         func_3332F0
    ctx->pc = 0x3334E0u;
    SET_GPR_U32(ctx, 31, 0x3334E8u);
    ctx->pc = 0x3334E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334E0u;
    // 0x3334e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3332F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332F0u, 0x3334E0u, 0x3334E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3334E8u;
label_3334e8:
    // 0x3334e8: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3334e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x3334ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3334ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334f0: 0x24c667d0  addiu       $a2, $a2, 0x67D0
    ctx->pc = 0x3334f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26576));
    // 0x3334f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3334f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334f8: 0xc0cccbc  jal         func_3332F0
    ctx->pc = 0x3334F8u;
    SET_GPR_U32(ctx, 31, 0x333500u);
    ctx->pc = 0x3334FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3334F8u;
    // 0x3334fc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3332F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332F0u, 0x3334F8u, 0x333500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333500u;
label_333500:
    // 0x333500: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x333500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x333504: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x333504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33350c: 0x24c667d8  addiu       $a2, $a2, 0x67D8
    ctx->pc = 0x33350cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26584));
    // 0x333510: 0xc0cccbc  jal         func_3332F0
    ctx->pc = 0x333510u;
    SET_GPR_U32(ctx, 31, 0x333518u);
    ctx->pc = 0x333514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333510u;
    // 0x333514: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3332F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3332F0u, 0x333510u, 0x333518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333518u;
label_333518:
    // 0x333518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33351c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33351cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333520: 0xc0ccb3e  jal         func_332CF8
    ctx->pc = 0x333520u;
    SET_GPR_U32(ctx, 31, 0x333528u);
    ctx->pc = 0x333524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333520u;
    // 0x333524: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332CF8u, 0x333520u, 0x333528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333528u;
label_333528:
    // 0x333528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x333528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33352c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33352cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333530: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x333530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x333534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333538: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x333538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33353c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33353cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333540: 0x3e00008  jr          $ra
    ctx->pc = 0x333540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333540u;
        // 0x333544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333548u;
}
