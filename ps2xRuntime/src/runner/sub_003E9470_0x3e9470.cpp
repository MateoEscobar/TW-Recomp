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

// Function: sub_003E9470
// Address: 0x3e9470 - 0x3e9544
void sub_003E9470_0x3e9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9470_0x3e9470");
#endif

    switch (ctx->pc) {
        case 0x3e9470u: goto label_3e9470;
        case 0x3e9474u: goto label_3e9474;
        case 0x3e9478u: goto label_3e9478;
        case 0x3e947cu: goto label_3e947c;
        case 0x3e9480u: goto label_3e9480;
        case 0x3e9484u: goto label_3e9484;
        case 0x3e9488u: goto label_3e9488;
        case 0x3e948cu: goto label_3e948c;
        case 0x3e9490u: goto label_3e9490;
        case 0x3e9494u: goto label_3e9494;
        case 0x3e9498u: goto label_3e9498;
        case 0x3e949cu: goto label_3e949c;
        case 0x3e94a0u: goto label_3e94a0;
        case 0x3e94a4u: goto label_3e94a4;
        case 0x3e94a8u: goto label_3e94a8;
        case 0x3e94acu: goto label_3e94ac;
        case 0x3e94b0u: goto label_3e94b0;
        case 0x3e94b4u: goto label_3e94b4;
        case 0x3e94b8u: goto label_3e94b8;
        case 0x3e94bcu: goto label_3e94bc;
        case 0x3e94c0u: goto label_3e94c0;
        case 0x3e94c4u: goto label_3e94c4;
        case 0x3e94c8u: goto label_3e94c8;
        case 0x3e94ccu: goto label_3e94cc;
        case 0x3e94d0u: goto label_3e94d0;
        case 0x3e94d4u: goto label_3e94d4;
        case 0x3e94d8u: goto label_3e94d8;
        case 0x3e94dcu: goto label_3e94dc;
        case 0x3e94e0u: goto label_3e94e0;
        case 0x3e94e4u: goto label_3e94e4;
        case 0x3e94e8u: goto label_3e94e8;
        case 0x3e94ecu: goto label_3e94ec;
        case 0x3e94f0u: goto label_3e94f0;
        case 0x3e94f4u: goto label_3e94f4;
        case 0x3e94f8u: goto label_3e94f8;
        case 0x3e94fcu: goto label_3e94fc;
        case 0x3e9500u: goto label_3e9500;
        case 0x3e9504u: goto label_3e9504;
        case 0x3e9508u: goto label_3e9508;
        case 0x3e950cu: goto label_3e950c;
        case 0x3e9510u: goto label_3e9510;
        case 0x3e9514u: goto label_3e9514;
        case 0x3e9518u: goto label_3e9518;
        case 0x3e951cu: goto label_3e951c;
        case 0x3e9520u: goto label_3e9520;
        case 0x3e9524u: goto label_3e9524;
        case 0x3e9528u: goto label_3e9528;
        case 0x3e952cu: goto label_3e952c;
        case 0x3e9530u: goto label_3e9530;
        case 0x3e9534u: goto label_3e9534;
        case 0x3e9538u: goto label_3e9538;
        case 0x3e953cu: goto label_3e953c;
        case 0x3e9540u: goto label_3e9540;
        default: break;
    }

    ctx->pc = 0x3e9470u;

label_3e9470:
    // 0x3e9470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e9470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e9474:
    // 0x3e9474: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e9474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e9478:
    // 0x3e9478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e9478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e947c:
    // 0x3e947c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e947cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9480:
    // 0x3e9480: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e9480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e9484:
    // 0x3e9484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9488:
    // 0x3e9488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e948c:
    // 0x3e948c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e948cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e9490:
    // 0x3e9490: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e9490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9494:
    // 0x3e9494: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9498:
    // 0x3e9498: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e949c:
    // 0x3e949c: 0x40f809  jalr        $v0
