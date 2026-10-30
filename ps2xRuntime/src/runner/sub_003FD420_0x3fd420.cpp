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

// Function: sub_003FD420
// Address: 0x3fd420 - 0x3fd600
void sub_003FD420_0x3fd420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD420_0x3fd420");
#endif

    switch (ctx->pc) {
        case 0x3fd420u: goto label_3fd420;
        case 0x3fd424u: goto label_3fd424;
        case 0x3fd428u: goto label_3fd428;
        case 0x3fd42cu: goto label_3fd42c;
        case 0x3fd430u: goto label_3fd430;
        case 0x3fd434u: goto label_3fd434;
        case 0x3fd438u: goto label_3fd438;
        case 0x3fd43cu: goto label_3fd43c;
        case 0x3fd440u: goto label_3fd440;
        case 0x3fd444u: goto label_3fd444;
        case 0x3fd448u: goto label_3fd448;
        case 0x3fd44cu: goto label_3fd44c;
        case 0x3fd450u: goto label_3fd450;
        case 0x3fd454u: goto label_3fd454;
        case 0x3fd458u: goto label_3fd458;
        case 0x3fd45cu: goto label_3fd45c;
        case 0x3fd460u: goto label_3fd460;
        case 0x3fd464u: goto label_3fd464;
        case 0x3fd468u: goto label_3fd468;
        case 0x3fd46cu: goto label_3fd46c;
        case 0x3fd470u: goto label_3fd470;
        case 0x3fd474u: goto label_3fd474;
        case 0x3fd478u: goto label_3fd478;
        case 0x3fd47cu: goto label_3fd47c;
        case 0x3fd480u: goto label_3fd480;
        case 0x3fd484u: goto label_3fd484;
        case 0x3fd488u: goto label_3fd488;
        case 0x3fd48cu: goto label_3fd48c;
        case 0x3fd490u: goto label_3fd490;
        case 0x3fd494u: goto label_3fd494;
        case 0x3fd498u: goto label_3fd498;
        case 0x3fd49cu: goto label_3fd49c;
        case 0x3fd4a0u: goto label_3fd4a0;
        case 0x3fd4a4u: goto label_3fd4a4;
        case 0x3fd4a8u: goto label_3fd4a8;
        case 0x3fd4acu: goto label_3fd4ac;
        case 0x3fd4b0u: goto label_3fd4b0;
        case 0x3fd4b4u: goto label_3fd4b4;
        case 0x3fd4b8u: goto label_3fd4b8;
        case 0x3fd4bcu: goto label_3fd4bc;
        case 0x3fd4c0u: goto label_3fd4c0;
        case 0x3fd4c4u: goto label_3fd4c4;
        case 0x3fd4c8u: goto label_3fd4c8;
        case 0x3fd4ccu: goto label_3fd4cc;
        case 0x3fd4d0u: goto label_3fd4d0;
        case 0x3fd4d4u: goto label_3fd4d4;
        case 0x3fd4d8u: goto label_3fd4d8;
        case 0x3fd4dcu: goto label_3fd4dc;
        case 0x3fd4e0u: goto label_3fd4e0;
        case 0x3fd4e4u: goto label_3fd4e4;
        case 0x3fd4e8u: goto label_3fd4e8;
        case 0x3fd4ecu: goto label_3fd4ec;
        case 0x3fd4f0u: goto label_3fd4f0;
        case 0x3fd4f4u: goto label_3fd4f4;
        case 0x3fd4f8u: goto label_3fd4f8;
        case 0x3fd4fcu: goto label_3fd4fc;
        case 0x3fd500u: goto label_3fd500;
        case 0x3fd504u: goto label_3fd504;
        case 0x3fd508u: goto label_3fd508;
        case 0x3fd50cu: goto label_3fd50c;
        case 0x3fd510u: goto label_3fd510;
        case 0x3fd514u: goto label_3fd514;
        case 0x3fd518u: goto label_3fd518;
        case 0x3fd51cu: goto label_3fd51c;
        case 0x3fd520u: goto label_3fd520;
        case 0x3fd524u: goto label_3fd524;
        case 0x3fd528u: goto label_3fd528;
        case 0x3fd52cu: goto label_3fd52c;
        case 0x3fd530u: goto label_3fd530;
        case 0x3fd534u: goto label_3fd534;
        case 0x3fd538u: goto label_3fd538;
        case 0x3fd53cu: goto label_3fd53c;
        case 0x3fd540u: goto label_3fd540;
        case 0x3fd544u: goto label_3fd544;
        case 0x3fd548u: goto label_3fd548;
        case 0x3fd54cu: goto label_3fd54c;
        case 0x3fd550u: goto label_3fd550;
        case 0x3fd554u: goto label_3fd554;
        case 0x3fd558u: goto label_3fd558;
        case 0x3fd55cu: goto label_3fd55c;
        case 0x3fd560u: goto label_3fd560;
        case 0x3fd564u: goto label_3fd564;
        case 0x3fd568u: goto label_3fd568;
        case 0x3fd56cu: goto label_3fd56c;
        case 0x3fd570u: goto label_3fd570;
        case 0x3fd574u: goto label_3fd574;
        case 0x3fd578u: goto label_3fd578;
        case 0x3fd57cu: goto label_3fd57c;
        case 0x3fd580u: goto label_3fd580;
        case 0x3fd584u: goto label_3fd584;
        case 0x3fd588u: goto label_3fd588;
        case 0x3fd58cu: goto label_3fd58c;
        case 0x3fd590u: goto label_3fd590;
        case 0x3fd594u: goto label_3fd594;
        case 0x3fd598u: goto label_3fd598;
        case 0x3fd59cu: goto label_3fd59c;
        case 0x3fd5a0u: goto label_3fd5a0;
        case 0x3fd5a4u: goto label_3fd5a4;
        case 0x3fd5a8u: goto label_3fd5a8;
        case 0x3fd5acu: goto label_3fd5ac;
        case 0x3fd5b0u: goto label_3fd5b0;
        case 0x3fd5b4u: goto label_3fd5b4;
        case 0x3fd5b8u: goto label_3fd5b8;
        case 0x3fd5bcu: goto label_3fd5bc;
        case 0x3fd5c0u: goto label_3fd5c0;
        case 0x3fd5c4u: goto label_3fd5c4;
        case 0x3fd5c8u: goto label_3fd5c8;
        case 0x3fd5ccu: goto label_3fd5cc;
        case 0x3fd5d0u: goto label_3fd5d0;
        case 0x3fd5d4u: goto label_3fd5d4;
        case 0x3fd5d8u: goto label_3fd5d8;
        case 0x3fd5dcu: goto label_3fd5dc;
        case 0x3fd5e0u: goto label_3fd5e0;
        case 0x3fd5e4u: goto label_3fd5e4;
        case 0x3fd5e8u: goto label_3fd5e8;
        case 0x3fd5ecu: goto label_3fd5ec;
        case 0x3fd5f0u: goto label_3fd5f0;
        case 0x3fd5f4u: goto label_3fd5f4;
        case 0x3fd5f8u: goto label_3fd5f8;
        case 0x3fd5fcu: goto label_3fd5fc;
        default: break;
    }

    ctx->pc = 0x3fd420u;

