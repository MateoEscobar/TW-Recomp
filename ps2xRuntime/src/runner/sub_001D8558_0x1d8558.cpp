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

// Function: sub_001D8558
// Address: 0x1d8558 - 0x1d8620
void sub_001D8558_0x1d8558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8558_0x1d8558");
#endif

    switch (ctx->pc) {
        case 0x1d8558u: goto label_1d8558;
        case 0x1d855cu: goto label_1d855c;
        case 0x1d8560u: goto label_1d8560;
        case 0x1d8564u: goto label_1d8564;
        case 0x1d8568u: goto label_1d8568;
        case 0x1d856cu: goto label_1d856c;
        case 0x1d8570u: goto label_1d8570;
        case 0x1d8574u: goto label_1d8574;
        case 0x1d8578u: goto label_1d8578;
        case 0x1d857cu: goto label_1d857c;
        case 0x1d8580u: goto label_1d8580;
        case 0x1d8584u: goto label_1d8584;
        case 0x1d8588u: goto label_1d8588;
        case 0x1d858cu: goto label_1d858c;
        case 0x1d8590u: goto label_1d8590;
        case 0x1d8594u: goto label_1d8594;
        case 0x1d8598u: goto label_1d8598;
        case 0x1d859cu: goto label_1d859c;
        case 0x1d85a0u: goto label_1d85a0;
        case 0x1d85a4u: goto label_1d85a4;
        case 0x1d85a8u: goto label_1d85a8;
        case 0x1d85acu: goto label_1d85ac;
        case 0x1d85b0u: goto label_1d85b0;
        case 0x1d85b4u: goto label_1d85b4;
        case 0x1d85b8u: goto label_1d85b8;
        case 0x1d85bcu: goto label_1d85bc;
        case 0x1d85c0u: goto label_1d85c0;
        case 0x1d85c4u: goto label_1d85c4;
        case 0x1d85c8u: goto label_1d85c8;
        case 0x1d85ccu: goto label_1d85cc;
        case 0x1d85d0u: goto label_1d85d0;
        case 0x1d85d4u: goto label_1d85d4;
        case 0x1d85d8u: goto label_1d85d8;
        case 0x1d85dcu: goto label_1d85dc;
        case 0x1d85e0u: goto label_1d85e0;
        case 0x1d85e4u: goto label_1d85e4;
        case 0x1d85e8u: goto label_1d85e8;
        case 0x1d85ecu: goto label_1d85ec;
        case 0x1d85f0u: goto label_1d85f0;
        case 0x1d85f4u: goto label_1d85f4;
        case 0x1d85f8u: goto label_1d85f8;
        case 0x1d85fcu: goto label_1d85fc;
        case 0x1d8600u: goto label_1d8600;
        case 0x1d8604u: goto label_1d8604;
        case 0x1d8608u: goto label_1d8608;
        case 0x1d860cu: goto label_1d860c;
        case 0x1d8610u: goto label_1d8610;
        case 0x1d8614u: goto label_1d8614;
        case 0x1d8618u: goto label_1d8618;
        case 0x1d861cu: goto label_1d861c;
        default: break;
    }

    ctx->pc = 0x1d8558u;

label_1d8558:
    // 0x1d8558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d8558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d855c:
    // 0x1d855c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1d8560:
    // 0x1d8560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d8564:
    // 0x1d8564: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d8564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1d8568:
    // 0x1d8568: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d8568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d856c:
    // 0x1d856c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d856cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8570:
    // 0x1d8570: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d8570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d8574:
    // 0x1d8574: 0x2442b980  addiu       $v0, $v0, -0x4680
    ctx->pc = 0x1d8574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949248));
label_1d8578:
    // 0x1d8578: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d8578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d857c:
    // 0x1d857c: 0x2463b9a8  addiu       $v1, $v1, -0x4658
    ctx->pc = 0x1d857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949288));
label_1d8580:
    // 0x1d8580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d8584:
    // 0x1d8584: 0x26441530  addiu       $a0, $s2, 0x1530
    ctx->pc = 0x1d8584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5424));
label_1d8588:
    // 0x1d8588: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d8588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d858c:
    // 0x1d858c: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1d858cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_1d8590:
    // 0x1d8590: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1d8594:
    if (ctx->pc == 0x1D8594u) {
        ctx->pc = 0x1D8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8590u;
        // 0x1d8594: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8598u;
        goto label_1d8598;
    }
    ctx->pc = 0x1D8590u;
    {
        const bool branch_taken_0x1d8590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8590u;
        // 0x1d8594: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8590) {
            ctx->pc = 0x1D85C0u;
            goto label_1d85c0;
        }
    }
    ctx->pc = 0x1D8598u;
label_1d8598:
    // 0x1d8598: 0x265045c0  addiu       $s0, $s2, 0x45C0
    ctx->pc = 0x1d8598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 17856));
label_1d859c:
    // 0x1d859c: 0x10900008  beq         $a0, $s0, . + 4 + (0x8 << 2)
label_1d85a0:
    if (ctx->pc == 0x1D85A0u) {
        ctx->pc = 0x1D85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D859Cu;
        // 0x1d85a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85A4u;
        goto label_1d85a4;
    }
    ctx->pc = 0x1D859Cu;
    {
        const bool branch_taken_0x1d859c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D859Cu;
        // 0x1d85a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d859c) {
            ctx->pc = 0x1D85C0u;
            goto label_1d85c0;
        }
    }
    ctx->pc = 0x1D85A4u;
label_1d85a4:
    // 0x1d85a4: 0x2610f910  addiu       $s0, $s0, -0x6F0
    ctx->pc = 0x1d85a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
