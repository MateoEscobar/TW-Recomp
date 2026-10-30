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

// Function: sub_003E14F8
// Address: 0x3e14f8 - 0x3e1578
void sub_003E14F8_0x3e14f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E14F8_0x3e14f8");
#endif

    switch (ctx->pc) {
        case 0x3e14f8u: goto label_3e14f8;
        case 0x3e14fcu: goto label_3e14fc;
        case 0x3e1500u: goto label_3e1500;
        case 0x3e1504u: goto label_3e1504;
        case 0x3e1508u: goto label_3e1508;
        case 0x3e150cu: goto label_3e150c;
        case 0x3e1510u: goto label_3e1510;
        case 0x3e1514u: goto label_3e1514;
        case 0x3e1518u: goto label_3e1518;
        case 0x3e151cu: goto label_3e151c;
        case 0x3e1520u: goto label_3e1520;
        case 0x3e1524u: goto label_3e1524;
        case 0x3e1528u: goto label_3e1528;
        case 0x3e152cu: goto label_3e152c;
        case 0x3e1530u: goto label_3e1530;
        case 0x3e1534u: goto label_3e1534;
        case 0x3e1538u: goto label_3e1538;
        case 0x3e153cu: goto label_3e153c;
        case 0x3e1540u: goto label_3e1540;
        case 0x3e1544u: goto label_3e1544;
        case 0x3e1548u: goto label_3e1548;
        case 0x3e154cu: goto label_3e154c;
        case 0x3e1550u: goto label_3e1550;
        case 0x3e1554u: goto label_3e1554;
        case 0x3e1558u: goto label_3e1558;
        case 0x3e155cu: goto label_3e155c;
        case 0x3e1560u: goto label_3e1560;
        case 0x3e1564u: goto label_3e1564;
        case 0x3e1568u: goto label_3e1568;
        case 0x3e156cu: goto label_3e156c;
        case 0x3e1570u: goto label_3e1570;
        case 0x3e1574u: goto label_3e1574;
        default: break;
    }

    ctx->pc = 0x3e14f8u;

label_3e14f8:
    // 0x3e14f8: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x3e14f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_3e14fc:
    // 0x3e14fc: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x3e14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
label_3e1500:
    // 0x3e1500: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3e1500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3e1504:
    // 0x3e1504: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e1504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e1508:
    // 0x3e1508: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3e1508u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e150c:
    // 0x3e150c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1510:
    // 0x3e1510: 0x40f809  jalr        $v0
label_3e1514:
    if (ctx->pc == 0x3E1514u) {
        ctx->pc = 0x3E1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1510u;
        // 0x3e1514: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1518u;
        goto label_3e1518;
    }
    ctx->pc = 0x3E1510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1518u);
        ctx->pc = 0x3E1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1510u;
        // 0x3e1514: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1510u, 0x3E1518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1518u;
label_3e1518:
    // 0x3e1518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e1518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e151c:
    // 0x3e151c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1520:
    // 0x3e1520: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e1520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e1524:
    // 0x3e1524: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e1524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e1528:
    // 0x3e1528: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e1528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e152c:
    // 0x3e152c: 0x0  nop
    ctx->pc = 0x3e152cu;
    // NOP
label_3e1530:
    // 0x3e1530: 0x0  nop
    ctx->pc = 0x3e1530u;
    // NOP
label_3e1534:
    // 0x3e1534: 0x0  nop
    ctx->pc = 0x3e1534u;
    // NOP
label_3e1538:
    // 0x3e1538: 0x0  nop
    ctx->pc = 0x3e1538u;
    // NOP
label_3e153c:
    // 0x3e153c: 0x0  nop
    ctx->pc = 0x3e153cu;
    // NOP
label_3e1540:
    // 0x3e1540: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e1544:
    if (ctx->pc == 0x3E1544u) {
        ctx->pc = 0x3E1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1540u;
        // 0x3e1544: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1548u;
        goto label_3e1548;
    }
    ctx->pc = 0x3E1540u;
    {
        const bool branch_taken_0x3e1540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1540u;
        // 0x3e1544: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1540) {
            ctx->pc = 0x3E1530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1530;
        }
    }
    ctx->pc = 0x3E1548u;
label_3e1548:
    // 0x3e1548: 0xc138ddc  jal         func_4E3770
label_3e154c:
    if (ctx->pc == 0x3E154Cu) {
        ctx->pc = 0x3E1550u;
        goto label_3e1550;
    }
    ctx->pc = 0x3E1548u;
    SET_GPR_U32(ctx, 31, 0x3E1550u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E1548u, 0x3E1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1550u;
label_3e1550:
    // 0x3e1550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e1550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e1554:
    // 0x3e1554: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_3e1558:
    if (ctx->pc == 0x3E1558u) {
        ctx->pc = 0x3E1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1554u;
        // 0x3e1558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E155Cu;
        goto label_3e155c;
    }
    ctx->pc = 0x3E1554u;
    {
        const bool branch_taken_0x3e1554 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3E1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1554u;
        // 0x3e1558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1554) {
            ctx->pc = 0x3E1568u;
            goto label_3e1568;
        }
    }
    ctx->pc = 0x3E155Cu;
label_3e155c:
    // 0x3e155c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e1560:
    // 0x3e1560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e1560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1564:
    // 0x3e1564: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e1564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e1568:
    // 0x3e1568: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x3e1568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3e156c:
    // 0x3e156c: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3e156cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3e1570:
    // 0x3e1570: 0x3e00008  jr          $ra
label_3e1574:
    if (ctx->pc == 0x3E1574u) {
        ctx->pc = 0x3E1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1570u;
        // 0x3e1574: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1578u;
        goto label_fallthrough_0x3e1570;
    }
    ctx->pc = 0x3E1570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1570u;
        // 0x3e1574: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e1570:
    ctx->pc = 0x3E1578u;
}