label_3fd420:
    // 0x3fd420: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3fd420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3fd424:
    // 0x3fd424: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3fd424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3fd428:
    // 0x3fd428: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3fd428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3fd42c:
    // 0x3fd42c: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3fd42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3fd430:
    // 0x3fd430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fd430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fd434:
    // 0x3fd434: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x3fd434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
label_3fd438:
    // 0x3fd438: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3fd438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3fd43c:
    // 0x3fd43c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3fd43cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fd440:
    // 0x3fd440: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3fd440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3fd444:
    // 0x3fd444: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fd448:
    // 0x3fd448: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fd448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fd44c:
    // 0x3fd44c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fd450:
    // 0x3fd450: 0x40f809  jalr        $v0
label_3fd454:
    if (ctx->pc == 0x3FD454u) {
        ctx->pc = 0x3FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD450u;
        // 0x3fd454: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD458u;
        goto label_3fd458;
    }
    ctx->pc = 0x3FD450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD458u);
        ctx->pc = 0x3FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD450u;
        // 0x3fd454: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD450u, 0x3FD458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD458u;
label_3fd458:
    // 0x3fd458: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3fd458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fd45c:
    // 0x3fd45c: 0xc0ea14c  jal         func_3A8530
label_3fd460:
    if (ctx->pc == 0x3FD460u) {
        ctx->pc = 0x3FD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD45Cu;
        // 0x3fd460: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD464u;
        goto label_3fd464;
    }
    ctx->pc = 0x3FD45Cu;
    SET_GPR_U32(ctx, 31, 0x3FD464u);
    ctx->pc = 0x3FD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD45Cu;
    // 0x3fd460: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FD45Cu, 0x3FD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD464u;
label_3fd464:
    // 0x3fd464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fd464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fd468:
    // 0x3fd468: 0xc0ea12a  jal         func_3A84A8
