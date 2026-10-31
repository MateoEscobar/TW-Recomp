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

// Function: sub_004CD460
// Address: 0x4cd460 - 0x4cdca8
void sub_004CD460_0x4cd460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD460_0x4cd460");
#endif

    switch (ctx->pc) {
        case 0x4cd4a0u: goto label_4cd4a0;
        case 0x4cd528u: goto label_4cd528;
        case 0x4cd5c0u: goto label_4cd5c0;
        case 0x4cd628u: goto label_4cd628;
        case 0x4cd6e0u: goto label_4cd6e0;
        case 0x4cd788u: goto label_4cd788;
        case 0x4cd8e8u: goto label_4cd8e8;
        case 0x4cda40u: goto label_4cda40;
        case 0x4cdb28u: goto label_4cdb28;
        default: break;
    }

    ctx->pc = 0x4cd460u;

    // 0x4cd460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cd460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cd464: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x4cd464u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd468: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cd468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cd46c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x4cd46cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd470: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4cd470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cd478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cd478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cd47c: 0x2e420018  sltiu       $v0, $s2, 0x18
    ctx->pc = 0x4cd47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x4cd480: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4CD480u;
    {
        const bool branch_taken_0x4cd480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD480u;
        // 0x4cd484: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd480) {
            ctx->pc = 0x4CD4E8u;
            goto label_4cd4e8;
        }
    }
    ctx->pc = 0x4CD488u;
    // 0x4cd488: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cd488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd48c: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x4cd48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x4cd490: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4cd490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4cd494: 0x3029821  addu        $s3, $t8, $v0
    ctx->pc = 0x4cd494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4cd498: 0x13130008  beq         $t8, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD498u;
    {
        const bool branch_taken_0x4cd498 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 19));
        ctx->pc = 0x4CD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD498u;
        // 0x4cd49c: 0x32520007  andi        $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd498) {
            ctx->pc = 0x4CD4BCu;
            goto label_4cd4bc;
        }
    }
    ctx->pc = 0x4CD4A0u;
label_4cd4a0:
    // 0x4cd4a0: 0x6b020007  ldl         $v0, 0x7($t8)
    ctx->pc = 0x4cd4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4cd4a4: 0x6f020000  ldr         $v0, 0x0($t8)
    ctx->pc = 0x4cd4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4cd4a8: 0xb3220007  sdl         $v0, 0x7($t9)
    ctx->pc = 0x4cd4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4cd4ac: 0xb7220000  sdr         $v0, 0x0($t9)
    ctx->pc = 0x4cd4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4cd4b0: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x4cd4b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x4cd4b4: 0x1713fffa  bne         $t8, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CD4B4u;
    {
        const bool branch_taken_0x4cd4b4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD4B4u;
        // 0x4cd4b8: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd4b4) {
            ctx->pc = 0x4CD4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd4a0;
        }
    }
    ctx->pc = 0x4CD4BCu;
label_4cd4bc:
    // 0x4cd4bc: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x4cd4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x4cd4c0: 0x104001e4  beqz        $v0, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x4CD4C0u;
    {
        const bool branch_taken_0x4cd4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd4c0) {
            ctx->pc = 0x4CDC54u;
            goto label_4cdc54;
        }
    }
    ctx->pc = 0x4CD4C8u;
    // 0x4cd4c8: 0x8b020003  lwl         $v0, 0x3($t8)
    ctx->pc = 0x4cd4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x4cd4cc: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x4cd4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4cd4d0: 0x9b020000  lwr         $v0, 0x0($t8)
    ctx->pc = 0x4cd4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x4cd4d4: 0xab220003  swl         $v0, 0x3($t9)
    ctx->pc = 0x4cd4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4cd4d8: 0xbb220000  swr         $v0, 0x0($t9)
    ctx->pc = 0x4cd4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4cd4dc: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x4cd4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x4cd4e0: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x4CD4E0u;
    {
        const bool branch_taken_0x4cd4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD4E0u;
        // 0x4cd4e4: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd4e0) {
            ctx->pc = 0x4CDC54u;
            goto label_4cdc54;
        }
    }
    ctx->pc = 0x4CD4E8u;
label_4cd4e8:
    // 0x4cd4e8: 0x3322000f  andi        $v0, $t9, 0xF
    ctx->pc = 0x4cd4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)15);
    // 0x4cd4ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD4ECu;
    {
        const bool branch_taken_0x4cd4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD4ECu;
        // 0x4cd4f0: 0x33330003  andi        $s3, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd4ec) {
            ctx->pc = 0x4CD510u;
            goto label_4cd510;
        }
    }
    ctx->pc = 0x4CD4F4u;
    // 0x4cd4f4: 0x3302000f  andi        $v0, $t8, 0xF
    ctx->pc = 0x4cd4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)15);
    // 0x4cd4f8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4CD4F8u;
    {
        const bool branch_taken_0x4cd4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD4F8u;
        // 0x4cd4fc: 0x33020007  andi        $v0, $t8, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd4f8) {
            ctx->pc = 0x4CD598u;
            goto label_4cd598;
        }
    }
    ctx->pc = 0x4CD500u;
    // 0x4cd500: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x4CD500u;
    {
        const bool branch_taken_0x4cd500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD500u;
        // 0x4cd504: 0x2e420800  sltiu       $v0, $s2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd500) {
            ctx->pc = 0x4CD6C0u;
            goto label_4cd6c0;
        }
    }
    ctx->pc = 0x4CD508u;
    // 0x4cd508: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x4CD508u;
    {
        const bool branch_taken_0x4cd508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd508) {
            ctx->pc = 0x4CDA1Cu;
            goto label_4cda1c;
        }
    }
    ctx->pc = 0x4CD510u;
label_4cd510:
    // 0x4cd510: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x4CD510u;
    {
        const bool branch_taken_0x4cd510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD510u;
        // 0x4cd514: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd510) {
            ctx->pc = 0x4CD544u;
            goto label_4cd544;
        }
    }
    ctx->pc = 0x4CD518u;
    // 0x4cd518: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x4cd518u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4cd51c: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x4cd51cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4cd520: 0x2789821  addu        $s3, $s3, $t8
    ctx->pc = 0x4cd520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 24)));
    // 0x4cd524: 0x0  nop
    ctx->pc = 0x4cd524u;
    // NOP
label_4cd528:
    // 0x4cd528: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x4cd528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd52c: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x4cd52cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x4cd530: 0xa3220000  sb          $v0, 0x0($t9)
    ctx->pc = 0x4cd530u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4cd534: 0x0  nop
    ctx->pc = 0x4cd534u;
    // NOP
    // 0x4cd538: 0x0  nop
    ctx->pc = 0x4cd538u;
    // NOP
    // 0x4cd53c: 0x1713fffa  bne         $t8, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CD53Cu;
    {
        const bool branch_taken_0x4cd53c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD53Cu;
        // 0x4cd540: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd53c) {
            ctx->pc = 0x4CD528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd528;
        }
    }
    ctx->pc = 0x4CD544u;
label_4cd544:
    // 0x4cd544: 0x33220004  andi        $v0, $t9, 0x4
    ctx->pc = 0x4cd544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)4);
    // 0x4cd548: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD548u;
    {
        const bool branch_taken_0x4cd548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD548u;
        // 0x4cd54c: 0x3323000f  andi        $v1, $t9, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd548) {
            ctx->pc = 0x4CD56Cu;
            goto label_4cd56c;
        }
    }
    ctx->pc = 0x4CD550u;
    // 0x4cd550: 0x8b020003  lwl         $v0, 0x3($t8)
    ctx->pc = 0x4cd550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x4cd554: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x4cd554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4cd558: 0x9b020000  lwr         $v0, 0x0($t8)
    ctx->pc = 0x4cd558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x4cd55c: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x4cd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x4cd560: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x4cd560u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x4cd564: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x4cd564u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x4cd568: 0x3323000f  andi        $v1, $t9, 0xF
    ctx->pc = 0x4cd568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)15);
