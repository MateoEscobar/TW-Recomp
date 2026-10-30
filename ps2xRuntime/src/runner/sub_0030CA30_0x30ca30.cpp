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

// Function: sub_0030CA30
// Address: 0x30ca30 - 0x30cbb8
void sub_0030CA30_0x30ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CA30_0x30ca30");
#endif

    switch (ctx->pc) {
        case 0x30ca30u: goto label_30ca30;
        case 0x30ca34u: goto label_30ca34;
        case 0x30ca38u: goto label_30ca38;
        case 0x30ca3cu: goto label_30ca3c;
        case 0x30ca40u: goto label_30ca40;
        case 0x30ca44u: goto label_30ca44;
        case 0x30ca48u: goto label_30ca48;
        case 0x30ca4cu: goto label_30ca4c;
        case 0x30ca50u: goto label_30ca50;
        case 0x30ca54u: goto label_30ca54;
        case 0x30ca58u: goto label_30ca58;
        case 0x30ca5cu: goto label_30ca5c;
        case 0x30ca60u: goto label_30ca60;
        case 0x30ca64u: goto label_30ca64;
        case 0x30ca68u: goto label_30ca68;
        case 0x30ca6cu: goto label_30ca6c;
        case 0x30ca70u: goto label_30ca70;
        case 0x30ca74u: goto label_30ca74;
        case 0x30ca78u: goto label_30ca78;
        case 0x30ca7cu: goto label_30ca7c;
        case 0x30ca80u: goto label_30ca80;
        case 0x30ca84u: goto label_30ca84;
        case 0x30ca88u: goto label_30ca88;
        case 0x30ca8cu: goto label_30ca8c;
        case 0x30ca90u: goto label_30ca90;
        case 0x30ca94u: goto label_30ca94;
        case 0x30ca98u: goto label_30ca98;
        case 0x30ca9cu: goto label_30ca9c;
        case 0x30caa0u: goto label_30caa0;
        case 0x30caa4u: goto label_30caa4;
        case 0x30caa8u: goto label_30caa8;
        case 0x30caacu: goto label_30caac;
        case 0x30cab0u: goto label_30cab0;
        case 0x30cab4u: goto label_30cab4;
        case 0x30cab8u: goto label_30cab8;
        case 0x30cabcu: goto label_30cabc;
        case 0x30cac0u: goto label_30cac0;
        case 0x30cac4u: goto label_30cac4;
        case 0x30cac8u: goto label_30cac8;
        case 0x30caccu: goto label_30cacc;
        case 0x30cad0u: goto label_30cad0;
        case 0x30cad4u: goto label_30cad4;
        case 0x30cad8u: goto label_30cad8;
        case 0x30cadcu: goto label_30cadc;
        case 0x30cae0u: goto label_30cae0;
        case 0x30cae4u: goto label_30cae4;
        case 0x30cae8u: goto label_30cae8;
        case 0x30caecu: goto label_30caec;
        case 0x30caf0u: goto label_30caf0;
        case 0x30caf4u: goto label_30caf4;
        case 0x30caf8u: goto label_30caf8;
        case 0x30cafcu: goto label_30cafc;
        case 0x30cb00u: goto label_30cb00;
        case 0x30cb04u: goto label_30cb04;
        case 0x30cb08u: goto label_30cb08;
        case 0x30cb0cu: goto label_30cb0c;
        case 0x30cb10u: goto label_30cb10;
        case 0x30cb14u: goto label_30cb14;
        case 0x30cb18u: goto label_30cb18;
        case 0x30cb1cu: goto label_30cb1c;
        case 0x30cb20u: goto label_30cb20;
        case 0x30cb24u: goto label_30cb24;
        case 0x30cb28u: goto label_30cb28;
        case 0x30cb2cu: goto label_30cb2c;
        case 0x30cb30u: goto label_30cb30;
        case 0x30cb34u: goto label_30cb34;
        case 0x30cb38u: goto label_30cb38;
        case 0x30cb3cu: goto label_30cb3c;
        case 0x30cb40u: goto label_30cb40;
        case 0x30cb44u: goto label_30cb44;
        case 0x30cb48u: goto label_30cb48;
        case 0x30cb4cu: goto label_30cb4c;
        case 0x30cb50u: goto label_30cb50;
        case 0x30cb54u: goto label_30cb54;
        case 0x30cb58u: goto label_30cb58;
        case 0x30cb5cu: goto label_30cb5c;
        case 0x30cb60u: goto label_30cb60;
        case 0x30cb64u: goto label_30cb64;
        case 0x30cb68u: goto label_30cb68;
        case 0x30cb6cu: goto label_30cb6c;
        case 0x30cb70u: goto label_30cb70;
        case 0x30cb74u: goto label_30cb74;
        case 0x30cb78u: goto label_30cb78;
        case 0x30cb7cu: goto label_30cb7c;
        case 0x30cb80u: goto label_30cb80;
        case 0x30cb84u: goto label_30cb84;
        case 0x30cb88u: goto label_30cb88;
        case 0x30cb8cu: goto label_30cb8c;
        case 0x30cb90u: goto label_30cb90;
        case 0x30cb94u: goto label_30cb94;
        case 0x30cb98u: goto label_30cb98;
        case 0x30cb9cu: goto label_30cb9c;
        case 0x30cba0u: goto label_30cba0;
        case 0x30cba4u: goto label_30cba4;
        case 0x30cba8u: goto label_30cba8;
        case 0x30cbacu: goto label_30cbac;
        case 0x30cbb0u: goto label_30cbb0;
        case 0x30cbb4u: goto label_30cbb4;
        default: break;
    }

    ctx->pc = 0x30ca30u;

