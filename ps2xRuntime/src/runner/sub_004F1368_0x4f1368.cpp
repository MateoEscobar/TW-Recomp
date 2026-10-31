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

// Function: sub_004F1368
// Address: 0x4f1368 - 0x4f13e8
void sub_004F1368_0x4f1368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1368_0x4f1368");
#endif

    switch (ctx->pc) {
        case 0x4f1368u: goto label_4f1368;
        case 0x4f136cu: goto label_4f136c;
        case 0x4f1370u: goto label_4f1370;
        case 0x4f1374u: goto label_4f1374;
        case 0x4f1378u: goto label_4f1378;
        case 0x4f137cu: goto label_4f137c;
        case 0x4f1380u: goto label_4f1380;
        case 0x4f1384u: goto label_4f1384;
        case 0x4f1388u: goto label_4f1388;
        case 0x4f138cu: goto label_4f138c;
        case 0x4f1390u: goto label_4f1390;
        case 0x4f1394u: goto label_4f1394;
        case 0x4f1398u: goto label_4f1398;
        case 0x4f139cu: goto label_4f139c;
        case 0x4f13a0u: goto label_4f13a0;
        case 0x4f13a4u: goto label_4f13a4;
        case 0x4f13a8u: goto label_4f13a8;
        case 0x4f13acu: goto label_4f13ac;
        case 0x4f13b0u: goto label_4f13b0;
        case 0x4f13b4u: goto label_4f13b4;
        case 0x4f13b8u: goto label_4f13b8;
        case 0x4f13bcu: goto label_4f13bc;
        case 0x4f13c0u: goto label_4f13c0;
        case 0x4f13c4u: goto label_4f13c4;
        case 0x4f13c8u: goto label_4f13c8;
        case 0x4f13ccu: goto label_4f13cc;
        case 0x4f13d0u: goto label_4f13d0;
        case 0x4f13d4u: goto label_4f13d4;
        case 0x4f13d8u: goto label_4f13d8;
        case 0x4f13dcu: goto label_4f13dc;
        case 0x4f13e0u: goto label_4f13e0;
        case 0x4f13e4u: goto label_4f13e4;
        default: break;
    }

    ctx->pc = 0x4f1368u;

label_4f1368:
    // 0x4f1368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f1368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f136c:
    // 0x4f136c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f1370:
    // 0x4f1370: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f1374:
    // 0x4f1374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f1374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1378:
    // 0x4f1378: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f137c:
    // 0x4f137c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f137cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f1380:
    // 0x4f1380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f1380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f1384:
    // 0x4f1384: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f1388:
    if (ctx->pc == 0x4F1388u) {
        ctx->pc = 0x4F1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1384u;
        // 0x4f1388: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F138Cu;
        goto label_4f138c;
    }
    ctx->pc = 0x4F1384u;
    {
        const bool branch_taken_0x4f1384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1384u;
        // 0x4f1388: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1384) {
            ctx->pc = 0x4F13CCu;
            goto label_4f13cc;
        }
    }
    ctx->pc = 0x4F138Cu;
label_4f138c:
    // 0x4f138c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f1390:
    // 0x4f1390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f1390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f1394:
    // 0x4f1394: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f1394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f1398:
    // 0x4f1398: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f1398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f139c:
    // 0x4f139c: 0x60f809  jalr        $v1
label_4f13a0:
    if (ctx->pc == 0x4F13A0u) {
        ctx->pc = 0x4F13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F139Cu;
        // 0x4f13a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F13A4u;
        goto label_4f13a4;
    }
    ctx->pc = 0x4F139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F13A4u);
        ctx->pc = 0x4F13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F139Cu;
        // 0x4f13a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F139Cu, 0x4F13A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F13A4u;
label_4f13a4:
    // 0x4f13a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f13a8:
    // 0x4f13a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f13a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f13ac:
    // 0x4f13ac: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f13acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f13b0:
    // 0x4f13b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f13b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f13b4:
    // 0x4f13b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f13b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f13b8:
    // 0x4f13b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f13bc:
    // 0x4f13bc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f13bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f13c0:
    // 0x4f13c0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f13c4:
    // 0x4f13c4: 0x60f809  jalr        $v1
label_4f13c8:
    if (ctx->pc == 0x4F13C8u) {
        ctx->pc = 0x4F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F13C4u;
        // 0x4f13c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F13CCu;
        goto label_4f13cc;
    }
    ctx->pc = 0x4F13C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F13CCu);
        ctx->pc = 0x4F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F13C4u;
        // 0x4f13c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F13C4u, 0x4F13CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F13CCu;
label_4f13cc:
    // 0x4f13cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f13ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f13d0:
    // 0x4f13d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f13d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f13d4:
    // 0x4f13d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f13d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f13d8:
    // 0x4f13d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f13d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f13dc:
    // 0x4f13dc: 0x3e00008  jr          $ra
label_4f13e0:
    if (ctx->pc == 0x4F13E0u) {
        ctx->pc = 0x4F13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F13DCu;
        // 0x4f13e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F13E4u;
        goto label_4f13e4;
    }
    ctx->pc = 0x4F13DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F13DCu;
        // 0x4f13e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F13DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F13E4u;
label_4f13e4:
    // 0x4f13e4: 0x0  nop
    ctx->pc = 0x4f13e4u;
    // NOP
    ctx->pc = 0x4f13e8u;
}