label_3fd46c:
    if (ctx->pc == 0x3FD46Cu) {
        ctx->pc = 0x3FD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD468u;
        // 0x3fd46c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD470u;
        goto label_3fd470;
    }
    ctx->pc = 0x3FD468u;
    SET_GPR_U32(ctx, 31, 0x3FD470u);
    ctx->pc = 0x3FD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD468u;
    // 0x3fd46c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FD468u, 0x3FD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD470u;
label_3fd470:
    // 0x3fd470: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3fd470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fd474:
    // 0x3fd474: 0xc0ea12a  jal         func_3A84A8
label_3fd478:
    if (ctx->pc == 0x3FD478u) {
        ctx->pc = 0x3FD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD474u;
        // 0x3fd478: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD47Cu;
        goto label_3fd47c;
    }
    ctx->pc = 0x3FD474u;
    SET_GPR_U32(ctx, 31, 0x3FD47Cu);
    ctx->pc = 0x3FD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD474u;
    // 0x3fd478: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FD474u, 0x3FD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD47Cu;
label_3fd47c:
    // 0x3fd47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd480:
    // 0x3fd480: 0xc0e858c  jal         func_3A1630
label_3fd484:
    if (ctx->pc == 0x3FD484u) {
        ctx->pc = 0x3FD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD480u;
        // 0x3fd484: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD488u;
        goto label_3fd488;
    }
    ctx->pc = 0x3FD480u;
    SET_GPR_U32(ctx, 31, 0x3FD488u);
    ctx->pc = 0x3FD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD480u;
    // 0x3fd484: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FD480u, 0x3FD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD488u;
label_3fd488:
    // 0x3fd488: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x3fd488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_3fd48c:
    // 0x3fd48c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3fd48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3fd490:
    // 0x3fd490: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x3fd490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_3fd494:
    // 0x3fd494: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3fd494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3fd498:
    // 0x3fd498: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3fd498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3fd49c:
    // 0x3fd49c: 0x247016c0  addiu       $s0, $v1, 0x16C0
    ctx->pc = 0x3fd49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3fd4a0:
    // 0x3fd4a0: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x3fd4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
label_3fd4a4:
    // 0x3fd4a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fd4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd4a8:
    // 0x3fd4a8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3fd4a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fd4ac:
    // 0x3fd4ac: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3fd4acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fd4b0:
    // 0x3fd4b0: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3fd4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3fd4b4:
    // 0x3fd4b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3fd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fd4b8:
    // 0x3fd4b8: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3fd4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3fd4bc:
    // 0x3fd4bc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3fd4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3fd4c0:
    // 0x3fd4c0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3fd4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3fd4c4:
    // 0x3fd4c4: 0x60f809  jalr        $v1
label_3fd4c8:
    if (ctx->pc == 0x3FD4C8u) {
        ctx->pc = 0x3FD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD4C4u;
        // 0x3fd4c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD4CCu;
        goto label_3fd4cc;
    }
    ctx->pc = 0x3FD4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FD4CCu);
        ctx->pc = 0x3FD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD4C4u;
        // 0x3fd4c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD4C4u, 0x3FD4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD4CCu;
label_3fd4cc:
    // 0x3fd4cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd4d0:
    // 0x3fd4d0: 0xc0e9132  jal         func_3A44C8
label_3fd4d4:
    if (ctx->pc == 0x3FD4D4u) {
        ctx->pc = 0x3FD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD4D0u;
        // 0x3fd4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD4D8u;
        goto label_3fd4d8;
    }
    ctx->pc = 0x3FD4D0u;
    SET_GPR_U32(ctx, 31, 0x3FD4D8u);
    ctx->pc = 0x3FD4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD4D0u;
    // 0x3fd4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FD4D0u, 0x3FD4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD4D8u;
label_3fd4d8:
    // 0x3fd4d8: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3fd4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3fd4dc:
    // 0x3fd4dc: 0x3c0313ff  lui         $v1, 0x13FF
    ctx->pc = 0x3fd4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5119 << 16));
label_3fd4e0:
    // 0x3fd4e0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3fd4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3fd4e4:
    // 0x3fd4e4: 0x34638ee4  ori         $v1, $v1, 0x8EE4
    ctx->pc = 0x3fd4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36580);
