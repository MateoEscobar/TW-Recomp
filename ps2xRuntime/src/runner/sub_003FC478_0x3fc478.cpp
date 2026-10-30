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

// Function: sub_003FC478
// Address: 0x3fc478 - 0x3fc568
void sub_003FC478_0x3fc478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC478_0x3fc478");
#endif

    switch (ctx->pc) {
        case 0x3fc478u: goto label_3fc478;
        case 0x3fc47cu: goto label_3fc47c;
        case 0x3fc480u: goto label_3fc480;
        case 0x3fc484u: goto label_3fc484;
        case 0x3fc488u: goto label_3fc488;
        case 0x3fc48cu: goto label_3fc48c;
        case 0x3fc490u: goto label_3fc490;
        case 0x3fc494u: goto label_3fc494;
        case 0x3fc498u: goto label_3fc498;
        case 0x3fc49cu: goto label_3fc49c;
        case 0x3fc4a0u: goto label_3fc4a0;
        case 0x3fc4a4u: goto label_3fc4a4;
        case 0x3fc4a8u: goto label_3fc4a8;
        case 0x3fc4acu: goto label_3fc4ac;
        case 0x3fc4b0u: goto label_3fc4b0;
        case 0x3fc4b4u: goto label_3fc4b4;
        case 0x3fc4b8u: goto label_3fc4b8;
        case 0x3fc4bcu: goto label_3fc4bc;
        case 0x3fc4c0u: goto label_3fc4c0;
        case 0x3fc4c4u: goto label_3fc4c4;
        case 0x3fc4c8u: goto label_3fc4c8;
        case 0x3fc4ccu: goto label_3fc4cc;
        case 0x3fc4d0u: goto label_3fc4d0;
        case 0x3fc4d4u: goto label_3fc4d4;
        case 0x3fc4d8u: goto label_3fc4d8;
        case 0x3fc4dcu: goto label_3fc4dc;
        case 0x3fc4e0u: goto label_3fc4e0;
        case 0x3fc4e4u: goto label_3fc4e4;
        case 0x3fc4e8u: goto label_3fc4e8;
        case 0x3fc4ecu: goto label_3fc4ec;
        case 0x3fc4f0u: goto label_3fc4f0;
        case 0x3fc4f4u: goto label_3fc4f4;
        case 0x3fc4f8u: goto label_3fc4f8;
        case 0x3fc4fcu: goto label_3fc4fc;
        case 0x3fc500u: goto label_3fc500;
        case 0x3fc504u: goto label_3fc504;
        case 0x3fc508u: goto label_3fc508;
        case 0x3fc50cu: goto label_3fc50c;
        case 0x3fc510u: goto label_3fc510;
        case 0x3fc514u: goto label_3fc514;
        case 0x3fc518u: goto label_3fc518;
        case 0x3fc51cu: goto label_3fc51c;
        case 0x3fc520u: goto label_3fc520;
        case 0x3fc524u: goto label_3fc524;
        case 0x3fc528u: goto label_3fc528;
        case 0x3fc52cu: goto label_3fc52c;
        case 0x3fc530u: goto label_3fc530;
        case 0x3fc534u: goto label_3fc534;
        case 0x3fc538u: goto label_3fc538;
        case 0x3fc53cu: goto label_3fc53c;
        case 0x3fc540u: goto label_3fc540;
        case 0x3fc544u: goto label_3fc544;
        case 0x3fc548u: goto label_3fc548;
        case 0x3fc54cu: goto label_3fc54c;
        case 0x3fc550u: goto label_3fc550;
        case 0x3fc554u: goto label_3fc554;
        case 0x3fc558u: goto label_3fc558;
        case 0x3fc55cu: goto label_3fc55c;
        case 0x3fc560u: goto label_3fc560;
        case 0x3fc564u: goto label_3fc564;
        default: break;
    }

    ctx->pc = 0x3fc478u;

label_3fc478:
    // 0x3fc478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3fc478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3fc47c:
    // 0x3fc47c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fc47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fc480:
    // 0x3fc480: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3fc480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3fc484:
    // 0x3fc484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fc484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc488:
    // 0x3fc488: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fc488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3fc48c:
    // 0x3fc48c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3fc48cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fc490:
    // 0x3fc490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fc490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3fc494:
    // 0x3fc494: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fc494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc498:
    // 0x3fc498: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3fc498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3fc49c:
    // 0x3fc49c: 0xc0ea146  jal         func_3A8518