label_4cd56c:
    // 0x4cd56c: 0x3302000f  andi        $v0, $t8, 0xF
    ctx->pc = 0x4cd56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)15);
    // 0x4cd570: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4CD570u;
    {
        const bool branch_taken_0x4cd570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD570u;
        // 0x4cd574: 0x33020007  andi        $v0, $t8, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd570) {
            ctx->pc = 0x4CD69Cu;
            goto label_4cd69c;
        }
    }
    ctx->pc = 0x4CD578u;
    // 0x4cd578: 0x33220008  andi        $v0, $t9, 0x8
    ctx->pc = 0x4cd578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8);
    // 0x4cd57c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CD57Cu;
    {
        const bool branch_taken_0x4cd57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD57Cu;
        // 0x4cd580: 0x2e421200  sltiu       $v0, $s2, 0x1200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd57c) {
            ctx->pc = 0x4CD59Cu;
            goto label_4cd59c;
        }
    }
    ctx->pc = 0x4CD584u;
    // 0x4cd584: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd588: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x4cd588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x4cd58c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x4cd58cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x4cd590: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cd590u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cd594: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x4cd594u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_4cd598:
    // 0x4cd598: 0x2e421200  sltiu       $v0, $s2, 0x1200
    ctx->pc = 0x4cd598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4608) ? 1 : 0);
label_4cd59c:
    // 0x4cd59c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4CD59Cu;
    {
        const bool branch_taken_0x4cd59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cd59c) {
            ctx->pc = 0x4CD610u;
            goto label_4cd610;
        }
    }
    ctx->pc = 0x4CD5A4u;
    // 0x4cd5a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd5a8: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x4cd5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x4cd5ac: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4cd5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4cd5b0: 0x3029821  addu        $s3, $t8, $v0
    ctx->pc = 0x4cd5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4cd5b4: 0x3252007f  andi        $s2, $s2, 0x7F
    ctx->pc = 0x4cd5b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
    // 0x4cd5b8: 0x0  nop
    ctx->pc = 0x4cd5b8u;
    // NOP
    // 0x4cd5bc: 0x0  nop
    ctx->pc = 0x4cd5bcu;
    // NOP
label_4cd5c0:
    // 0x4cd5c0: 0xcf0000c0  pref        0x00, 0xC0($t8)
    ctx->pc = 0x4cd5c0u;
    // PREF instruction (ignored)
    // 0x4cd5c4: 0x7b020000  lq          $v0, 0x0($t8)
    ctx->pc = 0x4cd5c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd5c8: 0x7b030010  lq          $v1, 0x10($t8)
    ctx->pc = 0x4cd5c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cd5cc: 0x7b040020  lq          $a0, 0x20($t8)
    ctx->pc = 0x4cd5ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x4cd5d0: 0x7b050030  lq          $a1, 0x30($t8)
    ctx->pc = 0x4cd5d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x4cd5d4: 0x7b060040  lq          $a2, 0x40($t8)
    ctx->pc = 0x4cd5d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 24), 64)));
    // 0x4cd5d8: 0x7b070050  lq          $a3, 0x50($t8)
    ctx->pc = 0x4cd5d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 24), 80)));
    // 0x4cd5dc: 0x7b080060  lq          $t0, 0x60($t8)
    ctx->pc = 0x4cd5dcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 24), 96)));
    // 0x4cd5e0: 0x7b090070  lq          $t1, 0x70($t8)
    ctx->pc = 0x4cd5e0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 112)));
    // 0x4cd5e4: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd5e8: 0x7f230010  sq          $v1, 0x10($t9)
    ctx->pc = 0x4cd5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 3));
    // 0x4cd5ec: 0x7f240020  sq          $a0, 0x20($t9)
    ctx->pc = 0x4cd5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 4));
    // 0x4cd5f0: 0x7f250030  sq          $a1, 0x30($t9)
    ctx->pc = 0x4cd5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 48), GPR_VEC(ctx, 5));
    // 0x4cd5f4: 0x7f260040  sq          $a2, 0x40($t9)
    ctx->pc = 0x4cd5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 64), GPR_VEC(ctx, 6));
    // 0x4cd5f8: 0x7f270050  sq          $a3, 0x50($t9)
    ctx->pc = 0x4cd5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 80), GPR_VEC(ctx, 7));
    // 0x4cd5fc: 0x7f280060  sq          $t0, 0x60($t9)
    ctx->pc = 0x4cd5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 96), GPR_VEC(ctx, 8));
    // 0x4cd600: 0x7f290070  sq          $t1, 0x70($t9)
    ctx->pc = 0x4cd600u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 112), GPR_VEC(ctx, 9));
    // 0x4cd604: 0x27180080  addiu       $t8, $t8, 0x80
    ctx->pc = 0x4cd604u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x4cd608: 0x1713ffed  bne         $t8, $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4CD608u;
    {
        const bool branch_taken_0x4cd608 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD608u;
        // 0x4cd60c: 0x27390080  addiu       $t9, $t9, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd608) {
            ctx->pc = 0x4CD5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd5c0;
        }
    }
    ctx->pc = 0x4CD610u;
label_4cd610:
    // 0x4cd610: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd614: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x4cd614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x4cd618: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4cd618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4cd61c: 0x3029821  addu        $s3, $t8, $v0
    ctx->pc = 0x4cd61cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4cd620: 0x1313000c  beq         $t8, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x4CD620u;
    {
        const bool branch_taken_0x4cd620 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 19));
        ctx->pc = 0x4CD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD620u;
        // 0x4cd624: 0x3252003f  andi        $s2, $s2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd620) {
            ctx->pc = 0x4CD654u;
            goto label_4cd654;
        }
    }
    ctx->pc = 0x4CD628u;
label_4cd628:
    // 0x4cd628: 0x7b020000  lq          $v0, 0x0($t8)
    ctx->pc = 0x4cd628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd62c: 0x7b030010  lq          $v1, 0x10($t8)
    ctx->pc = 0x4cd62cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cd630: 0x7b040020  lq          $a0, 0x20($t8)
    ctx->pc = 0x4cd630u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x4cd634: 0x7b050030  lq          $a1, 0x30($t8)
    ctx->pc = 0x4cd634u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x4cd638: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd638u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd63c: 0x7f230010  sq          $v1, 0x10($t9)
    ctx->pc = 0x4cd63cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 3));
    // 0x4cd640: 0x7f240020  sq          $a0, 0x20($t9)
    ctx->pc = 0x4cd640u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 4));
    // 0x4cd644: 0x7f250030  sq          $a1, 0x30($t9)
    ctx->pc = 0x4cd644u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 48), GPR_VEC(ctx, 5));
    // 0x4cd648: 0x27180040  addiu       $t8, $t8, 0x40
    ctx->pc = 0x4cd648u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 64));
    // 0x4cd64c: 0x1713fff6  bne         $t8, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CD64Cu;
    {
        const bool branch_taken_0x4cd64c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD64Cu;
        // 0x4cd650: 0x27390040  addiu       $t9, $t9, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd64c) {
            ctx->pc = 0x4CD628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd628;
        }
    }
    ctx->pc = 0x4CD654u;
