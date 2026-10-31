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

// Function: sub_0015F6C8
// Address: 0x15f6c8 - 0x15f728
void sub_0015F6C8_0x15f6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F6C8_0x15f6c8");
#endif

    switch (ctx->pc) {
        case 0x15f6c8u: goto label_15f6c8;
        case 0x15f6ccu: goto label_15f6cc;
        case 0x15f6d0u: goto label_15f6d0;
        case 0x15f6d4u: goto label_15f6d4;
        case 0x15f6d8u: goto label_15f6d8;
        case 0x15f6dcu: goto label_15f6dc;
        case 0x15f6e0u: goto label_15f6e0;
        case 0x15f6e4u: goto label_15f6e4;
        case 0x15f6e8u: goto label_15f6e8;
        case 0x15f6ecu: goto label_15f6ec;
        case 0x15f6f0u: goto label_15f6f0;
        case 0x15f6f4u: goto label_15f6f4;
        case 0x15f6f8u: goto label_15f6f8;
        case 0x15f6fcu: goto label_15f6fc;
        case 0x15f700u: goto label_15f700;
        case 0x15f704u: goto label_15f704;
        case 0x15f708u: goto label_15f708;
        case 0x15f70cu: goto label_15f70c;
        case 0x15f710u: goto label_15f710;
        case 0x15f714u: goto label_15f714;
        case 0x15f718u: goto label_15f718;
        case 0x15f71cu: goto label_15f71c;
        case 0x15f720u: goto label_15f720;
        case 0x15f724u: goto label_15f724;
        default: break;
    }

    ctx->pc = 0x15f6c8u;

label_15f6c8:
    // 0x15f6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15f6cc:
    // 0x15f6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15f6d0:
    // 0x15f6d0: 0xc067b9c  jal         func_19EE70
label_15f6d4:
    if (ctx->pc == 0x15F6D4u) {
        ctx->pc = 0x15F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6D0u;
        // 0x15f6d4: 0x240400cd  addiu       $a0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6D8u;
        goto label_15f6d8;
    }
    ctx->pc = 0x15F6D0u;
    SET_GPR_U32(ctx, 31, 0x15F6D8u);
    ctx->pc = 0x15F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F6D0u;
    // 0x15f6d4: 0x240400cd  addiu       $a0, $zero, 0xCD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15F6D0u, 0x15F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6D8u;
label_15f6d8:
    // 0x15f6d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f6dc:
    // 0x15f6dc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_15f6e0:
    // 0x15f6e0: 0x8c675024  lw          $a3, 0x5024($v1)
    ctx->pc = 0x15f6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20516)));
label_15f6e4:
    // 0x15f6e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f6e8:
    // 0x15f6e8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_15f6ec:
    // 0x15f6ec: 0x8ce30128  lw          $v1, 0x128($a3)
    ctx->pc = 0x15f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 296)));
label_15f6f0:
    // 0x15f6f0: 0xacc4c79c  sw          $a0, -0x3864($a2)
    ctx->pc = 0x15f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952860), GPR_U32(ctx, 4));
label_15f6f4:
    // 0x15f6f4: 0xaca2c7a8  sw          $v0, -0x3858($a1)
    ctx->pc = 0x15f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952872), GPR_U32(ctx, 2));
label_15f6f8:
    // 0x15f6f8: 0x84640160  lh          $a0, 0x160($v1)
    ctx->pc = 0x15f6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
label_15f6fc:
    // 0x15f6fc: 0x8c620164  lw          $v0, 0x164($v1)
    ctx->pc = 0x15f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_15f700:
    // 0x15f700: 0x40f809  jalr        $v0
label_15f704:
    if (ctx->pc == 0x15F704u) {
        ctx->pc = 0x15F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F700u;
        // 0x15f704: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F708u;
        goto label_15f708;
    }
    ctx->pc = 0x15F700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F708u);
        ctx->pc = 0x15F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F700u;
        // 0x15f704: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F700u, 0x15F708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F708u;
label_15f708:
    // 0x15f708: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_15f70c:
    // 0x15f70c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f710:
    // 0x15f710: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
label_15f714:
    // 0x15f714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f718:
    // 0x15f718: 0xac43c7ac  sw          $v1, -0x3854($v0)
    ctx->pc = 0x15f718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952876), GPR_U32(ctx, 3));
label_15f71c:
    // 0x15f71c: 0x3e00008  jr          $ra
label_15f720:
    if (ctx->pc == 0x15F720u) {
        ctx->pc = 0x15F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F71Cu;
        // 0x15f720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F724u;
        goto label_15f724;
    }
    ctx->pc = 0x15F71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F71Cu;
        // 0x15f720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F724u;
label_15f724:
    // 0x15f724: 0x0  nop
    ctx->pc = 0x15f724u;
    // NOP
    ctx->pc = 0x15f728u;
}
