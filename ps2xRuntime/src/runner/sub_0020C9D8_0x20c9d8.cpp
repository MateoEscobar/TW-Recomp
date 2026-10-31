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

// Function: sub_0020C9D8
// Address: 0x20c9d8 - 0x20cab8
void sub_0020C9D8_0x20c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C9D8_0x20c9d8");
#endif

    switch (ctx->pc) {
        case 0x20c9d8u: goto label_20c9d8;
        case 0x20c9dcu: goto label_20c9dc;
        case 0x20c9e0u: goto label_20c9e0;
        case 0x20c9e4u: goto label_20c9e4;
        case 0x20c9e8u: goto label_20c9e8;
        case 0x20c9ecu: goto label_20c9ec;
        case 0x20c9f0u: goto label_20c9f0;
        case 0x20c9f4u: goto label_20c9f4;
        case 0x20c9f8u: goto label_20c9f8;
        case 0x20c9fcu: goto label_20c9fc;
        case 0x20ca00u: goto label_20ca00;
        case 0x20ca04u: goto label_20ca04;
        case 0x20ca08u: goto label_20ca08;
        case 0x20ca0cu: goto label_20ca0c;
        case 0x20ca10u: goto label_20ca10;
        case 0x20ca14u: goto label_20ca14;
        case 0x20ca18u: goto label_20ca18;
        case 0x20ca1cu: goto label_20ca1c;
        case 0x20ca20u: goto label_20ca20;
        case 0x20ca24u: goto label_20ca24;
        case 0x20ca28u: goto label_20ca28;
        case 0x20ca2cu: goto label_20ca2c;
        case 0x20ca30u: goto label_20ca30;
        case 0x20ca34u: goto label_20ca34;
        case 0x20ca38u: goto label_20ca38;
        case 0x20ca3cu: goto label_20ca3c;
        case 0x20ca40u: goto label_20ca40;
        case 0x20ca44u: goto label_20ca44;
        case 0x20ca48u: goto label_20ca48;
        case 0x20ca4cu: goto label_20ca4c;
        case 0x20ca50u: goto label_20ca50;
        case 0x20ca54u: goto label_20ca54;
        case 0x20ca58u: goto label_20ca58;
        case 0x20ca5cu: goto label_20ca5c;
        case 0x20ca60u: goto label_20ca60;
        case 0x20ca64u: goto label_20ca64;
        case 0x20ca68u: goto label_20ca68;
        case 0x20ca6cu: goto label_20ca6c;
        case 0x20ca70u: goto label_20ca70;
        case 0x20ca74u: goto label_20ca74;
        case 0x20ca78u: goto label_20ca78;
        case 0x20ca7cu: goto label_20ca7c;
        case 0x20ca80u: goto label_20ca80;
        case 0x20ca84u: goto label_20ca84;
        case 0x20ca88u: goto label_20ca88;
        case 0x20ca8cu: goto label_20ca8c;
        case 0x20ca90u: goto label_20ca90;
        case 0x20ca94u: goto label_20ca94;
        case 0x20ca98u: goto label_20ca98;
        case 0x20ca9cu: goto label_20ca9c;
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa4u: goto label_20caa4;
        case 0x20caa8u: goto label_20caa8;
        case 0x20caacu: goto label_20caac;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cab4u: goto label_20cab4;
        default: break;
    }

    ctx->pc = 0x20c9d8u;

label_20c9d8:
    // 0x20c9d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20c9dc:
    // 0x20c9dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20c9e0:
    // 0x20c9e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20c9e4:
    // 0x20c9e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20c9e8:
    // 0x20c9e8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20c9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20c9ec:
    // 0x20c9ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c9f0:
    // 0x20c9f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20c9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20c9f4:
    // 0x20c9f4: 0x2442e7a0  addiu       $v0, $v0, -0x1860
    ctx->pc = 0x20c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
label_20c9f8:
    // 0x20c9f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20c9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20c9fc:
    // 0x20c9fc: 0x2463e7c8  addiu       $v1, $v1, -0x1838
    ctx->pc = 0x20c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961096));
label_20ca00:
    // 0x20ca00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ca04:
    // 0x20ca04: 0x24c6e7f8  addiu       $a2, $a2, -0x1808
    ctx->pc = 0x20ca04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961144));
label_20ca08:
    // 0x20ca08: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x20ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20ca0c:
    // 0x20ca0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20ca0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ca10:
    // 0x20ca10: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x20ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20ca14:
    // 0x20ca14: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_20ca18:
    // 0x20ca18: 0xc083382  jal         func_20CE08
