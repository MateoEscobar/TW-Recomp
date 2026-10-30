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

// Function: sub_0032E4B0
// Address: 0x32e4b0 - 0x32e600
void sub_0032E4B0_0x32e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E4B0_0x32e4b0");
#endif

    switch (ctx->pc) {
        case 0x32e4e8u: goto label_32e4e8;
        case 0x32e500u: goto label_32e500;
        case 0x32e510u: goto label_32e510;
        case 0x32e520u: goto label_32e520;
        case 0x32e530u: goto label_32e530;
        case 0x32e538u: goto label_32e538;
        case 0x32e570u: goto label_32e570;
        case 0x32e578u: goto label_32e578;
        case 0x32e588u: goto label_32e588;
        case 0x32e5a0u: goto label_32e5a0;
        case 0x32e5b8u: goto label_32e5b8;
        default: break;
    }

    ctx->pc = 0x32e4b0u;

label_32e4b0:
    // 0x32e4b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32e4b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x32e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x32e4b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x32e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x32e4bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x32e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x32e4c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32e4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32e4c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32e4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4cc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x32e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x32e4d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32e4d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x32e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x32e4d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x32e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x32e4dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32e4e0: 0xc0cb8ca  jal         func_32E328
    ctx->pc = 0x32E4E0u;
    SET_GPR_U32(ctx, 31, 0x32E4E8u);
    ctx->pc = 0x32E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E4E0u;
    // 0x32e4e4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E328u, 0x32E4E0u, 0x32E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E4E8u;
label_32e4e8:
    // 0x32e4e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32e4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32e4f0: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32E4F0u;
    {
        const bool branch_taken_0x32e4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4F0u;
        // 0x32e4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4f0) {
            ctx->pc = 0x32E528u;
            goto label_32e528;
        }
    }
    ctx->pc = 0x32E4F8u;
    // 0x32e4f8: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E4F8u;
    SET_GPR_U32(ctx, 31, 0x32E500u);
    ctx->pc = 0x32E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E4F8u;
    // 0x32e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E4F8u, 0x32E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E500u;
label_32e500:
    // 0x32e500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32e504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e508: 0xc0cb92c  jal         func_32E4B0
    ctx->pc = 0x32E508u;
    SET_GPR_U32(ctx, 31, 0x32E510u);
    ctx->pc = 0x32E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E508u;
    // 0x32e50c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E4B0u;
    goto label_32e4b0;
    ctx->pc = 0x32E510u;
label_32e510:
    // 0x32e510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32e510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e518: 0xc0c9ca2  jal         func_327288
    ctx->pc = 0x32E518u;
    SET_GPR_U32(ctx, 31, 0x32E520u);
    ctx->pc = 0x32E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E518u;
    // 0x32e51c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327288u, 0x32E518u, 0x32E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E520u;
label_32e520:
    // 0x32e520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E520u;
    {
        const bool branch_taken_0x32e520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e520) {
            ctx->pc = 0x32E530u;
            goto label_32e530;
        }
    }
    ctx->pc = 0x32E528u;
label_32e528:
    // 0x32e528: 0xc0cb854  jal         func_32E150
    ctx->pc = 0x32E528u;
    SET_GPR_U32(ctx, 31, 0x32E530u);
    ctx->pc = 0x32E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E528u;
    // 0x32e52c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E150u, 0x32E528u, 0x32E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E530u;
label_32e530:
    // 0x32e530: 0xc0cb8d6  jal         func_32E358
    ctx->pc = 0x32E530u;
    SET_GPR_U32(ctx, 31, 0x32E538u);
    ctx->pc = 0x32E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E530u;
    // 0x32e534: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E358u, 0x32E530u, 0x32E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E538u;
label_32e538:
    // 0x32e538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32e538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e53c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32e540: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x32E540u;
    {
        const bool branch_taken_0x32e540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E540u;
        // 0x32e544: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e540) {
            ctx->pc = 0x32E5D4u;
            goto label_32e5d4;
        }
    }
    ctx->pc = 0x32E548u;
    // 0x32e548: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x32e548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x32e54c: 0x24445ea8  addiu       $a0, $v0, 0x5EA8
    ctx->pc = 0x32e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
    // 0x32e550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e554: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x32e554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32e558: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x32e558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e55c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x32E55Cu;
    {
        const bool branch_taken_0x32e55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E55Cu;
        // 0x32e560: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e55c) {
            ctx->pc = 0x32E5D4u;
            goto label_32e5d4;
        }
    }
    ctx->pc = 0x32E564u;
    // 0x32e564: 0x2416000e  addiu       $s6, $zero, 0xE
    ctx->pc = 0x32e564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32e568: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x32e568u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x32e56c: 0x0  nop
    ctx->pc = 0x32e56cu;
    // NOP
label_32e570:
    // 0x32e570: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E570u;
    SET_GPR_U32(ctx, 31, 0x32E578u);
    ctx->pc = 0x32E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E570u;
    // 0x32e574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E570u, 0x32E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E578u;
label_32e578:
    // 0x32e578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32e578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e580: 0xc0c9cd6  jal         func_327358
    ctx->pc = 0x32E580u;
    SET_GPR_U32(ctx, 31, 0x32E588u);
    ctx->pc = 0x32E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E580u;
    // 0x32e584: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327358u, 0x32E580u, 0x32E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E588u;
label_32e588:
    // 0x32e588: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x32e588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x32e58c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e590: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x32e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x32e594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e598: 0xc0cb92c  jal         func_32E4B0
    ctx->pc = 0x32E598u;
    SET_GPR_U32(ctx, 31, 0x32E5A0u);
    ctx->pc = 0x32E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E598u;
    // 0x32e59c: 0x80460000  lb          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E4B0u;
    goto label_32e4b0;
    ctx->pc = 0x32E5A0u;
label_32e5a0:
    // 0x32e5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32e5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e5a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32e5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e5ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32e5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e5b0: 0xc0c9cf0  jal         func_3273C0
    ctx->pc = 0x32E5B0u;
    SET_GPR_U32(ctx, 31, 0x32E5B8u);
    ctx->pc = 0x32E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E5B0u;
    // 0x32e5b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3273C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3273C0u, 0x32E5B0u, 0x32E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E5B8u;
label_32e5b8:
    // 0x32e5b8: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E5B8u;
    {
        const bool branch_taken_0x32e5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x32E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5B8u;
        // 0x32e5bc: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e5b8) {
            ctx->pc = 0x32E5D4u;
            goto label_32e5d4;
        }
    }
    ctx->pc = 0x32E5C0u;
    // 0x32e5c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x32e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x32e5c4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x32e5c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e5c8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x32e5c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32e5cc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x32E5CCu;
    {
        const bool branch_taken_0x32e5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e5cc) {
            ctx->pc = 0x32E570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e570;
        }
    }
    ctx->pc = 0x32E5D4u;
label_32e5d4:
    // 0x32e5d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32e5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e5d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x32e5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e5dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x32e5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32e5e0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x32e5e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e5e4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x32e5e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e5e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e5e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e5ec: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x32e5ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e5f0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x32e5f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e5f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5F8u;
        // 0x32e5fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E600u;
}
