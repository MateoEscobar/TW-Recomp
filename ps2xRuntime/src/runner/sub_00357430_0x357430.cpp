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

// Function: sub_00357430
// Address: 0x357430 - 0x357588
void sub_00357430_0x357430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357430_0x357430");
#endif

    switch (ctx->pc) {
        case 0x357430u: goto label_357430;
        case 0x357434u: goto label_357434;
        case 0x357438u: goto label_357438;
        case 0x35743cu: goto label_35743c;
        case 0x357440u: goto label_357440;
        case 0x357444u: goto label_357444;
        case 0x357448u: goto label_357448;
        case 0x35744cu: goto label_35744c;
        case 0x357450u: goto label_357450;
        case 0x357454u: goto label_357454;
        case 0x357458u: goto label_357458;
        case 0x35745cu: goto label_35745c;
        case 0x357460u: goto label_357460;
        case 0x357464u: goto label_357464;
        case 0x357468u: goto label_357468;
        case 0x35746cu: goto label_35746c;
        case 0x357470u: goto label_357470;
        case 0x357474u: goto label_357474;
        case 0x357478u: goto label_357478;
        case 0x35747cu: goto label_35747c;
        case 0x357480u: goto label_357480;
        case 0x357484u: goto label_357484;
        case 0x357488u: goto label_357488;
        case 0x35748cu: goto label_35748c;
        case 0x357490u: goto label_357490;
        case 0x357494u: goto label_357494;
        case 0x357498u: goto label_357498;
        case 0x35749cu: goto label_35749c;
        case 0x3574a0u: goto label_3574a0;
        case 0x3574a4u: goto label_3574a4;
        case 0x3574a8u: goto label_3574a8;
        case 0x3574acu: goto label_3574ac;
        case 0x3574b0u: goto label_3574b0;
        case 0x3574b4u: goto label_3574b4;
        case 0x3574b8u: goto label_3574b8;
        case 0x3574bcu: goto label_3574bc;
        case 0x3574c0u: goto label_3574c0;
        case 0x3574c4u: goto label_3574c4;
        case 0x3574c8u: goto label_3574c8;
        case 0x3574ccu: goto label_3574cc;
        case 0x3574d0u: goto label_3574d0;
        case 0x3574d4u: goto label_3574d4;
        case 0x3574d8u: goto label_3574d8;
        case 0x3574dcu: goto label_3574dc;
        case 0x3574e0u: goto label_3574e0;
        case 0x3574e4u: goto label_3574e4;
        case 0x3574e8u: goto label_3574e8;
        case 0x3574ecu: goto label_3574ec;
        case 0x3574f0u: goto label_3574f0;
        case 0x3574f4u: goto label_3574f4;
        case 0x3574f8u: goto label_3574f8;
        case 0x3574fcu: goto label_3574fc;
        case 0x357500u: goto label_357500;
        case 0x357504u: goto label_357504;
        case 0x357508u: goto label_357508;
        case 0x35750cu: goto label_35750c;
        case 0x357510u: goto label_357510;
        case 0x357514u: goto label_357514;
        case 0x357518u: goto label_357518;
        case 0x35751cu: goto label_35751c;
        case 0x357520u: goto label_357520;
        case 0x357524u: goto label_357524;
        case 0x357528u: goto label_357528;
        case 0x35752cu: goto label_35752c;
        case 0x357530u: goto label_357530;
        case 0x357534u: goto label_357534;
        case 0x357538u: goto label_357538;
        case 0x35753cu: goto label_35753c;
        case 0x357540u: goto label_357540;
        case 0x357544u: goto label_357544;
        case 0x357548u: goto label_357548;
        case 0x35754cu: goto label_35754c;
        case 0x357550u: goto label_357550;
        case 0x357554u: goto label_357554;
        case 0x357558u: goto label_357558;
        case 0x35755cu: goto label_35755c;
        case 0x357560u: goto label_357560;
        case 0x357564u: goto label_357564;
        case 0x357568u: goto label_357568;
        case 0x35756cu: goto label_35756c;
        case 0x357570u: goto label_357570;
        case 0x357574u: goto label_357574;
        case 0x357578u: goto label_357578;
        case 0x35757cu: goto label_35757c;
        case 0x357580u: goto label_357580;
        case 0x357584u: goto label_357584;
        default: break;
    }

    ctx->pc = 0x357430u;