label_4cd654:
    // 0x4cd654: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x4cd654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x4cd658: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CD658u;
    {
        const bool branch_taken_0x4cd658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD658u;
        // 0x4cd65c: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd658) {
            ctx->pc = 0x4CD680u;
            goto label_4cd680;
        }
    }
    ctx->pc = 0x4CD660u;
    // 0x4cd660: 0x7b020000  lq          $v0, 0x0($t8)
    ctx->pc = 0x4cd660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd664: 0x7b030010  lq          $v1, 0x10($t8)
    ctx->pc = 0x4cd664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cd668: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd668u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd66c: 0x7f230010  sq          $v1, 0x10($t9)
    ctx->pc = 0x4cd66cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 3));
    // 0x4cd670: 0x2652ffe0  addiu       $s2, $s2, -0x20
    ctx->pc = 0x4cd670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x4cd674: 0x27390020  addiu       $t9, $t9, 0x20
    ctx->pc = 0x4cd674u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
    // 0x4cd678: 0x27180020  addiu       $t8, $t8, 0x20
    ctx->pc = 0x4cd678u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x4cd67c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x4cd67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_4cd680:
    // 0x4cd680: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x4CD680u;
    {
        const bool branch_taken_0x4cd680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD680u;
        // 0x4cd684: 0x2e420008  sltiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd680) {
            ctx->pc = 0x4CD838u;
            goto label_4cd838;
        }
    }
    ctx->pc = 0x4CD688u;
    // 0x4cd688: 0x7b020000  lq          $v0, 0x0($t8)
    ctx->pc = 0x4cd688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd68c: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x4cd68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x4cd690: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd690u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd694: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x4CD694u;
    {
        const bool branch_taken_0x4cd694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD694u;
        // 0x4cd698: 0x27180010  addiu       $t8, $t8, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd694) {
            ctx->pc = 0x4CD830u;
            goto label_4cd830;
        }
    }
    ctx->pc = 0x4CD69Cu;
label_4cd69c:
    // 0x4cd69c: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x4CD69Cu;
    {
        const bool branch_taken_0x4cd69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD69Cu;
        // 0x4cd6a0: 0x33220008  andi        $v0, $t9, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd69c) {
            ctx->pc = 0x4CD9F8u;
            goto label_4cd9f8;
        }
    }
    ctx->pc = 0x4CD6A4u;
    // 0x4cd6a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CD6A4u;
    {
        const bool branch_taken_0x4cd6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD6A4u;
        // 0x4cd6a8: 0x2e421200  sltiu       $v0, $s2, 0x1200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd6a4) {
            ctx->pc = 0x4CD6C4u;
            goto label_4cd6c4;
        }
    }
    ctx->pc = 0x4CD6ACu;
    // 0x4cd6ac: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd6acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd6b0: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x4cd6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x4cd6b4: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x4cd6b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x4cd6b8: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cd6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cd6bc: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x4cd6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_4cd6c0:
    // 0x4cd6c0: 0x2e421200  sltiu       $v0, $s2, 0x1200
    ctx->pc = 0x4cd6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4608) ? 1 : 0);
label_4cd6c4:
    // 0x4cd6c4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4CD6C4u;
    {
        const bool branch_taken_0x4cd6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cd6c4) {
            ctx->pc = 0x4CD770u;
            goto label_4cd770;
        }
    }
    ctx->pc = 0x4CD6CCu;
    // 0x4cd6cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd6d0: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x4cd6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x4cd6d4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4cd6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4cd6d8: 0x3029821  addu        $s3, $t8, $v0
    ctx->pc = 0x4cd6d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4cd6dc: 0x3252007f  andi        $s2, $s2, 0x7F
    ctx->pc = 0x4cd6dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
label_4cd6e0:
    // 0x4cd6e0: 0xcf0000c0  pref        0x00, 0xC0($t8)
    ctx->pc = 0x4cd6e0u;
    // PREF instruction (ignored)
    // 0x4cd6e4: 0xdf020008  ld          $v0, 0x8($t8)
    ctx->pc = 0x4cd6e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd6e8: 0xdf030018  ld          $v1, 0x18($t8)
    ctx->pc = 0x4cd6e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x4cd6ec: 0xdf040028  ld          $a0, 0x28($t8)
    ctx->pc = 0x4cd6ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x4cd6f0: 0xdf050038  ld          $a1, 0x38($t8)
    ctx->pc = 0x4cd6f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 24), 56)));
    // 0x4cd6f4: 0xdf060048  ld          $a2, 0x48($t8)
    ctx->pc = 0x4cd6f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 24), 72)));
    // 0x4cd6f8: 0xdf070058  ld          $a3, 0x58($t8)
    ctx->pc = 0x4cd6f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 24), 88)));
    // 0x4cd6fc: 0xdf080068  ld          $t0, 0x68($t8)
    ctx->pc = 0x4cd6fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 24), 104)));
    // 0x4cd700: 0xdf090078  ld          $t1, 0x78($t8)
    ctx->pc = 0x4cd700u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 24), 120)));
    // 0x4cd704: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x4cd704u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x4cd708: 0x70631b89  pcpyld      $v1, $v1, $v1
    ctx->pc = 0x4cd708u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x4cd70c: 0x70842389  pcpyld      $a0, $a0, $a0
    ctx->pc = 0x4cd70cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x4cd710: 0x70a52b89  pcpyld      $a1, $a1, $a1
    ctx->pc = 0x4cd710u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 5)));
    // 0x4cd714: 0x70c63389  pcpyld      $a2, $a2, $a2
    ctx->pc = 0x4cd714u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x4cd718: 0x70e73b89  pcpyld      $a3, $a3, $a3
    ctx->pc = 0x4cd718u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x4cd71c: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cd71cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cd720: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cd720u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cd724: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd724u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd728: 0xdf030010  ld          $v1, 0x10($t8)
    ctx->pc = 0x4cd728u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cd72c: 0xdf040020  ld          $a0, 0x20($t8)
    ctx->pc = 0x4cd72cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x4cd730: 0xdf050030  ld          $a1, 0x30($t8)
    ctx->pc = 0x4cd730u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x4cd734: 0xdf060040  ld          $a2, 0x40($t8)
    ctx->pc = 0x4cd734u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 24), 64)));
    // 0x4cd738: 0xdf070050  ld          $a3, 0x50($t8)
    ctx->pc = 0x4cd738u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 24), 80)));
    // 0x4cd73c: 0xdf080060  ld          $t0, 0x60($t8)
    ctx->pc = 0x4cd73cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 24), 96)));
    // 0x4cd740: 0xdf090070  ld          $t1, 0x70($t8)
    ctx->pc = 0x4cd740u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 24), 112)));
    // 0x4cd744: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd744u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd748: 0x7f230010  sq          $v1, 0x10($t9)
    ctx->pc = 0x4cd748u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 3));
    // 0x4cd74c: 0x7f240020  sq          $a0, 0x20($t9)
    ctx->pc = 0x4cd74cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 4));
    // 0x4cd750: 0x7f250030  sq          $a1, 0x30($t9)
    ctx->pc = 0x4cd750u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 48), GPR_VEC(ctx, 5));
    // 0x4cd754: 0x7f260040  sq          $a2, 0x40($t9)
    ctx->pc = 0x4cd754u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 64), GPR_VEC(ctx, 6));
    // 0x4cd758: 0x7f270050  sq          $a3, 0x50($t9)
    ctx->pc = 0x4cd758u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 80), GPR_VEC(ctx, 7));
    // 0x4cd75c: 0x7f280060  sq          $t0, 0x60($t9)
    ctx->pc = 0x4cd75cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 96), GPR_VEC(ctx, 8));
    // 0x4cd760: 0x7f290070  sq          $t1, 0x70($t9)
    ctx->pc = 0x4cd760u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 112), GPR_VEC(ctx, 9));
    // 0x4cd764: 0x27180080  addiu       $t8, $t8, 0x80
    ctx->pc = 0x4cd764u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x4cd768: 0x1713ffdd  bne         $t8, $s3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4CD768u;
    {
        const bool branch_taken_0x4cd768 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD768u;
        // 0x4cd76c: 0x27390080  addiu       $t9, $t9, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd768) {
            ctx->pc = 0x4CD6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd6e0;
        }
    }
    ctx->pc = 0x4CD770u;
