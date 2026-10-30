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

// Function: sub_004A6380
// Address: 0x4a6380 - 0x4a6568
void sub_004A6380_0x4a6380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6380_0x4a6380");
#endif

    switch (ctx->pc) {
        case 0x4a63a8u: goto label_4a63a8;
        case 0x4a63f0u: goto label_4a63f0;
        case 0x4a6418u: goto label_4a6418;
        case 0x4a64a8u: goto label_4a64a8;
        case 0x4a64e8u: goto label_4a64e8;
        case 0x4a6500u: goto label_4a6500;
        case 0x4a6528u: goto label_4a6528;
        case 0x4a6534u: goto label_4a6534;
        default: break;
    }

    ctx->pc = 0x4a6380u;

    // 0x4a6380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a6380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a6384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a6384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6388: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a6388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a638c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a6390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a6390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6394: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4a6394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4a6398: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a6398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a639c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x4a639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x4a63a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A63A0u;
    {
        const bool branch_taken_0x4a63a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63A0u;
        // 0x4a63a4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a63a0) {
            ctx->pc = 0x4A63D8u;
            goto label_4a63d8;
        }
    }
    ctx->pc = 0x4A63A8u;
label_4a63a8:
    // 0x4a63a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a63ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A63ACu;
    {
        const bool branch_taken_0x4a63ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a63ac) {
            ctx->pc = 0x4A63B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A63ACu;
            // 0x4a63b0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A63C8u;
            goto label_4a63c8;
        }
    }
    ctx->pc = 0x4A63B4u;
    // 0x4a63b4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4a63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4a63b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4a63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4a63bc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4a63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4a63c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4a63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4a63c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a63c8:
    // 0x4a63c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a63cc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a63ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a63d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A63D0u;
    {
        const bool branch_taken_0x4a63d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63D0u;
        // 0x4a63d4: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a63d0) {
            ctx->pc = 0x4A63A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a63a8;
        }
    }
    ctx->pc = 0x4A63D8u;
label_4a63d8:
    // 0x4a63d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a63dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a63dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a63e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a63e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4a63e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a63e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4A63E8u;
    {
        const bool branch_taken_0x4a63e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63E8u;
        // 0x4a63ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a63e8) {
            ctx->pc = 0x4A6464u;
            goto label_4a6464;
        }
    }
    ctx->pc = 0x4A63F0u;
label_4a63f0:
    // 0x4a63f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a63f4: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x4a63f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a63f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4A63F8u;
    {
        const bool branch_taken_0x4a63f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63F8u;
        // 0x4a63fc: 0x248a0028  addiu       $t2, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a63f8) {
            ctx->pc = 0x4A644Cu;
            goto label_4a644c;
        }
    }
    ctx->pc = 0x4A6400u;
    // 0x4a6400: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a6400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a6404: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A6404u;
    {
        const bool branch_taken_0x4a6404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6404u;
        // 0x4a6408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6404) {
            ctx->pc = 0x4A644Cu;
            goto label_4a644c;
        }
    }
    ctx->pc = 0x4A640Cu;
    // 0x4a640c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4a640cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a6410: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4a6410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a6414: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x4a6414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a6418:
    // 0x4a6418: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a6418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a641c: 0x10690007  beq         $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A641Cu;
    {
        const bool branch_taken_0x4a641c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x4A6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A641Cu;
        // 0x4a6420: 0x681818  mult        $v1, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a641c) {
            ctx->pc = 0x4A643Cu;
            goto label_4a643c;
        }
    }
    ctx->pc = 0x4A6424u;
    // 0x4a6424: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a6428: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a6428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a642c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x4a642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x4a6430: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a6430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a6434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a6438: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a6438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4a643c:
    // 0x4a643c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4a643cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4a6440: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4a6440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4a6444: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A6444u;
    {
        const bool branch_taken_0x4a6444 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6444u;
        // 0x4a6448: 0x8e070008  lw          $a3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6444) {
            ctx->pc = 0x4A6418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6418;
        }
    }
    ctx->pc = 0x4A644Cu;
label_4a644c:
    // 0x4a644c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a6450: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x4a6450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6454: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a6454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6458: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a6458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a645c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x4A645Cu;
    {
        const bool branch_taken_0x4a645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A645Cu;
        // 0x4a6460: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a645c) {
            ctx->pc = 0x4A63F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a63f0;
        }
    }
    ctx->pc = 0x4A6464u;
label_4a6464:
    // 0x4a6464: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4a6464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4a6468: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4a6468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a646c: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x4a646cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a6470: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4a6470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6474: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x4a6474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a6478: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4a6478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4a647c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a6480: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A6480u;
    {
        const bool branch_taken_0x4a6480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6480u;
        // 0x4a6484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6480) {
            ctx->pc = 0x4A6498u;
            goto label_4a6498;
        }
    }
    ctx->pc = 0x4A6488u;
    // 0x4a6488: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4a6488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a648c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4A648Cu;
    {
        const bool branch_taken_0x4a648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A648Cu;
        // 0x4a6490: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a648c) {
            ctx->pc = 0x4A6520u;
            goto label_4a6520;
        }
    }
    ctx->pc = 0x4A6494u;
    // 0x4a6494: 0x0  nop
    ctx->pc = 0x4a6494u;
    // NOP
