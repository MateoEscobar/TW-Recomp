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

// Function: sub_0014CFE0
// Address: 0x14cfe0 - 0x14d0c8
void sub_0014CFE0_0x14cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CFE0_0x14cfe0");
#endif

    switch (ctx->pc) {
        case 0x14d008u: goto label_14d008;
        case 0x14d024u: goto label_14d024;
        case 0x14d040u: goto label_14d040;
        case 0x14d048u: goto label_14d048;
        case 0x14d05cu: goto label_14d05c;
        case 0x14d064u: goto label_14d064;
        case 0x14d07cu: goto label_14d07c;
        case 0x14d090u: goto label_14d090;
        case 0x14d0a0u: goto label_14d0a0;
        default: break;
    }

    ctx->pc = 0x14cfe0u;

    // 0x14cfe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14cfe4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14cfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14cfe8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14cfec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14cfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cff0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14cff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14cff4: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x14cff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14cff8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14cff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d000: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x14D000u;
    SET_GPR_U32(ctx, 31, 0x14D008u);
    ctx->pc = 0x14D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D000u;
    // 0x14d004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x14D000u, 0x14D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D008u;
label_14d008:
    // 0x14d008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d00c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14D00Cu;
    {
        const bool branch_taken_0x14d00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D00Cu;
        // 0x14d010: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d00c) {
            ctx->pc = 0x14D06Cu;
            goto label_14d06c;
        }
    }
    ctx->pc = 0x14D014u;
    // 0x14d014: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x14D014u;
    {
        const bool branch_taken_0x14d014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d014) {
            ctx->pc = 0x14D018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D014u;
            // 0x14d018: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D0B0u;
            goto label_14d0b0;
        }
    }
    ctx->pc = 0x14D01Cu;
    // 0x14d01c: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x14D01Cu;
    SET_GPR_U32(ctx, 31, 0x14D024u);
    ctx->pc = 0x14D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D01Cu;
    // 0x14d020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x14D01Cu, 0x14D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D024u;
label_14d024:
    // 0x14d024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d028: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D028u;
    {
        const bool branch_taken_0x14d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d028) {
            ctx->pc = 0x14D02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D028u;
            // 0x14d02c: 0x8e10003c  lw          $s0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D050u;
            goto label_14d050;
        }
    }
    ctx->pc = 0x14D030u;
    // 0x14d030: 0x8e100040  lw          $s0, 0x40($s0)
    ctx->pc = 0x14d030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x14d034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d038: 0xc0539a8  jal         func_14E6A0
    ctx->pc = 0x14D038u;
    SET_GPR_U32(ctx, 31, 0x14D040u);
    ctx->pc = 0x14D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D038u;
    // 0x14d03c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E6A0u, 0x14D038u, 0x14D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D040u;
label_14d040:
    // 0x14d040: 0xc0539a8  jal         func_14E6A0
    ctx->pc = 0x14D040u;
    SET_GPR_U32(ctx, 31, 0x14D048u);
    ctx->pc = 0x14D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D040u;
    // 0x14d044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E6A0u, 0x14D040u, 0x14D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D048u;
label_14d048:
    // 0x14d048: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14D048u;
    {
        const bool branch_taken_0x14d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D048u;
        // 0x14d04c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d048) {
            ctx->pc = 0x14D0B0u;
            goto label_14d0b0;
        }
    }
    ctx->pc = 0x14D050u;
label_14d050:
    // 0x14d050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d054: 0xc0539dc  jal         func_14E770
    ctx->pc = 0x14D054u;
    SET_GPR_U32(ctx, 31, 0x14D05Cu);
    ctx->pc = 0x14D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D054u;
    // 0x14d058: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E770u, 0x14D054u, 0x14D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D05Cu;
label_14d05c:
    // 0x14d05c: 0xc0539dc  jal         func_14E770
    ctx->pc = 0x14D05Cu;
    SET_GPR_U32(ctx, 31, 0x14D064u);
    ctx->pc = 0x14D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D05Cu;
    // 0x14d060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E770u, 0x14D05Cu, 0x14D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D064u;
label_14d064:
    // 0x14d064: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14D064u;
    {
        const bool branch_taken_0x14d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D064u;
        // 0x14d068: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d064) {
            ctx->pc = 0x14D0B0u;
            goto label_14d0b0;
        }
    }
    ctx->pc = 0x14D06Cu;
label_14d06c:
    // 0x14d06c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x14D06Cu;
    {
        const bool branch_taken_0x14d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d06c) {
            ctx->pc = 0x14D070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D06Cu;
            // 0x14d070: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D0B0u;
            goto label_14d0b0;
        }
    }
    ctx->pc = 0x14D074u;
    // 0x14d074: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x14D074u;
    SET_GPR_U32(ctx, 31, 0x14D07Cu);
    ctx->pc = 0x14D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D074u;
    // 0x14d078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x14D074u, 0x14D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D07Cu;
label_14d07c:
    // 0x14d07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d080: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D080u;
    {
        const bool branch_taken_0x14d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d080) {
            ctx->pc = 0x14D098u;
            goto label_14d098;
        }
    }
    ctx->pc = 0x14D088u;
    // 0x14d088: 0xc0539a8  jal         func_14E6A0
    ctx->pc = 0x14D088u;
    SET_GPR_U32(ctx, 31, 0x14D090u);
    ctx->pc = 0x14D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D088u;
    // 0x14d08c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E6A0u, 0x14D088u, 0x14D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D090u;
label_14d090:
    // 0x14d090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14D090u;
    {
        const bool branch_taken_0x14d090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D090u;
        // 0x14d094: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d090) {
            ctx->pc = 0x14D0B0u;
            goto label_14d0b0;
        }
    }
    ctx->pc = 0x14D098u;
label_14d098:
    // 0x14d098: 0xc0539dc  jal         func_14E770
    ctx->pc = 0x14D098u;
    SET_GPR_U32(ctx, 31, 0x14D0A0u);
    ctx->pc = 0x14D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D098u;
    // 0x14d09c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E770u, 0x14D098u, 0x14D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0A0u;
label_14d0a0:
    // 0x14d0a0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x14d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x14d0a4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14d0a8: 0xa0600854  sb          $zero, 0x854($v1)
    ctx->pc = 0x14d0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2132), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d0ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14d0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14d0b0:
    // 0x14d0b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d0b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14d0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d0b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0BCu;
        // 0x14d0c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D0C4u;
    // 0x14d0c4: 0x0  nop
    ctx->pc = 0x14d0c4u;
    // NOP
    ctx->pc = 0x14d0c8u;
}
