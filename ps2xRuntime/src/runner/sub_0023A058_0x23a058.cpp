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

// Function: sub_0023A058
// Address: 0x23a058 - 0x23a1b0
void sub_0023A058_0x23a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A058_0x23a058");
#endif

    switch (ctx->pc) {
        case 0x23a088u: goto label_23a088;
        case 0x23a090u: goto label_23a090;
        case 0x23a0a8u: goto label_23a0a8;
        case 0x23a0c0u: goto label_23a0c0;
        case 0x23a0d0u: goto label_23a0d0;
        case 0x23a0dcu: goto label_23a0dc;
        case 0x23a0e4u: goto label_23a0e4;
        case 0x23a100u: goto label_23a100;
        case 0x23a114u: goto label_23a114;
        case 0x23a134u: goto label_23a134;
        case 0x23a138u: goto label_23a138;
        case 0x23a144u: goto label_23a144;
        case 0x23a14cu: goto label_23a14c;
        case 0x23a174u: goto label_23a174;
        default: break;
    }

    ctx->pc = 0x23a058u;

    // 0x23a058: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23a05c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x23a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x23a060: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x23a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x23a064: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x23a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x23a068: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x23a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x23a06c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x23a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x23a070: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x23a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x23a074: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x23a074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x23a078: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23a07c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23a080: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A080u;
    SET_GPR_U32(ctx, 31, 0x23A088u);
    ctx->pc = 0x23A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A080u;
    // 0x23a084: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A080u, 0x23A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A088u;
label_23a088:
    // 0x23a088: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A088u;
    SET_GPR_U32(ctx, 31, 0x23A090u);
    ctx->pc = 0x23A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A088u;
    // 0x23a08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A088u, 0x23A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A090u;
label_23a090:
    // 0x23a090: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23a090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a094: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
    ctx->pc = 0x23A094u;
    {
        const bool branch_taken_0x23a094 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A094u;
        // 0x23a098: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a094) {
            ctx->pc = 0x23A188u;
            goto label_23a188;
        }
    }
    ctx->pc = 0x23A09Cu;
    // 0x23a09c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0a0: 0xc08750a  jal         func_21D428
    ctx->pc = 0x23A0A0u;
    SET_GPR_U32(ctx, 31, 0x23A0A8u);
    ctx->pc = 0x23A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0A0u;
    // 0x23a0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x23A0A0u, 0x23A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0A8u;
label_23a0a8:
    // 0x23a0a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23a0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0ac: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x23A0ACu;
    {
        const bool branch_taken_0x23a0ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0ACu;
        // 0x23a0b0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0ac) {
            ctx->pc = 0x23A188u;
            goto label_23a188;
        }
    }
    ctx->pc = 0x23A0B4u;
    // 0x23a0b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0b8: 0xc087502  jal         func_21D408
    ctx->pc = 0x23A0B8u;
    SET_GPR_U32(ctx, 31, 0x23A0C0u);
    ctx->pc = 0x23A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0B8u;
    // 0x23a0bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23A0B8u, 0x23A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0C0u;
label_23a0c0:
    // 0x23a0c0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x23a0c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0c4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x23a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x23a0c8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x23a0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0cc: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x23a0ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_23a0d0:
    // 0x23a0d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0d4: 0xc137826  jal         func_4DE098
    ctx->pc = 0x23A0D4u;
    SET_GPR_U32(ctx, 31, 0x23A0DCu);
    ctx->pc = 0x23A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0D4u;
    // 0x23a0d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x23A0D4u, 0x23A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0DCu;
label_23a0dc:
    // 0x23a0dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23A0DCu;
    SET_GPR_U32(ctx, 31, 0x23A0E4u);
    ctx->pc = 0x23A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0DCu;
    // 0x23a0e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23A0DCu, 0x23A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0E4u;
label_23a0e4:
    // 0x23a0e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0e8: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23A0E8u;
    {
        const bool branch_taken_0x23a0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a0e8) {
            ctx->pc = 0x23A0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0E8u;
            // 0x23a0ec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A11Cu;
            goto label_23a11c;
        }
    }
    ctx->pc = 0x23A0F0u;
    // 0x23a0f0: 0x12140009  beq         $s0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A0F0u;
    {
        const bool branch_taken_0x23a0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x23A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0F0u;
        // 0x23a0f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0f0) {
            ctx->pc = 0x23A118u;
            goto label_23a118;
        }
    }
    ctx->pc = 0x23A0F8u;
    // 0x23a0f8: 0xc0a5832  jal         func_2960C8
    ctx->pc = 0x23A0F8u;
    SET_GPR_U32(ctx, 31, 0x23A100u);
    ctx->pc = 0x23A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0F8u;
    // 0x23a0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960C8u, 0x23A0F8u, 0x23A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A100u;
