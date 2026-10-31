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

// Function: sub_0021CE08
// Address: 0x21ce08 - 0x21cf20
void sub_0021CE08_0x21ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE08_0x21ce08");
#endif

    switch (ctx->pc) {
        case 0x21ce08u: goto label_21ce08;
        case 0x21ce0cu: goto label_21ce0c;
        case 0x21ce10u: goto label_21ce10;
        case 0x21ce14u: goto label_21ce14;
        case 0x21ce18u: goto label_21ce18;
        case 0x21ce1cu: goto label_21ce1c;
        case 0x21ce20u: goto label_21ce20;
        case 0x21ce24u: goto label_21ce24;
        case 0x21ce28u: goto label_21ce28;
        case 0x21ce2cu: goto label_21ce2c;
        case 0x21ce30u: goto label_21ce30;
        case 0x21ce34u: goto label_21ce34;
        case 0x21ce38u: goto label_21ce38;
        case 0x21ce3cu: goto label_21ce3c;
        case 0x21ce40u: goto label_21ce40;
        case 0x21ce44u: goto label_21ce44;
        case 0x21ce48u: goto label_21ce48;
        case 0x21ce4cu: goto label_21ce4c;
        case 0x21ce50u: goto label_21ce50;
        case 0x21ce54u: goto label_21ce54;
        case 0x21ce58u: goto label_21ce58;
        case 0x21ce5cu: goto label_21ce5c;
        case 0x21ce60u: goto label_21ce60;
        case 0x21ce64u: goto label_21ce64;
        case 0x21ce68u: goto label_21ce68;
        case 0x21ce6cu: goto label_21ce6c;
        case 0x21ce70u: goto label_21ce70;
        case 0x21ce74u: goto label_21ce74;
        case 0x21ce78u: goto label_21ce78;
        case 0x21ce7cu: goto label_21ce7c;
        case 0x21ce80u: goto label_21ce80;
        case 0x21ce84u: goto label_21ce84;
        case 0x21ce88u: goto label_21ce88;
        case 0x21ce8cu: goto label_21ce8c;
        case 0x21ce90u: goto label_21ce90;
        case 0x21ce94u: goto label_21ce94;
        case 0x21ce98u: goto label_21ce98;
        case 0x21ce9cu: goto label_21ce9c;
        case 0x21cea0u: goto label_21cea0;
        case 0x21cea4u: goto label_21cea4;
        case 0x21cea8u: goto label_21cea8;
        case 0x21ceacu: goto label_21ceac;
        case 0x21ceb0u: goto label_21ceb0;
        case 0x21ceb4u: goto label_21ceb4;
        case 0x21ceb8u: goto label_21ceb8;
        case 0x21cebcu: goto label_21cebc;
        case 0x21cec0u: goto label_21cec0;
        case 0x21cec4u: goto label_21cec4;
        case 0x21cec8u: goto label_21cec8;
        case 0x21ceccu: goto label_21cecc;
        case 0x21ced0u: goto label_21ced0;
        case 0x21ced4u: goto label_21ced4;
        case 0x21ced8u: goto label_21ced8;
        case 0x21cedcu: goto label_21cedc;
        case 0x21cee0u: goto label_21cee0;
        case 0x21cee4u: goto label_21cee4;
        case 0x21cee8u: goto label_21cee8;
        case 0x21ceecu: goto label_21ceec;
        case 0x21cef0u: goto label_21cef0;
        case 0x21cef4u: goto label_21cef4;
        case 0x21cef8u: goto label_21cef8;
        case 0x21cefcu: goto label_21cefc;
        case 0x21cf00u: goto label_21cf00;
        case 0x21cf04u: goto label_21cf04;
        case 0x21cf08u: goto label_21cf08;
        case 0x21cf0cu: goto label_21cf0c;
        case 0x21cf10u: goto label_21cf10;
        case 0x21cf14u: goto label_21cf14;
        case 0x21cf18u: goto label_21cf18;
        case 0x21cf1cu: goto label_21cf1c;
        default: break;
    }

    ctx->pc = 0x21ce08u;

label_21ce08:
    // 0x21ce08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21ce0c:
    // 0x21ce0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_21ce10:
    // 0x21ce10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21ce14:
    // 0x21ce14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ce14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ce18:
    // 0x21ce18: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x21ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_21ce1c:
    // 0x21ce1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_21ce20:
    if (ctx->pc == 0x21CE20u) {
        ctx->pc = 0x21CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE1Cu;
        // 0x21ce20: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE24u;
        goto label_21ce24;
    }
    ctx->pc = 0x21CE1Cu;
    {
        const bool branch_taken_0x21ce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ce1c) {
            ctx->pc = 0x21CE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CE1Cu;
            // 0x21ce20: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CE30u;
            goto label_21ce30;
        }
    }
    ctx->pc = 0x21CE24u;
