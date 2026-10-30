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

// Function: sub_002AC458
// Address: 0x2ac458 - 0x2ac5e0
void sub_002AC458_0x2ac458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC458_0x2ac458");
#endif

    switch (ctx->pc) {
        case 0x2ac490u: goto label_2ac490;
        case 0x2ac4acu: goto label_2ac4ac;
        case 0x2ac4b4u: goto label_2ac4b4;
        case 0x2ac4e0u: goto label_2ac4e0;
        case 0x2ac508u: goto label_2ac508;
        case 0x2ac524u: goto label_2ac524;
        case 0x2ac538u: goto label_2ac538;
        case 0x2ac540u: goto label_2ac540;
        case 0x2ac568u: goto label_2ac568;
        case 0x2ac580u: goto label_2ac580;
        case 0x2ac5a8u: goto label_2ac5a8;
        default: break;
    }

    ctx->pc = 0x2ac458u;

    // 0x2ac458: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ac45c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ac45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ac460: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ac460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ac464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ac464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac468: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ac468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ac46c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ac46cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac470: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ac470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ac474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac478: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ac478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ac47c: 0x92500031  lbu         $s0, 0x31($s2)
    ctx->pc = 0x2ac47cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x2ac480: 0x16130023  bne         $s0, $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2AC480u;
    {
        const bool branch_taken_0x2ac480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC480u;
        // 0x2ac484: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac480) {
            ctx->pc = 0x2AC510u;
            goto label_2ac510;
        }
    }
    ctx->pc = 0x2AC488u;
    // 0x2ac488: 0xc08a0f2  jal         func_2283C8
    ctx->pc = 0x2AC488u;
    SET_GPR_U32(ctx, 31, 0x2AC490u);
    ctx->pc = 0x2AC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC488u;
    // 0x2ac48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283C8u, 0x2AC488u, 0x2AC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC490u;
label_2ac490:
    // 0x2ac490: 0x54500015  bnel        $v0, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AC490u;
    {
        const bool branch_taken_0x2ac490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ac490) {
            ctx->pc = 0x2AC494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC490u;
            // 0x2ac494: 0x92420034  lbu         $v0, 0x34($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC4E8u;
            goto label_2ac4e8;
        }
    }
    ctx->pc = 0x2AC498u;
    // 0x2ac498: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2ac498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2ac49c: 0xa2500034  sb          $s0, 0x34($s2)
    ctx->pc = 0x2ac49cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ac4a0: 0xa2420036  sb          $v0, 0x36($s2)
    ctx->pc = 0x2ac4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac4a4: 0xc08a0ea  jal         func_2283A8
    ctx->pc = 0x2AC4A4u;
    SET_GPR_U32(ctx, 31, 0x2AC4ACu);
    ctx->pc = 0x2AC4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4A4u;
    // 0x2ac4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283A8u, 0x2AC4A4u, 0x2AC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4ACu;
label_2ac4ac:
    // 0x2ac4ac: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2AC4ACu;
    SET_GPR_U32(ctx, 31, 0x2AC4B4u);
    ctx->pc = 0x2AC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4ACu;
    // 0x2ac4b0: 0x262403f0  addiu       $a0, $s1, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2AC4ACu, 0x2AC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4B4u;
label_2ac4b4:
    // 0x2ac4b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ac4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ac4b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac4bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac4c0: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x2ac4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ac4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4c8: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x2ac4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2ac4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac4d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ac4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac4d8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2AC4D8u;
    SET_GPR_U32(ctx, 31, 0x2AC4E0u);
    ctx->pc = 0x2AC4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4D8u;
    // 0x2ac4dc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AC4D8u, 0x2AC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4E0u;
label_2ac4e0:
    // 0x2ac4e0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2AC4E0u;
    {
        const bool branch_taken_0x2ac4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4E0u;
        // 0x2ac4e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4e0) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC4E8u;
label_2ac4e8:
    // 0x2ac4e8: 0x54500036  bnel        $v0, $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AC4E8u;
    {
        const bool branch_taken_0x2ac4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ac4e8) {
            ctx->pc = 0x2AC4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC4E8u;
            // 0x2ac4ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC4F0u;
    // 0x2ac4f0: 0x82220418  lb          $v0, 0x418($s1)
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x2ac4f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ac4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ac4f8: 0x14500031  bne         $v0, $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2AC4F8u;
    {
        const bool branch_taken_0x2ac4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4F8u;
        // 0x2ac4fc: 0x26240418  addiu       $a0, $s1, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4f8) {
            ctx->pc = 0x2AC5C0u;
            goto label_2ac5c0;
        }
    }
    ctx->pc = 0x2AC500u;
    // 0x2ac500: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2AC500u;
    SET_GPR_U32(ctx, 31, 0x2AC508u);
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2AC500u, 0x2AC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC508u;
label_2ac508:
    // 0x2ac508: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2AC508u;
    {
        const bool branch_taken_0x2ac508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC508u;
        // 0x2ac50c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac508) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC510u;
label_2ac510:
    // 0x2ac510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ac514: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AC514u;
    {
        const bool branch_taken_0x2ac514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac514) {
            ctx->pc = 0x2AC570u;
            goto label_2ac570;
        }
    }
    ctx->pc = 0x2AC51Cu;
    // 0x2ac51c: 0xc08a0f2  jal         func_2283C8
    ctx->pc = 0x2AC51Cu;
    SET_GPR_U32(ctx, 31, 0x2AC524u);
    ctx->pc = 0x2AC520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC51Cu;
    // 0x2ac520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283C8u, 0x2AC51Cu, 0x2AC524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC524u;
label_2ac524:
    // 0x2ac524: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC524u;
    {
        const bool branch_taken_0x2ac524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ac524) {
            ctx->pc = 0x2AC528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC524u;
            // 0x2ac528: 0x92440034  lbu         $a0, 0x34($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC548u;
            goto label_2ac548;
        }
    }
    ctx->pc = 0x2AC52Cu;
    // 0x2ac52c: 0xa2530034  sb          $s3, 0x34($s2)
    ctx->pc = 0x2ac52cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ac530: 0xc08a0ea  jal         func_2283A8
    ctx->pc = 0x2AC530u;
    SET_GPR_U32(ctx, 31, 0x2AC538u);
    ctx->pc = 0x2AC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC530u;
    // 0x2ac534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283A8u, 0x2AC530u, 0x2AC538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC538u;