label_3e94a0:
    if (ctx->pc == 0x3E94A0u) {
        ctx->pc = 0x3E94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E949Cu;
        // 0x3e94a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E94A4u;
        goto label_3e94a4;
    }
    ctx->pc = 0x3E949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E94A4u);
        ctx->pc = 0x3E94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E949Cu;
        // 0x3e94a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E949Cu, 0x3E94A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E94A4u;
label_3e94a4:
    // 0x3e94a4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3e94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3e94a8:
    // 0x3e94a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e94a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e94ac:
    // 0x3e94ac: 0x2c620034  sltiu       $v0, $v1, 0x34
    ctx->pc = 0x3e94acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
label_3e94b0:
    // 0x3e94b0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_3e94b4:
    if (ctx->pc == 0x3E94B4u) {
        ctx->pc = 0x3E94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94B0u;
        // 0x3e94b4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E94B8u;
        goto label_3e94b8;
    }
    ctx->pc = 0x3E94B0u;
    {
        const bool branch_taken_0x3e94b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94B0u;
        // 0x3e94b4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e94b0) {
            ctx->pc = 0x3E9544u;
            return;
        }
    }
    ctx->pc = 0x3E94B8u;
label_3e94b8:
    // 0x3e94b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e94bc:
    // 0x3e94bc: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x3e94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
label_3e94c0:
    // 0x3e94c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e94c4:
    // 0x3e94c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e94c8:
    // 0x3e94c8: 0x800008  jr          $a0
label_3e94cc:
    if (ctx->pc == 0x3E94CCu) {
        ctx->pc = 0x3E94D0u;
        goto label_3e94d0;
    }
    ctx->pc = 0x3E94C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E94D0u: goto label_3e94d0;
            case 0x3E94E4u: goto label_3e94e4;
            case 0x3E9500u: goto label_3e9500;
            case 0x3E9510u: goto label_3e9510;
            case 0x3E9520u: goto label_3e9520;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E94C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E94D0u;
label_3e94d0:
    // 0x3e94d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e94d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e94d4:
    // 0x3e94d4: 0xc0fa4f4  jal         func_3E93D0
label_3e94d8:
    if (ctx->pc == 0x3E94D8u) {
        ctx->pc = 0x3E94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94D4u;
        // 0x3e94d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E94DCu;
        goto label_3e94dc;
    }
    ctx->pc = 0x3E94D4u;
    SET_GPR_U32(ctx, 31, 0x3E94DCu);
    ctx->pc = 0x3E94D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E94D4u;
    // 0x3e94d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E93D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E93D0u, 0x3E94D4u, 0x3E94DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E94DCu;
label_3e94dc:
    // 0x3e94dc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3e94e0:
    if (ctx->pc == 0x3E94E0u) {
        ctx->pc = 0x3E94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94DCu;
        // 0x3e94e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E94E4u;
        goto label_3e94e4;
    }
    ctx->pc = 0x3E94DCu;
    {
        const bool branch_taken_0x3e94dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94DCu;
        // 0x3e94e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e94dc) {
            ctx->pc = 0x3E9548u;
            return;
        }
    }
    ctx->pc = 0x3E94E4u;
label_3e94e4:
    // 0x3e94e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e94e8:
    // 0x3e94e8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3e94e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3e94ec:
    // 0x3e94ec: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3e94ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3e94f0:
    // 0x3e94f0: 0x60f809  jalr        $v1
label_3e94f4:
    if (ctx->pc == 0x3E94F4u) {
        ctx->pc = 0x3E94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94F0u;
        // 0x3e94f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E94F8u;
        goto label_3e94f8;
    }
    ctx->pc = 0x3E94F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E94F8u);
        ctx->pc = 0x3E94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94F0u;
        // 0x3e94f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E94F0u, 0x3E94F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E94F8u;
