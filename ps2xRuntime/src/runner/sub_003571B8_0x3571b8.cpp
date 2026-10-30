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

// Function: sub_003571B8
// Address: 0x3571b8 - 0x3572e8
void sub_003571B8_0x3571b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003571B8_0x3571b8");
#endif

    switch (ctx->pc) {
        case 0x3571b8u: goto label_3571b8;
        case 0x3571bcu: goto label_3571bc;
        case 0x3571c0u: goto label_3571c0;
        case 0x3571c4u: goto label_3571c4;
        case 0x3571c8u: goto label_3571c8;
        case 0x3571ccu: goto label_3571cc;
        case 0x3571d0u: goto label_3571d0;
        case 0x3571d4u: goto label_3571d4;
        case 0x3571d8u: goto label_3571d8;
        case 0x3571dcu: goto label_3571dc;
        case 0x3571e0u: goto label_3571e0;
        case 0x3571e4u: goto label_3571e4;
        case 0x3571e8u: goto label_3571e8;
        case 0x3571ecu: goto label_3571ec;
        case 0x3571f0u: goto label_3571f0;
        case 0x3571f4u: goto label_3571f4;
        case 0x3571f8u: goto label_3571f8;
        case 0x3571fcu: goto label_3571fc;
        case 0x357200u: goto label_357200;
        case 0x357204u: goto label_357204;
        case 0x357208u: goto label_357208;
        case 0x35720cu: goto label_35720c;
        case 0x357210u: goto label_357210;
        case 0x357214u: goto label_357214;
        case 0x357218u: goto label_357218;
        case 0x35721cu: goto label_35721c;
        case 0x357220u: goto label_357220;
        case 0x357224u: goto label_357224;
        case 0x357228u: goto label_357228;
        case 0x35722cu: goto label_35722c;
        case 0x357230u: goto label_357230;
        case 0x357234u: goto label_357234;
        case 0x357238u: goto label_357238;
        case 0x35723cu: goto label_35723c;
        case 0x357240u: goto label_357240;
        case 0x357244u: goto label_357244;
        case 0x357248u: goto label_357248;
        case 0x35724cu: goto label_35724c;
        case 0x357250u: goto label_357250;
        case 0x357254u: goto label_357254;
        case 0x357258u: goto label_357258;
        case 0x35725cu: goto label_35725c;
        case 0x357260u: goto label_357260;
        case 0x357264u: goto label_357264;
        case 0x357268u: goto label_357268;
        case 0x35726cu: goto label_35726c;
        case 0x357270u: goto label_357270;
        case 0x357274u: goto label_357274;
        case 0x357278u: goto label_357278;
        case 0x35727cu: goto label_35727c;
        case 0x357280u: goto label_357280;
        case 0x357284u: goto label_357284;
        case 0x357288u: goto label_357288;
        case 0x35728cu: goto label_35728c;
        case 0x357290u: goto label_357290;
        case 0x357294u: goto label_357294;
        case 0x357298u: goto label_357298;
        case 0x35729cu: goto label_35729c;
        case 0x3572a0u: goto label_3572a0;
        case 0x3572a4u: goto label_3572a4;
        case 0x3572a8u: goto label_3572a8;
        case 0x3572acu: goto label_3572ac;
        case 0x3572b0u: goto label_3572b0;
        case 0x3572b4u: goto label_3572b4;
        case 0x3572b8u: goto label_3572b8;
        case 0x3572bcu: goto label_3572bc;
        case 0x3572c0u: goto label_3572c0;
        case 0x3572c4u: goto label_3572c4;
        case 0x3572c8u: goto label_3572c8;
        case 0x3572ccu: goto label_3572cc;
        case 0x3572d0u: goto label_3572d0;
        case 0x3572d4u: goto label_3572d4;
        case 0x3572d8u: goto label_3572d8;
        case 0x3572dcu: goto label_3572dc;
        case 0x3572e0u: goto label_3572e0;
        case 0x3572e4u: goto label_3572e4;
        default: break;
    }

    ctx->pc = 0x3571b8u;

label_3571b8:
    // 0x3571b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3571b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3571bc:
    // 0x3571bc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3571bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3571c0:
    // 0x3571c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3571c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3571c4:
    // 0x3571c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3571c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3571c8:
    // 0x3571c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3571c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3571cc:
    // 0x3571cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3571ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3571d0:
    // 0x3571d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3571d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3571d4:
    // 0x3571d4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x3571d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3571d8:
    // 0x3571d8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3571d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3571dc:
    // 0x3571dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3571dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3571e0:
    // 0x3571e0: 0x846600c8  lh          $a2, 0xC8($v1)
    ctx->pc = 0x3571e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3571e4:
    // 0x3571e4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3571e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3571e8:
    // 0x3571e8: 0x40f809  jalr        $v0
label_3571ec:
    if (ctx->pc == 0x3571ECu) {
        ctx->pc = 0x3571ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571E8u;
        // 0x3571ec: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3571F0u;
        goto label_3571f0;
    }
    ctx->pc = 0x3571E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3571F0u);
        ctx->pc = 0x3571ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571E8u;
        // 0x3571ec: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3571E8u, 0x3571F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3571F0u;
label_3571f0:
    // 0x3571f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3571f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3571f4:
    // 0x3571f4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3571f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3571f8:
    // 0x3571f8: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x3571f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_3571fc:
    // 0x3571fc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x3571fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_357200:
    // 0x357200: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x357200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_357204:
    // 0x357204: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x357204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_357208:
    // 0x357208: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x357208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_35720c:
    // 0x35720c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x35720cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_357210:
    // 0x357210: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x357210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_357214:
    // 0x357214: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x357214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_357218:
    // 0x357218: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_35721c:
    if (ctx->pc == 0x35721Cu) {
        ctx->pc = 0x35721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357218u;
        // 0x35721c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357220u;
        goto label_357220;
    }
    ctx->pc = 0x357218u;
    {
        const bool branch_taken_0x357218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357218u;
        // 0x35721c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357218) {
            ctx->pc = 0x357268u;
            goto label_357268;
        }
    }
    ctx->pc = 0x357220u;
