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

// Function: sub_0010FF68
// Address: 0x10ff68 - 0x110000
void sub_0010FF68_0x10ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FF68_0x10ff68");
#endif

    switch (ctx->pc) {
        case 0x10ff98u: goto label_10ff98;
        case 0x10ffa8u: goto label_10ffa8;
        case 0x10ffb8u: goto label_10ffb8;
        case 0x10ffd0u: goto label_10ffd0;
        case 0x10ffecu: goto label_10ffec;
        default: break;
    }

    ctx->pc = 0x10ff68u;

    // 0x10ff68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ff6c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x10ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x10ff70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10ff74: 0x34424268  ori         $v0, $v0, 0x4268
    ctx->pc = 0x10ff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17000);
    // 0x10ff78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10ff7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ff7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10ff84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10ff84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10ff8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ff90: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10FF90u;
    SET_GPR_U32(ctx, 31, 0x10FF98u);
    ctx->pc = 0x10FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF90u;
    // 0x10ff94: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10FF90u, 0x10FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF98u;
label_10ff98:
    // 0x10ff98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FF98u;
    {
        const bool branch_taken_0x10ff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF98u;
        // 0x10ff9c: 0x26320064  addiu       $s2, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff98) {
            ctx->pc = 0x10FFACu;
            goto label_10ffac;
        }
    }
    ctx->pc = 0x10FFA0u;
    // 0x10ffa0: 0xc04401e  jal         func_110078
    ctx->pc = 0x10FFA0u;
    SET_GPR_U32(ctx, 31, 0x10FFA8u);
    ctx->pc = 0x10FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFA0u;
    // 0x10ffa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110078u, 0x10FFA0u, 0x10FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA8u;
label_10ffa8:
    // 0x10ffa8: 0x26320064  addiu       $s2, $s1, 0x64
    ctx->pc = 0x10ffa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_10ffac:
    // 0x10ffac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ffb0: 0xc046d14  jal         func_11B450
    ctx->pc = 0x10FFB0u;
    SET_GPR_U32(ctx, 31, 0x10FFB8u);
    ctx->pc = 0x10FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFB0u;
    // 0x10ffb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B450u, 0x10FFB0u, 0x10FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFB8u;
label_10ffb8:
    // 0x10ffb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ffbc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FFBCu;
    {
        const bool branch_taken_0x10ffbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFBCu;
        // 0x10ffc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffbc) {
            ctx->pc = 0x10FFD8u;
            goto label_10ffd8;
        }
    }
    ctx->pc = 0x10FFC4u;
    // 0x10ffc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ffc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffc8: 0xc044b58  jal         func_112D60
    ctx->pc = 0x10FFC8u;
    SET_GPR_U32(ctx, 31, 0x10FFD0u);
    ctx->pc = 0x10FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFC8u;
    // 0x10ffcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D60u, 0x10FFC8u, 0x10FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFD0u;
label_10ffd0:
    // 0x10ffd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FFD0u;
    {
        const bool branch_taken_0x10ffd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFD0u;
        // 0x10ffd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffd0) {
            ctx->pc = 0x10FFF4u;
            goto label_10fff4;
        }
    }
    ctx->pc = 0x10FFD8u;
label_10ffd8:
    // 0x10ffd8: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x10ffd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
    // 0x10ffdc: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x10ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x10ffe0: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x10ffe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10ffe4: 0xc04403a  jal         func_1100E8
    ctx->pc = 0x10FFE4u;
    SET_GPR_U32(ctx, 31, 0x10FFECu);
    ctx->pc = 0x10FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFE4u;
    // 0x10ffe8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100E8u, 0x10FFE4u, 0x10FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFECu;
label_10ffec:
    // 0x10ffec: 0xae024268  sw          $v0, 0x4268($s0)
    ctx->pc = 0x10ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17000), GPR_U32(ctx, 2));
    // 0x10fff0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_10fff4:
    // 0x10fff4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10fff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fff8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10fff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x110000u;
}