label_3e94f8:
    // 0x3e94f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_3e94fc:
    if (ctx->pc == 0x3E94FCu) {
        ctx->pc = 0x3E94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94F8u;
        // 0x3e94fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9500u;
        goto label_3e9500;
    }
    ctx->pc = 0x3E94F8u;
    {
        const bool branch_taken_0x3e94f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94F8u;
        // 0x3e94fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e94f8) {
            ctx->pc = 0x3E9548u;
            return;
        }
    }
    ctx->pc = 0x3E9500u;
label_3e9500:
    // 0x3e9500: 0xc0e8616  jal         func_3A1858
label_3e9504:
    if (ctx->pc == 0x3E9504u) {
        ctx->pc = 0x3E9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9500u;
        // 0x3e9504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9508u;
        goto label_3e9508;
    }
    ctx->pc = 0x3E9500u;
    SET_GPR_U32(ctx, 31, 0x3E9508u);
    ctx->pc = 0x3E9504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9500u;
    // 0x3e9504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E9500u, 0x3E9508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9508u;
label_3e9508:
    // 0x3e9508: 0x1000000f  b           . + 4 + (0xF << 2)
label_3e950c:
    if (ctx->pc == 0x3E950Cu) {
        ctx->pc = 0x3E950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9508u;
        // 0x3e950c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9510u;
        goto label_3e9510;
    }
    ctx->pc = 0x3E9508u;
    {
        const bool branch_taken_0x3e9508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9508u;
        // 0x3e950c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9508) {
            ctx->pc = 0x3E9548u;
            return;
        }
    }
    ctx->pc = 0x3E9510u;
label_3e9510:
    // 0x3e9510: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e9510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e9514:
    // 0x3e9514: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3e9514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3e9518:
    // 0x3e9518: 0x10000008  b           . + 4 + (0x8 << 2)
label_3e951c:
    if (ctx->pc == 0x3E951Cu) {
        ctx->pc = 0x3E951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9518u;
        // 0x3e951c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9520u;
        goto label_3e9520;
    }
    ctx->pc = 0x3E9518u;
    {
        const bool branch_taken_0x3e9518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9518u;
        // 0x3e951c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9518) {
            ctx->pc = 0x3E953Cu;
            goto label_3e953c;
        }
    }
    ctx->pc = 0x3E9520u;
label_3e9520:
    // 0x3e9520: 0xc0ea146  jal         func_3A8518
label_3e9524:
    if (ctx->pc == 0x3E9524u) {
        ctx->pc = 0x3E9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9520u;
        // 0x3e9524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9528u;
        goto label_3e9528;
    }
    ctx->pc = 0x3E9520u;
    SET_GPR_U32(ctx, 31, 0x3E9528u);
    ctx->pc = 0x3E9524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9520u;
    // 0x3e9524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9520u, 0x3E9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9528u;
label_3e9528:
    // 0x3e9528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e952c:
    if (ctx->pc == 0x3E952Cu) {
        ctx->pc = 0x3E952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9528u;
        // 0x3e952c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9530u;
        goto label_3e9530;
    }
    ctx->pc = 0x3E9528u;
    {
        const bool branch_taken_0x3e9528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9528u;
        // 0x3e952c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9528) {
            ctx->pc = 0x3E9538u;
            goto label_3e9538;
        }
    }
    ctx->pc = 0x3E9530u;
label_3e9530:
    // 0x3e9530: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e9534:
    if (ctx->pc == 0x3E9534u) {
        ctx->pc = 0x3E9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9530u;
        // 0x3e9534: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9538u;
        goto label_3e9538;
    }
    ctx->pc = 0x3E9530u;
    {
        const bool branch_taken_0x3e9530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9530u;
        // 0x3e9534: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9530) {
            ctx->pc = 0x3E9540u;
            goto label_3e9540;
        }
    }
    ctx->pc = 0x3E9538u;
label_3e9538:
    // 0x3e9538: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e9538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e953c:
    // 0x3e953c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e9540:
    // 0x3e9540: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e9540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x3e9544u;
}
