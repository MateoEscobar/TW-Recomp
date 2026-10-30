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

// Function: sub_004B1478
// Address: 0x4b1478 - 0x4b14f0
void sub_004B1478_0x4b1478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1478_0x4b1478");
#endif

    switch (ctx->pc) {
        case 0x4b1478u: goto label_4b1478;
        case 0x4b147cu: goto label_4b147c;
        case 0x4b1480u: goto label_4b1480;
        case 0x4b1484u: goto label_4b1484;
        case 0x4b1488u: goto label_4b1488;
        case 0x4b148cu: goto label_4b148c;
        case 0x4b1490u: goto label_4b1490;
        case 0x4b1494u: goto label_4b1494;
        case 0x4b1498u: goto label_4b1498;
        case 0x4b149cu: goto label_4b149c;
        case 0x4b14a0u: goto label_4b14a0;
        case 0x4b14a4u: goto label_4b14a4;
        case 0x4b14a8u: goto label_4b14a8;
        case 0x4b14acu: goto label_4b14ac;
        case 0x4b14b0u: goto label_4b14b0;
        case 0x4b14b4u: goto label_4b14b4;
        case 0x4b14b8u: goto label_4b14b8;
        case 0x4b14bcu: goto label_4b14bc;
        case 0x4b14c0u: goto label_4b14c0;
        case 0x4b14c4u: goto label_4b14c4;
        case 0x4b14c8u: goto label_4b14c8;
        case 0x4b14ccu: goto label_4b14cc;
        case 0x4b14d0u: goto label_4b14d0;
        case 0x4b14d4u: goto label_4b14d4;
        case 0x4b14d8u: goto label_4b14d8;
        case 0x4b14dcu: goto label_4b14dc;
        case 0x4b14e0u: goto label_4b14e0;
        case 0x4b14e4u: goto label_4b14e4;
        case 0x4b14e8u: goto label_4b14e8;
        case 0x4b14ecu: goto label_4b14ec;
        default: break;
    }

    ctx->pc = 0x4b1478u;

label_4b1478:
    // 0x4b1478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b1478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b147c:
    // 0x4b147c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b1480:
    // 0x4b1480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b1480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b1484:
    // 0x4b1484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b1488:
    // 0x4b1488: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b148c:
    // 0x4b148c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4b148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4b1490:
    // 0x4b1490: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4b1490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b1494:
    // 0x4b1494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4b1498:
    if (ctx->pc == 0x4B1498u) {
        ctx->pc = 0x4B1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1494u;
        // 0x4b1498: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B149Cu;
        goto label_4b149c;
    }
    ctx->pc = 0x4B1494u;
    {
        const bool branch_taken_0x4b1494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1494u;
        // 0x4b1498: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1494) {
            ctx->pc = 0x4B14A8u;
            goto label_4b14a8;
        }
    }
    ctx->pc = 0x4B149Cu;
label_4b149c:
    // 0x4b149c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b149cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4b14a0:
    // 0x4b14a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b14a4:
    if (ctx->pc == 0x4B14A4u) {
        ctx->pc = 0x4B14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14A0u;
        // 0x4b14a4: 0x9064ffff  lbu         $a0, -0x1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B14A8u;
        goto label_4b14a8;
    }
    ctx->pc = 0x4B14A0u;
    {
        const bool branch_taken_0x4b14a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14A0u;
        // 0x4b14a4: 0x9064ffff  lbu         $a0, -0x1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b14a0) {
            ctx->pc = 0x4B14C0u;
            goto label_4b14c0;
        }
    }
    ctx->pc = 0x4B14A8u;
label_4b14a8:
    // 0x4b14a8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b14a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b14ac:
    // 0x4b14ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b14acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b14b0:
    // 0x4b14b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4b14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4b14b4:
    // 0x4b14b4: 0x40f809  jalr        $v0
label_4b14b8:
    if (ctx->pc == 0x4B14B8u) {
        ctx->pc = 0x4B14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14B4u;
        // 0x4b14b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B14BCu;
        goto label_4b14bc;
    }
    ctx->pc = 0x4B14B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B14BCu);
        ctx->pc = 0x4B14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14B4u;
        // 0x4b14b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B14B4u, 0x4B14BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B14BCu;
label_4b14bc:
    // 0x4b14bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b14bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b14c0:
    // 0x4b14c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b14c4:
    // 0x4b14c4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_4b14c8:
    if (ctx->pc == 0x4B14C8u) {
        ctx->pc = 0x4B14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14C4u;
        // 0x4b14c8: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B14CCu;
        goto label_4b14cc;
    }
    ctx->pc = 0x4B14C4u;
    {
        const bool branch_taken_0x4b14c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14C4u;
        // 0x4b14c8: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b14c4) {
            ctx->pc = 0x4B14D8u;
            goto label_4b14d8;
        }
    }
    ctx->pc = 0x4B14CCu;
label_4b14cc:
    // 0x4b14cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b14d0:
    // 0x4b14d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b14d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4b14d4:
    // 0x4b14d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b14d8:
    // 0x4b14d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b14d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b14dc:
    // 0x4b14dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b14dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b14e0:
    // 0x4b14e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b14e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b14e4:
    // 0x4b14e4: 0x3e00008  jr          $ra
label_4b14e8:
    if (ctx->pc == 0x4B14E8u) {
        ctx->pc = 0x4B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14E4u;
        // 0x4b14e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B14ECu;
        goto label_4b14ec;
    }
    ctx->pc = 0x4B14E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14E4u;
        // 0x4b14e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B14E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B14ECu;
label_4b14ec:
    // 0x4b14ec: 0x0  nop
    ctx->pc = 0x4b14ecu;
    // NOP
    ctx->pc = 0x4b14f0u;
}
