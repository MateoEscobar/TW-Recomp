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

// Function: sub_003572E8
// Address: 0x3572e8 - 0x357430
void sub_003572E8_0x3572e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003572E8_0x3572e8");
#endif

    switch (ctx->pc) {
        case 0x3572e8u: goto label_3572e8;
        case 0x3572ecu: goto label_3572ec;
        case 0x3572f0u: goto label_3572f0;
        case 0x3572f4u: goto label_3572f4;
        case 0x3572f8u: goto label_3572f8;
        case 0x3572fcu: goto label_3572fc;
        case 0x357300u: goto label_357300;
        case 0x357304u: goto label_357304;
        case 0x357308u: goto label_357308;
        case 0x35730cu: goto label_35730c;
        case 0x357310u: goto label_357310;
        case 0x357314u: goto label_357314;
        case 0x357318u: goto label_357318;
        case 0x35731cu: goto label_35731c;
        case 0x357320u: goto label_357320;
        case 0x357324u: goto label_357324;
        case 0x357328u: goto label_357328;
        case 0x35732cu: goto label_35732c;
        case 0x357330u: goto label_357330;
        case 0x357334u: goto label_357334;
        case 0x357338u: goto label_357338;
        case 0x35733cu: goto label_35733c;
        case 0x357340u: goto label_357340;
        case 0x357344u: goto label_357344;
        case 0x357348u: goto label_357348;
        case 0x35734cu: goto label_35734c;
        case 0x357350u: goto label_357350;
        case 0x357354u: goto label_357354;
        case 0x357358u: goto label_357358;
        case 0x35735cu: goto label_35735c;
        case 0x357360u: goto label_357360;
        case 0x357364u: goto label_357364;
        case 0x357368u: goto label_357368;
        case 0x35736cu: goto label_35736c;
        case 0x357370u: goto label_357370;
        case 0x357374u: goto label_357374;
        case 0x357378u: goto label_357378;
        case 0x35737cu: goto label_35737c;
        case 0x357380u: goto label_357380;
        case 0x357384u: goto label_357384;
        case 0x357388u: goto label_357388;
        case 0x35738cu: goto label_35738c;
        case 0x357390u: goto label_357390;
        case 0x357394u: goto label_357394;
        case 0x357398u: goto label_357398;
        case 0x35739cu: goto label_35739c;
        case 0x3573a0u: goto label_3573a0;
        case 0x3573a4u: goto label_3573a4;
        case 0x3573a8u: goto label_3573a8;
        case 0x3573acu: goto label_3573ac;
        case 0x3573b0u: goto label_3573b0;
        case 0x3573b4u: goto label_3573b4;
        case 0x3573b8u: goto label_3573b8;
        case 0x3573bcu: goto label_3573bc;
        case 0x3573c0u: goto label_3573c0;
        case 0x3573c4u: goto label_3573c4;
        case 0x3573c8u: goto label_3573c8;
        case 0x3573ccu: goto label_3573cc;
        case 0x3573d0u: goto label_3573d0;
        case 0x3573d4u: goto label_3573d4;
        case 0x3573d8u: goto label_3573d8;
        case 0x3573dcu: goto label_3573dc;
        case 0x3573e0u: goto label_3573e0;
        case 0x3573e4u: goto label_3573e4;
        case 0x3573e8u: goto label_3573e8;
        case 0x3573ecu: goto label_3573ec;
        case 0x3573f0u: goto label_3573f0;
        case 0x3573f4u: goto label_3573f4;
        case 0x3573f8u: goto label_3573f8;
        case 0x3573fcu: goto label_3573fc;
        case 0x357400u: goto label_357400;
        case 0x357404u: goto label_357404;
        case 0x357408u: goto label_357408;
        case 0x35740cu: goto label_35740c;
        case 0x357410u: goto label_357410;
        case 0x357414u: goto label_357414;
        case 0x357418u: goto label_357418;
        case 0x35741cu: goto label_35741c;
        case 0x357420u: goto label_357420;
        case 0x357424u: goto label_357424;
        case 0x357428u: goto label_357428;
        case 0x35742cu: goto label_35742c;
        default: break;
    }

    ctx->pc = 0x3572e8u;