label_21ce24:
    // 0x21ce24: 0xc0873c8  jal         func_21CF20
label_21ce28:
    if (ctx->pc == 0x21CE28u) {
        ctx->pc = 0x21CE2Cu;
        goto label_21ce2c;
    }
    ctx->pc = 0x21CE24u;
    SET_GPR_U32(ctx, 31, 0x21CE2Cu);
    ctx->pc = 0x21CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF20u, 0x21CE24u, 0x21CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE2Cu;
label_21ce2c:
    // 0x21ce2c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x21ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_21ce30:
    // 0x21ce30: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x21ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_21ce34:
    // 0x21ce34: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_21ce38:
    if (ctx->pc == 0x21CE38u) {
        ctx->pc = 0x21CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE34u;
        // 0x21ce38: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE3Cu;
        goto label_21ce3c;
    }
    ctx->pc = 0x21CE34u;
    {
        const bool branch_taken_0x21ce34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE34u;
        // 0x21ce38: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce34) {
            ctx->pc = 0x21CE5Cu;
            goto label_21ce5c;
        }
    }
    ctx->pc = 0x21CE3Cu;
label_21ce3c:
    // 0x21ce3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21ce3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ce40:
    // 0x21ce40: 0xc0cf2c2  jal         func_33CB08
label_21ce44:
    if (ctx->pc == 0x21CE44u) {
        ctx->pc = 0x21CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE40u;
        // 0x21ce44: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE48u;
        goto label_21ce48;
    }
    ctx->pc = 0x21CE40u;
    SET_GPR_U32(ctx, 31, 0x21CE48u);
    ctx->pc = 0x21CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE40u;
    // 0x21ce44: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CB08u, 0x21CE40u, 0x21CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE48u;
label_21ce48:
    // 0x21ce48: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x21ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
label_21ce4c:
    // 0x21ce4c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x21ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_21ce50:
    // 0x21ce50: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_21ce54:
    // 0x21ce54: 0x1000002e  b           . + 4 + (0x2E << 2)
label_21ce58:
    if (ctx->pc == 0x21CE58u) {
        ctx->pc = 0x21CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE54u;
        // 0x21ce58: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE5Cu;
        goto label_21ce5c;
    }
    ctx->pc = 0x21CE54u;
    {
        const bool branch_taken_0x21ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE54u;
        // 0x21ce58: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce54) {
            ctx->pc = 0x21CF10u;
            goto label_21cf10;
        }
    }
    ctx->pc = 0x21CE5Cu;
label_21ce5c:
    // 0x21ce5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21ce5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ce60:
    // 0x21ce60: 0xc0cf312  jal         func_33CC48
label_21ce64:
    if (ctx->pc == 0x21CE64u) {
        ctx->pc = 0x21CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE60u;
        // 0x21ce64: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE68u;
        goto label_21ce68;
    }
    ctx->pc = 0x21CE60u;
    SET_GPR_U32(ctx, 31, 0x21CE68u);
    ctx->pc = 0x21CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE60u;
    // 0x21ce64: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC48u, 0x21CE60u, 0x21CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE68u;
label_21ce68:
    // 0x21ce68: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x21ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
label_21ce6c:
    // 0x21ce6c: 0xc087502  jal         func_21D408
label_21ce70:
    if (ctx->pc == 0x21CE70u) {
        ctx->pc = 0x21CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE6Cu;
        // 0x21ce70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE74u;
        goto label_21ce74;
    }
    ctx->pc = 0x21CE6Cu;
    SET_GPR_U32(ctx, 31, 0x21CE74u);
    ctx->pc = 0x21CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE6Cu;
    // 0x21ce70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21CE6Cu, 0x21CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE74u;
label_21ce74:
    // 0x21ce74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21ce78:
    // 0x21ce78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_21ce7c:
    if (ctx->pc == 0x21CE7Cu) {
        ctx->pc = 0x21CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE78u;
        // 0x21ce7c: 0x2403fbff  addiu       $v1, $zero, -0x401 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE80u;
        goto label_21ce80;
    }
    ctx->pc = 0x21CE78u;
    {
        const bool branch_taken_0x21ce78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE78u;
        // 0x21ce7c: 0x2403fbff  addiu       $v1, $zero, -0x401 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce78) {
            ctx->pc = 0x21CE94u;
            goto label_21ce94;
        }
    }
    ctx->pc = 0x21CE80u;