label_3fd4e8:
    // 0x3fd4e8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3fd4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_3fd4ec:
    // 0x3fd4ec: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x3fd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_3fd4f0:
    // 0x3fd4f0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x3fd4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_3fd4f4:
    // 0x3fd4f4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x3fd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3fd4f8:
    // 0x3fd4f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_3fd4fc:
    if (ctx->pc == 0x3FD4FCu) {
        ctx->pc = 0x3FD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD4F8u;
        // 0x3fd4fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD500u;
        goto label_3fd500;
    }
    ctx->pc = 0x3FD4F8u;
    {
        const bool branch_taken_0x3fd4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD4F8u;
        // 0x3fd4fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd4f8) {
            ctx->pc = 0x3FD510u;
            goto label_3fd510;
        }
    }
    ctx->pc = 0x3FD500u;
label_3fd500:
    // 0x3fd500: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3fd500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3fd504:
    // 0x3fd504: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x3fd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_3fd508:
    // 0x3fd508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fd508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fd50c:
    // 0x3fd50c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3fd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3fd510:
    // 0x3fd510: 0xc0e8dee  jal         func_3A37B8
label_3fd514:
    if (ctx->pc == 0x3FD514u) {
        ctx->pc = 0x3FD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD510u;
        // 0x3fd514: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD518u;
        goto label_3fd518;
    }
    ctx->pc = 0x3FD510u;
    SET_GPR_U32(ctx, 31, 0x3FD518u);
    ctx->pc = 0x3FD514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD510u;
    // 0x3fd514: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3FD510u, 0x3FD518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD518u;
label_3fd518:
    // 0x3fd518: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3fd518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3fd51c:
    // 0x3fd51c: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
label_3fd520:
    if (ctx->pc == 0x3FD520u) {
        ctx->pc = 0x3FD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD51Cu;
        // 0x3fd520: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD524u;
        goto label_3fd524;
    }
    ctx->pc = 0x3FD51Cu;
    {
        const bool branch_taken_0x3fd51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD51Cu;
        // 0x3fd520: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd51c) {
            ctx->pc = 0x3FD5C8u;
            goto label_3fd5c8;
        }
    }
    ctx->pc = 0x3FD524u;
label_3fd524:
    // 0x3fd524: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3fd524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3fd528:
    // 0x3fd528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fd528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd52c:
    // 0x3fd52c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3fd52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fd530:
    // 0x3fd530: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3fd530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3fd534:
    // 0x3fd534: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3fd534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3fd538:
    // 0x3fd538: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3fd538u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3fd53c:
    // 0x3fd53c: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3fd53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3fd540:
    // 0x3fd540: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3fd540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3fd544:
    // 0x3fd544: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3fd544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3fd548:
    // 0x3fd548: 0xe7a00440  swc1        $f0, 0x440($sp)
    ctx->pc = 0x3fd548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3fd54c:
    // 0x3fd54c: 0x26107508  addiu       $s0, $s0, 0x7508
    ctx->pc = 0x3fd54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29960));
label_3fd550:
    // 0x3fd550: 0xafb20450  sw          $s2, 0x450($sp)
    ctx->pc = 0x3fd550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 18));
label_3fd554:
    // 0x3fd554: 0xc0e9fa6  jal         func_3A7E98
label_3fd558:
    if (ctx->pc == 0x3FD558u) {
        ctx->pc = 0x3FD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD554u;
        // 0x3fd558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD55Cu;
        goto label_3fd55c;
    }
    ctx->pc = 0x3FD554u;
    SET_GPR_U32(ctx, 31, 0x3FD55Cu);
    ctx->pc = 0x3FD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD554u;
    // 0x3fd558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3FD554u, 0x3FD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD55Cu;
label_3fd55c:
    // 0x3fd55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd560:
    // 0x3fd560: 0xc0f15bc  jal         func_3C56F0
label_3fd564:
    if (ctx->pc == 0x3FD564u) {
        ctx->pc = 0x3FD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD560u;
        // 0x3fd564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD568u;
        goto label_3fd568;
    }
    ctx->pc = 0x3FD560u;
    SET_GPR_U32(ctx, 31, 0x3FD568u);
    ctx->pc = 0x3FD564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD560u;
    // 0x3fd564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3FD560u, 0x3FD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD568u;
label_3fd568:
    // 0x3fd568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fd568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fd56c:
    // 0x3fd56c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3fd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fd570:
    // 0x3fd570: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3fd570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3fd574:
    // 0x3fd574: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3fd574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3fd578:
    // 0x3fd578: 0x40f809  jalr        $v0
label_3fd57c:
    if (ctx->pc == 0x3FD57Cu) {
        ctx->pc = 0x3FD57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD578u;
        // 0x3fd57c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD580u;
        goto label_3fd580;
    }
    ctx->pc = 0x3FD578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD580u);
        ctx->pc = 0x3FD57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD578u;
        // 0x3fd57c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD578u, 0x3FD580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD580u;
