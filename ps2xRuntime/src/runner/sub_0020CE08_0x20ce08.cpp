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

// Function: sub_0020CE08
// Address: 0x20ce08 - 0x20ceb8
void sub_0020CE08_0x20ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CE08_0x20ce08");
#endif

    switch (ctx->pc) {
        case 0x20ce08u: goto label_20ce08;
        case 0x20ce0cu: goto label_20ce0c;
        case 0x20ce10u: goto label_20ce10;
        case 0x20ce14u: goto label_20ce14;
        case 0x20ce18u: goto label_20ce18;
        case 0x20ce1cu: goto label_20ce1c;
        case 0x20ce20u: goto label_20ce20;
        case 0x20ce24u: goto label_20ce24;
        case 0x20ce28u: goto label_20ce28;
        case 0x20ce2cu: goto label_20ce2c;
        case 0x20ce30u: goto label_20ce30;
        case 0x20ce34u: goto label_20ce34;
        case 0x20ce38u: goto label_20ce38;
        case 0x20ce3cu: goto label_20ce3c;
        case 0x20ce40u: goto label_20ce40;
        case 0x20ce44u: goto label_20ce44;
        case 0x20ce48u: goto label_20ce48;
        case 0x20ce4cu: goto label_20ce4c;
        case 0x20ce50u: goto label_20ce50;
        case 0x20ce54u: goto label_20ce54;
        case 0x20ce58u: goto label_20ce58;
        case 0x20ce5cu: goto label_20ce5c;
        case 0x20ce60u: goto label_20ce60;
        case 0x20ce64u: goto label_20ce64;
        case 0x20ce68u: goto label_20ce68;
        case 0x20ce6cu: goto label_20ce6c;
        case 0x20ce70u: goto label_20ce70;
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce78u: goto label_20ce78;
        case 0x20ce7cu: goto label_20ce7c;
        case 0x20ce80u: goto label_20ce80;
        case 0x20ce84u: goto label_20ce84;
        case 0x20ce88u: goto label_20ce88;
        case 0x20ce8cu: goto label_20ce8c;
        case 0x20ce90u: goto label_20ce90;
        case 0x20ce94u: goto label_20ce94;
        case 0x20ce98u: goto label_20ce98;
        case 0x20ce9cu: goto label_20ce9c;
        case 0x20cea0u: goto label_20cea0;
        case 0x20cea4u: goto label_20cea4;
        case 0x20cea8u: goto label_20cea8;
        case 0x20ceacu: goto label_20ceac;
        case 0x20ceb0u: goto label_20ceb0;
        case 0x20ceb4u: goto label_20ceb4;
        default: break;
    }

    ctx->pc = 0x20ce08u;

label_20ce08:
    // 0x20ce08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20ce0c:
    // 0x20ce0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ce10:
    // 0x20ce10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20ce14:
    // 0x20ce14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ce14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ce18:
    // 0x20ce18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ce1c:
    // 0x20ce1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20ce20:
    // 0x20ce20: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_20ce24:
    if (ctx->pc == 0x20CE24u) {
        ctx->pc = 0x20CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE20u;
        // 0x20ce24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE28u;
        goto label_20ce28;
    }
    ctx->pc = 0x20CE20u;
    {
        const bool branch_taken_0x20ce20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE20u;
        // 0x20ce24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce20) {
            ctx->pc = 0x20CEA4u;
            goto label_20cea4;
        }
    }
    ctx->pc = 0x20CE28u;
label_20ce28:
    // 0x20ce28: 0xc073462  jal         func_1CD188
label_20ce2c:
    if (ctx->pc == 0x20CE2Cu) {
        ctx->pc = 0x20CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE28u;
        // 0x20ce2c: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE30u;
        goto label_20ce30;
    }
    ctx->pc = 0x20CE28u;
    SET_GPR_U32(ctx, 31, 0x20CE30u);
    ctx->pc = 0x20CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE28u;
    // 0x20ce2c: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x20CE28u, 0x20CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE30u;
