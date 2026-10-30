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

// Function: sub_00152740
// Address: 0x152740 - 0x1529a0
void sub_00152740_0x152740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152740_0x152740");
#endif

    switch (ctx->pc) {
        case 0x152794u: goto label_152794;
        case 0x15283cu: goto label_15283c;
        case 0x152888u: goto label_152888;
        case 0x1528f0u: goto label_1528f0;
        case 0x15291cu: goto label_15291c;
        case 0x152964u: goto label_152964;
        case 0x15297cu: goto label_15297c;
        default: break;
    }

    ctx->pc = 0x152740u;

    // 0x152740: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x152744: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x152744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x152748: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x152748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x15274c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x15274cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152750: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x152750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x152754: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x152754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152758: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x152758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x15275c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x15275cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152760: 0x245146e4  addiu       $s1, $v0, 0x46E4
    ctx->pc = 0x152760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18148));
    // 0x152764: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x152764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152768: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x15276c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x15276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x152770: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x152770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x152774: 0x24a5d598  addiu       $a1, $a1, -0x2A68
    ctx->pc = 0x152774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956440));
    // 0x152778: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15277c: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x15277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152780: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152788: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x152788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15278c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x15278Cu;
    SET_GPR_U32(ctx, 31, 0x152794u);
    ctx->pc = 0x152790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15278Cu;
    // 0x152790: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15278Cu, 0x152794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152794u;
label_152794:
    // 0x152794: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x152794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152798: 0x8e83c5d8  lw          $v1, -0x3A28($s4)
    ctx->pc = 0x152798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952408)));
    // 0x15279c: 0x1072002e  beq         $v1, $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x15279Cu;
    {
        const bool branch_taken_0x15279c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1527A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15279Cu;
        // 0x1527a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15279c) {
            ctx->pc = 0x152858u;
            goto label_152858;
        }
    }
    ctx->pc = 0x1527A4u;
    // 0x1527a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1527A4u;
    {
        const bool branch_taken_0x1527a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527a4) {
            ctx->pc = 0x1527A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1527A4u;
            // 0x1527a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1527BCu;
            goto label_1527bc;
        }
    }
    ctx->pc = 0x1527ACu;
    // 0x1527ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1527ACu;
    {
        const bool branch_taken_0x1527ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527ACu;
        // 0x1527b0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527ac) {
            ctx->pc = 0x1527D4u;
            goto label_1527d4;
        }
    }
    ctx->pc = 0x1527B4u;
    // 0x1527b4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1527B4u;
    {
        const bool branch_taken_0x1527b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527B4u;
        // 0x1527b8: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527b4) {
            ctx->pc = 0x152984u;
            goto label_152984;
        }
    }
    ctx->pc = 0x1527BCu;
label_1527bc:
    // 0x1527bc: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1527BCu;
    {
        const bool branch_taken_0x1527bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1527C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527BCu;
        // 0x1527c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527bc) {
            ctx->pc = 0x1528F8u;
            goto label_1528f8;
        }
    }
    ctx->pc = 0x1527C4u;
    // 0x1527c4: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1527C4u;
    {
        const bool branch_taken_0x1527c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1527c4) {
            ctx->pc = 0x152940u;
            goto label_152940;
        }
    }
    ctx->pc = 0x1527CCu;
    // 0x1527cc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1527CCu;
    {
        const bool branch_taken_0x1527cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527CCu;
        // 0x1527d0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527cc) {
            ctx->pc = 0x152980u;
            goto label_152980;
        }
    }
    ctx->pc = 0x1527D4u;
label_1527d4:
    // 0x1527d4: 0x2625ff84  addiu       $a1, $s1, -0x7C
    ctx->pc = 0x1527d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967172));
    // 0x1527d8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1527d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1527dc: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x1527dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1527e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1527e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1527e4: 0xac40c5f8  sw          $zero, -0x3A08($v0)
    ctx->pc = 0x1527e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C5F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5F8u, _value); } while (0);
    // 0x1527e8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1527E8u;
    {
        const bool branch_taken_0x1527e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1527ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527E8u;
        // 0x1527ec: 0xacc3c5f4  sw          $v1, -0x3A0C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294952436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527e8) {
            ctx->pc = 0x152804u;
            goto label_152804;
        }
    }
    ctx->pc = 0x1527F0u;
    // 0x1527f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1527f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1527f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1527f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1527f8: 0xae82c5d8  sw          $v0, -0x3A28($s4)
    ctx->pc = 0x1527f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952408), GPR_U32(ctx, 2));
    // 0x1527fc: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1527FCu;
    {
        const bool branch_taken_0x1527fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527FCu;
        // 0x152800: 0xac60c5fc  sw          $zero, -0x3A04($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527fc) {
            ctx->pc = 0x15297Cu;
            goto label_15297c;
        }
    }
    ctx->pc = 0x152804u;
