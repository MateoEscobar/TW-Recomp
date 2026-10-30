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

// Function: sub_004693F0
// Address: 0x4693f0 - 0x469528
void sub_004693F0_0x4693f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004693F0_0x4693f0");
#endif

    switch (ctx->pc) {
        case 0x4693f0u: goto label_4693f0;
        case 0x4693f4u: goto label_4693f4;
        case 0x4693f8u: goto label_4693f8;
        case 0x4693fcu: goto label_4693fc;
        case 0x469400u: goto label_469400;
        case 0x469404u: goto label_469404;
        case 0x469408u: goto label_469408;
        case 0x46940cu: goto label_46940c;
        case 0x469410u: goto label_469410;
        case 0x469414u: goto label_469414;
        case 0x469418u: goto label_469418;
        case 0x46941cu: goto label_46941c;
        case 0x469420u: goto label_469420;
        case 0x469424u: goto label_469424;
        case 0x469428u: goto label_469428;
        case 0x46942cu: goto label_46942c;
        case 0x469430u: goto label_469430;
        case 0x469434u: goto label_469434;
        case 0x469438u: goto label_469438;
        case 0x46943cu: goto label_46943c;
        case 0x469440u: goto label_469440;
        case 0x469444u: goto label_469444;
        case 0x469448u: goto label_469448;
        case 0x46944cu: goto label_46944c;
        case 0x469450u: goto label_469450;
        case 0x469454u: goto label_469454;
        case 0x469458u: goto label_469458;
        case 0x46945cu: goto label_46945c;
        case 0x469460u: goto label_469460;
        case 0x469464u: goto label_469464;
        case 0x469468u: goto label_469468;
        case 0x46946cu: goto label_46946c;
        case 0x469470u: goto label_469470;
        case 0x469474u: goto label_469474;
        case 0x469478u: goto label_469478;
        case 0x46947cu: goto label_46947c;
        case 0x469480u: goto label_469480;
        case 0x469484u: goto label_469484;
        case 0x469488u: goto label_469488;
        case 0x46948cu: goto label_46948c;
        case 0x469490u: goto label_469490;
        case 0x469494u: goto label_469494;
        case 0x469498u: goto label_469498;
        case 0x46949cu: goto label_46949c;
        case 0x4694a0u: goto label_4694a0;
        case 0x4694a4u: goto label_4694a4;
        case 0x4694a8u: goto label_4694a8;
        case 0x4694acu: goto label_4694ac;
        case 0x4694b0u: goto label_4694b0;
        case 0x4694b4u: goto label_4694b4;
        case 0x4694b8u: goto label_4694b8;
        case 0x4694bcu: goto label_4694bc;
        case 0x4694c0u: goto label_4694c0;
        case 0x4694c4u: goto label_4694c4;
        case 0x4694c8u: goto label_4694c8;
        case 0x4694ccu: goto label_4694cc;
        case 0x4694d0u: goto label_4694d0;
        case 0x4694d4u: goto label_4694d4;
        case 0x4694d8u: goto label_4694d8;
        case 0x4694dcu: goto label_4694dc;
        case 0x4694e0u: goto label_4694e0;
        case 0x4694e4u: goto label_4694e4;
        case 0x4694e8u: goto label_4694e8;
        case 0x4694ecu: goto label_4694ec;
        case 0x4694f0u: goto label_4694f0;
        case 0x4694f4u: goto label_4694f4;
        case 0x4694f8u: goto label_4694f8;
        case 0x4694fcu: goto label_4694fc;
        case 0x469500u: goto label_469500;
        case 0x469504u: goto label_469504;
        case 0x469508u: goto label_469508;
        case 0x46950cu: goto label_46950c;
        case 0x469510u: goto label_469510;
        case 0x469514u: goto label_469514;
        case 0x469518u: goto label_469518;
        case 0x46951cu: goto label_46951c;
        case 0x469520u: goto label_469520;
        case 0x469524u: goto label_469524;
        default: break;
    }

    ctx->pc = 0x4693f0u;