label_357220:
    // 0x357220: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_357224:
    if (ctx->pc == 0x357224u) {
        ctx->pc = 0x357224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357220u;
        // 0x357224: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357228u;
        goto label_357228;
    }
    ctx->pc = 0x357220u;
    {
        const bool branch_taken_0x357220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x357220) {
            ctx->pc = 0x357224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357220u;
            // 0x357224: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35725Cu;
            goto label_35725c;
        }
    }
    ctx->pc = 0x357228u;
label_357228:
    // 0x357228: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x357228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_35722c:
    // 0x35722c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x35722cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_357230:
    // 0x357230: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x357230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_357234:
    // 0x357234: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x357234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_357238:
    // 0x357238: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x357238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_35723c:
    // 0x35723c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x35723cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_357240:
    // 0x357240: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x357240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357244:
    // 0x357244: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x357244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357248:
    // 0x357248: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x357248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35724c:
    // 0x35724c: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x35724cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357250:
    // 0x357250: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x357250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357254:
    // 0x357254: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x357254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357258:
    // 0x357258: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x357258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35725c:
    // 0x35725c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x35725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_357260:
    // 0x357260: 0x10000003  b           . + 4 + (0x3 << 2)
label_357264:
    if (ctx->pc == 0x357264u) {
        ctx->pc = 0x357264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357260u;
        // 0x357264: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357268u;
        goto label_357268;
    }
    ctx->pc = 0x357260u;
    {
        const bool branch_taken_0x357260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357260u;
        // 0x357264: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357260) {
            ctx->pc = 0x357270u;
            goto label_357270;
        }
    }
    ctx->pc = 0x357268u;
label_357268:
    // 0x357268: 0xc13c5ec  jal         func_4F17B0
label_35726c:
    if (ctx->pc == 0x35726Cu) {
        ctx->pc = 0x35726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357268u;
        // 0x35726c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357270u;
        goto label_357270;
    }
    ctx->pc = 0x357268u;
    SET_GPR_U32(ctx, 31, 0x357270u);
    ctx->pc = 0x35726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357268u;
    // 0x35726c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F17B0u, 0x357268u, 0x357270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357270u;
label_357270:
    // 0x357270: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x357270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_357274:
    // 0x357274: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x357274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_357278:
    // 0x357278: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x357278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35727c:
    // 0x35727c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x35727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_357280:
    // 0x357280: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x357280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_357284:
    // 0x357284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357288:
    // 0x357288: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x357288u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_35728c:
    // 0x35728c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x35728cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_357290:
    // 0x357290: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x357290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_357294:
    // 0x357294: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x357294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357298:
    // 0x357298: 0x6869ffef  ldl         $t1, -0x11($v1)
    ctx->pc = 0x357298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_35729c:
    // 0x35729c: 0x6c69ffe8  ldr         $t1, -0x18($v1)
    ctx->pc = 0x35729cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3572a0:
    // 0x3572a0: 0x686afff7  ldl         $t2, -0x9($v1)
    ctx->pc = 0x3572a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3572a4:
    // 0x3572a4: 0x6c6afff0  ldr         $t2, -0x10($v1)
    ctx->pc = 0x3572a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3572a8:
    // 0x3572a8: 0x686bffff  ldl         $t3, -0x1($v1)
    ctx->pc = 0x3572a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3572ac:
    // 0x3572ac: 0x6c6bfff8  ldr         $t3, -0x8($v1)
    ctx->pc = 0x3572acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3572b0:
    // 0x3572b0: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x3572b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3572b4:
    // 0x3572b4: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x3572b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3572b8:
    // 0x3572b8: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x3572b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3572bc:
    // 0x3572bc: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x3572bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3572c0:
    // 0x3572c0: 0xb3ab0037  sdl         $t3, 0x37($sp)
    ctx->pc = 0x3572c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3572c4:
    // 0x3572c4: 0xb7ab0030  sdr         $t3, 0x30($sp)
    ctx->pc = 0x3572c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3572c8:
    // 0x3572c8: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x3572c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_3572cc:
    // 0x3572cc: 0xc13c534  jal         func_4F14D0
label_3572d0:
    if (ctx->pc == 0x3572D0u) {
        ctx->pc = 0x3572D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572CCu;
        // 0x3572d0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3572D4u;
        goto label_3572d4;
    }
    ctx->pc = 0x3572CCu;
    SET_GPR_U32(ctx, 31, 0x3572D4u);
    ctx->pc = 0x3572D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572CCu;
    // 0x3572d0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F14D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F14D0u, 0x3572CCu, 0x3572D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572D4u;
label_3572d4:
    // 0x3572d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3572d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3572d8:
    // 0x3572d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3572d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3572dc:
    // 0x3572dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3572dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3572e0:
    // 0x3572e0: 0x3e00008  jr          $ra
label_3572e4:
    if (ctx->pc == 0x3572E4u) {
        ctx->pc = 0x3572E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572E0u;
        // 0x3572e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3572E8u;
        goto label_fallthrough_0x3572e0;
    }
    ctx->pc = 0x3572E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3572E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572E0u;
        // 0x3572e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3572E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3572e0:
    ctx->pc = 0x3572E8u;
}