label_30ca30:
    // 0x30ca30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30ca34:
    // 0x30ca34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_30ca38:
    // 0x30ca38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30ca3c:
    // 0x30ca3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ca3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ca40:
    // 0x30ca40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30ca44:
    // 0x30ca44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30ca44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30ca48:
    // 0x30ca48: 0xc08a61a  jal         func_229868
label_30ca4c:
    if (ctx->pc == 0x30CA4Cu) {
        ctx->pc = 0x30CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA48u;
        // 0x30ca4c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CA50u;
        goto label_30ca50;
    }
    ctx->pc = 0x30CA48u;
    SET_GPR_U32(ctx, 31, 0x30CA50u);
    ctx->pc = 0x30CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA48u;
    // 0x30ca4c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30CA48u, 0x30CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA50u;
label_30ca50:
    // 0x30ca50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ca50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ca54:
    // 0x30ca54: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
label_30ca58:
    if (ctx->pc == 0x30CA58u) {
        ctx->pc = 0x30CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA54u;
        // 0x30ca58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CA5Cu;
        goto label_30ca5c;
    }
    ctx->pc = 0x30CA54u;
    {
        const bool branch_taken_0x30ca54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA54u;
        // 0x30ca58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca54) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CA5Cu;
label_30ca5c:
    // 0x30ca5c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x30ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_30ca60:
    // 0x30ca60: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30ca60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30ca64:
    // 0x30ca64: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30ca64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30ca68:
    // 0x30ca68: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_30ca6c:
    if (ctx->pc == 0x30CA6Cu) {
        ctx->pc = 0x30CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA68u;
        // 0x30ca6c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CA70u;
        goto label_30ca70;
    }
    ctx->pc = 0x30CA68u;
    {
        const bool branch_taken_0x30ca68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA68u;
        // 0x30ca6c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca68) {
            ctx->pc = 0x30CBC0u;
            return;
        }
    }
    ctx->pc = 0x30CA70u;
label_30ca70:
    // 0x30ca70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30ca74:
    // 0x30ca74: 0x2442c510  addiu       $v0, $v0, -0x3AF0
    ctx->pc = 0x30ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952208));
label_30ca78:
    // 0x30ca78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30ca7c:
    // 0x30ca7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30ca80:
    // 0x30ca80: 0x800008  jr          $a0
label_30ca84:
    if (ctx->pc == 0x30CA84u) {
        ctx->pc = 0x30CA88u;
        goto label_30ca88;
    }
    ctx->pc = 0x30CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30CA88u: goto label_30ca88;
            case 0x30CA98u: goto label_30ca98;
            case 0x30CAD0u: goto label_30cad0;
            case 0x30CB44u: goto label_30cb44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CA80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30CA88u;