label_4cd770:
    // 0x4cd770: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cd770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd774: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x4cd774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x4cd778: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4cd778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4cd77c: 0x3029821  addu        $s3, $t8, $v0
    ctx->pc = 0x4cd77cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4cd780: 0x13130014  beq         $t8, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x4CD780u;
    {
        const bool branch_taken_0x4cd780 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 19));
        ctx->pc = 0x4CD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD780u;
        // 0x4cd784: 0x3252003f  andi        $s2, $s2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd780) {
            ctx->pc = 0x4CD7D4u;
            goto label_4cd7d4;
        }
    }
    ctx->pc = 0x4CD788u;
label_4cd788:
    // 0x4cd788: 0xdf020008  ld          $v0, 0x8($t8)
    ctx->pc = 0x4cd788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd78c: 0xdf030018  ld          $v1, 0x18($t8)
    ctx->pc = 0x4cd78cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x4cd790: 0xdf040028  ld          $a0, 0x28($t8)
    ctx->pc = 0x4cd790u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x4cd794: 0xdf050038  ld          $a1, 0x38($t8)
    ctx->pc = 0x4cd794u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 24), 56)));
    // 0x4cd798: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x4cd798u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x4cd79c: 0x70631b89  pcpyld      $v1, $v1, $v1
    ctx->pc = 0x4cd79cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x4cd7a0: 0x70842389  pcpyld      $a0, $a0, $a0
    ctx->pc = 0x4cd7a0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x4cd7a4: 0x70a52b89  pcpyld      $a1, $a1, $a1
    ctx->pc = 0x4cd7a4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 5)));
    // 0x4cd7a8: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd7a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd7ac: 0xdf030010  ld          $v1, 0x10($t8)
    ctx->pc = 0x4cd7acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cd7b0: 0xdf040020  ld          $a0, 0x20($t8)
    ctx->pc = 0x4cd7b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x4cd7b4: 0xdf050030  ld          $a1, 0x30($t8)
    ctx->pc = 0x4cd7b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x4cd7b8: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd7bc: 0x7f230010  sq          $v1, 0x10($t9)
    ctx->pc = 0x4cd7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 3));
    // 0x4cd7c0: 0x7f240020  sq          $a0, 0x20($t9)
    ctx->pc = 0x4cd7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 4));
    // 0x4cd7c4: 0x7f250030  sq          $a1, 0x30($t9)
    ctx->pc = 0x4cd7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 48), GPR_VEC(ctx, 5));
    // 0x4cd7c8: 0x27180040  addiu       $t8, $t8, 0x40
    ctx->pc = 0x4cd7c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 64));
    // 0x4cd7cc: 0x1713ffee  bne         $t8, $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4CD7CCu;
    {
        const bool branch_taken_0x4cd7cc = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD7CCu;
        // 0x4cd7d0: 0x27390040  addiu       $t9, $t9, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd7cc) {
            ctx->pc = 0x4CD788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd788;
        }
    }
    ctx->pc = 0x4CD7D4u;
label_4cd7d4:
    // 0x4cd7d4: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x4cd7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x4cd7d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CD7D8u;
    {
        const bool branch_taken_0x4cd7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD7D8u;
        // 0x4cd7dc: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd7d8) {
            ctx->pc = 0x4CD810u;
            goto label_4cd810;
        }
    }
    ctx->pc = 0x4CD7E0u;
    // 0x4cd7e0: 0xdf020008  ld          $v0, 0x8($t8)
    ctx->pc = 0x4cd7e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd7e4: 0xdf030018  ld          $v1, 0x18($t8)
    ctx->pc = 0x4cd7e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x4cd7e8: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x4cd7e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x4cd7ec: 0x70631b89  pcpyld      $v1, $v1, $v1
    ctx->pc = 0x4cd7ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x4cd7f0: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd7f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd7f4: 0xdf030010  ld          $v1, 0x10($t8)
    ctx->pc = 0x4cd7f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cd7f8: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd7fc: 0x7f230010  sq          $v1, 0x10($t9)
    ctx->pc = 0x4cd7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 3));
    // 0x4cd800: 0x2652ffe0  addiu       $s2, $s2, -0x20
    ctx->pc = 0x4cd800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x4cd804: 0x27390020  addiu       $t9, $t9, 0x20
    ctx->pc = 0x4cd804u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
    // 0x4cd808: 0x27180020  addiu       $t8, $t8, 0x20
    ctx->pc = 0x4cd808u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x4cd80c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x4cd80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_4cd810:
    // 0x4cd810: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CD810u;
    {
        const bool branch_taken_0x4cd810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD810u;
        // 0x4cd814: 0x2e420008  sltiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd810) {
            ctx->pc = 0x4CD838u;
            goto label_4cd838;
        }
    }
    ctx->pc = 0x4CD818u;
    // 0x4cd818: 0xdf020008  ld          $v0, 0x8($t8)
    ctx->pc = 0x4cd818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd81c: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x4cd81cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x4cd820: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x4cd820u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x4cd824: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd824u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd828: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cd828u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cd82c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x4cd82cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
label_4cd830:
    // 0x4cd830: 0x27390010  addiu       $t9, $t9, 0x10
    ctx->pc = 0x4cd830u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x4cd834: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x4cd834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4cd838:
    // 0x4cd838: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4CD838u;
    {
        const bool branch_taken_0x4cd838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD838u;
        // 0x4cd83c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd838) {
            ctx->pc = 0x4CD898u;
            goto label_4cd898;
        }
    }
    ctx->pc = 0x4CD840u;
    // 0x4cd840: 0x12420043  beq         $s2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x4CD840u;
    {
        const bool branch_taken_0x4cd840 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD840u;
        // 0x4cd844: 0x2e42000d  sltiu       $v0, $s2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd840) {
            ctx->pc = 0x4CD950u;
            goto label_4cd950;
        }
    }
    ctx->pc = 0x4CD848u;
    // 0x4cd848: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD848u;
    {
        const bool branch_taken_0x4cd848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD848u;
        // 0x4cd84c: 0x2e42000b  sltiu       $v0, $s2, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd848) {
            ctx->pc = 0x4CD86Cu;
            goto label_4cd86c;
        }
    }
    ctx->pc = 0x4CD850u;
    // 0x4cd850: 0x2e42000f  sltiu       $v0, $s2, 0xF
    ctx->pc = 0x4cd850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x4cd854: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x4CD854u;
    {
        const bool branch_taken_0x4cd854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD854u;
        // 0x4cd858: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd854) {
            ctx->pc = 0x4CD9D4u;
            goto label_4cd9d4;
        }
    }
    ctx->pc = 0x4CD85Cu;
    // 0x4cd85c: 0x52420057  beql        $s2, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x4CD85Cu;
    {
        const bool branch_taken_0x4cd85c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cd85c) {
            ctx->pc = 0x4CD860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CD85Cu;
            // 0x4cd860: 0x9702000c  lhu         $v0, 0xC($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CD9BCu;
            goto label_4cd9bc;
        }
    }
    ctx->pc = 0x4CD864u;
    // 0x4cd864: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4CD864u;
    {
        const bool branch_taken_0x4cd864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD864u;
        // 0x4cd868: 0xdf020000  ld          $v0, 0x0($t8) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd864) {
            ctx->pc = 0x4CD9A4u;
            goto label_4cd9a4;
        }
    }
    ctx->pc = 0x4CD86Cu;