label_3fc4a0:
    if (ctx->pc == 0x3FC4A0u) {
        ctx->pc = 0x3FC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC49Cu;
        // 0x3fc4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC4A4u;
        goto label_3fc4a4;
    }
    ctx->pc = 0x3FC49Cu;
    SET_GPR_U32(ctx, 31, 0x3FC4A4u);
    ctx->pc = 0x3FC4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC49Cu;
    // 0x3fc4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FC49Cu, 0x3FC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC4A4u;
label_3fc4a4:
    // 0x3fc4a4: 0x2443fffd  addiu       $v1, $v0, -0x3
    ctx->pc = 0x3fc4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_3fc4a8:
    // 0x3fc4a8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3fc4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3fc4ac:
    // 0x3fc4ac: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3fc4b0:
    if (ctx->pc == 0x3FC4B0u) {
        ctx->pc = 0x3FC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4ACu;
        // 0x3fc4b0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC4B4u;
        goto label_3fc4b4;
    }
    ctx->pc = 0x3FC4ACu;
    {
        const bool branch_taken_0x3fc4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4ACu;
        // 0x3fc4b0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc4ac) {
            ctx->pc = 0x3FC54Cu;
            goto label_3fc54c;
        }
    }
    ctx->pc = 0x3FC4B4u;
label_3fc4b4:
    // 0x3fc4b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fc4b8:
    // 0x3fc4b8: 0x24427270  addiu       $v0, $v0, 0x7270
    ctx->pc = 0x3fc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
label_3fc4bc:
    // 0x3fc4bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fc4c0:
    // 0x3fc4c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3fc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc4c4:
    // 0x3fc4c4: 0x800008  jr          $a0
label_3fc4c8:
    if (ctx->pc == 0x3FC4C8u) {
        ctx->pc = 0x3FC4CCu;
        goto label_3fc4cc;
    }
    ctx->pc = 0x3FC4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FC4CCu: goto label_3fc4cc;
            case 0x3FC4FCu: goto label_3fc4fc;
            case 0x3FC51Cu: goto label_3fc51c;
            case 0x3FC528u: goto label_3fc528;
            case 0x3FC534u: goto label_3fc534;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC4C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3FC4CCu;
label_3fc4cc:
    // 0x3fc4cc: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x3fc4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3fc4d0:
    // 0x3fc4d0: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
label_3fc4d4:
    if (ctx->pc == 0x3FC4D4u) {
        ctx->pc = 0x3FC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4D0u;
        // 0x3fc4d4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC4D8u;
        goto label_3fc4d8;
    }
    ctx->pc = 0x3FC4D0u;
    {
        const bool branch_taken_0x3fc4d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4D0u;
        // 0x3fc4d4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc4d0) {
            ctx->pc = 0x3FC54Cu;
            goto label_3fc54c;
        }
    }
    ctx->pc = 0x3FC4D8u;
label_3fc4d8:
    // 0x3fc4d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3fc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3fc4dc:
    // 0x3fc4dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fc4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fc4e0:
    // 0x3fc4e0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3fc4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3fc4e4:
    // 0x3fc4e4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fc4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fc4e8:
    // 0x3fc4e8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fc4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fc4ec:
    // 0x3fc4ec: 0x60f809  jalr        $v1
label_3fc4f0:
    if (ctx->pc == 0x3FC4F0u) {
        ctx->pc = 0x3FC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4ECu;
        // 0x3fc4f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC4F4u;
        goto label_3fc4f4;
    }
    ctx->pc = 0x3FC4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FC4F4u);
        ctx->pc = 0x3FC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4ECu;
        // 0x3fc4f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC4ECu, 0x3FC4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC4F4u;
label_3fc4f4:
    // 0x3fc4f4: 0x10000016  b           . + 4 + (0x16 << 2)
label_3fc4f8:
    if (ctx->pc == 0x3FC4F8u) {
        ctx->pc = 0x3FC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4F4u;
        // 0x3fc4f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC4FCu;
        goto label_3fc4fc;
    }
    ctx->pc = 0x3FC4F4u;
    {
        const bool branch_taken_0x3fc4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4F4u;
        // 0x3fc4f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc4f4) {
            ctx->pc = 0x3FC550u;
            goto label_3fc550;
        }
    }
    ctx->pc = 0x3FC4FCu;
