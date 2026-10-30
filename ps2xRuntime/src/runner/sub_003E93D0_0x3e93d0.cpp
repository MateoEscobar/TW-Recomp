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

// Function: sub_003E93D0
// Address: 0x3e93d0 - 0x3e9470
void sub_003E93D0_0x3e93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E93D0_0x3e93d0");
#endif

    switch (ctx->pc) {
        case 0x3e93f8u: goto label_3e93f8;
        case 0x3e9404u: goto label_3e9404;
        case 0x3e944cu: goto label_3e944c;
        default: break;
    }

    ctx->pc = 0x3e93d0u;

    // 0x3e93d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e93d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e93d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e93d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e93dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e93dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e93e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e93e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e93e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e93e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e93e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e93ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e93ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e93f0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E93F0u;
    SET_GPR_U32(ctx, 31, 0x3E93F8u);
    ctx->pc = 0x3E93F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E93F0u;
    // 0x3e93f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E93F0u, 0x3E93F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E93F8u;
label_3e93f8:
    // 0x3e93f8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3e93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3e93fc: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E93FCu;
    SET_GPR_U32(ctx, 31, 0x3E9404u);
    ctx->pc = 0x3E9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E93FCu;
    // 0x3e9400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E93FCu, 0x3E9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9404u;
label_3e9404:
    // 0x3e9404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e9404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9408: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3e9408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3e940c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E940Cu;
    {
        const bool branch_taken_0x3e940c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E940Cu;
        // 0x3e9410: 0xae260004  sw          $a2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e940c) {
            ctx->pc = 0x3E9424u;
            goto label_3e9424;
        }
    }
    ctx->pc = 0x3E9414u;
    // 0x3e9414: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e9414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e9418: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e9418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3e941c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E941Cu;
    {
        const bool branch_taken_0x3e941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E941Cu;
        // 0x3e9420: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e941c) {
            ctx->pc = 0x3E9458u;
            goto label_3e9458;
        }
    }
    ctx->pc = 0x3E9424u;
label_3e9424:
    // 0x3e9424: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x3e9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x3e9428: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E9428u;
    {
        const bool branch_taken_0x3e9428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9428) {
            ctx->pc = 0x3E942Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9428u;
            // 0x3e942c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9430u;
            goto label_3e9430;
        }
    }
    ctx->pc = 0x3E9430u;
label_3e9430:
    // 0x3e9430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e9434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e9438: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3e9438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3e943c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3e943cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3e9440: 0x1012  mflo        $v0
    ctx->pc = 0x3e9440u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3e9444: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3E9444u;
    SET_GPR_U32(ctx, 31, 0x3E944Cu);
    ctx->pc = 0x3E9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9444u;
    // 0x3e9448: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E9444u, 0x3E944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E944Cu;
label_3e944c:
    // 0x3e944c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9450: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3e9450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3e9454: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e9454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e9458:
    // 0x3e9458: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e9458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e945c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e945cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e9460: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e9460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e9464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9468: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9468u;
        // 0x3e946c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9470u;
}
