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

// Function: sub_00353460
// Address: 0x353460 - 0x3535a0
void sub_00353460_0x353460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353460_0x353460");
#endif

    switch (ctx->pc) {
        case 0x353460u: goto label_353460;
        case 0x353464u: goto label_353464;
        case 0x353468u: goto label_353468;
        case 0x35346cu: goto label_35346c;
        case 0x353470u: goto label_353470;
        case 0x353474u: goto label_353474;
        case 0x353478u: goto label_353478;
        case 0x35347cu: goto label_35347c;
        case 0x353480u: goto label_353480;
        case 0x353484u: goto label_353484;
        case 0x353488u: goto label_353488;
        case 0x35348cu: goto label_35348c;
        case 0x353490u: goto label_353490;
        case 0x353494u: goto label_353494;
        case 0x353498u: goto label_353498;
        case 0x35349cu: goto label_35349c;
        case 0x3534a0u: goto label_3534a0;
        case 0x3534a4u: goto label_3534a4;
        case 0x3534a8u: goto label_3534a8;
        case 0x3534acu: goto label_3534ac;
        case 0x3534b0u: goto label_3534b0;
        case 0x3534b4u: goto label_3534b4;
        case 0x3534b8u: goto label_3534b8;
        case 0x3534bcu: goto label_3534bc;
        case 0x3534c0u: goto label_3534c0;
        case 0x3534c4u: goto label_3534c4;
        case 0x3534c8u: goto label_3534c8;
        case 0x3534ccu: goto label_3534cc;
        case 0x3534d0u: goto label_3534d0;
        case 0x3534d4u: goto label_3534d4;
        case 0x3534d8u: goto label_3534d8;
        case 0x3534dcu: goto label_3534dc;
        case 0x3534e0u: goto label_3534e0;
        case 0x3534e4u: goto label_3534e4;
        case 0x3534e8u: goto label_3534e8;
        case 0x3534ecu: goto label_3534ec;
        case 0x3534f0u: goto label_3534f0;
        case 0x3534f4u: goto label_3534f4;
        case 0x3534f8u: goto label_3534f8;
        case 0x3534fcu: goto label_3534fc;
        case 0x353500u: goto label_353500;
        case 0x353504u: goto label_353504;
        case 0x353508u: goto label_353508;
        case 0x35350cu: goto label_35350c;
        case 0x353510u: goto label_353510;
        case 0x353514u: goto label_353514;
        case 0x353518u: goto label_353518;
        case 0x35351cu: goto label_35351c;
        case 0x353520u: goto label_353520;
        case 0x353524u: goto label_353524;
        case 0x353528u: goto label_353528;
        case 0x35352cu: goto label_35352c;
        case 0x353530u: goto label_353530;
        case 0x353534u: goto label_353534;
        case 0x353538u: goto label_353538;
        case 0x35353cu: goto label_35353c;
        case 0x353540u: goto label_353540;
        case 0x353544u: goto label_353544;
        case 0x353548u: goto label_353548;
        case 0x35354cu: goto label_35354c;
        case 0x353550u: goto label_353550;
        case 0x353554u: goto label_353554;
        case 0x353558u: goto label_353558;
        case 0x35355cu: goto label_35355c;
        case 0x353560u: goto label_353560;
        case 0x353564u: goto label_353564;
        case 0x353568u: goto label_353568;
        case 0x35356cu: goto label_35356c;
        case 0x353570u: goto label_353570;
        case 0x353574u: goto label_353574;
        case 0x353578u: goto label_353578;
        case 0x35357cu: goto label_35357c;
        case 0x353580u: goto label_353580;
        case 0x353584u: goto label_353584;
        case 0x353588u: goto label_353588;
        case 0x35358cu: goto label_35358c;
        case 0x353590u: goto label_353590;
        case 0x353594u: goto label_353594;
        case 0x353598u: goto label_353598;
        case 0x35359cu: goto label_35359c;
        default: break;
    }

    ctx->pc = 0x353460u;

label_353460:
    // 0x353460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x353460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_353464:
    // 0x353464: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x353464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_353468:
    // 0x353468: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x353468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_35346c:
    // 0x35346c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x35346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_353470:
    // 0x353470: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x353470u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_353474:
    // 0x353474: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x353474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_353478:
    // 0x353478: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x353478u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_35347c:
    // 0x35347c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35347cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_353480:
    // 0x353480: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x353480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_353484:
    // 0x353484: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x353484u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_353488:
    // 0x353488: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x353488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_35348c:
    // 0x35348c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_353490:
    // 0x353490: 0xc051048  jal         func_144120
label_353494:
    if (ctx->pc == 0x353494u) {
        ctx->pc = 0x353494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353490u;
        // 0x353494: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353498u;
        goto label_353498;
    }
    ctx->pc = 0x353490u;
    SET_GPR_U32(ctx, 31, 0x353498u);
    ctx->pc = 0x353494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353490u;
    // 0x353494: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x353490u, 0x353498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353498u;
label_353498:
    // 0x353498: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x353498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35349c:
    // 0x35349c: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x35349cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_3534a0:
    // 0x3534a0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3534a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3534a4:
    // 0x3534a4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3534a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3534a8:
    // 0x3534a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3534a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3534ac:
    // 0x3534ac: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3534acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3534b0:
    // 0x3534b0: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x3534b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3534b4:
    // 0x3534b4: 0x24a58a20  addiu       $a1, $a1, -0x75E0
    ctx->pc = 0x3534b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937120));
label_3534b8:
    // 0x3534b8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3534b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3534bc:
    // 0x3534bc: 0x240903c7  addiu       $t1, $zero, 0x3C7
    ctx->pc = 0x3534bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 967));
