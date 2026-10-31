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

// Function: sub_00486290
// Address: 0x486290 - 0x4862e0
void sub_00486290_0x486290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486290_0x486290");
#endif

    switch (ctx->pc) {
        case 0x486290u: goto label_486290;
        case 0x486294u: goto label_486294;
        case 0x486298u: goto label_486298;
        case 0x48629cu: goto label_48629c;
        case 0x4862a0u: goto label_4862a0;
        case 0x4862a4u: goto label_4862a4;
        case 0x4862a8u: goto label_4862a8;
        case 0x4862acu: goto label_4862ac;
        case 0x4862b0u: goto label_4862b0;
        case 0x4862b4u: goto label_4862b4;
        case 0x4862b8u: goto label_4862b8;
        case 0x4862bcu: goto label_4862bc;
        case 0x4862c0u: goto label_4862c0;
        case 0x4862c4u: goto label_4862c4;
        case 0x4862c8u: goto label_4862c8;
        case 0x4862ccu: goto label_4862cc;
        case 0x4862d0u: goto label_4862d0;
        case 0x4862d4u: goto label_4862d4;
        case 0x4862d8u: goto label_4862d8;
        case 0x4862dcu: goto label_4862dc;
        default: break;
    }

    ctx->pc = 0x486290u;

label_486290:
    // 0x486290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x486290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_486294:
    // 0x486294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x486294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_486298:
    // 0x486298: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x486298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_48629c:
    // 0x48629c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x48629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_4862a0:
    // 0x4862a0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4862a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_4862a4:
    // 0x4862a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4862a8:
    if (ctx->pc == 0x4862A8u) {
        ctx->pc = 0x4862A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862A4u;
        // 0x4862a8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4862ACu;
        goto label_4862ac;
    }
    ctx->pc = 0x4862A4u;
    {
        const bool branch_taken_0x4862a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4862A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862A4u;
        // 0x4862a8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4862a4) {
            ctx->pc = 0x4862B4u;
            goto label_4862b4;
        }
    }
    ctx->pc = 0x4862ACu;
label_4862ac:
    // 0x4862ac: 0x10000009  b           . + 4 + (0x9 << 2)
label_4862b0:
    if (ctx->pc == 0x4862B0u) {
        ctx->pc = 0x4862B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862ACu;
        // 0x4862b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4862B4u;
        goto label_4862b4;
    }
    ctx->pc = 0x4862ACu;
    {
        const bool branch_taken_0x4862ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4862B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862ACu;
        // 0x4862b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4862ac) {
            ctx->pc = 0x4862D4u;
            goto label_4862d4;
        }
    }
    ctx->pc = 0x4862B4u;
label_4862b4:
    // 0x4862b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4862b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4862b8:
    // 0x4862b8: 0x8c62add0  lw          $v0, -0x5230($v1)
    ctx->pc = 0x4862b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946256)));
label_4862bc:
    // 0x4862bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4862bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4862c0:
    // 0x4862c0: 0x40f809  jalr        $v0
label_4862c4:
    if (ctx->pc == 0x4862C4u) {
        ctx->pc = 0x4862C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862C0u;
        // 0x4862c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4862C8u;
        goto label_4862c8;
    }
    ctx->pc = 0x4862C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4862C8u);
        ctx->pc = 0x4862C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862C0u;
        // 0x4862c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4862C0u, 0x4862C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4862C8u;
label_4862c8:
    // 0x4862c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4862cc:
    if (ctx->pc == 0x4862CCu) {
        ctx->pc = 0x4862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862C8u;
        // 0x4862cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4862D0u;
        goto label_4862d0;
    }
    ctx->pc = 0x4862C8u;
    {
        const bool branch_taken_0x4862c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862C8u;
        // 0x4862cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4862c8) {
            ctx->pc = 0x4862D4u;
            goto label_4862d4;
        }
    }
    ctx->pc = 0x4862D0u;
label_4862d0:
    // 0x4862d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4862d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4862d4:
    // 0x4862d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4862d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4862d8:
    // 0x4862d8: 0x3e00008  jr          $ra
label_4862dc:
    if (ctx->pc == 0x4862DCu) {
        ctx->pc = 0x4862DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862D8u;
        // 0x4862dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4862E0u;
        goto label_fallthrough_0x4862d8;
    }
    ctx->pc = 0x4862D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4862DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4862D8u;
        // 0x4862dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4862D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4862d8:
    ctx->pc = 0x4862E0u;
}
