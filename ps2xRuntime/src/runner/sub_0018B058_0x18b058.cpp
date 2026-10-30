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

// Function: sub_0018B058
// Address: 0x18b058 - 0x18b168
void sub_0018B058_0x18b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B058_0x18b058");
#endif

    switch (ctx->pc) {
        case 0x18b098u: goto label_18b098;
        case 0x18b0a0u: goto label_18b0a0;
        case 0x18b0c8u: goto label_18b0c8;
        case 0x18b0d0u: goto label_18b0d0;
        case 0x18b0e8u: goto label_18b0e8;
        case 0x18b110u: goto label_18b110;
        case 0x18b138u: goto label_18b138;
        default: break;
    }

    ctx->pc = 0x18b058u;

    // 0x18b058: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18b05c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18b060: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18b060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18b064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b068: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18b06c: 0x26230c44  addiu       $v1, $s1, 0xC44
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3140));
    // 0x18b070: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18b074: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18b074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b078: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18b07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b080: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x18b080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18b084: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18b088: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B088u;
    {
        const bool branch_taken_0x18b088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B088u;
        // 0x18b08c: 0x8e320c58  lw          $s2, 0xC58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b088) {
            ctx->pc = 0x18B0B0u;
            goto label_18b0b0;
        }
    }
    ctx->pc = 0x18B090u;
    // 0x18b090: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x18b090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b094: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b098:
    // 0x18b098: 0xc0e6dae  jal         func_39B6B8
    ctx->pc = 0x18B098u;
    SET_GPR_U32(ctx, 31, 0x18B0A0u);
    ctx->pc = 0x18B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B098u;
    // 0x18b09c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B6B8u, 0x18B098u, 0x18B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0A0u;
label_18b0a0:
    // 0x18b0a0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18b0a4: 0x0  nop
    ctx->pc = 0x18b0a4u;
    // NOP
    // 0x18b0a8: 0x5602fffb  bnel        $s0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18B0A8u;
    {
        const bool branch_taken_0x18b0a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b0a8) {
            ctx->pc = 0x18B0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B0A8u;
            // 0x18b0ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b098;
        }
    }
    ctx->pc = 0x18B0B0u;
label_18b0b0:
    // 0x18b0b0: 0x26230c54  addiu       $v1, $s1, 0xC54
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3156));
    // 0x18b0b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18b0b8: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B0B8u;
    {
        const bool branch_taken_0x18b0b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0B8u;
        // 0x18b0bc: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0b8) {
            ctx->pc = 0x18B0E0u;
            goto label_18b0e0;
        }
    }
    ctx->pc = 0x18B0C0u;
    // 0x18b0c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b0c4: 0x0  nop
    ctx->pc = 0x18b0c4u;
    // NOP
label_18b0c8:
    // 0x18b0c8: 0xc0e3c24  jal         func_38F090
    ctx->pc = 0x18B0C8u;
    SET_GPR_U32(ctx, 31, 0x18B0D0u);
    ctx->pc = 0x18B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B0C8u;
    // 0x18b0cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F090u, 0x18B0C8u, 0x18B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0D0u;
label_18b0d0:
    // 0x18b0d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18b0d4: 0x0  nop
    ctx->pc = 0x18b0d4u;
    // NOP
    // 0x18b0d8: 0x5642fffb  bnel        $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18B0D8u;
    {
        const bool branch_taken_0x18b0d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b0d8) {
            ctx->pc = 0x18B0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B0D8u;
            // 0x18b0dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b0c8;
        }
    }
    ctx->pc = 0x18B0E0u;
label_18b0e0:
    // 0x18b0e0: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x18B0E0u;
    SET_GPR_U32(ctx, 31, 0x18B0E8u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x18B0E0u, 0x18B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0E8u;
label_18b0e8:
    // 0x18b0e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b0ec: 0x16820017  bne         $s4, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18B0ECu;
    {
        const bool branch_taken_0x18b0ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0ECu;
        // 0x18b0f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0ec) {
            ctx->pc = 0x18B14Cu;
            goto label_18b14c;
        }
    }
    ctx->pc = 0x18B0F4u;
    // 0x18b0f4: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18b0f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0fc: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x18b0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18b100: 0x26310c44  addiu       $s1, $s1, 0xC44
    ctx->pc = 0x18b100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3140));
    // 0x18b104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b108: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x18B108u;
    SET_GPR_U32(ctx, 31, 0x18B110u);
    ctx->pc = 0x18B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B108u;
    // 0x18b10c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x18B108u, 0x18B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B110u;
label_18b110:
    // 0x18b110: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18b114: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x18b114u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18b118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b11c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x18b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18b120: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x18b120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x18b124: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x18b124u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18b128: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x18b128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18b12c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b130: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x18B130u;
    SET_GPR_U32(ctx, 31, 0x18B138u);
    ctx->pc = 0x18B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B130u;
    // 0x18b134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x18B130u, 0x18B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B138u;
label_18b138:
    // 0x18b138: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18b13c: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18b140: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x18b140u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18b144: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x18b144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x18b148: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18b14c:
    // 0x18b14c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18b14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b150: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18b150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b154: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18b154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b158: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18b158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b160: 0x3e00008  jr          $ra
    ctx->pc = 0x18B160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B160u;
        // 0x18b164: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B168u;
}
