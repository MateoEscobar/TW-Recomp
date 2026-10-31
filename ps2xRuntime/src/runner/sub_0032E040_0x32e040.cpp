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

// Function: sub_0032E040
// Address: 0x32e040 - 0x32e150
void sub_0032E040_0x32e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E040_0x32e040");
#endif

    switch (ctx->pc) {
        case 0x32e078u: goto label_32e078;
        case 0x32e088u: goto label_32e088;
        case 0x32e094u: goto label_32e094;
        case 0x32e0a4u: goto label_32e0a4;
        case 0x32e0b4u: goto label_32e0b4;
        case 0x32e0d4u: goto label_32e0d4;
        case 0x32e0f0u: goto label_32e0f0;
        case 0x32e10cu: goto label_32e10c;
        default: break;
    }

    ctx->pc = 0x32e040u;

    // 0x32e040: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x32e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x32e044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32e044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e048: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x32e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x32e04c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x32e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32e050: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x32e050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x32e054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e058: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x32e058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x32e05c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32e060: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32e064: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x32e064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x32e068: 0x8e120028  lw          $s2, 0x28($s0)
    ctx->pc = 0x32e068u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32e06c: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x32e06cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x32e070: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32E070u;
    SET_GPR_U32(ctx, 31, 0x32E078u);
    ctx->pc = 0x32E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E070u;
    // 0x32e074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32E070u, 0x32E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E078u;
label_32e078:
    // 0x32e078: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32e078u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e080: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32E080u;
    SET_GPR_U32(ctx, 31, 0x32E088u);
    ctx->pc = 0x32E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E080u;
    // 0x32e084: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32E080u, 0x32E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E088u;
label_32e088:
    // 0x32e088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e08c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x32E08Cu;
    SET_GPR_U32(ctx, 31, 0x32E094u);
    ctx->pc = 0x32E090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E08Cu;
    // 0x32e090: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x32E08Cu, 0x32E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E094u;
label_32e094:
    // 0x32e094: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x32e094u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e09c: 0xc0cb34c  jal         func_32CD30
    ctx->pc = 0x32E09Cu;
    SET_GPR_U32(ctx, 31, 0x32E0A4u);
    ctx->pc = 0x32E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E09Cu;
    // 0x32e0a0: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD30u, 0x32E09Cu, 0x32E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0A4u;
label_32e0a4:
    // 0x32e0a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32E0A4u;
    {
        const bool branch_taken_0x32e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E0A4u;
        // 0x32e0a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e0a4) {
            ctx->pc = 0x32E0DCu;
            goto label_32e0dc;
        }
    }
    ctx->pc = 0x32E0ACu;
    // 0x32e0ac: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x32E0ACu;
    SET_GPR_U32(ctx, 31, 0x32E0B4u);
    ctx->pc = 0x32E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0ACu;
    // 0x32e0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x32E0ACu, 0x32E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0B4u;
label_32e0b4:
    // 0x32e0b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x32e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x32e0b8: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x32e0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x32e0bc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x32e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x32e0c0: 0x24c65d78  addiu       $a2, $a2, 0x5D78
    ctx->pc = 0x32e0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23928));
    // 0x32e0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0c8: 0xa22826  xor         $a1, $a1, $v0
    ctx->pc = 0x32e0c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x32e0cc: 0xc0cb344  jal         func_32CD10
    ctx->pc = 0x32E0CCu;
    SET_GPR_U32(ctx, 31, 0x32E0D4u);
    ctx->pc = 0x32E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0CCu;
    // 0x32e0d0: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD10u, 0x32E0CCu, 0x32E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0D4u;
label_32e0d4:
    // 0x32e0d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x32e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e0d8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x32e0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32e0dc:
    // 0x32e0dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x32e0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0e4: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x32e0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x32e0e8: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32E0E8u;
    SET_GPR_U32(ctx, 31, 0x32E0F0u);
    ctx->pc = 0x32E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0E8u;
    // 0x32e0ec: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32E0E8u, 0x32E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0F0u;
label_32e0f0:
    // 0x32e0f0: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x32e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x32e0f4: 0x3c0603ff  lui         $a2, 0x3FF
    ctx->pc = 0x32e0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1023 << 16));
    // 0x32e0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32e0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e100: 0x24e75d98  addiu       $a3, $a3, 0x5D98
    ctx->pc = 0x32e100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23960));
    // 0x32e104: 0xc0ca88a  jal         func_32A228
    ctx->pc = 0x32E104u;
    SET_GPR_U32(ctx, 31, 0x32E10Cu);
    ctx->pc = 0x32E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E104u;
    // 0x32e108: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A228u, 0x32E104u, 0x32E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E10Cu;
label_32e10c:
    // 0x32e10c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32e110: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x32e110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x32e114: 0x112980  sll         $a1, $s1, 6
    ctx->pc = 0x32e114u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x32e118: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x32e118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e11c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x32e120: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x32e120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e124: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x32e124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32e128: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32e128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e12c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32e130: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32e130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e134: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x32e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x32e138: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x32e138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e13c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x32e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x32e140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32e140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e144: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32e144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32e148: 0x3e00008  jr          $ra
    ctx->pc = 0x32E148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E148u;
        // 0x32e14c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E150u;
}