label_357430:
    // 0x357430: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x357430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_357434:
    // 0x357434: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x357434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_357438:
    // 0x357438: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_35743c:
    // 0x35743c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x35743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_357440:
    // 0x357440: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x357440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_357444:
    // 0x357444: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x357444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_357448:
    // 0x357448: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x357448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_35744c:
    // 0x35744c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35744cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_357450:
    // 0x357450: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x357450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_357454:
    // 0x357454: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x357454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_357458:
    // 0x357458: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x357458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35745c:
    // 0x35745c: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x35745cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_357460:
    // 0x357460: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x357460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_357464:
    // 0x357464: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x357464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_357468:
    // 0x357468: 0x84c300c8  lh          $v1, 0xC8($a2)
    ctx->pc = 0x357468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 200)));
label_35746c:
    // 0x35746c: 0x8cc200cc  lw          $v0, 0xCC($a2)
    ctx->pc = 0x35746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
label_357470:
    // 0x357470: 0x40f809  jalr        $v0
label_357474:
    if (ctx->pc == 0x357474u) {
        ctx->pc = 0x357474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357470u;
        // 0x357474: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357478u;
        goto label_357478;
    }
    ctx->pc = 0x357470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357478u);
        ctx->pc = 0x357474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357470u;
        // 0x357474: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357470u, 0x357478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357478u;
label_357478:
    // 0x357478: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x357478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_35747c:
    // 0x35747c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x35747cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_357480:
    // 0x357480: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x357480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_357484:
    // 0x357484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357488:
    // 0x357488: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x357488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_35748c:
    // 0x35748c: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x35748cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
label_357490:
    // 0x357490: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x357490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_357494:
    // 0x357494: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x357494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_357498:
    // 0x357498: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x357498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_35749c:
    // 0x35749c: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x35749cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
label_3574a0:
    // 0x3574a0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x3574a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_3574a4:
    // 0x3574a4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x3574a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3574a8:
    // 0x3574a8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3574a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3574ac:
    // 0x3574ac: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_3574b0:
    if (ctx->pc == 0x3574B0u) {
        ctx->pc = 0x3574B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574ACu;
        // 0x3574b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574B4u;
        goto label_3574b4;
    }
    ctx->pc = 0x3574ACu;
    {
        const bool branch_taken_0x3574ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3574B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574ACu;
        // 0x3574b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574ac) {
            ctx->pc = 0x3574FCu;
            goto label_3574fc;
        }
    }
    ctx->pc = 0x3574B4u;
label_3574b4:
    // 0x3574b4: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_3574b8:
    if (ctx->pc == 0x3574B8u) {
        ctx->pc = 0x3574B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574B4u;
        // 0x3574b8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574BCu;
        goto label_3574bc;
    }
    ctx->pc = 0x3574B4u;
    {
        const bool branch_taken_0x3574b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574b4) {
            ctx->pc = 0x3574B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3574B4u;
            // 0x3574b8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3574F0u;
            goto label_3574f0;
        }
    }
    ctx->pc = 0x3574BCu;
label_3574bc:
    // 0x3574bc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3574bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3574c0:
    // 0x3574c0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3574c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3574c4:
    // 0x3574c4: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x3574c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3574c8:
    // 0x3574c8: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x3574c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3574cc:
    // 0x3574cc: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x3574ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3574d0:
    // 0x3574d0: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x3574d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3574d4:
    // 0x3574d4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3574d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3574d8:
    // 0x3574d8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3574d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3574dc:
    // 0x3574dc: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x3574dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3574e0:
    // 0x3574e0: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x3574e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3574e4:
    // 0x3574e4: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x3574e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3574e8:
    // 0x3574e8: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x3574e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3574ec:
    // 0x3574ec: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3574ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3574f0:
    // 0x3574f0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3574f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3574f4:
    // 0x3574f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3574f8:
    if (ctx->pc == 0x3574F8u) {
        ctx->pc = 0x3574F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574F4u;
        // 0x3574f8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574FCu;
        goto label_3574fc;
    }
    ctx->pc = 0x3574F4u;
    {
        const bool branch_taken_0x3574f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3574F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574F4u;
        // 0x3574f8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574f4) {
            ctx->pc = 0x357504u;
            goto label_357504;
        }
    }
    ctx->pc = 0x3574FCu;
