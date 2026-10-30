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

// Function: sub_001513D0
// Address: 0x1513d0 - 0x1514a8
void sub_001513D0_0x1513d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001513D0_0x1513d0");
#endif

    switch (ctx->pc) {
        case 0x151420u: goto label_151420;
        case 0x15143cu: goto label_15143c;
        case 0x151448u: goto label_151448;
        case 0x151464u: goto label_151464;
        case 0x151474u: goto label_151474;
        case 0x15147cu: goto label_15147c;
        case 0x151484u: goto label_151484;
        case 0x15148cu: goto label_15148c;
        default: break;
    }

    ctx->pc = 0x1513d0u;

    // 0x1513d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1513d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1513d4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1513d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1513d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1513dc: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1513dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1513e0: 0x245041b0  addiu       $s0, $v0, 0x41B0
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16816));
    // 0x1513e4: 0x3c07005a  lui         $a3, 0x5A
    ctx->pc = 0x1513e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)90 << 16));
    // 0x1513e8: 0x24631360  addiu       $v1, $v1, 0x1360
    ctx->pc = 0x1513e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4960));
    // 0x1513ec: 0x24e7e6f0  addiu       $a3, $a3, -0x1910
    ctx->pc = 0x1513ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960880));
    // 0x1513f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1513f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1513f4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1513f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1513f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1513f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1513fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1513fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151400: 0xac454380  sw          $a1, 0x4380($v0)
    ctx->pc = 0x151400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5E4380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E4380u, _value); } while (0);
    // 0x151404: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x151404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x151408: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x151408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x15140c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x15140cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x151410: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x151410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x151414: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x151414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E41C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E41C4u, _value); } while (0);
    // 0x151418: 0xc10f3a8  jal         func_43CEA0
    ctx->pc = 0x151418u;
    SET_GPR_U32(ctx, 31, 0x151420u);
    ctx->pc = 0x43CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CEA0u, 0x151418u, 0x151420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151420u;
label_151420:
    // 0x151420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151424: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x151424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x151428: 0x1c800009  bgtz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151428u;
    {
        const bool branch_taken_0x151428 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x15142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151428u;
        // 0x15142c: 0xac444384  sw          $a0, 0x4384($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151428) {
            ctx->pc = 0x151450u;
            goto label_151450;
        }
    }
    ctx->pc = 0x151430u;
    // 0x151430: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151434: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151434u;
    SET_GPR_U32(ctx, 31, 0x15143Cu);
    ctx->pc = 0x151438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151434u;
    // 0x151438: 0x2484ca70  addiu       $a0, $a0, -0x3590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151434u, 0x15143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15143Cu;
label_15143c:
    // 0x15143c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x15143cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151440: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151440u;
    SET_GPR_U32(ctx, 31, 0x151448u);
    ctx->pc = 0x151444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151440u;
    // 0x151444: 0x2484ca90  addiu       $a0, $a0, -0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151440u, 0x151448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151448u;
label_151448:
    // 0x151448: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x151448u;
    {
        const bool branch_taken_0x151448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151448u;
        // 0x15144c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151448) {
            ctx->pc = 0x151490u;
            goto label_151490;
        }
    }
    ctx->pc = 0x151450u;
label_151450:
    // 0x151450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151458: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x151458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x15145c: 0xc10f7ea  jal         func_43DFA8
    ctx->pc = 0x15145Cu;
    SET_GPR_U32(ctx, 31, 0x151464u);
    ctx->pc = 0x43DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DFA8u, 0x15145Cu, 0x151464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151464u;
label_151464:
    // 0x151464: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x151464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x151468: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x151468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x15146c: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x15146Cu;
    SET_GPR_U32(ctx, 31, 0x151474u);
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x15146Cu, 0x151474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151474u;
label_151474:
    // 0x151474: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151474u;
    SET_GPR_U32(ctx, 31, 0x15147Cu);
    ctx->pc = 0x151478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151474u;
    // 0x151478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151474u, 0x15147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15147Cu;
label_15147c:
    // 0x15147c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x15147Cu;
    SET_GPR_U32(ctx, 31, 0x151484u);
    ctx->pc = 0x151480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15147Cu;
    // 0x151480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x15147Cu, 0x151484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151484u;
label_151484:
    // 0x151484: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x151484u;
    SET_GPR_U32(ctx, 31, 0x15148Cu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x151484u, 0x15148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15148Cu;
label_15148c:
    // 0x15148c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15148cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151490:
    // 0x151490: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x151490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151494: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151498: 0x3e00008  jr          $ra
    ctx->pc = 0x151498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151498u;
        // 0x15149c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1514A0u;
    // 0x1514a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1514a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1514a4: 0x0  nop
    ctx->pc = 0x1514a4u;
    // NOP
    ctx->pc = 0x1514a8u;
}