label_4a6498:
    // 0x4a6498: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A6498u;
    {
        const bool branch_taken_0x4a6498 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6498u;
        // 0x4a649c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6498) {
            ctx->pc = 0x4A64DCu;
            goto label_4a64dc;
        }
    }
    ctx->pc = 0x4A64A0u;
    // 0x4a64a0: 0x24e4001c  addiu       $a0, $a3, 0x1C
    ctx->pc = 0x4a64a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x4a64a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a64a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a64a8:
    // 0x4a64a8: 0x10a80009  beq         $a1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A64A8u;
    {
        const bool branch_taken_0x4a64a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x4A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A64A8u;
        // 0x4a64ac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a64a8) {
            ctx->pc = 0x4A64D0u;
            goto label_4a64d0;
        }
    }
    ctx->pc = 0x4A64B0u;
    // 0x4a64b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a64b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a64b8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A64B8u;
    {
        const bool branch_taken_0x4a64b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a64b8) {
            ctx->pc = 0x4A64BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A64B8u;
            // 0x4a64bc: 0xa6102b  sltu        $v0, $a1, $a2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A64D4u;
            goto label_4a64d4;
        }
    }
    ctx->pc = 0x4A64C0u;
    // 0x4a64c0: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x4a64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x4a64c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4A64C4u;
    {
        const bool branch_taken_0x4a64c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A64C4u;
        // 0x4a64c8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a64c4) {
            ctx->pc = 0x4A6520u;
            goto label_4a6520;
        }
    }
    ctx->pc = 0x4A64CCu;
    // 0x4a64cc: 0x0  nop
    ctx->pc = 0x4a64ccu;
    // NOP
label_4a64d0:
    // 0x4a64d0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x4a64d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4a64d4:
    // 0x4a64d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A64D4u;
    {
        const bool branch_taken_0x4a64d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A64D4u;
        // 0x4a64d8: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a64d4) {
            ctx->pc = 0x4A64A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a64a8;
        }
    }
    ctx->pc = 0x4A64DCu;
label_4a64dc:
    // 0x4a64dc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4a64dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4a64e0: 0xc1297f8  jal         func_4A5FE0
    ctx->pc = 0x4A64E0u;
    SET_GPR_U32(ctx, 31, 0x4A64E8u);
    ctx->pc = 0x4A64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A64E0u;
    // 0x4a64e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE0u, 0x4A64E0u, 0x4A64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A64E8u;
label_4a64e8:
    // 0x4a64e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a64ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A64ECu;
    {
        const bool branch_taken_0x4a64ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A64ECu;
        // 0x4a64f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a64ec) {
            ctx->pc = 0x4A6550u;
            goto label_4a6550;
        }
    }
    ctx->pc = 0x4A64F4u;
    // 0x4a64f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a64f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a64f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a64f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a64fc: 0x0  nop
    ctx->pc = 0x4a64fcu;
    // NOP
label_4a6500:
    // 0x4a6500: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a6500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a6504: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a6508: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4a6508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4a650c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4a650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a6510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a6514: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A6514u;
    {
        const bool branch_taken_0x4a6514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6514u;
        // 0x4a6518: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6514) {
            ctx->pc = 0x4A653Cu;
            goto label_4a653c;
        }
    }
    ctx->pc = 0x4A651Cu;
    // 0x4a651c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x4a651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_4a6520:
    // 0x4a6520: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A6520u;
    SET_GPR_U32(ctx, 31, 0x4A6528u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A6520u, 0x4A6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6528u;
label_4a6528:
    // 0x4a6528: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4a6528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4a652c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A652Cu;
    SET_GPR_U32(ctx, 31, 0x4A6534u);
    ctx->pc = 0x4A6530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A652Cu;
    // 0x4a6530: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A652Cu, 0x4A6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6534u;
label_4a6534:
    // 0x4a6534: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A6534u;
    {
        const bool branch_taken_0x4a6534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6534u;
        // 0x4a6538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6534) {
            ctx->pc = 0x4A6558u;
            goto label_4a6558;
        }
    }
    ctx->pc = 0x4A653Cu;
label_4a653c:
    // 0x4a653c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a6540: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a6540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a6544: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4a6544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a6548: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A6548u;
    {
        const bool branch_taken_0x4a6548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6548u;
        // 0x4a654c: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6548) {
            ctx->pc = 0x4A6500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6500;
        }
    }
    ctx->pc = 0x4A6550u;
label_4a6550:
    // 0x4a6550: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x4a6550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x4a6554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a6554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6558:
    // 0x4a6558: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a6558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a655c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a655cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6560: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6560u;
        // 0x4a6564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6568u;
}
