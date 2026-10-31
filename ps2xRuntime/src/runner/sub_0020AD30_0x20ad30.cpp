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

// Function: sub_0020AD30
// Address: 0x20ad30 - 0x20adc8
void sub_0020AD30_0x20ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AD30_0x20ad30");
#endif

    switch (ctx->pc) {
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad34u: goto label_20ad34;
        case 0x20ad38u: goto label_20ad38;
        case 0x20ad3cu: goto label_20ad3c;
        case 0x20ad40u: goto label_20ad40;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad48u: goto label_20ad48;
        case 0x20ad4cu: goto label_20ad4c;
        case 0x20ad50u: goto label_20ad50;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad60u: goto label_20ad60;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad68u: goto label_20ad68;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad70u: goto label_20ad70;
        case 0x20ad74u: goto label_20ad74;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad7cu: goto label_20ad7c;
        case 0x20ad80u: goto label_20ad80;
        case 0x20ad84u: goto label_20ad84;
        case 0x20ad88u: goto label_20ad88;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ad90u: goto label_20ad90;
        case 0x20ad94u: goto label_20ad94;
        case 0x20ad98u: goto label_20ad98;
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada4u: goto label_20ada4;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adacu: goto label_20adac;
        case 0x20adb0u: goto label_20adb0;
        case 0x20adb4u: goto label_20adb4;
        case 0x20adb8u: goto label_20adb8;
        case 0x20adbcu: goto label_20adbc;
        case 0x20adc0u: goto label_20adc0;
        case 0x20adc4u: goto label_20adc4;
        default: break;
    }

    ctx->pc = 0x20ad30u;

label_20ad30:
    // 0x20ad30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20ad34:
    // 0x20ad34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20ad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20ad38:
    // 0x20ad38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ad3c:
    // 0x20ad3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ad3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ad40:
    // 0x20ad40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ad44:
    // 0x20ad44: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20ad48:
    // 0x20ad48: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20ad4c:
    if (ctx->pc == 0x20AD4Cu) {
        ctx->pc = 0x20AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD48u;
        // 0x20ad4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD50u;
        goto label_20ad50;
    }
    ctx->pc = 0x20AD48u;
    {
        const bool branch_taken_0x20ad48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD48u;
        // 0x20ad4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad48) {
            ctx->pc = 0x20ADACu;
            goto label_20adac;
        }
    }
    ctx->pc = 0x20AD50u;
label_20ad50:
    // 0x20ad50: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20ad54:
    // 0x20ad54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ad58:
    // 0x20ad58: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20ad58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20ad5c:
    // 0x20ad5c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20ad60:
    // 0x20ad60: 0x40f809  jalr        $v0
label_20ad64:
    if (ctx->pc == 0x20AD64u) {
        ctx->pc = 0x20AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD60u;
        // 0x20ad64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD68u;
        goto label_20ad68;
    }
    ctx->pc = 0x20AD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AD68u);
        ctx->pc = 0x20AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD60u;
        // 0x20ad64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD60u, 0x20AD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AD68u;
label_20ad68:
    // 0x20ad68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_20ad6c:
    if (ctx->pc == 0x20AD6Cu) {
        ctx->pc = 0x20AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD68u;
        // 0x20ad6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD70u;
        goto label_20ad70;
    }
    ctx->pc = 0x20AD68u;
    {
        const bool branch_taken_0x20ad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD68u;
        // 0x20ad6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad68) {
            ctx->pc = 0x20ADB0u;
            goto label_20adb0;
        }
    }
    ctx->pc = 0x20AD70u;
label_20ad70:
    // 0x20ad70: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20ad74:
    // 0x20ad74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ad78:
    // 0x20ad78: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20ad78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20ad7c:
    // 0x20ad7c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20ad80:
    // 0x20ad80: 0x40f809  jalr        $v0
label_20ad84:
    if (ctx->pc == 0x20AD84u) {
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD88u;
        goto label_20ad88;
    }
    ctx->pc = 0x20AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AD88u);
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD80u, 0x20AD88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AD88u;
label_20ad88:
    // 0x20ad88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20ad8c:
    if (ctx->pc == 0x20AD8Cu) {
        ctx->pc = 0x20AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD88u;
        // 0x20ad8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD90u;
        goto label_20ad90;
    }
    ctx->pc = 0x20AD88u;
    {
        const bool branch_taken_0x20ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD88u;
        // 0x20ad8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad88) {
            ctx->pc = 0x20ADB0u;
            goto label_20adb0;
        }
    }
    ctx->pc = 0x20AD90u;
label_20ad90:
    // 0x20ad90: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x20ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20ad94:
    // 0x20ad94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ad98:
    // 0x20ad98: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20ad98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20ad9c:
    // 0x20ad9c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20ada0:
    // 0x20ada0: 0x40f809  jalr        $v0
label_20ada4:
    if (ctx->pc == 0x20ADA4u) {
        ctx->pc = 0x20ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADA0u;
        // 0x20ada4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADA8u;
        goto label_20ada8;
    }
    ctx->pc = 0x20ADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20ADA8u);
        ctx->pc = 0x20ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADA0u;
        // 0x20ada4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADA0u, 0x20ADA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ADA8u;
label_20ada8:
    // 0x20ada8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x20ada8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20adac:
    // 0x20adac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20adacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20adb0:
    // 0x20adb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20adb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20adb4:
    // 0x20adb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20adb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20adb8:
    // 0x20adb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20adbc:
    // 0x20adbc: 0x3e00008  jr          $ra
label_20adc0:
    if (ctx->pc == 0x20ADC0u) {
        ctx->pc = 0x20ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADBCu;
        // 0x20adc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADC4u;
        goto label_20adc4;
    }
    ctx->pc = 0x20ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADBCu;
        // 0x20adc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ADC4u;
label_20adc4:
    // 0x20adc4: 0x0  nop
    ctx->pc = 0x20adc4u;
    // NOP
    ctx->pc = 0x20adc8u;
}
