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

// Function: sub_0022E558
// Address: 0x22e558 - 0x22e610
void sub_0022E558_0x22e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E558_0x22e558");
#endif

    switch (ctx->pc) {
        case 0x22e558u: goto label_22e558;
        case 0x22e55cu: goto label_22e55c;
        case 0x22e560u: goto label_22e560;
        case 0x22e564u: goto label_22e564;
        case 0x22e568u: goto label_22e568;
        case 0x22e56cu: goto label_22e56c;
        case 0x22e570u: goto label_22e570;
        case 0x22e574u: goto label_22e574;
        case 0x22e578u: goto label_22e578;
        case 0x22e57cu: goto label_22e57c;
        case 0x22e580u: goto label_22e580;
        case 0x22e584u: goto label_22e584;
        case 0x22e588u: goto label_22e588;
        case 0x22e58cu: goto label_22e58c;
        case 0x22e590u: goto label_22e590;
        case 0x22e594u: goto label_22e594;
        case 0x22e598u: goto label_22e598;
        case 0x22e59cu: goto label_22e59c;
        case 0x22e5a0u: goto label_22e5a0;
        case 0x22e5a4u: goto label_22e5a4;
        case 0x22e5a8u: goto label_22e5a8;
        case 0x22e5acu: goto label_22e5ac;
        case 0x22e5b0u: goto label_22e5b0;
        case 0x22e5b4u: goto label_22e5b4;
        case 0x22e5b8u: goto label_22e5b8;
        case 0x22e5bcu: goto label_22e5bc;
        case 0x22e5c0u: goto label_22e5c0;
        case 0x22e5c4u: goto label_22e5c4;
        case 0x22e5c8u: goto label_22e5c8;
        case 0x22e5ccu: goto label_22e5cc;
        case 0x22e5d0u: goto label_22e5d0;
        case 0x22e5d4u: goto label_22e5d4;
        case 0x22e5d8u: goto label_22e5d8;
        case 0x22e5dcu: goto label_22e5dc;
        case 0x22e5e0u: goto label_22e5e0;
        case 0x22e5e4u: goto label_22e5e4;
        case 0x22e5e8u: goto label_22e5e8;
        case 0x22e5ecu: goto label_22e5ec;
        case 0x22e5f0u: goto label_22e5f0;
        case 0x22e5f4u: goto label_22e5f4;
        case 0x22e5f8u: goto label_22e5f8;
        case 0x22e5fcu: goto label_22e5fc;
        case 0x22e600u: goto label_22e600;
        case 0x22e604u: goto label_22e604;
        case 0x22e608u: goto label_22e608;
        case 0x22e60cu: goto label_22e60c;
        default: break;
    }

    ctx->pc = 0x22e558u;

label_22e558:
    // 0x22e558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22e55c:
    // 0x22e55c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22e560:
    // 0x22e560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e564:
    // 0x22e564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e568:
    // 0x22e568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e56c:
    // 0x22e56c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22e56cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22e570:
    // 0x22e570: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22e570u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22e574:
    // 0x22e574: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_22e578:
    if (ctx->pc == 0x22E578u) {
        ctx->pc = 0x22E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E574u;
        // 0x22e578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E57Cu;
        goto label_22e57c;
    }
    ctx->pc = 0x22E574u;
    {
        const bool branch_taken_0x22e574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E574u;
        // 0x22e578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e574) {
            ctx->pc = 0x22E5F8u;
            goto label_22e5f8;
        }
    }
    ctx->pc = 0x22E57Cu;
label_22e57c:
    // 0x22e57c: 0xc088ac6  jal         func_222B18
label_22e580:
    if (ctx->pc == 0x22E580u) {
        ctx->pc = 0x22E584u;
        goto label_22e584;
    }
    ctx->pc = 0x22E57Cu;
    SET_GPR_U32(ctx, 31, 0x22E584u);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E57Cu, 0x22E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E584u;
label_22e584:
    // 0x22e584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e588:
    // 0x22e588: 0xc088ac6  jal         func_222B18
label_22e58c:
    if (ctx->pc == 0x22E58Cu) {
        ctx->pc = 0x22E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E588u;
        // 0x22e58c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E590u;
        goto label_22e590;
    }
    ctx->pc = 0x22E588u;
    SET_GPR_U32(ctx, 31, 0x22E590u);
    ctx->pc = 0x22E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E588u;
    // 0x22e58c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E588u, 0x22E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E590u;
label_22e590:
    // 0x22e590: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x22e590u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
label_22e594:
    // 0x22e594: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22e594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22e598:
    // 0x22e598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22e59c:
    // 0x22e59c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e5a0:
    // 0x22e5a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e5a4:
    // 0x22e5a4: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22e5a8:
    // 0x22e5a8: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22e5ac:
    // 0x22e5ac: 0x60f809  jalr        $v1