label_30ca88:
    // 0x30ca88: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x30ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_30ca8c:
    // 0x30ca8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ca90:
    // 0x30ca90: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_30ca94:
    if (ctx->pc == 0x30CA94u) {
        ctx->pc = 0x30CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA90u;
        // 0x30ca94: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CA98u;
        goto label_30ca98;
    }
    ctx->pc = 0x30CA90u;
    {
        const bool branch_taken_0x30ca90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30ca90) {
            ctx->pc = 0x30CA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CA90u;
            // 0x30ca94: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CAA8u;
            goto label_30caa8;
        }
    }
    ctx->pc = 0x30CA98u;
label_30ca98:
    // 0x30ca98: 0xc0c3144  jal         func_30C510
label_30ca9c:
    if (ctx->pc == 0x30CA9Cu) {
        ctx->pc = 0x30CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA98u;
        // 0x30ca9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAA0u;
        goto label_30caa0;
    }
    ctx->pc = 0x30CA98u;
    SET_GPR_U32(ctx, 31, 0x30CAA0u);
    ctx->pc = 0x30CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA98u;
    // 0x30ca9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C510u, 0x30CA98u, 0x30CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CAA0u;
label_30caa0:
    // 0x30caa0: 0x10000048  b           . + 4 + (0x48 << 2)
