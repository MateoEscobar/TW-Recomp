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

// Function: sub_00150660
// Address: 0x150660 - 0x150768
void sub_00150660_0x150660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150660_0x150660");
#endif

    switch (ctx->pc) {
        case 0x150698u: goto label_150698;
        case 0x1506b0u: goto label_1506b0;
        case 0x1506ccu: goto label_1506cc;
        case 0x1506d4u: goto label_1506d4;
        case 0x1506e0u: goto label_1506e0;
        case 0x1506e8u: goto label_1506e8;
        case 0x1506f0u: goto label_1506f0;
        case 0x1506f8u: goto label_1506f8;
        case 0x150708u: goto label_150708;
        case 0x150714u: goto label_150714;
        case 0x150720u: goto label_150720;
        case 0x150730u: goto label_150730;
        default: break;
    }

    ctx->pc = 0x150660u;

    // 0x150660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150664: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x150664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x150668: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x150668u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x15066c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x150670: 0x8e42c20c  lw          $v0, -0x3DF4($s2)
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x150674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15067c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150680: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x150680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x150684: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x150684u;
    {
        const bool branch_taken_0x150684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150684u;
        // 0x150688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150684) {
            ctx->pc = 0x1506BCu;
            goto label_1506bc;
        }
    }
    ctx->pc = 0x15068Cu;
    // 0x15068c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x15068cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150690: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150690u;
    SET_GPR_U32(ctx, 31, 0x150698u);
    ctx->pc = 0x150694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150690u;
    // 0x150694: 0x2484c290  addiu       $a0, $a0, -0x3D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150690u, 0x150698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150698u;
label_150698:
    // 0x150698: 0x8e46c20c  lw          $a2, -0x3DF4($s2)
    ctx->pc = 0x150698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951436)));
    // 0x15069c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x15069cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1506a0: 0x2484c2b8  addiu       $a0, $a0, -0x3D48
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951608));
    // 0x1506a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1506a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506a8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1506A8u;
    SET_GPR_U32(ctx, 31, 0x1506B0u);
    ctx->pc = 0x1506ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506A8u;
    // 0x1506ac: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1506A8u, 0x1506B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506B0u;
label_1506b0:
    // 0x1506b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1506b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1506B4u;
    {
        const bool branch_taken_0x1506b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506B4u;
        // 0x1506b8: 0x2484c068  addiu       $a0, $a0, -0x3F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506b4) {
            ctx->pc = 0x150728u;
            goto label_150728;
        }
    }
    ctx->pc = 0x1506BCu;
label_1506bc:
    // 0x1506bc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1506BCu;
    {
        const bool branch_taken_0x1506bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506BCu;
        // 0x1506c0: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506bc) {
            ctx->pc = 0x150700u;
            goto label_150700;
        }
    }
    ctx->pc = 0x1506C4u;
    // 0x1506c4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1506C4u;
    SET_GPR_U32(ctx, 31, 0x1506CCu);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1506C4u, 0x1506CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506CCu;
label_1506cc:
    // 0x1506cc: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1506CCu;
    SET_GPR_U32(ctx, 31, 0x1506D4u);
    ctx->pc = 0x1506D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506CCu;
    // 0x1506d0: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1506CCu, 0x1506D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506D4u;
label_1506d4:
    // 0x1506d4: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1506d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1506d8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1506D8u;
    SET_GPR_U32(ctx, 31, 0x1506E0u);
    ctx->pc = 0x1506DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506D8u;
    // 0x1506dc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1506D8u, 0x1506E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506E0u;
label_1506e0:
    // 0x1506e0: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x1506E0u;
    SET_GPR_U32(ctx, 31, 0x1506E8u);
    ctx->pc = 0x1506E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506E0u;
    // 0x1506e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x1506E0u, 0x1506E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506E8u;
label_1506e8:
    // 0x1506e8: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1506E8u;
    SET_GPR_U32(ctx, 31, 0x1506F0u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1506E8u, 0x1506F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506F0u;
label_1506f0:
    // 0x1506f0: 0xc05471c  jal         func_151C70
    ctx->pc = 0x1506F0u;
    SET_GPR_U32(ctx, 31, 0x1506F8u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x1506F0u, 0x1506F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506F8u;
label_1506f8:
    // 0x1506f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1506F8u;
    {
        const bool branch_taken_0x1506f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506F8u;
        // 0x1506fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506f8) {
            ctx->pc = 0x150734u;
            goto label_150734;
        }
    }
    ctx->pc = 0x150700u;
label_150700:
    // 0x150700: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150700u;
    SET_GPR_U32(ctx, 31, 0x150708u);
    ctx->pc = 0x150704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150700u;
    // 0x150704: 0x2484c2e8  addiu       $a0, $a0, -0x3D18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150700u, 0x150708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150708u;
label_150708:
    // 0x150708: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x15070c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x15070Cu;
    SET_GPR_U32(ctx, 31, 0x150714u);
    ctx->pc = 0x150710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15070Cu;
    // 0x150710: 0x2484c310  addiu       $a0, $a0, -0x3CF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x15070Cu, 0x150714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150714u;
label_150714:
    // 0x150714: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150718: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150718u;
    SET_GPR_U32(ctx, 31, 0x150720u);
    ctx->pc = 0x15071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150718u;
    // 0x15071c: 0x2484c340  addiu       $a0, $a0, -0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150718u, 0x150720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150720u;
label_150720:
    // 0x150720: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150724: 0x2484c368  addiu       $a0, $a0, -0x3C98
    ctx->pc = 0x150724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951784));
label_150728:
    // 0x150728: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150728u;
    SET_GPR_U32(ctx, 31, 0x150730u);
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150728u, 0x150730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150730u;
label_150730:
    // 0x150730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150734:
    // 0x150734: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150738: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15073c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15073cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150744: 0x3e00008  jr          $ra
    ctx->pc = 0x150744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150744u;
        // 0x150748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15074Cu;
    // 0x15074c: 0x0  nop
    ctx->pc = 0x15074cu;
    // NOP
    // 0x150750: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150754: 0x0  nop
    ctx->pc = 0x150754u;
    // NOP
    // 0x150758: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x150758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15075c: 0x0  nop
    ctx->pc = 0x15075cu;
    // NOP
    // 0x150760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x150760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x150764: 0x0  nop
    ctx->pc = 0x150764u;
    // NOP
    ctx->pc = 0x150768u;
}