label_4cd86c:
    // 0x4cd86c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CD86Cu;
    {
        const bool branch_taken_0x4cd86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD86Cu;
        // 0x4cd870: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd86c) {
            ctx->pc = 0x4CD888u;
            goto label_4cd888;
        }
    }
    ctx->pc = 0x4CD874u;
    // 0x4cd874: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x4cd874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4cd878: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x4CD878u;
    {
        const bool branch_taken_0x4cd878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd878) {
            ctx->pc = 0x4CD87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CD878u;
            // 0x4cd87c: 0x8f020008  lw          $v0, 0x8($t8) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CD994u;
            goto label_4cd994;
        }
    }
    ctx->pc = 0x4CD880u;
    // 0x4cd880: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x4CD880u;
    {
        const bool branch_taken_0x4cd880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD880u;
        // 0x4cd884: 0xdf020000  ld          $v0, 0x0($t8) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd880) {
            ctx->pc = 0x4CD97Cu;
            goto label_4cd97c;
        }
    }
    ctx->pc = 0x4CD888u;
label_4cd888:
    // 0x4cd888: 0x52420038  beql        $s2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4CD888u;
    {
        const bool branch_taken_0x4cd888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cd888) {
            ctx->pc = 0x4CD88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CD888u;
            // 0x4cd88c: 0x97020008  lhu         $v0, 0x8($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CD96Cu;
            goto label_4cd96c;
        }
    }
    ctx->pc = 0x4CD890u;
    // 0x4cd890: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x4CD890u;
    {
        const bool branch_taken_0x4cd890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD890u;
        // 0x4cd894: 0xdf020000  ld          $v0, 0x0($t8) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd890) {
            ctx->pc = 0x4CD95Cu;
            goto label_4cd95c;
        }
    }
    ctx->pc = 0x4CD898u;
label_4cd898:
    // 0x4cd898: 0x124000fd  beqz        $s2, . + 4 + (0xFD << 2)
    ctx->pc = 0x4CD898u;
    {
        const bool branch_taken_0x4cd898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD898u;
        // 0x4cd89c: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd898) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD8A0u;
    // 0x4cd8a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD8A0u;
    {
        const bool branch_taken_0x4cd8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8A0u;
        // 0x4cd8a4: 0x2e420003  sltiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8a0) {
            ctx->pc = 0x4CD8C4u;
            goto label_4cd8c4;
        }
    }
    ctx->pc = 0x4CD8A8u;
    // 0x4cd8a8: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x4cd8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4cd8ac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4CD8ACu;
    {
        const bool branch_taken_0x4cd8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8ACu;
        // 0x4cd8b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8ac) {
            ctx->pc = 0x4CD934u;
            goto label_4cd934;
        }
    }
    ctx->pc = 0x4CD8B4u;
    // 0x4cd8b4: 0x5242001b  beql        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4CD8B4u;
    {
        const bool branch_taken_0x4cd8b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cd8b4) {
            ctx->pc = 0x4CD8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CD8B4u;
            // 0x4cd8b8: 0x97020004  lhu         $v0, 0x4($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CD924u;
            goto label_4cd924;
        }
    }
    ctx->pc = 0x4CD8BCu;
    // 0x4cd8bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4CD8BCu;
    {
        const bool branch_taken_0x4cd8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8BCu;
        // 0x4cd8c0: 0x8f020000  lw          $v0, 0x0($t8) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8bc) {
            ctx->pc = 0x4CD914u;
            goto label_4cd914;
        }
    }
    ctx->pc = 0x4CD8C4u;
label_4cd8c4:
    // 0x4cd8c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CD8C4u;
    {
        const bool branch_taken_0x4cd8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8C4u;
        // 0x4cd8c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8c4) {
            ctx->pc = 0x4CD8E0u;
            goto label_4cd8e0;
        }
    }
    ctx->pc = 0x4CD8CCu;
    // 0x4cd8cc: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x4cd8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4cd8d0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4CD8D0u;
    {
        const bool branch_taken_0x4cd8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd8d0) {
            ctx->pc = 0x4CD8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CD8D0u;
            // 0x4cd8d4: 0x8f020000  lw          $v0, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CD90Cu;
            goto label_4cd90c;
        }
    }
    ctx->pc = 0x4CD8D8u;
    // 0x4cd8d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD8D8u;
    {
        const bool branch_taken_0x4cd8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8D8u;
        // 0x4cd8dc: 0x97020000  lhu         $v0, 0x0($t8) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8d8) {
            ctx->pc = 0x4CD8FCu;
            goto label_4cd8fc;
        }
    }
    ctx->pc = 0x4CD8E0u;
label_4cd8e0:
    // 0x4cd8e0: 0x52420004  beql        $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CD8E0u;
    {
        const bool branch_taken_0x4cd8e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cd8e0) {
            ctx->pc = 0x4CD8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CD8E0u;
            // 0x4cd8e4: 0x97020000  lhu         $v0, 0x0($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CD8F4u;
            goto label_4cd8f4;
        }
    }
    ctx->pc = 0x4CD8E8u;