label_152804:
    // 0x152804: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152808: 0x28630011  slti        $v1, $v1, 0x11
    ctx->pc = 0x152808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x15280c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15280Cu;
    {
        const bool branch_taken_0x15280c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15280Cu;
        // 0x152810: 0xac52c5fc  sw          $s2, -0x3A04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952444), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15280c) {
            ctx->pc = 0x15281Cu;
            goto label_15281c;
        }
    }
    ctx->pc = 0x152814u;
    // 0x152814: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x152814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x152818: 0xacc2c5f4  sw          $v0, -0x3A0C($a2)
    ctx->pc = 0x152818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952436), GPR_U32(ctx, 2));
label_15281c:
    // 0x15281c: 0x8cc8c5f4  lw          $t0, -0x3A0C($a2)
    ctx->pc = 0x15281cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952436)));
    // 0x152820: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x152820u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x152824: 0x8e24ff84  lw          $a0, -0x7C($s1)
    ctx->pc = 0x152824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967172)));
    // 0x152828: 0x25294740  addiu       $t1, $t1, 0x4740
    ctx->pc = 0x152828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18240));
    // 0x15282c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x15282cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x152830: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152834: 0xc111638  jal         func_4458E0
    ctx->pc = 0x152834u;
    SET_GPR_U32(ctx, 31, 0x15283Cu);
    ctx->pc = 0x152838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152834u;
    // 0x152838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x152834u, 0x15283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15283Cu;
label_15283c:
    // 0x15283c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15283cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152840: 0x463004e  bgezl       $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x152840u;
    {
        const bool branch_taken_0x152840 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x152840) {
            ctx->pc = 0x152844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152840u;
            // 0x152844: 0xae92c5d8  sw          $s2, -0x3A28($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294952408), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15297Cu;
            goto label_15297c;
        }
    }
    ctx->pc = 0x152848u;
    // 0x152848: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15284c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15284cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152850: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x152850u;
    {
        const bool branch_taken_0x152850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152850u;
        // 0x152854: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152850) {
            ctx->pc = 0x15295Cu;
            goto label_15295c;
        }
    }
    ctx->pc = 0x152858u;
label_152858:
    // 0x152858: 0x56720049  bnel        $s3, $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x152858u;
    {
        const bool branch_taken_0x152858 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x152858) {
            ctx->pc = 0x15285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152858u;
            // 0x15285c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152980u;
            goto label_152980;
        }
    }
    ctx->pc = 0x152860u;
    // 0x152860: 0x600003b  bltz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x152860u;
    {
        const bool branch_taken_0x152860 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x152864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152860u;
        // 0x152864: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152860) {
            ctx->pc = 0x152950u;
            goto label_152950;
        }
    }
    ctx->pc = 0x152868u;
    // 0x152868: 0x8cc2c5f4  lw          $v0, -0x3A0C($a2)
    ctx->pc = 0x152868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952436)));
    // 0x15286c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15286cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152870: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152870u;
    {
        const bool branch_taken_0x152870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152870u;
        // 0x152874: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152870) {
            ctx->pc = 0x152890u;
            goto label_152890;
        }
    }
    ctx->pc = 0x152878u;
    // 0x152878: 0x8e22ffb8  lw          $v0, -0x48($s1)
    ctx->pc = 0x152878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967224)));
    // 0x15287c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152880: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152880u;
    SET_GPR_U32(ctx, 31, 0x152888u);
    ctx->pc = 0x152884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152880u;
    // 0x152884: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152880u, 0x152888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152888u;
label_152888:
    // 0x152888: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x152888u;
    {
        const bool branch_taken_0x152888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152888u;
        // 0x15288c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152888) {
            ctx->pc = 0x152980u;
            goto label_152980;
        }
    }
    ctx->pc = 0x152890u;
label_152890:
    // 0x152890: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152894: 0x2625ff84  addiu       $a1, $s1, -0x7C
    ctx->pc = 0x152894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967172));
    // 0x152898: 0x8c43c5f8  lw          $v1, -0x3A08($v0)
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5F8u));
    // 0x15289c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x15289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1528a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1528a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1528a4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1528a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1528a8: 0xac43c5f8  sw          $v1, -0x3A08($v0)
    ctx->pc = 0x1528a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952440), GPR_U32(ctx, 3));
    // 0x1528ac: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1528ACu;
    {
        const bool branch_taken_0x1528ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1528B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528ACu;
        // 0x1528b0: 0xacc4c5f4  sw          $a0, -0x3A0C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294952436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528ac) {
            ctx->pc = 0x1528C0u;
            goto label_1528c0;
        }
    }
    ctx->pc = 0x1528B4u;
    // 0x1528b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1528b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1528b8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1528B8u;
    {
        const bool branch_taken_0x1528b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528B8u;
        // 0x1528bc: 0xae82c5d8  sw          $v0, -0x3A28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528b8) {
            ctx->pc = 0x15297Cu;
            goto label_15297c;
        }
    }
    ctx->pc = 0x1528C0u;
label_1528c0:
    // 0x1528c0: 0x28820011  slti        $v0, $a0, 0x11
    ctx->pc = 0x1528c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1528c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1528C4u;
    {
        const bool branch_taken_0x1528c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1528C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528C4u;
        // 0x1528c8: 0x3c09005e  lui         $t1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528c4) {
            ctx->pc = 0x1528D4u;
            goto label_1528d4;
        }
    }
    ctx->pc = 0x1528CCu;
    // 0x1528cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1528d0: 0xacc2c5f4  sw          $v0, -0x3A0C($a2)
    ctx->pc = 0x1528d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952436), GPR_U32(ctx, 2));