label_3534c0:
    // 0x3534c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3534c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3534c4:
    // 0x3534c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3534c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3534c8:
    // 0x3534c8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x3534c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3534cc:
    // 0x3534cc: 0xae872aec  sw          $a3, 0x2AEC($s4)
    ctx->pc = 0x3534ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10988), GPR_U32(ctx, 7));
label_3534d0:
    // 0x3534d0: 0x3012  mflo        $a2
    ctx->pc = 0x3534d0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3534d4:
    // 0x3534d4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3534d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3534d8:
    // 0x3534d8: 0x260889d0  addiu       $t0, $s0, -0x7630
    ctx->pc = 0x3534d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937040));
label_3534dc:
    // 0x3534dc: 0x40f809  jalr        $v0
label_3534e0:
    if (ctx->pc == 0x3534E0u) {
        ctx->pc = 0x3534E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534DCu;
        // 0x3534e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3534E4u;
        goto label_3534e4;
    }
    ctx->pc = 0x3534DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3534E4u);
        ctx->pc = 0x3534E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534DCu;
        // 0x3534e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3534DCu, 0x3534E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3534E4u;
label_3534e4:
    // 0x3534e4: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x3534e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3534e8:
    // 0x3534e8: 0x8e832aec  lw          $v1, 0x2AEC($s4)
    ctx->pc = 0x3534e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10988)));
label_3534ec:
    // 0x3534ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3534ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3534f0:
    // 0x3534f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3534f4:
    if (ctx->pc == 0x3534F4u) {
        ctx->pc = 0x3534F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534F0u;
        // 0x3534f4: 0xae62ba10  sw          $v0, -0x45F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294949392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3534F8u;
        goto label_3534f8;
    }
    ctx->pc = 0x3534F0u;
    {
        const bool branch_taken_0x3534f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3534F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534F0u;
        // 0x3534f4: 0xae62ba10  sw          $v0, -0x45F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294949392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3534f0) {
            ctx->pc = 0x353558u;
            goto label_353558;
        }
    }
    ctx->pc = 0x3534F8u;
label_3534f8:
    // 0x3534f8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3534f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3534fc:
    // 0x3534fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3534fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_353500:
    // 0x353500: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x353500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_353504:
    // 0x353504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353508:
    // 0x353508: 0x8d02ba10  lw          $v0, -0x45F0($t0)
    ctx->pc = 0x353508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294949392)));
label_35350c:
    // 0x35350c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_353510:
    // 0x353510: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x353510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_353514:
    // 0x353514: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x353514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_353518:
    // 0x353518: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x353518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_35351c:
    // 0x35351c: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x35351cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_353520:
    // 0x353520: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x353520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_353524:
    // 0x353524: 0x686a0017  ldl         $t2, 0x17($v1)
    ctx->pc = 0x353524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_353528:
    // 0x353528: 0x6c6a0010  ldr         $t2, 0x10($v1)
    ctx->pc = 0x353528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_35352c:
    // 0x35352c: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x35352cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_353530:
    // 0x353530: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x353530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_353534:
    // 0x353534: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x353534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_353538:
    // 0x353538: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x353538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35353c:
    // 0x35353c: 0xb04a0017  sdl         $t2, 0x17($v0)
    ctx->pc = 0x35353cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_353540:
    // 0x353540: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x353540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_353544:
    // 0x353544: 0xb44a0010  sdr         $t2, 0x10($v0)
    ctx->pc = 0x353544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_353548:
    // 0x353548: 0x8ce22aec  lw          $v0, 0x2AEC($a3)
    ctx->pc = 0x353548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10988)));
label_35354c:
    // 0x35354c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x35354cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_353550:
    // 0x353550: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_353554:
    if (ctx->pc == 0x353554u) {
        ctx->pc = 0x353554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353550u;
        // 0x353554: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353558u;
        goto label_353558;
    }
    ctx->pc = 0x353550u;
    {
        const bool branch_taken_0x353550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353550u;
        // 0x353554: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353550) {
            ctx->pc = 0x353508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353508;
        }
    }
    ctx->pc = 0x353558u;
label_353558:
    // 0x353558: 0x8e2827e4  lw          $t0, 0x27E4($s1)
    ctx->pc = 0x353558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_35355c:
    // 0x35355c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_353560:
    // 0x353560: 0x260689d0  addiu       $a2, $s0, -0x7630
    ctx->pc = 0x353560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937040));
label_353564:
    // 0x353564: 0x240703ce  addiu       $a3, $zero, 0x3CE
    ctx->pc = 0x353564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 974));
label_353568:
    // 0x353568: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x353568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_35356c:
    // 0x35356c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x35356cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_353570:
    // 0x353570: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x353570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_353574:
    // 0x353574: 0x60f809  jalr        $v1
label_353578:
    if (ctx->pc == 0x353578u) {
        ctx->pc = 0x353578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353574u;
        // 0x353578: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35357Cu;
        goto label_35357c;
    }
    ctx->pc = 0x353574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35357Cu);
        ctx->pc = 0x353578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353574u;
        // 0x353578: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353574u, 0x35357Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35357Cu;
label_35357c:
    // 0x35357c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x35357cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_353580:
    // 0x353580: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x353580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_353584:
    // 0x353584: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x353584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_353588:
    // 0x353588: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x353588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35358c:
    // 0x35358c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x35358cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_353590:
    // 0x353590: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x353590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353594:
    // 0x353594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_353598:
    // 0x353598: 0x3e00008  jr          $ra
label_35359c:
    if (ctx->pc == 0x35359Cu) {
        ctx->pc = 0x35359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353598u;
        // 0x35359c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3535A0u;
        goto label_fallthrough_0x353598;
    }
    ctx->pc = 0x353598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353598u;
        // 0x35359c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x353598:
    ctx->pc = 0x3535A0u;
}