label_4cd8e8:
    // 0x4cd8e8: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x4cd8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd8ec: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x4CD8ECu;
    {
        const bool branch_taken_0x4cd8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8ECu;
        // 0x4cd8f0: 0xa3220000  sb          $v0, 0x0($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8ec) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD8F4u;
label_4cd8f4:
    // 0x4cd8f4: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x4CD8F4u;
    {
        const bool branch_taken_0x4cd8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8F4u;
        // 0x4cd8f8: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8f4) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD8FCu;
label_4cd8fc:
    // 0x4cd8fc: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x4cd8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd900: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x4cd900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x4cd904: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x4CD904u;
    {
        const bool branch_taken_0x4cd904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD904u;
        // 0x4cd908: 0xa3230002  sb          $v1, 0x2($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd904) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD90Cu;
label_4cd90c:
    // 0x4cd90c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x4CD90Cu;
    {
        const bool branch_taken_0x4cd90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD90Cu;
        // 0x4cd910: 0xaf220000  sw          $v0, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd90c) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD914u;
label_4cd914:
    // 0x4cd914: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x4cd914u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x4cd918: 0x93030004  lbu         $v1, 0x4($t8)
    ctx->pc = 0x4cd918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x4cd91c: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x4CD91Cu;
    {
        const bool branch_taken_0x4cd91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD91Cu;
        // 0x4cd920: 0xa3230004  sb          $v1, 0x4($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd91c) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD924u;
label_4cd924:
    // 0x4cd924: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4cd924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd928: 0xa7220004  sh          $v0, 0x4($t9)
    ctx->pc = 0x4cd928u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd92c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x4CD92Cu;
    {
        const bool branch_taken_0x4cd92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD92Cu;
        // 0x4cd930: 0xaf230000  sw          $v1, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd92c) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD934u;
label_4cd934:
    // 0x4cd934: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x4cd934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd938: 0x97030004  lhu         $v1, 0x4($t8)
    ctx->pc = 0x4cd938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x4cd93c: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x4cd93cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x4cd940: 0xa7230004  sh          $v1, 0x4($t9)
    ctx->pc = 0x4cd940u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd944: 0x93020006  lbu         $v0, 0x6($t8)
    ctx->pc = 0x4cd944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 6)));
    // 0x4cd948: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x4CD948u;
    {
        const bool branch_taken_0x4cd948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD948u;
        // 0x4cd94c: 0xa3220006  sb          $v0, 0x6($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd948) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD950u;
label_4cd950:
    // 0x4cd950: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd950u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd954: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x4CD954u;
    {
        const bool branch_taken_0x4cd954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD954u;
        // 0x4cd958: 0xff220000  sd          $v0, 0x0($t9) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd954) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD95Cu;
label_4cd95c:
    // 0x4cd95c: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cd95cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cd960: 0x93030008  lbu         $v1, 0x8($t8)
    ctx->pc = 0x4cd960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd964: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x4CD964u;
    {
        const bool branch_taken_0x4cd964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD964u;
        // 0x4cd968: 0xa3230008  sb          $v1, 0x8($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd964) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD96Cu;
label_4cd96c:
    // 0x4cd96c: 0xdf030000  ld          $v1, 0x0($t8)
    ctx->pc = 0x4cd96cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd970: 0xa7220008  sh          $v0, 0x8($t9)
    ctx->pc = 0x4cd970u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd974: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x4CD974u;
    {
        const bool branch_taken_0x4cd974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD974u;
        // 0x4cd978: 0xff230000  sd          $v1, 0x0($t9) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd974) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD97Cu;
label_4cd97c:
    // 0x4cd97c: 0x97030008  lhu         $v1, 0x8($t8)
    ctx->pc = 0x4cd97cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd980: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cd980u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cd984: 0xa7230008  sh          $v1, 0x8($t9)
    ctx->pc = 0x4cd984u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd988: 0x9302000a  lbu         $v0, 0xA($t8)
    ctx->pc = 0x4cd988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 10)));
    // 0x4cd98c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x4CD98Cu;
    {
        const bool branch_taken_0x4cd98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD98Cu;
        // 0x4cd990: 0xa322000a  sb          $v0, 0xA($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd98c) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD994u;
label_4cd994:
    // 0x4cd994: 0xdf030000  ld          $v1, 0x0($t8)
    ctx->pc = 0x4cd994u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd998: 0xaf220008  sw          $v0, 0x8($t9)
    ctx->pc = 0x4cd998u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 2));
    // 0x4cd99c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x4CD99Cu;
    {
        const bool branch_taken_0x4cd99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD99Cu;
        // 0x4cd9a0: 0xff230000  sd          $v1, 0x0($t9) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd99c) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD9A4u;
label_4cd9a4:
    // 0x4cd9a4: 0x8f030008  lw          $v1, 0x8($t8)
    ctx->pc = 0x4cd9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd9a8: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cd9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cd9ac: 0xaf230008  sw          $v1, 0x8($t9)
    ctx->pc = 0x4cd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 3));
    // 0x4cd9b0: 0x9302000c  lbu         $v0, 0xC($t8)
    ctx->pc = 0x4cd9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x4cd9b4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x4CD9B4u;
    {
        const bool branch_taken_0x4cd9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD9B4u;
        // 0x4cd9b8: 0xa322000c  sb          $v0, 0xC($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd9b4) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD9BCu;
label_4cd9bc:
    // 0x4cd9bc: 0xdf030000  ld          $v1, 0x0($t8)
    ctx->pc = 0x4cd9bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd9c0: 0x8f040008  lw          $a0, 0x8($t8)
    ctx->pc = 0x4cd9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd9c4: 0xa722000c  sh          $v0, 0xC($t9)
    ctx->pc = 0x4cd9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd9c8: 0xff230000  sd          $v1, 0x0($t9)
    ctx->pc = 0x4cd9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 3));
    // 0x4cd9cc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x4CD9CCu;
    {
        const bool branch_taken_0x4cd9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD9CCu;
        // 0x4cd9d0: 0xaf240008  sw          $a0, 0x8($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd9cc) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD9D4u;
label_4cd9d4:
    // 0x4cd9d4: 0xdf020000  ld          $v0, 0x0($t8)
    ctx->pc = 0x4cd9d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4cd9d8: 0x8f030008  lw          $v1, 0x8($t8)
    ctx->pc = 0x4cd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x4cd9dc: 0x9704000c  lhu         $a0, 0xC($t8)
    ctx->pc = 0x4cd9dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x4cd9e0: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cd9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cd9e4: 0xaf230008  sw          $v1, 0x8($t9)
    ctx->pc = 0x4cd9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 3));
    // 0x4cd9e8: 0xa724000c  sh          $a0, 0xC($t9)
    ctx->pc = 0x4cd9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4cd9ec: 0x9302000e  lbu         $v0, 0xE($t8)
    ctx->pc = 0x4cd9ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 14)));
    // 0x4cd9f0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x4CD9F0u;
    {
        const bool branch_taken_0x4cd9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD9F0u;
        // 0x4cd9f4: 0xa322000e  sb          $v0, 0xE($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd9f0) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CD9F8u;
label_4cd9f8:
    // 0x4cd9f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD9F8u;
    {
        const bool branch_taken_0x4cd9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD9F8u;
        // 0x4cd9fc: 0x2e420800  sltiu       $v0, $s2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd9f8) {
            ctx->pc = 0x4CDA1Cu;
            goto label_4cda1c;
        }
    }
    ctx->pc = 0x4CDA00u;
    // 0x4cda00: 0x6b020007  ldl         $v0, 0x7($t8)
    ctx->pc = 0x4cda00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4cda04: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x4cda04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x4cda08: 0x6f020000  ldr         $v0, 0x0($t8)
    ctx->pc = 0x4cda08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4cda0c: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cda0cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cda10: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x4cda10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x4cda14: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x4cda14u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
    // 0x4cda18: 0x2e420800  sltiu       $v0, $s2, 0x800
    ctx->pc = 0x4cda18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_4cda1c:
    // 0x4cda1c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4CDA1Cu;
    {
        const bool branch_taken_0x4cda1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cda1c) {
            ctx->pc = 0x4CDB10u;
            goto label_4cdb10;
        }
    }
    ctx->pc = 0x4CDA24u;
    // 0x4cda24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cda24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cda28: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x4cda28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x4cda2c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4cda2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4cda30: 0x3029821  addu        $s3, $t8, $v0
    ctx->pc = 0x4cda30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4cda34: 0x3252007f  andi        $s2, $s2, 0x7F
    ctx->pc = 0x4cda34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
    // 0x4cda38: 0x0  nop
    ctx->pc = 0x4cda38u;
    // NOP
    // 0x4cda3c: 0x0  nop
    ctx->pc = 0x4cda3cu;
    // NOP