label_23a100:
    // 0x23a100: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A100u;
    {
        const bool branch_taken_0x23a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a100) {
            ctx->pc = 0x23A104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A100u;
            // 0x23a104: 0xae360000  sw          $s6, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A118u;
            goto label_23a118;
        }
    }
    ctx->pc = 0x23A108u;
    // 0x23a108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23a108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a10c: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x23A10Cu;
    SET_GPR_U32(ctx, 31, 0x23A114u);
    ctx->pc = 0x23A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A10Cu;
    // 0x23a110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x23A10Cu, 0x23A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A114u;
label_23a114:
    // 0x23a114: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23a114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_23a118:
    // 0x23a118: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23a118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23a11c:
    // 0x23a11c: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x23a11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a120: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23A120u;
    {
        const bool branch_taken_0x23a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A120u;
        // 0x23a124: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a120) {
            ctx->pc = 0x23A0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a0d0;
        }
    }
    ctx->pc = 0x23A128u;
    // 0x23a128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a12c: 0xc0a5742  jal         func_295D08
    ctx->pc = 0x23A12Cu;
    SET_GPR_U32(ctx, 31, 0x23A134u);
    ctx->pc = 0x23A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A12Cu;
    // 0x23a130: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D08u, 0x23A12Cu, 0x23A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A134u;
label_23a134:
    // 0x23a134: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x23a134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23a138:
    // 0x23a138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a13c: 0xc137826  jal         func_4DE098
    ctx->pc = 0x23A13Cu;
    SET_GPR_U32(ctx, 31, 0x23A144u);
    ctx->pc = 0x23A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A13Cu;
    // 0x23a140: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x23A13Cu, 0x23A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A144u;
label_23a144:
    // 0x23a144: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23A144u;
    SET_GPR_U32(ctx, 31, 0x23A14Cu);
    ctx->pc = 0x23A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A144u;
    // 0x23a148: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23A144u, 0x23A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A14Cu;
label_23a14c:
    // 0x23a14c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23a14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a150: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A150u;
    {
        const bool branch_taken_0x23a150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a150) {
            ctx->pc = 0x23A154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A150u;
            // 0x23a154: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A178u;
            goto label_23a178;
        }
    }
    ctx->pc = 0x23A158u;
    // 0x23a158: 0x50b40007  beql        $a1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A158u;
    {
        const bool branch_taken_0x23a158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x23a158) {
            ctx->pc = 0x23A15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A158u;
            // 0x23a15c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A178u;
            goto label_23a178;
        }
    }
    ctx->pc = 0x23A160u;
    // 0x23a160: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a164: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A164u;
    {
        const bool branch_taken_0x23a164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a164) {
            ctx->pc = 0x23A168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A164u;
            // 0x23a168: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A178u;
            goto label_23a178;
        }
    }
    ctx->pc = 0x23A16Cu;
    // 0x23a16c: 0xc0a580a  jal         func_296028
    ctx->pc = 0x23A16Cu;
    SET_GPR_U32(ctx, 31, 0x23A174u);
    ctx->pc = 0x23A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A16Cu;
    // 0x23a170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x23A16Cu, 0x23A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A174u;
label_23a174:
    // 0x23a174: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23a174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23a178:
    // 0x23a178: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x23a178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a17c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23A17Cu;
    {
        const bool branch_taken_0x23a17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A17Cu;
        // 0x23a180: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a17c) {
            ctx->pc = 0x23A138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a138;
        }
    }
    ctx->pc = 0x23A184u;
    // 0x23a184: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x23a184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_23a188:
    // 0x23a188: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x23a188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23a18c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x23a18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23a190: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x23a190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23a194: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x23a194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23a198: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x23a198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23a19c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23a19cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23a1a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23a1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23a1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1A4u;
        // 0x23a1a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A1ACu;
    // 0x23a1ac: 0x0  nop
    ctx->pc = 0x23a1acu;
    // NOP
    ctx->pc = 0x23a1b0u;
}