label_3574fc:
    // 0x3574fc: 0xc13c5ec  jal         func_4F17B0
label_357500:
    if (ctx->pc == 0x357500u) {
        ctx->pc = 0x357500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574FCu;
        // 0x357500: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357504u;
        goto label_357504;
    }
    ctx->pc = 0x3574FCu;
    SET_GPR_U32(ctx, 31, 0x357504u);
    ctx->pc = 0x357500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574FCu;
    // 0x357500: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F17B0u, 0x3574FCu, 0x357504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357504u;
label_357504:
    // 0x357504: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x357504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_357508:
    // 0x357508: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x357508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_35750c:
    // 0x35750c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x35750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_357510:
    // 0x357510: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x357510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_357514:
    // 0x357514: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x357514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_357518:
    // 0x357518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35751c:
    // 0x35751c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x35751cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_357520:
    // 0x357520: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x357520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_357524:
    // 0x357524: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x357524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_357528:
    // 0x357528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x357528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35752c:
    // 0x35752c: 0x6869ffef  ldl         $t1, -0x11($v1)
    ctx->pc = 0x35752cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_357530:
    // 0x357530: 0x6c69ffe8  ldr         $t1, -0x18($v1)
    ctx->pc = 0x357530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_357534:
    // 0x357534: 0x686afff7  ldl         $t2, -0x9($v1)
    ctx->pc = 0x357534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_357538:
    // 0x357538: 0x6c6afff0  ldr         $t2, -0x10($v1)
    ctx->pc = 0x357538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_35753c:
    // 0x35753c: 0x686bffff  ldl         $t3, -0x1($v1)
    ctx->pc = 0x35753cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_357540:
    // 0x357540: 0x6c6bfff8  ldr         $t3, -0x8($v1)
    ctx->pc = 0x357540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_357544:
    // 0x357544: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x357544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357548:
    // 0x357548: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x357548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35754c:
    // 0x35754c: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x35754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357550:
    // 0x357550: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x357550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357554:
    // 0x357554: 0xb3ab0037  sdl         $t3, 0x37($sp)
    ctx->pc = 0x357554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357558:
    // 0x357558: 0xb7ab0030  sdr         $t3, 0x30($sp)
    ctx->pc = 0x357558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35755c:
    // 0x35755c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x35755cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_357560:
    // 0x357560: 0xc13c534  jal         func_4F14D0
label_357564:
    if (ctx->pc == 0x357564u) {
        ctx->pc = 0x357564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357560u;
        // 0x357564: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357568u;
        goto label_357568;
    }
    ctx->pc = 0x357560u;
    SET_GPR_U32(ctx, 31, 0x357568u);
    ctx->pc = 0x357564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357560u;
    // 0x357564: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F14D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F14D0u, 0x357560u, 0x357568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357568u;
label_357568:
    // 0x357568: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x357568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35756c:
    // 0x35756c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x35756cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_357570:
    // 0x357570: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x357570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_357574:
    // 0x357574: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x357574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_357578:
    // 0x357578: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x357578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35757c:
    // 0x35757c: 0x3e00008  jr          $ra
label_357580:
    if (ctx->pc == 0x357580u) {
        ctx->pc = 0x357580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35757Cu;
        // 0x357580: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357584u;
        goto label_357584;
    }
    ctx->pc = 0x35757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35757Cu;
        // 0x357580: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35757Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357584u;
label_357584:
    // 0x357584: 0x0  nop
    ctx->pc = 0x357584u;
    // NOP
    ctx->pc = 0x357588u;
}