label_20ca1c:
    if (ctx->pc == 0x20CA1Cu) {
        ctx->pc = 0x20CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA18u;
        // 0x20ca1c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA20u;
        goto label_20ca20;
    }
    ctx->pc = 0x20CA18u;
    SET_GPR_U32(ctx, 31, 0x20CA20u);
    ctx->pc = 0x20CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA18u;
    // 0x20ca1c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CE08u, 0x20CA18u, 0x20CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA20u;
label_20ca20:
    // 0x20ca20: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20ca24:
    // 0x20ca24: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_20ca28:
    // 0x20ca28: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x20ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_20ca2c:
    // 0x20ca2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20ca30:
    // 0x20ca30: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20ca34:
    if (ctx->pc == 0x20CA34u) {
        ctx->pc = 0x20CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA30u;
        // 0x20ca34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA38u;
        goto label_20ca38;
    }
    ctx->pc = 0x20CA30u;
    {
        const bool branch_taken_0x20ca30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA30u;
        // 0x20ca34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca30) {
            ctx->pc = 0x20CA60u;
            goto label_20ca60;
        }
    }
    ctx->pc = 0x20CA38u;
label_20ca38:
    // 0x20ca38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ca3c:
    // 0x20ca3c: 0xc1376d6  jal         func_4DDB58
label_20ca40:
    if (ctx->pc == 0x20CA40u) {
        ctx->pc = 0x20CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA3Cu;
        // 0x20ca40: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA44u;
        goto label_20ca44;
    }
    ctx->pc = 0x20CA3Cu;
    SET_GPR_U32(ctx, 31, 0x20CA44u);
    ctx->pc = 0x20CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA3Cu;
    // 0x20ca40: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x20CA3Cu, 0x20CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA44u;
label_20ca44:
    // 0x20ca44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ca48:
    // 0x20ca48: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x20ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_20ca4c:
    // 0x20ca4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ca50:
    // 0x20ca50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20ca54:
    // 0x20ca54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ca58:
    // 0x20ca58: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x20ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_20ca5c:
    // 0x20ca5c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20ca60:
    // 0x20ca60: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ca64:
    // 0x20ca64: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_20ca68:
    if (ctx->pc == 0x20CA68u) {
        ctx->pc = 0x20CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA64u;
        // 0x20ca68: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA6Cu;
        goto label_20ca6c;
    }
    ctx->pc = 0x20CA64u;
    {
        const bool branch_taken_0x20ca64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA64u;
        // 0x20ca68: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca64) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20CA6Cu;
label_20ca6c:
    // 0x20ca6c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20ca6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_20ca70:
    // 0x20ca70: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x20ca70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20ca74:
    // 0x20ca74: 0x24c69350  addiu       $a2, $a2, -0x6CB0
    ctx->pc = 0x20ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939472));
label_20ca78:
    // 0x20ca78: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x20ca78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20ca7c:
    // 0x20ca7c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20ca80:
    // 0x20ca80: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x20ca80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20ca84:
    // 0x20ca84: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20ca88:
    // 0x20ca88: 0x60f809  jalr        $v1
label_20ca8c:
    if (ctx->pc == 0x20CA8Cu) {
        ctx->pc = 0x20CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA88u;
        // 0x20ca8c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA90u;
        goto label_20ca90;
    }
    ctx->pc = 0x20CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CA90u);
        ctx->pc = 0x20CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA88u;
        // 0x20ca8c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CA88u, 0x20CA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CA90u;
label_20ca90:
    // 0x20ca90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ca94:
    // 0x20ca94: 0xc06a39e  jal         func_1A8E78
label_20ca98:
    if (ctx->pc == 0x20CA98u) {
        ctx->pc = 0x20CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA94u;
        // 0x20ca98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA9Cu;
        goto label_20ca9c;
    }
    ctx->pc = 0x20CA94u;
    SET_GPR_U32(ctx, 31, 0x20CA9Cu);
    ctx->pc = 0x20CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA94u;
    // 0x20ca98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x20CA94u, 0x20CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA9Cu;
label_20ca9c:
    // 0x20ca9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20ca9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20caa0:
    // 0x20caa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20caa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20caa4:
    // 0x20caa4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20caa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20caa8:
    // 0x20caa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20caa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20caac:
    // 0x20caac: 0x3e00008  jr          $ra
label_20cab0:
    if (ctx->pc == 0x20CAB0u) {
        ctx->pc = 0x20CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAACu;
        // 0x20cab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAB4u;
        goto label_20cab4;
    }
    ctx->pc = 0x20CAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAACu;
        // 0x20cab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CAB4u;
label_20cab4:
    // 0x20cab4: 0x0  nop
    ctx->pc = 0x20cab4u;
    // NOP
    ctx->pc = 0x20cab8u;
}