label_20ce30:
    // 0x20ce30: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x20ce30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_20ce34:
    // 0x20ce34: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x20ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20ce38:
    // 0x20ce38: 0x261093b8  addiu       $s0, $s0, -0x6C48
    ctx->pc = 0x20ce38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939576));
label_20ce3c:
    // 0x20ce3c: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x20ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_20ce40:
    // 0x20ce40: 0xc139138  jal         func_4E44E0
label_20ce44:
    if (ctx->pc == 0x20CE44u) {
        ctx->pc = 0x20CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE40u;
        // 0x20ce44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE48u;
        goto label_20ce48;
    }
    ctx->pc = 0x20CE40u;
    SET_GPR_U32(ctx, 31, 0x20CE48u);
    ctx->pc = 0x20CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE40u;
    // 0x20ce44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x20CE40u, 0x20CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE48u;
label_20ce48:
    // 0x20ce48: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x20ce48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20ce4c:
    // 0x20ce4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ce50:
    // 0x20ce50: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20ce50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20ce54:
    // 0x20ce54: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20ce58:
    // 0x20ce58: 0x60f809  jalr        $v1
label_20ce5c:
    if (ctx->pc == 0x20CE5Cu) {
        ctx->pc = 0x20CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE58u;
        // 0x20ce5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE60u;
        goto label_20ce60;
    }
    ctx->pc = 0x20CE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CE60u);
        ctx->pc = 0x20CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE58u;
        // 0x20ce5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE58u, 0x20CE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CE60u;
label_20ce60:
    // 0x20ce60: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x20ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20ce64:
    // 0x20ce64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ce64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ce68:
    // 0x20ce68: 0xc139fe8  jal         func_4E7FA0
label_20ce6c:
    if (ctx->pc == 0x20CE6Cu) {
        ctx->pc = 0x20CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE68u;
        // 0x20ce6c: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE70u;
        goto label_20ce70;
    }
    ctx->pc = 0x20CE68u;
    SET_GPR_U32(ctx, 31, 0x20CE70u);
    ctx->pc = 0x20CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE68u;
    // 0x20ce6c: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x20CE68u, 0x20CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE70u;
label_20ce70:
    // 0x20ce70: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x20ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20ce74:
    // 0x20ce74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ce78:
    // 0x20ce78: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20ce78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20ce7c:
    // 0x20ce7c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20ce80:
    // 0x20ce80: 0x60f809  jalr        $v1
label_20ce84:
    if (ctx->pc == 0x20CE84u) {
        ctx->pc = 0x20CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE80u;
        // 0x20ce84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE88u;
        goto label_20ce88;
    }
    ctx->pc = 0x20CE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CE88u);
        ctx->pc = 0x20CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE80u;
        // 0x20ce84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE80u, 0x20CE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CE88u;
label_20ce88:
    // 0x20ce88: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20ce8c:
    // 0x20ce8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ce90:
    // 0x20ce90: 0xc139fc8  jal         func_4E7F20
label_20ce94:
    if (ctx->pc == 0x20CE94u) {
        ctx->pc = 0x20CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE90u;
        // 0x20ce94: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE98u;
        goto label_20ce98;
    }
    ctx->pc = 0x20CE90u;
    SET_GPR_U32(ctx, 31, 0x20CE98u);
    ctx->pc = 0x20CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE90u;
    // 0x20ce94: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x20CE90u, 0x20CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE98u;
label_20ce98:
    // 0x20ce98: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20ce9c:
    // 0x20ce9c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_20cea0:
    // 0x20cea0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20cea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20cea4:
    // 0x20cea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20cea8:
    // 0x20cea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ceac:
    // 0x20ceac: 0x3e00008  jr          $ra
label_20ceb0:
    if (ctx->pc == 0x20CEB0u) {
        ctx->pc = 0x20CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEACu;
        // 0x20ceb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEB4u;
        goto label_20ceb4;
    }
    ctx->pc = 0x20CEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEACu;
        // 0x20ceb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CEB4u;
label_20ceb4:
    // 0x20ceb4: 0x0  nop
    ctx->pc = 0x20ceb4u;
    // NOP
    ctx->pc = 0x20ceb8u;
}