label_3572e8:
    // 0x3572e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3572e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3572ec:
    // 0x3572ec: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3572ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3572f0:
    // 0x3572f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3572f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3572f4:
    // 0x3572f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3572f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3572f8:
    // 0x3572f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3572f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3572fc:
    // 0x3572fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3572fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_357300:
    // 0x357300: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x357300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_357304:
    // 0x357304: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x357304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_357308:
    // 0x357308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x357308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35730c:
    // 0x35730c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x35730cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_357310:
    // 0x357310: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x357310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_357314:
    // 0x357314: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x357314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_357318:
    // 0x357318: 0x84c300c8  lh          $v1, 0xC8($a2)
    ctx->pc = 0x357318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 200)));
label_35731c:
    // 0x35731c: 0x8cc200cc  lw          $v0, 0xCC($a2)
    ctx->pc = 0x35731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
label_357320:
    // 0x357320: 0x40f809  jalr        $v0
label_357324:
    if (ctx->pc == 0x357324u) {
        ctx->pc = 0x357324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357320u;
        // 0x357324: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357328u;
        goto label_357328;
    }
    ctx->pc = 0x357320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357328u);
        ctx->pc = 0x357324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357320u;
        // 0x357324: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357320u, 0x357328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357328u;
label_357328:
    // 0x357328: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x357328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_35732c:
    // 0x35732c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x35732cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_357330:
    // 0x357330: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x357330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_357334:
    // 0x357334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357338:
    // 0x357338: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x357338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_35733c:
    // 0x35733c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x35733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_357340:
    // 0x357340: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x357340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_357344:
    // 0x357344: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x357344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
label_357348:
    // 0x357348: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x357348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_35734c:
    // 0x35734c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x35734cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_357350:
    // 0x357350: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x357350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_357354:
    // 0x357354: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x357354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_357358:
    // 0x357358: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_35735c:
    if (ctx->pc == 0x35735Cu) {
        ctx->pc = 0x35735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357358u;
        // 0x35735c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357360u;
        goto label_357360;
    }
    ctx->pc = 0x357358u;
    {
        const bool branch_taken_0x357358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357358u;
        // 0x35735c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357358) {
            ctx->pc = 0x3573A8u;
            goto label_3573a8;
        }
    }
    ctx->pc = 0x357360u;
label_357360:
    // 0x357360: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_357364:
    if (ctx->pc == 0x357364u) {
        ctx->pc = 0x357364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357360u;
        // 0x357364: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357368u;
        goto label_357368;
    }
    ctx->pc = 0x357360u;
    {
        const bool branch_taken_0x357360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x357360) {
            ctx->pc = 0x357364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357360u;
            // 0x357364: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35739Cu;
            goto label_35739c;
        }
    }
    ctx->pc = 0x357368u;
label_357368:
    // 0x357368: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x357368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_35736c:
    // 0x35736c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x35736cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_357370:
    // 0x357370: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x357370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_357374:
    // 0x357374: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x357374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_357378:
    // 0x357378: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x357378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_35737c:
    // 0x35737c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x35737cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_357380:
    // 0x357380: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x357380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357384:
    // 0x357384: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x357384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357388:
    // 0x357388: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x357388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35738c:
    // 0x35738c: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x35738cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357390:
    // 0x357390: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x357390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357394:
    // 0x357394: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x357394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357398:
    // 0x357398: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x357398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_35739c:
    // 0x35739c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x35739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3573a0:
    // 0x3573a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3573a4:
    if (ctx->pc == 0x3573A4u) {
        ctx->pc = 0x3573A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573A0u;
        // 0x3573a4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3573A8u;
        goto label_3573a8;
    }
    ctx->pc = 0x3573A0u;
    {
        const bool branch_taken_0x3573a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3573A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573A0u;
        // 0x3573a4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3573a0) {
            ctx->pc = 0x3573B0u;
            goto label_3573b0;
        }
    }
    ctx->pc = 0x3573A8u;
