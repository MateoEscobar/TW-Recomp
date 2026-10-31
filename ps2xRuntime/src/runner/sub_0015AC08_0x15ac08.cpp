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

// Function: sub_0015AC08
// Address: 0x15ac08 - 0x15ac88
void sub_0015AC08_0x15ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC08_0x15ac08");
#endif

    switch (ctx->pc) {
        case 0x15ac08u: goto label_15ac08;
        case 0x15ac0cu: goto label_15ac0c;
        case 0x15ac10u: goto label_15ac10;
        case 0x15ac14u: goto label_15ac14;
        case 0x15ac18u: goto label_15ac18;
        case 0x15ac1cu: goto label_15ac1c;
        case 0x15ac20u: goto label_15ac20;
        case 0x15ac24u: goto label_15ac24;
        case 0x15ac28u: goto label_15ac28;
        case 0x15ac2cu: goto label_15ac2c;
        case 0x15ac30u: goto label_15ac30;
        case 0x15ac34u: goto label_15ac34;
        case 0x15ac38u: goto label_15ac38;
        case 0x15ac3cu: goto label_15ac3c;
        case 0x15ac40u: goto label_15ac40;
        case 0x15ac44u: goto label_15ac44;
        case 0x15ac48u: goto label_15ac48;
        case 0x15ac4cu: goto label_15ac4c;
        case 0x15ac50u: goto label_15ac50;
        case 0x15ac54u: goto label_15ac54;
        case 0x15ac58u: goto label_15ac58;
        case 0x15ac5cu: goto label_15ac5c;
        case 0x15ac60u: goto label_15ac60;
        case 0x15ac64u: goto label_15ac64;
        case 0x15ac68u: goto label_15ac68;
        case 0x15ac6cu: goto label_15ac6c;
        case 0x15ac70u: goto label_15ac70;
        case 0x15ac74u: goto label_15ac74;
        case 0x15ac78u: goto label_15ac78;
        case 0x15ac7cu: goto label_15ac7c;
        case 0x15ac80u: goto label_15ac80;
        case 0x15ac84u: goto label_15ac84;
        default: break;
    }

    ctx->pc = 0x15ac08u;

label_15ac08:
    // 0x15ac08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ac0c:
    // 0x15ac0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15ac0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15ac10:
    // 0x15ac10: 0x8c43c708  lw          $v1, -0x38F8($v0)
    ctx->pc = 0x15ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952712)));
label_15ac14:
    // 0x15ac14: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_15ac18:
    if (ctx->pc == 0x15AC18u) {
        ctx->pc = 0x15AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC14u;
        // 0x15ac18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC1Cu;
        goto label_15ac1c;
    }
    ctx->pc = 0x15AC14u;
    {
        const bool branch_taken_0x15ac14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC14u;
        // 0x15ac18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac14) {
            ctx->pc = 0x15AC30u;
            goto label_15ac30;
        }
    }
    ctx->pc = 0x15AC1Cu;
label_15ac1c:
    // 0x15ac1c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15ac20:
    // 0x15ac20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ac24:
    // 0x15ac24: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15ac28:
    // 0x15ac28: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_15ac2c:
    if (ctx->pc == 0x15AC2Cu) {
        ctx->pc = 0x15AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC28u;
        // 0x15ac2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC30u;
        goto label_15ac30;
    }
    ctx->pc = 0x15AC28u;
    {
        const bool branch_taken_0x15ac28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15ac28) {
            ctx->pc = 0x15AC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AC28u;
            // 0x15ac2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15AC40u;
            goto label_15ac40;
        }
    }
    ctx->pc = 0x15AC30u;
label_15ac30:
    // 0x15ac30: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15ac34:
    // 0x15ac34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15ac38:
    // 0x15ac38: 0x1000000f  b           . + 4 + (0xF << 2)
label_15ac3c:
    if (ctx->pc == 0x15AC3Cu) {
        ctx->pc = 0x15AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC38u;
        // 0x15ac3c: 0x2442ada0  addiu       $v0, $v0, -0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC40u;
        goto label_15ac40;
    }
    ctx->pc = 0x15AC38u;
    {
        const bool branch_taken_0x15ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC38u;
        // 0x15ac3c: 0x2442ada0  addiu       $v0, $v0, -0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac38) {
            ctx->pc = 0x15AC78u;
            goto label_15ac78;
        }
    }
    ctx->pc = 0x15AC40u;
label_15ac40:
    // 0x15ac40: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15ac44:
    // 0x15ac44: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15ac48:
    // 0x15ac48: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x15ac48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_15ac4c:
    // 0x15ac4c: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x15ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_15ac50:
    // 0x15ac50: 0x40f809  jalr        $v0
label_15ac54:
    if (ctx->pc == 0x15AC54u) {
        ctx->pc = 0x15AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC50u;
        // 0x15ac54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC58u;
        goto label_15ac58;
    }
    ctx->pc = 0x15AC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AC58u);
        ctx->pc = 0x15AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC50u;
        // 0x15ac54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AC50u, 0x15AC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AC58u;
label_15ac58:
    // 0x15ac58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15ac5c:
    if (ctx->pc == 0x15AC5Cu) {
        ctx->pc = 0x15AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC58u;
        // 0x15ac5c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC60u;
        goto label_15ac60;
    }
    ctx->pc = 0x15AC58u;
    {
        const bool branch_taken_0x15ac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC58u;
        // 0x15ac5c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac58) {
            ctx->pc = 0x15AC6Cu;
            goto label_15ac6c;
        }
    }
    ctx->pc = 0x15AC60u;
label_15ac60:
    // 0x15ac60: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15ac64:
    // 0x15ac64: 0x10000004  b           . + 4 + (0x4 << 2)
label_15ac68:
    if (ctx->pc == 0x15AC68u) {
        ctx->pc = 0x15AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC64u;
        // 0x15ac68: 0x2442ac88  addiu       $v0, $v0, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC6Cu;
        goto label_15ac6c;
    }
    ctx->pc = 0x15AC64u;
    {
        const bool branch_taken_0x15ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC64u;
        // 0x15ac68: 0x2442ac88  addiu       $v0, $v0, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac64) {
            ctx->pc = 0x15AC78u;
            goto label_15ac78;
        }
    }
    ctx->pc = 0x15AC6Cu;
label_15ac6c:
    // 0x15ac6c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15ac70:
    // 0x15ac70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15ac74:
    // 0x15ac74: 0x2442b2d8  addiu       $v0, $v0, -0x4D28
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947544));
label_15ac78:
    // 0x15ac78: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15ac7c:
    // 0x15ac7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ac7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ac80:
    // 0x15ac80: 0x3e00008  jr          $ra
label_15ac84:
    if (ctx->pc == 0x15AC84u) {
        ctx->pc = 0x15AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC80u;
        // 0x15ac84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC88u;
        goto label_fallthrough_0x15ac80;
    }
    ctx->pc = 0x15AC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC80u;
        // 0x15ac84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ac80:
    ctx->pc = 0x15AC88u;
}