label_3fc4fc:
    // 0x3fc4fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3fc4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fc500:
    // 0x3fc500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc504:
    // 0x3fc504: 0xc0e9636  jal         func_3A58D8
label_3fc508:
    if (ctx->pc == 0x3FC508u) {
        ctx->pc = 0x3FC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC504u;
        // 0x3fc508: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC50Cu;
        goto label_3fc50c;
    }
    ctx->pc = 0x3FC504u;
    SET_GPR_U32(ctx, 31, 0x3FC50Cu);
    ctx->pc = 0x3FC508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC504u;
    // 0x3fc508: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58D8u, 0x3FC504u, 0x3FC50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC50Cu;
label_3fc50c:
    // 0x3fc50c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3fc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3fc510:
    // 0x3fc510: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x3fc510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3fc514:
    // 0x3fc514: 0x1000000d  b           . + 4 + (0xD << 2)
label_3fc518:
    if (ctx->pc == 0x3FC518u) {
        ctx->pc = 0x3FC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC514u;
        // 0x3fc518: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC51Cu;
        goto label_3fc51c;
    }
    ctx->pc = 0x3FC514u;
    {
        const bool branch_taken_0x3fc514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC514u;
        // 0x3fc518: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc514) {
            ctx->pc = 0x3FC54Cu;
            goto label_3fc54c;
        }
    }
    ctx->pc = 0x3FC51Cu;
label_3fc51c:
    // 0x3fc51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fc520:
    // 0x3fc520: 0x1000000a  b           . + 4 + (0xA << 2)
label_3fc524:
    if (ctx->pc == 0x3FC524u) {
        ctx->pc = 0x3FC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC520u;
        // 0x3fc524: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC528u;
        goto label_3fc528;
    }
    ctx->pc = 0x3FC520u;
    {
        const bool branch_taken_0x3fc520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC520u;
        // 0x3fc524: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc520) {
            ctx->pc = 0x3FC54Cu;
            goto label_3fc54c;
        }
    }
    ctx->pc = 0x3FC528u;
label_3fc528:
    // 0x3fc528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fc52c:
    // 0x3fc52c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fc530:
    if (ctx->pc == 0x3FC530u) {
        ctx->pc = 0x3FC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC52Cu;
        // 0x3fc530: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC534u;
        goto label_3fc534;
    }
    ctx->pc = 0x3FC52Cu;
    {
        const bool branch_taken_0x3fc52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC52Cu;
        // 0x3fc530: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc52c) {
            ctx->pc = 0x3FC54Cu;
            goto label_3fc54c;
        }
    }
    ctx->pc = 0x3FC534u;
label_3fc534:
    // 0x3fc534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fc534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fc538:
    // 0x3fc538: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3fc538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fc53c:
    // 0x3fc53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fc53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fc540:
    // 0x3fc540: 0xc0e9636  jal         func_3A58D8
label_3fc544:
    if (ctx->pc == 0x3FC544u) {
        ctx->pc = 0x3FC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC540u;
        // 0x3fc544: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC548u;
        goto label_3fc548;
    }
    ctx->pc = 0x3FC540u;
    SET_GPR_U32(ctx, 31, 0x3FC548u);
    ctx->pc = 0x3FC544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC540u;
    // 0x3fc544: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58D8u, 0x3FC540u, 0x3FC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC548u;
label_3fc548:
    // 0x3fc548: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x3fc548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3fc54c:
    // 0x3fc54c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fc54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fc550:
    // 0x3fc550: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fc550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc554:
    // 0x3fc554: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3fc554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc558:
    // 0x3fc558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fc558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3fc55c:
    // 0x3fc55c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3fc55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fc560:
    // 0x3fc560: 0x3e00008  jr          $ra
label_3fc564:
    if (ctx->pc == 0x3FC564u) {
        ctx->pc = 0x3FC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC560u;
        // 0x3fc564: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC568u;
        goto label_fallthrough_0x3fc560;
    }
    ctx->pc = 0x3FC560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC560u;
        // 0x3fc564: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fc560:
    ctx->pc = 0x3FC568u;
}