label_21ce80:
    // 0x21ce80: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x21ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_21ce84:
    // 0x21ce84: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x21ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_21ce88:
    // 0x21ce88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21ce88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21ce8c:
    // 0x21ce8c: 0x10000019  b           . + 4 + (0x19 << 2)
label_21ce90:
    if (ctx->pc == 0x21CE90u) {
        ctx->pc = 0x21CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE8Cu;
        // 0x21ce90: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE94u;
        goto label_21ce94;
    }
    ctx->pc = 0x21CE8Cu;
    {
        const bool branch_taken_0x21ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE8Cu;
        // 0x21ce90: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce8c) {
            ctx->pc = 0x21CEF4u;
            goto label_21cef4;
        }
    }
    ctx->pc = 0x21CE94u;
label_21ce94:
    // 0x21ce94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21ce98:
    // 0x21ce98: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x21ce98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_21ce9c:
    // 0x21ce9c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x21ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_21cea0:
    // 0x21cea0: 0x40f809  jalr        $v0
label_21cea4:
    if (ctx->pc == 0x21CEA4u) {
        ctx->pc = 0x21CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEA0u;
        // 0x21cea4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEA8u;
        goto label_21cea8;
    }
    ctx->pc = 0x21CEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CEA8u);
        ctx->pc = 0x21CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEA0u;
        // 0x21cea4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CEA0u, 0x21CEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CEA8u;
label_21cea8:
    // 0x21cea8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x21cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_21ceac:
    // 0x21ceac: 0x3c013fb6  lui         $at, 0x3FB6
    ctx->pc = 0x21ceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16310 << 16));
label_21ceb0:
    // 0x21ceb0: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x21ceb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
label_21ceb4:
    // 0x21ceb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21ceb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21ceb8:
    // 0x21ceb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21cebc:
    // 0x21cebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21cebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21cec0:
    // 0x21cec0: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x21cec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_21cec4:
    // 0x21cec4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x21cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_21cec8:
    // 0x21cec8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x21cec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_21cecc:
    // 0x21cecc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x21ceccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_21ced0:
    // 0x21ced0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x21ced0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_21ced4:
    // 0x21ced4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x21ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21ced8:
    // 0x21ced8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21cedc:
    // 0x21cedc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x21cedcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_21cee0:
    // 0x21cee0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x21cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_21cee4:
    // 0x21cee4: 0x40f809  jalr        $v0
label_21cee8:
    if (ctx->pc == 0x21CEE8u) {
        ctx->pc = 0x21CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEE4u;
        // 0x21cee8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEECu;
        goto label_21ceec;
    }
    ctx->pc = 0x21CEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CEECu);
        ctx->pc = 0x21CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEE4u;
        // 0x21cee8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CEE4u, 0x21CEECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CEECu;
label_21ceec:
    // 0x21ceec: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x21ceecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21cef0:
    // 0x21cef0: 0x7c430060  sq          $v1, 0x60($v0)
    ctx->pc = 0x21cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 3));
label_21cef4:
    // 0x21cef4: 0x920203bf  lbu         $v0, 0x3BF($s0)
    ctx->pc = 0x21cef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 959)));
label_21cef8:
    // 0x21cef8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_21cefc:
    if (ctx->pc == 0x21CEFCu) {
        ctx->pc = 0x21CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEF8u;
        // 0x21cefc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF00u;
        goto label_21cf00;
    }
    ctx->pc = 0x21CEF8u;
    {
        const bool branch_taken_0x21cef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cef8) {
            ctx->pc = 0x21CEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CEF8u;
            // 0x21cefc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF14u;
            goto label_21cf14;
        }
    }
    ctx->pc = 0x21CF00u;
label_21cf00:
    // 0x21cf00: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x21cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_21cf04:
    // 0x21cf04: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x21cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_21cf08:
    // 0x21cf08: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x21cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_21cf0c:
    // 0x21cf0c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x21cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_21cf10:
    // 0x21cf10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21cf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21cf14:
    // 0x21cf14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21cf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21cf18:
    // 0x21cf18: 0x3e00008  jr          $ra
label_21cf1c:
    if (ctx->pc == 0x21CF1Cu) {
        ctx->pc = 0x21CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF18u;
        // 0x21cf1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF20u;
        goto label_fallthrough_0x21cf18;
    }
    ctx->pc = 0x21CF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF18u;
        // 0x21cf1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21cf18:
    ctx->pc = 0x21CF20u;
}