label_4693f0:
    // 0x4693f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4693f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4693f4:
    // 0x4693f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4693f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4693f8:
    // 0x4693f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4693f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4693fc:
    // 0x4693fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4693fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_469400:
    // 0x469400: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x469400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_469404:
    // 0x469404: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x469404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_469408:
    // 0x469408: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x469408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_46940c:
    // 0x46940c: 0x2484e6c8  addiu       $a0, $a0, -0x1938
    ctx->pc = 0x46940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960840));
label_469410:
    // 0x469410: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x469410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_469414:
    // 0x469414: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x469414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_469418:
    // 0x469418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46941c:
    // 0x46941c: 0xc11ffb4  jal         func_47FED0
label_469420:
    if (ctx->pc == 0x469420u) {
        ctx->pc = 0x469420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46941Cu;
        // 0x469420: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469424u;
        goto label_469424;
    }
    ctx->pc = 0x46941Cu;
    SET_GPR_U32(ctx, 31, 0x469424u);
    ctx->pc = 0x469420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46941Cu;
    // 0x469420: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46941Cu, 0x469424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469424u;
label_469424:
    // 0x469424: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x469424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_469428:
    // 0x469428: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x469428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_46942c:
    // 0x46942c: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_469430:
    if (ctx->pc == 0x469430u) {
        ctx->pc = 0x469430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46942Cu;
        // 0x469430: 0x2473aac8  addiu       $s3, $v1, -0x5538 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469434u;
        goto label_469434;
    }
    ctx->pc = 0x46942Cu;
    {
        const bool branch_taken_0x46942c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x469430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46942Cu;
        // 0x469430: 0x2473aac8  addiu       $s3, $v1, -0x5538 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46942c) {
            ctx->pc = 0x469454u;
            goto label_469454;
        }
    }
    ctx->pc = 0x469434u;
label_469434:
    // 0x469434: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x469434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_469438:
    // 0x469438: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x469438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46943c:
    // 0x46943c: 0x260f809  jalr        $s3
label_469440:
    if (ctx->pc == 0x469440u) {
        ctx->pc = 0x469440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46943Cu;
        // 0x469440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469444u;
        goto label_469444;
    }
    ctx->pc = 0x46943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x469444u);
        ctx->pc = 0x469440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46943Cu;
        // 0x469440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46943Cu, 0x469444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x469444u;
label_469444:
    // 0x469444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_469448:
    if (ctx->pc == 0x469448u) {
        ctx->pc = 0x469448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469444u;
        // 0x469448: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46944Cu;
        goto label_46944c;
    }
    ctx->pc = 0x469444u;
    {
        const bool branch_taken_0x469444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469444u;
        // 0x469448: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469444) {
            ctx->pc = 0x469454u;
            goto label_469454;
        }
    }
    ctx->pc = 0x46944Cu;
label_46944c:
    // 0x46944c: 0x1451fffa  bne         $v0, $s1, . + 4 + (-0x6 << 2)
label_469450:
    if (ctx->pc == 0x469450u) {
        ctx->pc = 0x469450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46944Cu;
        // 0x469450: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469454u;
        goto label_469454;
    }
    ctx->pc = 0x46944Cu;
    {
        const bool branch_taken_0x46944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x469450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46944Cu;
        // 0x469450: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46944c) {
            ctx->pc = 0x469438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469438;
        }
    }
    ctx->pc = 0x469454u;
label_469454:
    // 0x469454: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x469454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_469458:
    // 0x469458: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x469458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_46945c:
    // 0x46945c: 0x2454aa30  addiu       $s4, $v0, -0x55D0
    ctx->pc = 0x46945cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
label_469460:
    // 0x469460: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x469460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_469464:
    // 0x469464: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