label_4cda40:
    // 0x4cda40: 0xcf0000c0  pref        0x00, 0xC0($t8)
    ctx->pc = 0x4cda40u;
    // PREF instruction (ignored)
    // 0x4cda44: 0x6b0a0007  ldl         $t2, 0x7($t8)
    ctx->pc = 0x4cda44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x4cda48: 0x6b09000f  ldl         $t1, 0xF($t8)
    ctx->pc = 0x4cda48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x4cda4c: 0x6f0a0000  ldr         $t2, 0x0($t8)
    ctx->pc = 0x4cda4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x4cda50: 0x6f090008  ldr         $t1, 0x8($t8)
    ctx->pc = 0x4cda50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4cda54: 0x6b110017  ldl         $s1, 0x17($t8)
    ctx->pc = 0x4cda54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x4cda58: 0x6b08001f  ldl         $t0, 0x1F($t8)
    ctx->pc = 0x4cda58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4cda5c: 0x6b100027  ldl         $s0, 0x27($t8)
    ctx->pc = 0x4cda5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x4cda60: 0x6b07002f  ldl         $a3, 0x2F($t8)
    ctx->pc = 0x4cda60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4cda64: 0x6b0f0037  ldl         $t7, 0x37($t8)
    ctx->pc = 0x4cda64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x4cda68: 0x6b06003f  ldl         $a2, 0x3F($t8)
    ctx->pc = 0x4cda68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4cda6c: 0x6b0e0047  ldl         $t6, 0x47($t8)
    ctx->pc = 0x4cda6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4cda70: 0x6b05004f  ldl         $a1, 0x4F($t8)
    ctx->pc = 0x4cda70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4cda74: 0x6b0d0057  ldl         $t5, 0x57($t8)
    ctx->pc = 0x4cda74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x4cda78: 0x6b04005f  ldl         $a0, 0x5F($t8)
    ctx->pc = 0x4cda78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4cda7c: 0x6b0c0067  ldl         $t4, 0x67($t8)
    ctx->pc = 0x4cda7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4cda80: 0x6b03006f  ldl         $v1, 0x6F($t8)
    ctx->pc = 0x4cda80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4cda84: 0x6b0b0077  ldl         $t3, 0x77($t8)
    ctx->pc = 0x4cda84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4cda88: 0x6b02007f  ldl         $v0, 0x7F($t8)
    ctx->pc = 0x4cda88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4cda8c: 0x6f110010  ldr         $s1, 0x10($t8)
    ctx->pc = 0x4cda8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x4cda90: 0x6f080018  ldr         $t0, 0x18($t8)
    ctx->pc = 0x4cda90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4cda94: 0x6f100020  ldr         $s0, 0x20($t8)
    ctx->pc = 0x4cda94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4cda98: 0x6f070028  ldr         $a3, 0x28($t8)
    ctx->pc = 0x4cda98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4cda9c: 0x6f0f0030  ldr         $t7, 0x30($t8)
    ctx->pc = 0x4cda9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4cdaa0: 0x6f060038  ldr         $a2, 0x38($t8)
    ctx->pc = 0x4cdaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4cdaa4: 0x6f0e0040  ldr         $t6, 0x40($t8)
    ctx->pc = 0x4cdaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4cdaa8: 0x6f050048  ldr         $a1, 0x48($t8)
    ctx->pc = 0x4cdaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4cdaac: 0x6f0d0050  ldr         $t5, 0x50($t8)
    ctx->pc = 0x4cdaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x4cdab0: 0x6f040058  ldr         $a0, 0x58($t8)
    ctx->pc = 0x4cdab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4cdab4: 0x6f0c0060  ldr         $t4, 0x60($t8)
    ctx->pc = 0x4cdab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4cdab8: 0x6f030068  ldr         $v1, 0x68($t8)
    ctx->pc = 0x4cdab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4cdabc: 0x6f0b0070  ldr         $t3, 0x70($t8)
    ctx->pc = 0x4cdabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4cdac0: 0x6f020078  ldr         $v0, 0x78($t8)
    ctx->pc = 0x4cdac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4cdac4: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x4cdac4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x4cdac8: 0x71114389  pcpyld      $t0, $t0, $s1
    ctx->pc = 0x4cdac8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 17)));
    // 0x4cdacc: 0x7f290000  sq          $t1, 0x0($t9)
    ctx->pc = 0x4cdaccu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 9));
    // 0x4cdad0: 0x70f03b89  pcpyld      $a3, $a3, $s0
    ctx->pc = 0x4cdad0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x4cdad4: 0x70cf3389  pcpyld      $a2, $a2, $t7
    ctx->pc = 0x4cdad4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 15)));
    // 0x4cdad8: 0x70ae2b89  pcpyld      $a1, $a1, $t6
    ctx->pc = 0x4cdad8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 14)));
    // 0x4cdadc: 0x708d2389  pcpyld      $a0, $a0, $t5
    ctx->pc = 0x4cdadcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 13)));
    // 0x4cdae0: 0x706c1b89  pcpyld      $v1, $v1, $t4
    ctx->pc = 0x4cdae0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 12)));
    // 0x4cdae4: 0x704b1389  pcpyld      $v0, $v0, $t3
    ctx->pc = 0x4cdae4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x4cdae8: 0x7f280010  sq          $t0, 0x10($t9)
    ctx->pc = 0x4cdae8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 8));
    // 0x4cdaec: 0x7f270020  sq          $a3, 0x20($t9)
    ctx->pc = 0x4cdaecu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 7));
    // 0x4cdaf0: 0x7f260030  sq          $a2, 0x30($t9)
    ctx->pc = 0x4cdaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 48), GPR_VEC(ctx, 6));
    // 0x4cdaf4: 0x7f250040  sq          $a1, 0x40($t9)
    ctx->pc = 0x4cdaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 64), GPR_VEC(ctx, 5));
    // 0x4cdaf8: 0x7f240050  sq          $a0, 0x50($t9)
    ctx->pc = 0x4cdaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 80), GPR_VEC(ctx, 4));
    // 0x4cdafc: 0x7f230060  sq          $v1, 0x60($t9)
    ctx->pc = 0x4cdafcu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 96), GPR_VEC(ctx, 3));
    // 0x4cdb00: 0x7f220070  sq          $v0, 0x70($t9)
    ctx->pc = 0x4cdb00u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 112), GPR_VEC(ctx, 2));
    // 0x4cdb04: 0x27180080  addiu       $t8, $t8, 0x80
    ctx->pc = 0x4cdb04u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x4cdb08: 0x1713ffcd  bne         $t8, $s3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x4CDB08u;
    {
        const bool branch_taken_0x4cdb08 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDB08u;
        // 0x4cdb0c: 0x27390080  addiu       $t9, $t9, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdb08) {
            ctx->pc = 0x4CDA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cda40;
        }
    }
    ctx->pc = 0x4CDB10u;
label_4cdb10:
    // 0x4cdb10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cdb14: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x4cdb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x4cdb18: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x4cdb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4cdb1c: 0x3029821  addu        $s3, $t8, $v0
    ctx->pc = 0x4cdb1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x4cdb20: 0x1313001c  beq         $t8, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x4CDB20u;
    {
        const bool branch_taken_0x4cdb20 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 19));
        ctx->pc = 0x4CDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDB20u;
        // 0x4cdb24: 0x3252003f  andi        $s2, $s2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdb20) {
            ctx->pc = 0x4CDB94u;
            goto label_4cdb94;
        }
    }
    ctx->pc = 0x4CDB28u;
label_4cdb28:
    // 0x4cdb28: 0x6b090007  ldl         $t1, 0x7($t8)
    ctx->pc = 0x4cdb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x4cdb2c: 0x6b05000f  ldl         $a1, 0xF($t8)
    ctx->pc = 0x4cdb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4cdb30: 0x6b080017  ldl         $t0, 0x17($t8)
    ctx->pc = 0x4cdb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4cdb34: 0x6b04001f  ldl         $a0, 0x1F($t8)
    ctx->pc = 0x4cdb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4cdb38: 0x6b070027  ldl         $a3, 0x27($t8)
    ctx->pc = 0x4cdb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4cdb3c: 0x6b03002f  ldl         $v1, 0x2F($t8)
    ctx->pc = 0x4cdb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4cdb40: 0x6b060037  ldl         $a2, 0x37($t8)
    ctx->pc = 0x4cdb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4cdb44: 0x6b02003f  ldl         $v0, 0x3F($t8)
    ctx->pc = 0x4cdb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4cdb48: 0x6f090000  ldr         $t1, 0x0($t8)
    ctx->pc = 0x4cdb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4cdb4c: 0x6f050008  ldr         $a1, 0x8($t8)
    ctx->pc = 0x4cdb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4cdb50: 0x6f080010  ldr         $t0, 0x10($t8)
    ctx->pc = 0x4cdb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4cdb54: 0x6f040018  ldr         $a0, 0x18($t8)
    ctx->pc = 0x4cdb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4cdb58: 0x6f070020  ldr         $a3, 0x20($t8)
    ctx->pc = 0x4cdb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4cdb5c: 0x6f030028  ldr         $v1, 0x28($t8)
    ctx->pc = 0x4cdb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4cdb60: 0x6f060030  ldr         $a2, 0x30($t8)
    ctx->pc = 0x4cdb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4cdb64: 0x6f020038  ldr         $v0, 0x38($t8)
    ctx->pc = 0x4cdb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4cdb68: 0x70a92b89  pcpyld      $a1, $a1, $t1
    ctx->pc = 0x4cdb68u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 9)));
    // 0x4cdb6c: 0x70882389  pcpyld      $a0, $a0, $t0
    ctx->pc = 0x4cdb6cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
    // 0x4cdb70: 0x70671b89  pcpyld      $v1, $v1, $a3
    ctx->pc = 0x4cdb70u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x4cdb74: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x4cdb74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x4cdb78: 0x7f250000  sq          $a1, 0x0($t9)
    ctx->pc = 0x4cdb78u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 5));
    // 0x4cdb7c: 0x7f240010  sq          $a0, 0x10($t9)
    ctx->pc = 0x4cdb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 4));
    // 0x4cdb80: 0x7f230020  sq          $v1, 0x20($t9)
    ctx->pc = 0x4cdb80u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 3));
    // 0x4cdb84: 0x7f220030  sq          $v0, 0x30($t9)
    ctx->pc = 0x4cdb84u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 48), GPR_VEC(ctx, 2));
    // 0x4cdb88: 0x27180040  addiu       $t8, $t8, 0x40
    ctx->pc = 0x4cdb88u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 64));
    // 0x4cdb8c: 0x1713ffe6  bne         $t8, $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4CDB8Cu;
    {
        const bool branch_taken_0x4cdb8c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDB8Cu;
        // 0x4cdb90: 0x27390040  addiu       $t9, $t9, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdb8c) {
            ctx->pc = 0x4CDB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cdb28;
        }
    }
    ctx->pc = 0x4CDB94u;
