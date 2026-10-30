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

// Function: sub_0010FA50
// Address: 0x10fa50 - 0x10fb20
void sub_0010FA50_0x10fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA50_0x10fa50");
#endif

    switch (ctx->pc) {
        case 0x10fa50u: goto label_10fa50;
        case 0x10fa54u: goto label_10fa54;
        case 0x10fa58u: goto label_10fa58;
        case 0x10fa5cu: goto label_10fa5c;
        case 0x10fa60u: goto label_10fa60;
        case 0x10fa64u: goto label_10fa64;
        case 0x10fa68u: goto label_10fa68;
        case 0x10fa6cu: goto label_10fa6c;
        case 0x10fa70u: goto label_10fa70;
        case 0x10fa74u: goto label_10fa74;
        case 0x10fa78u: goto label_10fa78;
        case 0x10fa7cu: goto label_10fa7c;
        case 0x10fa80u: goto label_10fa80;
        case 0x10fa84u: goto label_10fa84;
        case 0x10fa88u: goto label_10fa88;
        case 0x10fa8cu: goto label_10fa8c;
        case 0x10fa90u: goto label_10fa90;
        case 0x10fa94u: goto label_10fa94;
        case 0x10fa98u: goto label_10fa98;
        case 0x10fa9cu: goto label_10fa9c;
        case 0x10faa0u: goto label_10faa0;
        case 0x10faa4u: goto label_10faa4;
        case 0x10faa8u: goto label_10faa8;
        case 0x10faacu: goto label_10faac;
        case 0x10fab0u: goto label_10fab0;
        case 0x10fab4u: goto label_10fab4;
        case 0x10fab8u: goto label_10fab8;
        case 0x10fabcu: goto label_10fabc;
        case 0x10fac0u: goto label_10fac0;
        case 0x10fac4u: goto label_10fac4;
        case 0x10fac8u: goto label_10fac8;
        case 0x10faccu: goto label_10facc;
        case 0x10fad0u: goto label_10fad0;
        case 0x10fad4u: goto label_10fad4;
        case 0x10fad8u: goto label_10fad8;
        case 0x10fadcu: goto label_10fadc;
        case 0x10fae0u: goto label_10fae0;
        case 0x10fae4u: goto label_10fae4;
        case 0x10fae8u: goto label_10fae8;
        case 0x10faecu: goto label_10faec;
        case 0x10faf0u: goto label_10faf0;
        case 0x10faf4u: goto label_10faf4;
        case 0x10faf8u: goto label_10faf8;
        case 0x10fafcu: goto label_10fafc;
        case 0x10fb00u: goto label_10fb00;
        case 0x10fb04u: goto label_10fb04;
        case 0x10fb08u: goto label_10fb08;
        case 0x10fb0cu: goto label_10fb0c;
        case 0x10fb10u: goto label_10fb10;
        case 0x10fb14u: goto label_10fb14;
        case 0x10fb18u: goto label_10fb18;
        case 0x10fb1cu: goto label_10fb1c;
        default: break;
    }

    ctx->pc = 0x10fa50u;

label_10fa50:
    // 0x10fa50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10fa54:
    // 0x10fa54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10fa58:
    // 0x10fa58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_10fa5c:
    // 0x10fa5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_10fa60:
    // 0x10fa60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10fa64:
    // 0x10fa64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10fa64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10fa68:
    // 0x10fa68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_10fa6c:
    // 0x10fa6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10fa6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10fa70:
    // 0x10fa70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10fa74:
    // 0x10fa74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10fa74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10fa78:
    // 0x10fa78: 0x8c47b8b8  lw          $a3, -0x4748($v0)
    ctx->pc = 0x10fa78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_10fa7c:
    // 0x10fa7c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_10fa80:
    // 0x10fa80: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x10fa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_10fa84:
    // 0x10fa84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x10fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_10fa88:
    // 0x10fa88: 0x40f809  jalr        $v0
label_10fa8c:
    if (ctx->pc == 0x10FA8Cu) {
        ctx->pc = 0x10FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA88u;
        // 0x10fa8c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA90u;
        goto label_10fa90;
    }
    ctx->pc = 0x10FA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10FA90u);
        ctx->pc = 0x10FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA88u;
        // 0x10fa8c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA88u, 0x10FA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FA90u;
label_10fa90:
    // 0x10fa90: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x10fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_10fa94:
    // 0x10fa94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fa98:
    // 0x10fa98: 0x3463fa38  ori         $v1, $v1, 0xFA38
    ctx->pc = 0x10fa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64056);
