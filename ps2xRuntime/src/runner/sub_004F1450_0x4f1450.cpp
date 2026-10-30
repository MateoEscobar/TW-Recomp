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

// Function: sub_004F1450
// Address: 0x4f1450 - 0x4f14d0
void sub_004F1450_0x4f1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1450_0x4f1450");
#endif

    switch (ctx->pc) {
        case 0x4f1450u: goto label_4f1450;
        case 0x4f1454u: goto label_4f1454;
        case 0x4f1458u: goto label_4f1458;
        case 0x4f145cu: goto label_4f145c;
        case 0x4f1460u: goto label_4f1460;
        case 0x4f1464u: goto label_4f1464;
        case 0x4f1468u: goto label_4f1468;
        case 0x4f146cu: goto label_4f146c;
        case 0x4f1470u: goto label_4f1470;
        case 0x4f1474u: goto label_4f1474;
        case 0x4f1478u: goto label_4f1478;
        case 0x4f147cu: goto label_4f147c;
        case 0x4f1480u: goto label_4f1480;
        case 0x4f1484u: goto label_4f1484;
        case 0x4f1488u: goto label_4f1488;
        case 0x4f148cu: goto label_4f148c;
        case 0x4f1490u: goto label_4f1490;
        case 0x4f1494u: goto label_4f1494;
        case 0x4f1498u: goto label_4f1498;
        case 0x4f149cu: goto label_4f149c;
        case 0x4f14a0u: goto label_4f14a0;
        case 0x4f14a4u: goto label_4f14a4;
        case 0x4f14a8u: goto label_4f14a8;
        case 0x4f14acu: goto label_4f14ac;
        case 0x4f14b0u: goto label_4f14b0;
        case 0x4f14b4u: goto label_4f14b4;
        case 0x4f14b8u: goto label_4f14b8;
        case 0x4f14bcu: goto label_4f14bc;
        case 0x4f14c0u: goto label_4f14c0;
        case 0x4f14c4u: goto label_4f14c4;
        case 0x4f14c8u: goto label_4f14c8;
        case 0x4f14ccu: goto label_4f14cc;
        default: break;
    }

    ctx->pc = 0x4f1450u;

label_4f1450:
    // 0x4f1450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f1454:
    // 0x4f1454: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f1454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f1458:
    // 0x4f1458: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f1458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f145c:
    // 0x4f145c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f145cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1460:
    // 0x4f1460: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f1460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f1464:
    // 0x4f1464: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f1464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f1468:
    // 0x4f1468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f1468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f146c:
    // 0x4f146c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f1470:
    if (ctx->pc == 0x4F1470u) {
        ctx->pc = 0x4F1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F146Cu;
        // 0x4f1470: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1474u;
        goto label_4f1474;
    }
    ctx->pc = 0x4F146Cu;
    {
        const bool branch_taken_0x4f146c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F146Cu;
        // 0x4f1470: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f146c) {
            ctx->pc = 0x4F14B4u;
            goto label_4f14b4;
        }
    }
    ctx->pc = 0x4F1474u;
label_4f1474:
    // 0x4f1474: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f1474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f1478:
    // 0x4f1478: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f1478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f147c:
    // 0x4f147c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f147cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f1480:
    // 0x4f1480: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f1480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f1484:
    // 0x4f1484: 0x60f809  jalr        $v1
label_4f1488:
    if (ctx->pc == 0x4F1488u) {
        ctx->pc = 0x4F1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1484u;
        // 0x4f1488: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F148Cu;
        goto label_4f148c;
    }
    ctx->pc = 0x4F1484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F148Cu);
        ctx->pc = 0x4F1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1484u;
        // 0x4f1488: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1484u, 0x4F148Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F148Cu;
label_4f148c:
    // 0x4f148c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f1490:
    // 0x4f1490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f1490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f1494:
    // 0x4f1494: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f1494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f1498:
    // 0x4f1498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f1498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f149c:
    // 0x4f149c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f149cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f14a0:
    // 0x4f14a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f14a4:
    // 0x4f14a4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f14a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f14a8:
    // 0x4f14a8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f14a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f14ac:
    // 0x4f14ac: 0x60f809  jalr        $v1
label_4f14b0:
    if (ctx->pc == 0x4F14B0u) {
        ctx->pc = 0x4F14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14ACu;
        // 0x4f14b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F14B4u;
        goto label_4f14b4;
    }
    ctx->pc = 0x4F14ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F14B4u);
        ctx->pc = 0x4F14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14ACu;
        // 0x4f14b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F14ACu, 0x4F14B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F14B4u;
label_4f14b4:
    // 0x4f14b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f14b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f14b8:
    // 0x4f14b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f14b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f14bc:
    // 0x4f14bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f14bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f14c0:
    // 0x4f14c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f14c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f14c4:
    // 0x4f14c4: 0x3e00008  jr          $ra
label_4f14c8:
    if (ctx->pc == 0x4F14C8u) {
        ctx->pc = 0x4F14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14C4u;
        // 0x4f14c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F14CCu;
        goto label_4f14cc;
    }
    ctx->pc = 0x4F14C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F14C4u;
        // 0x4f14c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F14C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F14CCu;
label_4f14cc:
    // 0x4f14cc: 0x0  nop
    ctx->pc = 0x4f14ccu;
    // NOP
    ctx->pc = 0x4f14d0u;
}