label_469468:
    if (ctx->pc == 0x469468u) {
        ctx->pc = 0x469468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469464u;
        // 0x469468: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46946Cu;
        goto label_46946c;
    }
    ctx->pc = 0x469464u;
    {
        const bool branch_taken_0x469464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x469468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469464u;
        // 0x469468: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469464) {
            ctx->pc = 0x469494u;
            goto label_469494;
        }
    }
    ctx->pc = 0x46946Cu;
label_46946c:
    // 0x46946c: 0x8f8484c0  lw          $a0, -0x7B40($gp)
    ctx->pc = 0x46946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
label_469470:
    // 0x469470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x469470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469474:
    // 0x469474: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x469474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_469478:
    // 0x469478: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x469478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_46947c:
    // 0x46947c: 0x280f809  jalr        $s4
label_469480:
    if (ctx->pc == 0x469480u) {
        ctx->pc = 0x469480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46947Cu;
        // 0x469480: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469484u;
        goto label_469484;
    }
    ctx->pc = 0x46947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x469484u);
        ctx->pc = 0x469480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46947Cu;
        // 0x469480: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46947Cu, 0x469484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x469484u;
label_469484:
    // 0x469484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_469488:
    if (ctx->pc == 0x469488u) {
        ctx->pc = 0x469488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469484u;
        // 0x469488: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46948Cu;
        goto label_46948c;
    }
    ctx->pc = 0x469484u;
    {
        const bool branch_taken_0x469484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469484u;
        // 0x469488: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469484) {
            ctx->pc = 0x469494u;
            goto label_469494;
        }
    }
    ctx->pc = 0x46948Cu;
label_46948c:
    // 0x46948c: 0x5471fff8  bnel        $v1, $s1, . + 4 + (-0x8 << 2)
label_469490:
    if (ctx->pc == 0x469490u) {
        ctx->pc = 0x469490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46948Cu;
        // 0x469490: 0x8f8484c0  lw          $a0, -0x7B40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469494u;
        goto label_469494;
    }
    ctx->pc = 0x46948Cu;
    {
        const bool branch_taken_0x46948c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x46948c) {
            ctx->pc = 0x469490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46948Cu;
            // 0x469490: 0x8f8484c0  lw          $a0, -0x7B40($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x469470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469470;
        }
    }
    ctx->pc = 0x469494u;
label_469494:
    // 0x469494: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x469494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_469498:
    // 0x469498: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x469498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_46949c:
    // 0x46949c: 0x1073000b  beq         $v1, $s3, . + 4 + (0xB << 2)
label_4694a0:
    if (ctx->pc == 0x4694A0u) {
        ctx->pc = 0x4694A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46949Cu;
        // 0x4694a0: 0x2451aa70  addiu       $s1, $v0, -0x5590 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4694A4u;
        goto label_4694a4;
    }
    ctx->pc = 0x46949Cu;
    {
        const bool branch_taken_0x46949c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x4694A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46949Cu;
        // 0x4694a0: 0x2451aa70  addiu       $s1, $v0, -0x5590 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46949c) {
            ctx->pc = 0x4694CCu;
            goto label_4694cc;
        }
    }
    ctx->pc = 0x4694A4u;
label_4694a4:
    // 0x4694a4: 0x8f8484bc  lw          $a0, -0x7B44($gp)
    ctx->pc = 0x4694a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
label_4694a8:
    // 0x4694a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4694a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4694ac:
    // 0x4694ac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x4694acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4694b0:
    // 0x4694b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4694b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4694b4:
    // 0x4694b4: 0x220f809  jalr        $s1
label_4694b8:
    if (ctx->pc == 0x4694B8u) {
        ctx->pc = 0x4694B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694B4u;
        // 0x4694b8: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4694BCu;
        goto label_4694bc;
    }
    ctx->pc = 0x4694B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x4694BCu);
        ctx->pc = 0x4694B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694B4u;
        // 0x4694b8: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4694B4u, 0x4694BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4694BCu;