label_1d85a8:
    // 0x1d85a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d85a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d85ac:
    // 0x1d85ac: 0xc07562a  jal         func_1D58A8
label_1d85b0:
    if (ctx->pc == 0x1D85B0u) {
        ctx->pc = 0x1D85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85ACu;
        // 0x1d85b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85B4u;
        goto label_1d85b4;
    }
    ctx->pc = 0x1D85ACu;
    SET_GPR_U32(ctx, 31, 0x1D85B4u);
    ctx->pc = 0x1D85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85ACu;
    // 0x1d85b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D58A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58A8u, 0x1D85ACu, 0x1D85B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D85B4u;
label_1d85b4:
    // 0x1d85b4: 0x0  nop
    ctx->pc = 0x1d85b4u;
    // NOP
label_1d85b8:
    // 0x1d85b8: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
label_1d85bc:
    if (ctx->pc == 0x1D85BCu) {
        ctx->pc = 0x1D85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85B8u;
        // 0x1d85bc: 0x2610f910  addiu       $s0, $s0, -0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85C0u;
        goto label_1d85c0;
    }
    ctx->pc = 0x1D85B8u;
    {
        const bool branch_taken_0x1d85b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85B8u;
        // 0x1d85bc: 0x2610f910  addiu       $s0, $s0, -0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85b8) {
            ctx->pc = 0x1D85A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d85a8;
        }
    }
    ctx->pc = 0x1D85C0u;
label_1d85c0:
    // 0x1d85c0: 0x265107a0  addiu       $s1, $s2, 0x7A0
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
label_1d85c4:
    // 0x1d85c4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1d85c8:
    if (ctx->pc == 0x1D85C8u) {
        ctx->pc = 0x1D85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85C4u;
        // 0x1d85c8: 0x26501530  addiu       $s0, $s2, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85CCu;
        goto label_1d85cc;
    }
    ctx->pc = 0x1D85C4u;
    {
        const bool branch_taken_0x1d85c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85C4u;
        // 0x1d85c8: 0x26501530  addiu       $s0, $s2, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85c4) {
            ctx->pc = 0x1D85F8u;
            goto label_1d85f8;
        }
    }
    ctx->pc = 0x1D85CCu;
label_1d85cc:
    // 0x1d85cc: 0x5230000b  beql        $s1, $s0, . + 4 + (0xB << 2)
label_1d85d0:
    if (ctx->pc == 0x1D85D0u) {
        ctx->pc = 0x1D85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85CCu;
        // 0x1d85d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85D4u;
        goto label_1d85d4;
    }
    ctx->pc = 0x1D85CCu;
    {
        const bool branch_taken_0x1d85cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d85cc) {
            ctx->pc = 0x1D85D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D85CCu;
            // 0x1d85d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D85FCu;
            goto label_1d85fc;
        }
    }
    ctx->pc = 0x1D85D4u;
label_1d85d4:
    // 0x1d85d4: 0x2610fe10  addiu       $s0, $s0, -0x1F0
    ctx->pc = 0x1d85d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
label_1d85d8:
    // 0x1d85d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d85d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d85dc:
    // 0x1d85dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d85e0:
    // 0x1d85e0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d85e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1d85e4:
    // 0x1d85e4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1d85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1d85e8:
    // 0x1d85e8: 0x60f809  jalr        $v1
label_1d85ec:
    if (ctx->pc == 0x1D85ECu) {
        ctx->pc = 0x1D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85E8u;
        // 0x1d85ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85F0u;
        goto label_1d85f0;
    }
    ctx->pc = 0x1D85E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D85F0u);
        ctx->pc = 0x1D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85E8u;
        // 0x1d85ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85E8u, 0x1D85F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D85F0u;
label_1d85f0:
    // 0x1d85f0: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1d85f4:
    if (ctx->pc == 0x1D85F4u) {
        ctx->pc = 0x1D85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85F0u;
        // 0x1d85f4: 0x2610fe10  addiu       $s0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85F8u;
        goto label_1d85f8;
    }
    ctx->pc = 0x1D85F0u;
    {
        const bool branch_taken_0x1d85f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85F0u;
        // 0x1d85f4: 0x2610fe10  addiu       $s0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85f0) {
            ctx->pc = 0x1D85D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d85d8;
        }
    }
    ctx->pc = 0x1D85F8u;
label_1d85f8:
    // 0x1d85f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d85f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d85fc:
    // 0x1d85fc: 0xc074636  jal         func_1D18D8
label_1d8600:
    if (ctx->pc == 0x1D8600u) {
        ctx->pc = 0x1D8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85FCu;
        // 0x1d8600: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8604u;
        goto label_1d8604;
    }
    ctx->pc = 0x1D85FCu;
    SET_GPR_U32(ctx, 31, 0x1D8604u);
    ctx->pc = 0x1D8600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85FCu;
    // 0x1d8600: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D8u, 0x1D85FCu, 0x1D8604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8604u;
label_1d8604:
    // 0x1d8604: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d8604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d8608:
    // 0x1d8608: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d8608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d860c:
    // 0x1d860c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d860cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8610:
    // 0x1d8610: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d8610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8614:
    // 0x1d8614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8618:
    // 0x1d8618: 0x3e00008  jr          $ra
label_1d861c:
    if (ctx->pc == 0x1D861Cu) {
        ctx->pc = 0x1D861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8618u;
        // 0x1d861c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8620u;
        goto label_fallthrough_0x1d8618;
    }
    ctx->pc = 0x1D8618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8618u;
        // 0x1d861c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d8618:
    ctx->pc = 0x1D8620u;
}