label_10fa9c:
    // 0x10fa9c: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x10fa9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_10faa0:
    // 0x10faa0: 0xc10c313  jal         func_430C4C
label_10faa4:
    if (ctx->pc == 0x10FAA4u) {
        ctx->pc = 0x10FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAA0u;
        // 0x10faa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAA8u;
        goto label_10faa8;
    }
    ctx->pc = 0x10FAA0u;
    SET_GPR_U32(ctx, 31, 0x10FAA8u);
    ctx->pc = 0x10FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAA0u;
    // 0x10faa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x10FAA0u, 0x10FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FAA8u;
label_10faa8:
    // 0x10faa8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_10faac:
    if (ctx->pc == 0x10FAACu) {
        ctx->pc = 0x10FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAA8u;
        // 0x10faac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAB0u;
        goto label_10fab0;
    }
    ctx->pc = 0x10FAA8u;
    {
        const bool branch_taken_0x10faa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAA8u;
        // 0x10faac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faa8) {
            ctx->pc = 0x10FB00u;
            goto label_10fb00;
        }
    }
    ctx->pc = 0x10FAB0u;
label_10fab0:
    // 0x10fab0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10fab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10fab4:
    // 0x10fab4: 0x8c47bce4  lw          $a3, -0x431C($v0)
    ctx->pc = 0x10fab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_10fab8:
    // 0x10fab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10fab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fabc:
    // 0x10fabc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_10fac0:
    // 0x10fac0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x10fac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_10fac4:
    // 0x10fac4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x10fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_10fac8:
    // 0x10fac8: 0x60f809  jalr        $v1
label_10facc:
    if (ctx->pc == 0x10FACCu) {
        ctx->pc = 0x10FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC8u;
        // 0x10facc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAD0u;
        goto label_10fad0;
    }
    ctx->pc = 0x10FAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10FAD0u);
        ctx->pc = 0x10FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC8u;
        // 0x10facc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FAC8u, 0x10FAD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FAD0u;
label_10fad0:
    // 0x10fad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10fad4:
    // 0x10fad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fad8:
    // 0x10fad8: 0xc10c1fa  jal         func_4307E8
label_10fadc:
    if (ctx->pc == 0x10FADCu) {
        ctx->pc = 0x10FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD8u;
        // 0x10fadc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAE0u;
        goto label_10fae0;
    }
    ctx->pc = 0x10FAD8u;
    SET_GPR_U32(ctx, 31, 0x10FAE0u);
    ctx->pc = 0x10FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAD8u;
    // 0x10fadc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x10FAD8u, 0x10FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FAE0u;
label_10fae0:
    // 0x10fae0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x10fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_10fae4:
    // 0x10fae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10fae8:
    // 0x10fae8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x10fae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_10faec:
    // 0x10faec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10faecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10faf0:
    // 0x10faf0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x10faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_10faf4:
    // 0x10faf4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x10faf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_10faf8:
    // 0x10faf8: 0xc10c4de  jal         func_431378
label_10fafc:
    if (ctx->pc == 0x10FAFCu) {
        ctx->pc = 0x10FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF8u;
        // 0x10fafc: 0xa0607a47  sb          $zero, 0x7A47($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 31303), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB00u;
        goto label_10fb00;
    }
    ctx->pc = 0x10FAF8u;
    SET_GPR_U32(ctx, 31, 0x10FB00u);
    ctx->pc = 0x10FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAF8u;
    // 0x10fafc: 0xa0607a47  sb          $zero, 0x7A47($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 31303), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x10FAF8u, 0x10FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB00u;
label_10fb00:
    // 0x10fb00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10fb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10fb04:
    // 0x10fb04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10fb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10fb08:
    // 0x10fb08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fb08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10fb0c:
    // 0x10fb0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10fb0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10fb10:
    // 0x10fb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fb14:
    // 0x10fb14: 0x3e00008  jr          $ra
label_10fb18:
    if (ctx->pc == 0x10FB18u) {
        ctx->pc = 0x10FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB14u;
        // 0x10fb18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB1Cu;
        goto label_10fb1c;
    }
    ctx->pc = 0x10FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB14u;
        // 0x10fb18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FB1Cu;
label_10fb1c:
    // 0x10fb1c: 0x0  nop
    ctx->pc = 0x10fb1cu;
    // NOP
    ctx->pc = 0x10fb20u;
}