label_4694bc:
    // 0x4694bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4694c0:
    if (ctx->pc == 0x4694C0u) {
        ctx->pc = 0x4694C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694BCu;
        // 0x4694c0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4694C4u;
        goto label_4694c4;
    }
    ctx->pc = 0x4694BCu;
    {
        const bool branch_taken_0x4694bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4694C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694BCu;
        // 0x4694c0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4694bc) {
            ctx->pc = 0x4694CCu;
            goto label_4694cc;
        }
    }
    ctx->pc = 0x4694C4u;
label_4694c4:
    // 0x4694c4: 0x1473fff8  bne         $v1, $s3, . + 4 + (-0x8 << 2)
label_4694c8:
    if (ctx->pc == 0x4694C8u) {
        ctx->pc = 0x4694C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694C4u;
        // 0x4694c8: 0x8f8484bc  lw          $a0, -0x7B44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4694CCu;
        goto label_4694cc;
    }
    ctx->pc = 0x4694C4u;
    {
        const bool branch_taken_0x4694c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x4694C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694C4u;
        // 0x4694c8: 0x8f8484bc  lw          $a0, -0x7B44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4694c4) {
            ctx->pc = 0x4694A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4694a8;
        }
    }
    ctx->pc = 0x4694CCu;
label_4694cc:
    // 0x4694cc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4694ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4694d0:
    // 0x4694d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4694d4:
    if (ctx->pc == 0x4694D4u) {
        ctx->pc = 0x4694D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694D0u;
        // 0x4694d4: 0x8f8388b8  lw          $v1, -0x7748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4694D8u;
        goto label_4694d8;
    }
    ctx->pc = 0x4694D0u;
    {
        const bool branch_taken_0x4694d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4694D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694D0u;
        // 0x4694d4: 0x8f8388b8  lw          $v1, -0x7748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4694d0) {
            ctx->pc = 0x4694E4u;
            goto label_4694e4;
        }
    }
    ctx->pc = 0x4694D8u;
label_4694d8:
    // 0x4694d8: 0xc120f56  jal         func_483D58
label_4694dc:
    if (ctx->pc == 0x4694DCu) {
        ctx->pc = 0x4694E0u;
        goto label_4694e0;
    }
    ctx->pc = 0x4694D8u;
    SET_GPR_U32(ctx, 31, 0x4694E0u);
    ctx->pc = 0x483D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483D58u, 0x4694D8u, 0x4694E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4694E0u;
label_4694e0:
    // 0x4694e0: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x4694e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
label_4694e4:
    // 0x4694e4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4694e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4694e8:
    // 0x4694e8: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x4694e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_4694ec:
    // 0x4694ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4694ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4694f0:
    // 0x4694f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4694f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4694f4:
    // 0x4694f4: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x4694f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_4694f8:
    // 0x4694f8: 0x40f809  jalr        $v0
label_4694fc:
    if (ctx->pc == 0x4694FCu) {
        ctx->pc = 0x4694FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694F8u;
        // 0x4694fc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469500u;
        goto label_469500;
    }
    ctx->pc = 0x4694F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x469500u);
        ctx->pc = 0x4694FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4694F8u;
        // 0x4694fc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4694F8u, 0x469500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x469500u;
label_469500:
    // 0x469500: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x469500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_469504:
    // 0x469504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x469504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469508:
    // 0x469508: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x469508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46950c:
    // 0x46950c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46950cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_469510:
    // 0x469510: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x469510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_469514:
    // 0x469514: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x469514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_469518:
    // 0x469518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46951c:
    // 0x46951c: 0x3e00008  jr          $ra
label_469520:
    if (ctx->pc == 0x469520u) {
        ctx->pc = 0x469520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46951Cu;
        // 0x469520: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469524u;
        goto label_469524;
    }
    ctx->pc = 0x46951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46951Cu;
        // 0x469520: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469524u;
label_469524:
    // 0x469524: 0x0  nop
    ctx->pc = 0x469524u;
    // NOP
    ctx->pc = 0x469528u;
}