label_2ac538:
    // 0x2ac538: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2AC538u;
    SET_GPR_U32(ctx, 31, 0x2AC540u);
    ctx->pc = 0x2AC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC538u;
    // 0x2ac53c: 0x262403f0  addiu       $a0, $s1, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2AC538u, 0x2AC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC540u;
label_2ac540:
    // 0x2ac540: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AC540u;
    {
        const bool branch_taken_0x2ac540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC540u;
        // 0x2ac544: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac540) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC548u;
label_2ac548:
    // 0x2ac548: 0x1493001e  bne         $a0, $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC548u;
    {
        const bool branch_taken_0x2ac548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x2AC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC548u;
        // 0x2ac54c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac548) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC550u;
    // 0x2ac550: 0x82220418  lb          $v0, 0x418($s1)
    ctx->pc = 0x2ac550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x2ac554: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ac554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ac558: 0x1444001a  bne         $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AC558u;
    {
        const bool branch_taken_0x2ac558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC558u;
        // 0x2ac55c: 0x26230418  addiu       $v1, $s1, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac558) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC560u;
    // 0x2ac560: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2AC560u;
    SET_GPR_U32(ctx, 31, 0x2AC568u);
    ctx->pc = 0x2AC564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC560u;
    // 0x2ac564: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2AC560u, 0x2AC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC568u;
label_2ac568:
    // 0x2ac568: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AC568u;
    {
        const bool branch_taken_0x2ac568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC568u;
        // 0x2ac56c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac568) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC570u;
label_2ac570:
    // 0x2ac570: 0x56000014  bnel        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AC570u;
    {
        const bool branch_taken_0x2ac570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac570) {
            ctx->pc = 0x2AC574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC570u;
            // 0x2ac574: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC578u;
    // 0x2ac578: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x2AC578u;
    SET_GPR_U32(ctx, 31, 0x2AC580u);
    ctx->pc = 0x2AC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC578u;
    // 0x2ac57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2AC578u, 0x2AC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC580u;
label_2ac580:
    // 0x2ac580: 0x3c014286  lui         $at, 0x4286
    ctx->pc = 0x2ac580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17030 << 16));
    // 0x2ac584: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac588: 0x0  nop
    ctx->pc = 0x2ac588u;
    // NOP
    // 0x2ac58c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ac58cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac590: 0x0  nop
    ctx->pc = 0x2ac590u;
    // NOP
    // 0x2ac594: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2AC594u;
    {
        const bool branch_taken_0x2ac594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC594u;
        // 0x2ac598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac594) {
            ctx->pc = 0x2AC5C0u;
            goto label_2ac5c0;
        }
    }
    ctx->pc = 0x2AC59Cu;
    // 0x2ac59c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ac59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2ac5a0: 0xc089998  jal         func_226660
    ctx->pc = 0x2AC5A0u;
    SET_GPR_U32(ctx, 31, 0x2AC5A8u);
    ctx->pc = 0x2AC5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC5A0u;
    // 0x2ac5a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2AC5A0u, 0x2AC5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC5A8u;
label_2ac5a8:
    // 0x2ac5a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC5A8u;
    {
        const bool branch_taken_0x2ac5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5A8u;
        // 0x2ac5ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5a8) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC5B0u;
    // 0x2ac5b0: 0x82420036  lb          $v0, 0x36($s2)
    ctx->pc = 0x2ac5b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x2ac5b4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC5B4u;
    {
        const bool branch_taken_0x2ac5b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5B4u;
        // 0x2ac5b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5b4) {
            ctx->pc = 0x2AC5C4u;
            goto label_2ac5c4;
        }
    }
    ctx->pc = 0x2AC5BCu;
    // 0x2ac5bc: 0xa2420036  sb          $v0, 0x36($s2)
    ctx->pc = 0x2ac5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
label_2ac5c0:
    // 0x2ac5c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ac5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ac5c4:
    // 0x2ac5c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ac5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac5c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ac5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac5cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ac5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5D4u;
        // 0x2ac5d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC5DCu;
    // 0x2ac5dc: 0x0  nop
    ctx->pc = 0x2ac5dcu;
    // NOP
    ctx->pc = 0x2ac5e0u;
}