label_30caa4:
    if (ctx->pc == 0x30CAA4u) {
        ctx->pc = 0x30CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAA0u;
        // 0x30caa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAA8u;
        goto label_30caa8;
    }
    ctx->pc = 0x30CAA0u;
    {
        const bool branch_taken_0x30caa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAA0u;
        // 0x30caa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caa0) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CAA8u;
label_30caa8:
    // 0x30caa8: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_30caac:
    if (ctx->pc == 0x30CAACu) {
        ctx->pc = 0x30CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAA8u;
        // 0x30caac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAB0u;
        goto label_30cab0;
    }
    ctx->pc = 0x30CAA8u;
    {
        const bool branch_taken_0x30caa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAA8u;
        // 0x30caac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caa8) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CAB0u;
label_30cab0:
    // 0x30cab0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x30cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_30cab4:
    // 0x30cab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30cab8:
    // 0x30cab8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30cab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30cabc:
    // 0x30cabc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30cac0:
    // 0x30cac0: 0x60f809  jalr        $v1
label_30cac4:
    if (ctx->pc == 0x30CAC4u) {
        ctx->pc = 0x30CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAC0u;
        // 0x30cac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAC8u;
        goto label_30cac8;
    }
    ctx->pc = 0x30CAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30CAC8u);
        ctx->pc = 0x30CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAC0u;
        // 0x30cac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CAC0u, 0x30CAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30CAC8u;
label_30cac8:
    // 0x30cac8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_30cacc:
    if (ctx->pc == 0x30CACCu) {
        ctx->pc = 0x30CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAC8u;
        // 0x30cacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAD0u;
        goto label_30cad0;
    }
    ctx->pc = 0x30CAC8u;
    {
        const bool branch_taken_0x30cac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAC8u;
        // 0x30cacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cac8) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CAD0u;
label_30cad0:
    // 0x30cad0: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30cad4:
    // 0x30cad4: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x30cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_30cad8:
    // 0x30cad8: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_30cadc:
    if (ctx->pc == 0x30CADCu) {
        ctx->pc = 0x30CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAD8u;
        // 0x30cadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAE0u;
        goto label_30cae0;
    }
    ctx->pc = 0x30CAD8u;
    {
        const bool branch_taken_0x30cad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAD8u;
        // 0x30cadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cad8) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CAE0u;
label_30cae0:
    // 0x30cae0: 0xc087502  jal         func_21D408
label_30cae4:
    if (ctx->pc == 0x30CAE4u) {
        ctx->pc = 0x30CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAE0u;
        // 0x30cae4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAE8u;
        goto label_30cae8;
    }
    ctx->pc = 0x30CAE0u;
    SET_GPR_U32(ctx, 31, 0x30CAE8u);
    ctx->pc = 0x30CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAE0u;
    // 0x30cae4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30CAE0u, 0x30CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CAE8u;
label_30cae8:
    // 0x30cae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30cae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30caec:
    // 0x30caec: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30caecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30caf0:
    // 0x30caf0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30caf4:
    if (ctx->pc == 0x30CAF4u) {
        ctx->pc = 0x30CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAF0u;
        // 0x30caf4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CAF8u;
        goto label_30caf8;
    }
    ctx->pc = 0x30CAF0u;
    {
        const bool branch_taken_0x30caf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAF0u;
        // 0x30caf4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caf0) {
            ctx->pc = 0x30CB04u;
            goto label_30cb04;
        }
    }
    ctx->pc = 0x30CAF8u;
label_30caf8:
    // 0x30caf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30cafc:
    // 0x30cafc: 0x10000002  b           . + 4 + (0x2 << 2)
label_30cb00:
    if (ctx->pc == 0x30CB00u) {
        ctx->pc = 0x30CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAFCu;
        // 0x30cb00: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB04u;
        goto label_30cb04;
    }
    ctx->pc = 0x30CAFCu;
    {
        const bool branch_taken_0x30cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAFCu;
        // 0x30cb00: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cafc) {
            ctx->pc = 0x30CB08u;
            goto label_30cb08;
        }
    }
    ctx->pc = 0x30CB04u;
label_30cb04:
    // 0x30cb04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30cb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30cb08:
    // 0x30cb08: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_30cb0c:
    if (ctx->pc == 0x30CB0Cu) {
        ctx->pc = 0x30CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB08u;
        // 0x30cb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB10u;
        goto label_30cb10;
    }
    ctx->pc = 0x30CB08u;
    {
        const bool branch_taken_0x30cb08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB08u;
        // 0x30cb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb08) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CB10u;
label_30cb10:
    // 0x30cb10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30cb14:
    // 0x30cb14: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30cb14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30cb18:
    // 0x30cb18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30cb1c:
    // 0x30cb1c: 0x40f809  jalr        $v0
label_30cb20:
    if (ctx->pc == 0x30CB20u) {
        ctx->pc = 0x30CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB1Cu;
        // 0x30cb20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB24u;
        goto label_30cb24;
    }
    ctx->pc = 0x30CB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30CB24u);
        ctx->pc = 0x30CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB1Cu;
        // 0x30cb20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CB1Cu, 0x30CB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30CB24u;
label_30cb24:
    // 0x30cb24: 0x2403008e  addiu       $v1, $zero, 0x8E
    ctx->pc = 0x30cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_30cb28:
    // 0x30cb28: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_30cb2c:
    if (ctx->pc == 0x30CB2Cu) {
        ctx->pc = 0x30CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB28u;
        // 0x30cb2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB30u;
        goto label_30cb30;
    }
    ctx->pc = 0x30CB28u;
    {
        const bool branch_taken_0x30cb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB28u;
        // 0x30cb2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb28) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CB30u;
label_30cb30:
    // 0x30cb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30cb34:
    // 0x30cb34: 0xc0bc8e6  jal         func_2F2398
label_30cb38:
    if (ctx->pc == 0x30CB38u) {
        ctx->pc = 0x30CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB34u;
        // 0x30cb38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB3Cu;
        goto label_30cb3c;
    }
    ctx->pc = 0x30CB34u;
    SET_GPR_U32(ctx, 31, 0x30CB3Cu);
    ctx->pc = 0x30CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB34u;
    // 0x30cb38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2398u, 0x30CB34u, 0x30CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB3Cu;
label_30cb3c:
    // 0x30cb3c: 0x10000021  b           . + 4 + (0x21 << 2)
label_30cb40:
    if (ctx->pc == 0x30CB40u) {
        ctx->pc = 0x30CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB3Cu;
        // 0x30cb40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB44u;
        goto label_30cb44;
    }
    ctx->pc = 0x30CB3Cu;
    {
        const bool branch_taken_0x30cb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB3Cu;
        // 0x30cb40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb3c) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CB44u;
label_30cb44:
    // 0x30cb44: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30cb48:
    // 0x30cb48: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x30cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_30cb4c:
    // 0x30cb4c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_30cb50:
    if (ctx->pc == 0x30CB50u) {
        ctx->pc = 0x30CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB4Cu;
        // 0x30cb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB54u;
        goto label_30cb54;
    }
    ctx->pc = 0x30CB4Cu;
    {
        const bool branch_taken_0x30cb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB4Cu;
        // 0x30cb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb4c) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CB54u;
label_30cb54:
    // 0x30cb54: 0xc087502  jal         func_21D408
label_30cb58:
    if (ctx->pc == 0x30CB58u) {
        ctx->pc = 0x30CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB54u;
        // 0x30cb58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB5Cu;
        goto label_30cb5c;
    }
    ctx->pc = 0x30CB54u;
    SET_GPR_U32(ctx, 31, 0x30CB5Cu);
    ctx->pc = 0x30CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB54u;
    // 0x30cb58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30CB54u, 0x30CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB5Cu;
label_30cb5c:
    // 0x30cb5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30cb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30cb60:
    // 0x30cb60: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30cb60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30cb64:
    // 0x30cb64: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30cb68:
    if (ctx->pc == 0x30CB68u) {
        ctx->pc = 0x30CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB64u;
        // 0x30cb68: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB6Cu;
        goto label_30cb6c;
    }
    ctx->pc = 0x30CB64u;
    {
        const bool branch_taken_0x30cb64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB64u;
        // 0x30cb68: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb64) {
            ctx->pc = 0x30CB78u;
            goto label_30cb78;
        }
    }
    ctx->pc = 0x30CB6Cu;
label_30cb6c:
    // 0x30cb6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30cb70:
    // 0x30cb70: 0x10000002  b           . + 4 + (0x2 << 2)
label_30cb74:
    if (ctx->pc == 0x30CB74u) {
        ctx->pc = 0x30CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB70u;
        // 0x30cb74: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB78u;
        goto label_30cb78;
    }
    ctx->pc = 0x30CB70u;
    {
        const bool branch_taken_0x30cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB70u;
        // 0x30cb74: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb70) {
            ctx->pc = 0x30CB7Cu;
            goto label_30cb7c;
        }
    }
    ctx->pc = 0x30CB78u;
label_30cb78:
    // 0x30cb78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30cb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30cb7c:
    // 0x30cb7c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_30cb80:
    if (ctx->pc == 0x30CB80u) {
        ctx->pc = 0x30CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB7Cu;
        // 0x30cb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB84u;
        goto label_30cb84;
    }
    ctx->pc = 0x30CB7Cu;
    {
        const bool branch_taken_0x30cb7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB7Cu;
        // 0x30cb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb7c) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CB84u;
label_30cb84:
    // 0x30cb84: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30cb88:
    // 0x30cb88: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30cb88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30cb8c:
    // 0x30cb8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30cb90:
    // 0x30cb90: 0x40f809  jalr        $v0
label_30cb94:
    if (ctx->pc == 0x30CB94u) {
        ctx->pc = 0x30CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB90u;
        // 0x30cb94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CB98u;
        goto label_30cb98;
    }
    ctx->pc = 0x30CB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30CB98u);
        ctx->pc = 0x30CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB90u;
        // 0x30cb94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CB90u, 0x30CB98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30CB98u;
label_30cb98:
    // 0x30cb98: 0x2403008e  addiu       $v1, $zero, 0x8E
    ctx->pc = 0x30cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_30cb9c:
    // 0x30cb9c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_30cba0:
    if (ctx->pc == 0x30CBA0u) {
        ctx->pc = 0x30CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB9Cu;
        // 0x30cba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CBA4u;
        goto label_30cba4;
    }
    ctx->pc = 0x30CB9Cu;
    {
        const bool branch_taken_0x30cb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB9Cu;
        // 0x30cba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb9c) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
    ctx->pc = 0x30CBA4u;
label_30cba4:
    // 0x30cba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30cba8:
    // 0x30cba8: 0xc0bc90e  jal         func_2F2438
label_30cbac:
    if (ctx->pc == 0x30CBACu) {
        ctx->pc = 0x30CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBA8u;
        // 0x30cbac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CBB0u;
        goto label_30cbb0;
    }
    ctx->pc = 0x30CBA8u;
    SET_GPR_U32(ctx, 31, 0x30CBB0u);
    ctx->pc = 0x30CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBA8u;
    // 0x30cbac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2438u, 0x30CBA8u, 0x30CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBB0u;
label_30cbb0:
    // 0x30cbb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_30cbb4:
    if (ctx->pc == 0x30CBB4u) {
        ctx->pc = 0x30CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBB0u;
        // 0x30cbb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CBB8u;
        goto label_fallthrough_0x30cbb0;
    }
    ctx->pc = 0x30CBB0u;
    {
        const bool branch_taken_0x30cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBB0u;
        // 0x30cbb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbb0) {
            ctx->pc = 0x30CBC4u;
            return;
        }
    }
label_fallthrough_0x30cbb0:
    ctx->pc = 0x30CBB8u;
}