label_3573a8:
    // 0x3573a8: 0xc13c5ec  jal         func_4F17B0
label_3573ac:
    if (ctx->pc == 0x3573ACu) {
        ctx->pc = 0x3573ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573A8u;
        // 0x3573ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3573B0u;
        goto label_3573b0;
    }
    ctx->pc = 0x3573A8u;
    SET_GPR_U32(ctx, 31, 0x3573B0u);
    ctx->pc = 0x3573ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573A8u;
    // 0x3573ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F17B0u, 0x3573A8u, 0x3573B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573B0u;
label_3573b0:
    // 0x3573b0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3573b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3573b4:
    // 0x3573b4: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x3573b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_3573b8:
    // 0x3573b8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3573b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3573bc:
    // 0x3573bc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x3573bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_3573c0:
    // 0x3573c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3573c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3573c4:
    // 0x3573c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3573c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3573c8:
    // 0x3573c8: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x3573c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3573cc:
    // 0x3573cc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3573ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3573d0:
    // 0x3573d0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3573d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3573d4:
    // 0x3573d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3573d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3573d8:
    // 0x3573d8: 0x6869ffef  ldl         $t1, -0x11($v1)
    ctx->pc = 0x3573d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3573dc:
    // 0x3573dc: 0x6c69ffe8  ldr         $t1, -0x18($v1)
    ctx->pc = 0x3573dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3573e0:
    // 0x3573e0: 0x686afff7  ldl         $t2, -0x9($v1)
    ctx->pc = 0x3573e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3573e4:
    // 0x3573e4: 0x6c6afff0  ldr         $t2, -0x10($v1)
    ctx->pc = 0x3573e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3573e8:
    // 0x3573e8: 0x686bffff  ldl         $t3, -0x1($v1)
    ctx->pc = 0x3573e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3573ec:
    // 0x3573ec: 0x6c6bfff8  ldr         $t3, -0x8($v1)
    ctx->pc = 0x3573ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3573f0:
    // 0x3573f0: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x3573f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3573f4:
    // 0x3573f4: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x3573f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3573f8:
    // 0x3573f8: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x3573f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3573fc:
    // 0x3573fc: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x3573fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357400:
    // 0x357400: 0xb3ab0037  sdl         $t3, 0x37($sp)
    ctx->pc = 0x357400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357404:
    // 0x357404: 0xb7ab0030  sdr         $t3, 0x30($sp)
    ctx->pc = 0x357404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357408:
    // 0x357408: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x357408u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_35740c:
    // 0x35740c: 0xc13c534  jal         func_4F14D0
label_357410:
    if (ctx->pc == 0x357410u) {
        ctx->pc = 0x357410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35740Cu;
        // 0x357410: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357414u;
        goto label_357414;
    }
    ctx->pc = 0x35740Cu;
    SET_GPR_U32(ctx, 31, 0x357414u);
    ctx->pc = 0x357410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35740Cu;
    // 0x357410: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F14D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F14D0u, 0x35740Cu, 0x357414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357414u;
label_357414:
    // 0x357414: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x357414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_357418:
    // 0x357418: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x357418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35741c:
    // 0x35741c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35741cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_357420:
    // 0x357420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x357420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_357424:
    // 0x357424: 0x3e00008  jr          $ra
label_357428:
    if (ctx->pc == 0x357428u) {
        ctx->pc = 0x357428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357424u;
        // 0x357428: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35742Cu;
        goto label_35742c;
    }
    ctx->pc = 0x357424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357424u;
        // 0x357428: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35742Cu;
label_35742c:
    // 0x35742c: 0x0  nop
    ctx->pc = 0x35742cu;
    // NOP
    ctx->pc = 0x357430u;
}
