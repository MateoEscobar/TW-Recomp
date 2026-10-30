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

// Function: sub_002E1330
// Address: 0x2e1330 - 0x2e1388
void sub_002E1330_0x2e1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1330_0x2e1330");
#endif

    switch (ctx->pc) {
        case 0x2e1330u: goto label_2e1330;
        case 0x2e1334u: goto label_2e1334;
        case 0x2e1338u: goto label_2e1338;
        case 0x2e133cu: goto label_2e133c;
        case 0x2e1340u: goto label_2e1340;
        case 0x2e1344u: goto label_2e1344;
        case 0x2e1348u: goto label_2e1348;
        case 0x2e134cu: goto label_2e134c;
        case 0x2e1350u: goto label_2e1350;
        case 0x2e1354u: goto label_2e1354;
        case 0x2e1358u: goto label_2e1358;
        case 0x2e135cu: goto label_2e135c;
        case 0x2e1360u: goto label_2e1360;
        case 0x2e1364u: goto label_2e1364;
        case 0x2e1368u: goto label_2e1368;
        case 0x2e136cu: goto label_2e136c;
        case 0x2e1370u: goto label_2e1370;
        case 0x2e1374u: goto label_2e1374;
        case 0x2e1378u: goto label_2e1378;
        case 0x2e137cu: goto label_2e137c;
        case 0x2e1380u: goto label_2e1380;
        case 0x2e1384u: goto label_2e1384;
        default: break;
    }

    ctx->pc = 0x2e1330u;

label_2e1330:
    // 0x2e1330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e1334:
    // 0x2e1334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e1338:
    // 0x2e1338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e133c:
    // 0x2e133c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e133cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1340:
    // 0x2e1340: 0x82050024  lb          $a1, 0x24($s0)
    ctx->pc = 0x2e1340u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_2e1344:
    // 0x2e1344: 0xc0a337e  jal         func_28CDF8
label_2e1348:
    if (ctx->pc == 0x2E1348u) {
        ctx->pc = 0x2E1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1344u;
        // 0x2e1348: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E134Cu;
        goto label_2e134c;
    }
    ctx->pc = 0x2E1344u;
    SET_GPR_U32(ctx, 31, 0x2E134Cu);
    ctx->pc = 0x2E1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1344u;
    // 0x2e1348: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E1344u, 0x2E134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E134Cu;
label_2e134c:
    // 0x2e134c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2e134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2e1350:
    // 0x2e1350: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_2e1354:
    if (ctx->pc == 0x2E1354u) {
        ctx->pc = 0x2E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1350u;
        // 0x2e1354: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1358u;
        goto label_2e1358;
    }
    ctx->pc = 0x2E1350u;
    {
        const bool branch_taken_0x2e1350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1350) {
            ctx->pc = 0x2E1354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1350u;
            // 0x2e1354: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E137Cu;
            goto label_2e137c;
        }
    }
    ctx->pc = 0x2E1358u;
label_2e1358:
    // 0x2e1358: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2e1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2e135c:
    // 0x2e135c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x2e135cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_2e1360:
    // 0x2e1360: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2e1360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2e1364:
    // 0x2e1364: 0x60f809  jalr        $v1
label_2e1368:
    if (ctx->pc == 0x2E1368u) {
        ctx->pc = 0x2E1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1364u;
        // 0x2e1368: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E136Cu;
        goto label_2e136c;
    }
    ctx->pc = 0x2E1364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E136Cu);
        ctx->pc = 0x2E1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1364u;
        // 0x2e1368: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1364u, 0x2E136Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E136Cu;
label_2e136c:
    // 0x2e136c: 0xc0a4e6c  jal         func_2939B0
label_2e1370:
    if (ctx->pc == 0x2E1370u) {
        ctx->pc = 0x2E1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E136Cu;
        // 0x2e1370: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1374u;
        goto label_2e1374;
    }
    ctx->pc = 0x2E136Cu;
    SET_GPR_U32(ctx, 31, 0x2E1374u);
    ctx->pc = 0x2E1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E136Cu;
    // 0x2e1370: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2939B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2939B0u, 0x2E136Cu, 0x2E1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1374u;
label_2e1374:
    // 0x2e1374: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2e1374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2e1378:
    // 0x2e1378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e137c:
    // 0x2e137c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e137cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1380:
    // 0x2e1380: 0x3e00008  jr          $ra
label_2e1384:
    if (ctx->pc == 0x2E1384u) {
        ctx->pc = 0x2E1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1380u;
        // 0x2e1384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1388u;
        goto label_fallthrough_0x2e1380;
    }
    ctx->pc = 0x2E1380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1380u;
        // 0x2e1384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1380:
    ctx->pc = 0x2E1388u;
}