label_3fd580:
    // 0x3fd580: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x3fd580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_3fd584:
    // 0x3fd584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3fd584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fd588:
    // 0x3fd588: 0xc0ea16a  jal         func_3A85A8
label_3fd58c:
    if (ctx->pc == 0x3FD58Cu) {
        ctx->pc = 0x3FD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD588u;
        // 0x3fd58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD590u;
        goto label_3fd590;
    }
    ctx->pc = 0x3FD588u;
    SET_GPR_U32(ctx, 31, 0x3FD590u);
    ctx->pc = 0x3FD58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD588u;
    // 0x3fd58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FD588u, 0x3FD590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD590u;
label_3fd590:
    // 0x3fd590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3fd590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fd594:
    // 0x3fd594: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3fd594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3fd598:
    // 0x3fd598: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3fd598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fd59c:
    // 0x3fd59c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3fd59cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3fd5a0:
    // 0x3fd5a0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3fd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3fd5a4:
    // 0x3fd5a4: 0x40f809  jalr        $v0
label_3fd5a8:
    if (ctx->pc == 0x3FD5A8u) {
        ctx->pc = 0x3FD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5A4u;
        // 0x3fd5a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD5ACu;
        goto label_3fd5ac;
    }
    ctx->pc = 0x3FD5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD5ACu);
        ctx->pc = 0x3FD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5A4u;
        // 0x3fd5a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD5A4u, 0x3FD5ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD5ACu;
label_3fd5ac:
    // 0x3fd5ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3fd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3fd5b0:
    // 0x3fd5b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3fd5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fd5b4:
    // 0x3fd5b4: 0xc0cd4ee  jal         func_3353B8
label_3fd5b8:
    if (ctx->pc == 0x3FD5B8u) {
        ctx->pc = 0x3FD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5B4u;
        // 0x3fd5b8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD5BCu;
        goto label_3fd5bc;
    }
    ctx->pc = 0x3FD5B4u;
    SET_GPR_U32(ctx, 31, 0x3FD5BCu);
    ctx->pc = 0x3FD5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD5B4u;
    // 0x3fd5b8: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FD5B4u, 0x3FD5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD5BCu;
label_3fd5bc:
    // 0x3fd5bc: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x3fd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_3fd5c0:
    // 0x3fd5c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3fd5c4:
    if (ctx->pc == 0x3FD5C4u) {
        ctx->pc = 0x3FD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5C0u;
        // 0x3fd5c4: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD5C8u;
        goto label_3fd5c8;
    }
    ctx->pc = 0x3FD5C0u;
    {
        const bool branch_taken_0x3fd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5C0u;
        // 0x3fd5c4: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd5c0) {
            ctx->pc = 0x3FD5D0u;
            goto label_3fd5d0;
        }
    }
    ctx->pc = 0x3FD5C8u;
label_3fd5c8:
    // 0x3fd5c8: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x3fd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3fd5cc:
    // 0x3fd5cc: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x3fd5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_3fd5d0:
    // 0x3fd5d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd5d4:
    // 0x3fd5d4: 0xc0e862e  jal         func_3A18B8
label_3fd5d8:
    if (ctx->pc == 0x3FD5D8u) {
        ctx->pc = 0x3FD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5D4u;
        // 0x3fd5d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD5DCu;
        goto label_3fd5dc;
    }
    ctx->pc = 0x3FD5D4u;
    SET_GPR_U32(ctx, 31, 0x3FD5DCu);
    ctx->pc = 0x3FD5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD5D4u;
    // 0x3fd5d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3FD5D4u, 0x3FD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD5DCu;
label_3fd5dc:
    // 0x3fd5dc: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3fd5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3fd5e0:
    // 0x3fd5e0: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3fd5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3fd5e4:
    // 0x3fd5e4: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3fd5e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3fd5e8:
    // 0x3fd5e8: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3fd5e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3fd5ec:
    // 0x3fd5ec: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x3fd5ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3fd5f0:
    // 0x3fd5f0: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3fd5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3fd5f4:
    // 0x3fd5f4: 0x3e00008  jr          $ra
label_3fd5f8:
    if (ctx->pc == 0x3FD5F8u) {
        ctx->pc = 0x3FD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5F4u;
        // 0x3fd5f8: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD5FCu;
        goto label_3fd5fc;
    }
    ctx->pc = 0x3FD5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5F4u;
        // 0x3fd5f8: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD5FCu;
label_3fd5fc:
    // 0x3fd5fc: 0x0  nop
    ctx->pc = 0x3fd5fcu;
    // NOP
    ctx->pc = 0x3fd600u;
}
