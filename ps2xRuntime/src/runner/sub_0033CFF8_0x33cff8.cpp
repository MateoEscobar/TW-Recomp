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

// Function: sub_0033CFF8
// Address: 0x33cff8 - 0x33d070
void sub_0033CFF8_0x33cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CFF8_0x33cff8");
#endif

    switch (ctx->pc) {
        case 0x33cff8u: goto label_33cff8;
        case 0x33cffcu: goto label_33cffc;
        case 0x33d000u: goto label_33d000;
        case 0x33d004u: goto label_33d004;
        case 0x33d008u: goto label_33d008;
        case 0x33d00cu: goto label_33d00c;
        case 0x33d010u: goto label_33d010;
        case 0x33d014u: goto label_33d014;
        case 0x33d018u: goto label_33d018;
        case 0x33d01cu: goto label_33d01c;
        case 0x33d020u: goto label_33d020;
        case 0x33d024u: goto label_33d024;
        case 0x33d028u: goto label_33d028;
        case 0x33d02cu: goto label_33d02c;
        case 0x33d030u: goto label_33d030;
        case 0x33d034u: goto label_33d034;
        case 0x33d038u: goto label_33d038;
        case 0x33d03cu: goto label_33d03c;
        case 0x33d040u: goto label_33d040;
        case 0x33d044u: goto label_33d044;
        case 0x33d048u: goto label_33d048;
        case 0x33d04cu: goto label_33d04c;
        case 0x33d050u: goto label_33d050;
        case 0x33d054u: goto label_33d054;
        case 0x33d058u: goto label_33d058;
        case 0x33d05cu: goto label_33d05c;
        case 0x33d060u: goto label_33d060;
        case 0x33d064u: goto label_33d064;
        case 0x33d068u: goto label_33d068;
        case 0x33d06cu: goto label_33d06c;
        default: break;
    }

    ctx->pc = 0x33cff8u;

label_33cff8:
    // 0x33cff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33cff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33cffc:
    // 0x33cffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_33d000:
    // 0x33d000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33d004:
    // 0x33d004: 0xc0d01c0  jal         func_340700
label_33d008:
    if (ctx->pc == 0x33D008u) {
        ctx->pc = 0x33D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D004u;
        // 0x33d008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D00Cu;
        goto label_33d00c;
    }
    ctx->pc = 0x33D004u;
    SET_GPR_U32(ctx, 31, 0x33D00Cu);
    ctx->pc = 0x33D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D004u;
    // 0x33d008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x33D004u, 0x33D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D00Cu;
label_33d00c:
    // 0x33d00c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x33d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33d010:
    // 0x33d010: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_33d014:
    if (ctx->pc == 0x33D014u) {
        ctx->pc = 0x33D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D010u;
        // 0x33d014: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D018u;
        goto label_33d018;
    }
    ctx->pc = 0x33D010u;
    {
        const bool branch_taken_0x33d010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d010) {
            ctx->pc = 0x33D014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D010u;
            // 0x33d014: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D040u;
            goto label_33d040;
        }
    }
    ctx->pc = 0x33D018u;
label_33d018:
    // 0x33d018: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x33d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33d01c:
    // 0x33d01c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33d020:
    // 0x33d020: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33d020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_33d024:
    // 0x33d024: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x33d024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_33d028:
    // 0x33d028: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x33d028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_33d02c:
    // 0x33d02c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x33d02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_33d030:
    // 0x33d030: 0xa4620032  sh          $v0, 0x32($v1)
    ctx->pc = 0x33d030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 2));
label_33d034:
    // 0x33d034: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_33d038:
    if (ctx->pc == 0x33D038u) {
        ctx->pc = 0x33D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D034u;
        // 0x33d038: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D03Cu;
        goto label_33d03c;
    }
    ctx->pc = 0x33D034u;
    {
        const bool branch_taken_0x33d034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D034u;
        // 0x33d038: 0xae040030  sw          $a0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d034) {
            ctx->pc = 0x33D018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d018;
        }
    }
    ctx->pc = 0x33D03Cu;
label_33d03c:
    // 0x33d03c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x33d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_33d040:
    // 0x33d040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33d040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d044:
    // 0x33d044: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x33d044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_33d048:
    // 0x33d048: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x33d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_33d04c:
    // 0x33d04c: 0x60f809  jalr        $v1
label_33d050:
    if (ctx->pc == 0x33D050u) {
        ctx->pc = 0x33D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D04Cu;
        // 0x33d050: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D054u;
        goto label_33d054;
    }
    ctx->pc = 0x33D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D054u);
        ctx->pc = 0x33D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D04Cu;
        // 0x33d050: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D04Cu, 0x33D054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D054u;
label_33d054:
    // 0x33d054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d058:
    // 0x33d058: 0xc0d069a  jal         func_341A68
label_33d05c:
    if (ctx->pc == 0x33D05Cu) {
        ctx->pc = 0x33D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D058u;
        // 0x33d05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D060u;
        goto label_33d060;
    }
    ctx->pc = 0x33D058u;
    SET_GPR_U32(ctx, 31, 0x33D060u);
    ctx->pc = 0x33D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D058u;
    // 0x33d05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33D058u, 0x33D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D060u;
label_33d060:
    // 0x33d060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33d060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33d064:
    // 0x33d064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d068:
    // 0x33d068: 0x3e00008  jr          $ra
label_33d06c:
    if (ctx->pc == 0x33D06Cu) {
        ctx->pc = 0x33D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D068u;
        // 0x33d06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D070u;
        goto label_fallthrough_0x33d068;
    }
    ctx->pc = 0x33D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D068u;
        // 0x33d06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d068:
    ctx->pc = 0x33D070u;
}