label_4cdb94:
    // 0x4cdb94: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x4cdb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x4cdb98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CDB98u;
    {
        const bool branch_taken_0x4cdb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDB98u;
        // 0x4cdb9c: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdb98) {
            ctx->pc = 0x4CDBE0u;
            goto label_4cdbe0;
        }
    }
    ctx->pc = 0x4CDBA0u;
    // 0x4cdba0: 0x6b050007  ldl         $a1, 0x7($t8)
    ctx->pc = 0x4cdba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4cdba4: 0x6b03000f  ldl         $v1, 0xF($t8)
    ctx->pc = 0x4cdba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4cdba8: 0x6b040017  ldl         $a0, 0x17($t8)
    ctx->pc = 0x4cdba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4cdbac: 0x6b02001f  ldl         $v0, 0x1F($t8)
    ctx->pc = 0x4cdbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4cdbb0: 0x6f050000  ldr         $a1, 0x0($t8)
    ctx->pc = 0x4cdbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4cdbb4: 0x6f030008  ldr         $v1, 0x8($t8)
    ctx->pc = 0x4cdbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4cdbb8: 0x6f040010  ldr         $a0, 0x10($t8)
    ctx->pc = 0x4cdbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4cdbbc: 0x6f020018  ldr         $v0, 0x18($t8)
    ctx->pc = 0x4cdbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4cdbc0: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x4cdbc0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x4cdbc4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x4cdbc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4cdbc8: 0x7f230000  sq          $v1, 0x0($t9)
    ctx->pc = 0x4cdbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 3));
    // 0x4cdbcc: 0x7f220010  sq          $v0, 0x10($t9)
    ctx->pc = 0x4cdbccu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 2));
    // 0x4cdbd0: 0x2652ffe0  addiu       $s2, $s2, -0x20
    ctx->pc = 0x4cdbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x4cdbd4: 0x27390020  addiu       $t9, $t9, 0x20
    ctx->pc = 0x4cdbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
    // 0x4cdbd8: 0x27180020  addiu       $t8, $t8, 0x20
    ctx->pc = 0x4cdbd8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x4cdbdc: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x4cdbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_4cdbe0:
    // 0x4cdbe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4CDBE0u;
    {
        const bool branch_taken_0x4cdbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDBE0u;
        // 0x4cdbe4: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdbe0) {
            ctx->pc = 0x4CDC10u;
            goto label_4cdc10;
        }
    }
    ctx->pc = 0x4CDBE8u;
    // 0x4cdbe8: 0x6b030007  ldl         $v1, 0x7($t8)
    ctx->pc = 0x4cdbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4cdbec: 0x6b02000f  ldl         $v0, 0xF($t8)
    ctx->pc = 0x4cdbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4cdbf0: 0x6f030000  ldr         $v1, 0x0($t8)
    ctx->pc = 0x4cdbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4cdbf4: 0x6f020008  ldr         $v0, 0x8($t8)
    ctx->pc = 0x4cdbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4cdbf8: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x4cdbf8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4cdbfc: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x4cdbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x4cdc00: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x4cdc00u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x4cdc04: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x4cdc04u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x4cdc08: 0x27390010  addiu       $t9, $t9, 0x10
    ctx->pc = 0x4cdc08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x4cdc0c: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x4cdc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_4cdc10:
    // 0x4cdc10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CDC10u;
    {
        const bool branch_taken_0x4cdc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDC10u;
        // 0x4cdc14: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdc10) {
            ctx->pc = 0x4CDC34u;
            goto label_4cdc34;
        }
    }
    ctx->pc = 0x4CDC18u;
    // 0x4cdc18: 0x6b020007  ldl         $v0, 0x7($t8)
    ctx->pc = 0x4cdc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4cdc1c: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x4cdc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x4cdc20: 0x6f020000  ldr         $v0, 0x0($t8)
    ctx->pc = 0x4cdc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4cdc24: 0xff220000  sd          $v0, 0x0($t9)
    ctx->pc = 0x4cdc24u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 2));
    // 0x4cdc28: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x4cdc28u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x4cdc2c: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x4cdc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
    // 0x4cdc30: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x4cdc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_4cdc34:
    // 0x4cdc34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CDC34u;
    {
        const bool branch_taken_0x4cdc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cdc34) {
            ctx->pc = 0x4CDC54u;
            goto label_4cdc54;
        }
    }
    ctx->pc = 0x4CDC3Cu;
    // 0x4cdc3c: 0x8b020003  lwl         $v0, 0x3($t8)
    ctx->pc = 0x4cdc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x4cdc40: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x4cdc40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4cdc44: 0x9b020000  lwr         $v0, 0x0($t8)
    ctx->pc = 0x4cdc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x4cdc48: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x4cdc48u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x4cdc4c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x4cdc4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x4cdc50: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x4cdc50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
label_4cdc54:
    // 0x4cdc54: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x4CDC54u;
    {
        const bool branch_taken_0x4cdc54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDC54u;
        // 0x4cdc58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdc54) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CDC5Cu;
    // 0x4cdc5c: 0x1242ff22  beq         $s2, $v0, . + 4 + (-0xDE << 2)
    ctx->pc = 0x4CDC5Cu;
    {
        const bool branch_taken_0x4cdc5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDC5Cu;
        // 0x4cdc60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdc5c) {
            ctx->pc = 0x4CD8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cd8e8;
        }
    }
    ctx->pc = 0x4CDC64u;
    // 0x4cdc64: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CDC64u;
    {
        const bool branch_taken_0x4cdc64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDC64u;
        // 0x4cdc68: 0x93020000  lbu         $v0, 0x0($t8) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdc64) {
            ctx->pc = 0x4CDC84u;
            goto label_4cdc84;
        }
    }
    ctx->pc = 0x4CDC6Cu;
    // 0x4cdc6c: 0xa3220000  sb          $v0, 0x0($t9)
    ctx->pc = 0x4cdc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4cdc70: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x4cdc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x4cdc74: 0xa3230001  sb          $v1, 0x1($t9)
    ctx->pc = 0x4cdc74u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4cdc78: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x4cdc78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x4cdc7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CDC7Cu;
    {
        const bool branch_taken_0x4cdc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDC7Cu;
        // 0x4cdc80: 0xa3220002  sb          $v0, 0x2($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdc7c) {
            ctx->pc = 0x4CDC90u;
            goto label_4cdc90;
        }
    }
    ctx->pc = 0x4CDC84u;
label_4cdc84:
    // 0x4cdc84: 0xa3220000  sb          $v0, 0x0($t9)
    ctx->pc = 0x4cdc84u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4cdc88: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x4cdc88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x4cdc8c: 0xa3230001  sb          $v1, 0x1($t9)
    ctx->pc = 0x4cdc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 1), (uint8_t)GPR_U32(ctx, 3));
label_4cdc90:
    // 0x4cdc90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cdc90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cdc94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cdc94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cdc98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cdc98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cdc9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cdc9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cdca0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CDCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CDCA0u;
        // 0x4cdca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CDCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CDCA8u;
}