label_22e5b0:
    if (ctx->pc == 0x22E5B0u) {
        ctx->pc = 0x22E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5ACu;
        // 0x22e5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5B4u;
        goto label_22e5b4;
    }
    ctx->pc = 0x22E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22E5B4u);
        ctx->pc = 0x22E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5ACu;
        // 0x22e5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E5ACu, 0x22E5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E5B4u;
label_22e5b4:
    // 0x22e5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e5b8:
    // 0x22e5b8: 0xc089988  jal         func_226620
label_22e5bc:
    if (ctx->pc == 0x22E5BCu) {
        ctx->pc = 0x22E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5B8u;
        // 0x22e5bc: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5C0u;
        goto label_22e5c0;
    }
    ctx->pc = 0x22E5B8u;
    SET_GPR_U32(ctx, 31, 0x22E5C0u);
    ctx->pc = 0x22E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5B8u;
    // 0x22e5bc: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22E5B8u, 0x22E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5C0u;
label_22e5c0:
    // 0x22e5c0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_22e5c4:
    if (ctx->pc == 0x22E5C4u) {
        ctx->pc = 0x22E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5C0u;
        // 0x22e5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5C8u;
        goto label_22e5c8;
    }
    ctx->pc = 0x22E5C0u;
    {
        const bool branch_taken_0x22e5c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5C0u;
        // 0x22e5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5c0) {
            ctx->pc = 0x22E5F0u;
            goto label_22e5f0;
        }
    }
    ctx->pc = 0x22E5C8u;
label_22e5c8:
    // 0x22e5c8: 0xc089c18  jal         func_227060
label_22e5cc:
    if (ctx->pc == 0x22E5CCu) {
        ctx->pc = 0x22E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5C8u;
        // 0x22e5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5D0u;
        goto label_22e5d0;
    }
    ctx->pc = 0x22E5C8u;
    SET_GPR_U32(ctx, 31, 0x22E5D0u);
    ctx->pc = 0x22E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5C8u;
    // 0x22e5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x22E5C8u, 0x22E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5D0u;
label_22e5d0:
    // 0x22e5d0: 0xc0e57ce  jal         func_395F38
label_22e5d4:
    if (ctx->pc == 0x22E5D4u) {
        ctx->pc = 0x22E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5D0u;
        // 0x22e5d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5D8u;
        goto label_22e5d8;
    }
    ctx->pc = 0x22E5D0u;
    SET_GPR_U32(ctx, 31, 0x22E5D8u);
    ctx->pc = 0x22E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5D0u;
    // 0x22e5d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x22E5D0u, 0x22E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5D8u;
label_22e5d8:
    // 0x22e5d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22e5d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e5dc:
    // 0x22e5dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22e5e0:
    if (ctx->pc == 0x22E5E0u) {
        ctx->pc = 0x22E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5DCu;
        // 0x22e5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5E4u;
        goto label_22e5e4;
    }
    ctx->pc = 0x22E5DCu;
    {
        const bool branch_taken_0x22e5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5DCu;
        // 0x22e5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5dc) {
            ctx->pc = 0x22E5F0u;
            goto label_22e5f0;
        }
    }
    ctx->pc = 0x22E5E4u;
label_22e5e4:
    // 0x22e5e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_22e5e8:
    // 0x22e5e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22e5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22e5ec:
    // 0x22e5ec: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x22e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_22e5f0:
    // 0x22e5f0: 0xc089c20  jal         func_227080
label_22e5f4:
    if (ctx->pc == 0x22E5F4u) {
        ctx->pc = 0x22E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5F0u;
        // 0x22e5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5F8u;
        goto label_22e5f8;
    }
    ctx->pc = 0x22E5F0u;
    SET_GPR_U32(ctx, 31, 0x22E5F8u);
    ctx->pc = 0x22E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5F0u;
    // 0x22e5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22E5F0u, 0x22E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5F8u;
label_22e5f8:
    // 0x22e5f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e5fc:
    // 0x22e5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e600:
    // 0x22e600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e604:
    // 0x22e604: 0x3e00008  jr          $ra
label_22e608:
    if (ctx->pc == 0x22E608u) {
        ctx->pc = 0x22E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E604u;
        // 0x22e608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E60Cu;
        goto label_22e60c;
    }
    ctx->pc = 0x22E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E604u;
        // 0x22e608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E60Cu;
label_22e60c:
    // 0x22e60c: 0x0  nop
    ctx->pc = 0x22e60cu;
    // NOP
    ctx->pc = 0x22e610u;
}