label_1528d4:
    // 0x1528d4: 0x8cc8c5f4  lw          $t0, -0x3A0C($a2)
    ctx->pc = 0x1528d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952436)));
    // 0x1528d8: 0x8e24ff84  lw          $a0, -0x7C($s1)
    ctx->pc = 0x1528d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967172)));
    // 0x1528dc: 0x25294740  addiu       $t1, $t1, 0x4740
    ctx->pc = 0x1528dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18240));
    // 0x1528e0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1528e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1528e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1528e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528e8: 0xc111638  jal         func_4458E0
    ctx->pc = 0x1528E8u;
    SET_GPR_U32(ctx, 31, 0x1528F0u);
    ctx->pc = 0x1528ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528E8u;
    // 0x1528ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x1528E8u, 0x1528F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528F0u;
label_1528f0:
    // 0x1528f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1528F0u;
    {
        const bool branch_taken_0x1528f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528F0u;
        // 0x1528f4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528f0) {
            ctx->pc = 0x152980u;
            goto label_152980;
        }
    }
    ctx->pc = 0x1528F8u;
label_1528f8:
    // 0x1528f8: 0x2622ff84  addiu       $v0, $s1, -0x7C
    ctx->pc = 0x1528f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967172));
    // 0x1528fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1528fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x152900: 0x8c67c5fc  lw          $a3, -0x3A04($v1)
    ctx->pc = 0x152900u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50C5FCu));
    // 0x152904: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152908: 0x8e24ff84  lw          $a0, -0x7C($s1)
    ctx->pc = 0x152908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967172)));
    // 0x15290c: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x15290cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x152910: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x152914: 0xc111638  jal         func_4458E0
    ctx->pc = 0x152914u;
    SET_GPR_U32(ctx, 31, 0x15291Cu);
    ctx->pc = 0x152918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152914u;
    // 0x152918: 0x8c480030  lw          $t0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x152914u, 0x15291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15291Cu;
label_15291c:
    // 0x15291c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15291cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152920: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152920u;
    {
        const bool branch_taken_0x152920 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152920u;
        // 0x152924: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152920) {
            ctx->pc = 0x152938u;
            goto label_152938;
        }
    }
    ctx->pc = 0x152928u;
    // 0x152928: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15292c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15292cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152930: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152930u;
    {
        const bool branch_taken_0x152930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152930u;
        // 0x152934: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152930) {
            ctx->pc = 0x15295Cu;
            goto label_15295c;
        }
    }
    ctx->pc = 0x152938u;
label_152938:
    // 0x152938: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x152938u;
    {
        const bool branch_taken_0x152938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152938u;
        // 0x15293c: 0xae82c5d8  sw          $v0, -0x3A28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152938) {
            ctx->pc = 0x15297Cu;
            goto label_15297c;
        }
    }
    ctx->pc = 0x152940u;
label_152940:
    // 0x152940: 0x5672000f  bnel        $s3, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x152940u;
    {
        const bool branch_taken_0x152940 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x152940) {
            ctx->pc = 0x152944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152940u;
            // 0x152944: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152980u;
            goto label_152980;
        }
    }
    ctx->pc = 0x152948u;
    // 0x152948: 0x6030008  bgezl       $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x152948u;
    {
        const bool branch_taken_0x152948 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x152948) {
            ctx->pc = 0x15294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152948u;
            // 0x15294c: 0x8e22ffb8  lw          $v0, -0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15296Cu;
            goto label_15296c;
        }
    }
    ctx->pc = 0x152950u;
label_152950:
    // 0x152950: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152958: 0xac50c5ec  sw          $s0, -0x3A14($v0)
    ctx->pc = 0x152958u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
label_15295c:
    // 0x15295c: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x15295Cu;
    SET_GPR_U32(ctx, 31, 0x152964u);
    ctx->pc = 0x152960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15295Cu;
    // 0x152960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x15295Cu, 0x152964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152964u;
label_152964:
    // 0x152964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152964u;
    {
        const bool branch_taken_0x152964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152964u;
        // 0x152968: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152964) {
            ctx->pc = 0x152980u;
            goto label_152980;
        }
    }
    ctx->pc = 0x15296Cu;
label_15296c:
    // 0x15296c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152974: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152974u;
    SET_GPR_U32(ctx, 31, 0x15297Cu);
    ctx->pc = 0x152978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152974u;
    // 0x152978: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152974u, 0x15297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15297Cu;
label_15297c:
    // 0x15297c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15297cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_152980:
    // 0x152980: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x152980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_152984:
    // 0x152984: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x152984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152988: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x152988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15298c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15298cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152990: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152994: 0x3e00008  jr          $ra
    ctx->pc = 0x152994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152994u;
        // 0x152998: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15299Cu;
    // 0x15299c: 0x0  nop
    ctx->pc = 0x15299cu;
    // NOP
    ctx->pc = 0x1529a0u;
}
