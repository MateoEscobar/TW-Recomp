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

// Function: sub_001BECB0
// Address: 0x1becb0 - 0x1bf068
void sub_001BECB0_0x1becb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BECB0_0x1becb0");
#endif

    switch (ctx->pc) {
        case 0x1bece0u: goto label_1bece0;
        case 0x1bed50u: goto label_1bed50;
        case 0x1bed94u: goto label_1bed94;
        case 0x1bedb0u: goto label_1bedb0;
        case 0x1bedd8u: goto label_1bedd8;
        case 0x1bedf0u: goto label_1bedf0;
        case 0x1bee0cu: goto label_1bee0c;
        case 0x1bee20u: goto label_1bee20;
        case 0x1bee40u: goto label_1bee40;
        case 0x1bee58u: goto label_1bee58;
        case 0x1bee70u: goto label_1bee70;
        case 0x1bee7cu: goto label_1bee7c;
        case 0x1bee8cu: goto label_1bee8c;
        case 0x1bee98u: goto label_1bee98;
        case 0x1beeacu: goto label_1beeac;
        case 0x1bef18u: goto label_1bef18;
        case 0x1bef34u: goto label_1bef34;
        case 0x1bef74u: goto label_1bef74;
        case 0x1bef8cu: goto label_1bef8c;
        case 0x1befd4u: goto label_1befd4;
        case 0x1beff4u: goto label_1beff4;
        case 0x1bf014u: goto label_1bf014;
        case 0x1bf01cu: goto label_1bf01c;
        case 0x1bf028u: goto label_1bf028;
        case 0x1bf030u: goto label_1bf030;
        case 0x1bf038u: goto label_1bf038;
        default: break;
    }

    ctx->pc = 0x1becb0u;

    // 0x1becb0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1becb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x1becb4: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x1becb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
    // 0x1becb8: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x1becb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
    // 0x1becbc: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x1becbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
    // 0x1becc0: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x1becc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
    // 0x1becc4: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x1becc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
    // 0x1becc8: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x1becc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
    // 0x1beccc: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x1becccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
    // 0x1becd0: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x1becd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
    // 0x1becd4: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x1becd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x1becd8: 0xc06fafa  jal         func_1BEBE8
    ctx->pc = 0x1BECD8u;
    SET_GPR_U32(ctx, 31, 0x1BECE0u);
    ctx->pc = 0x1BECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECD8u;
    // 0x1becdc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBE8u, 0x1BECD8u, 0x1BECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECE0u;
label_1bece0:
    // 0x1bece0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bece0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bece4: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x1bece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1bece8: 0x1056008d  beq         $v0, $s6, . + 4 + (0x8D << 2)
    ctx->pc = 0x1BECE8u;
    {
        const bool branch_taken_0x1bece8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1BECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECE8u;
        // 0x1becec: 0x26900480  addiu       $s0, $s4, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bece8) {
            ctx->pc = 0x1BEF20u;
            goto label_1bef20;
        }
    }
    ctx->pc = 0x1BECF0u;
    // 0x1becf0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x1becf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1becf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BECF4u;
    {
        const bool branch_taken_0x1becf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECF4u;
        // 0x1becf8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becf4) {
            ctx->pc = 0x1BED0Cu;
            goto label_1bed0c;
        }
    }
    ctx->pc = 0x1BECFCu;
    // 0x1becfc: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x1becfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x1bed00: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1bed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1bed04: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x1bed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x1bed08: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1bed08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_1bed0c:
    // 0x1bed0c: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x1bed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x1bed10: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1bed14: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1bed14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1bed18: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1bed18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bed1c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BED1Cu;
    {
        const bool branch_taken_0x1bed1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED1Cu;
        // 0x1bed20: 0x26820480  addiu       $v0, $s4, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed1c) {
            ctx->pc = 0x1BED34u;
            goto label_1bed34;
        }
    }
    ctx->pc = 0x1BED24u;
    // 0x1bed24: 0x8e820a20  lw          $v0, 0xA20($s4)
    ctx->pc = 0x1bed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2592)));
    // 0x1bed28: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BED28u;
    {
        const bool branch_taken_0x1bed28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bed28) {
            ctx->pc = 0x1BED2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BED28u;
            // 0x1bed2c: 0x8e820048  lw          $v0, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEDB8u;
            goto label_1bedb8;
        }
    }
    ctx->pc = 0x1BED30u;
    // 0x1bed30: 0x26820480  addiu       $v0, $s4, 0x480
    ctx->pc = 0x1bed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
label_1bed34:
    // 0x1bed34: 0xae960048  sw          $s6, 0x48($s4)
    ctx->pc = 0x1bed34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 22));
    // 0x1bed38: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x1bed38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
    // 0x1bed3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed40: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bed40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bed44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bed44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed48: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x1BED48u;
    SET_GPR_U32(ctx, 31, 0x1BED50u);
    ctx->pc = 0x1BED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED48u;
    // 0x1bed4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1BED48u, 0x1BED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED50u;
label_1bed50:
    // 0x1bed50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed54: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bed54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1bed58: 0xae820a20  sw          $v0, 0xA20($s4)
    ctx->pc = 0x1bed58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2592), GPR_U32(ctx, 2));
    // 0x1bed5c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1bed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1bed60: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1bed64: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bed64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bed68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bed6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BED6Cu;
    {
        const bool branch_taken_0x1bed6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED6Cu;
        // 0x1bed70: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed6c) {
            ctx->pc = 0x1BED9Cu;
            goto label_1bed9c;
        }
    }
    ctx->pc = 0x1BED74u;
    // 0x1bed74: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1bed78: 0x24a5e8c0  addiu       $a1, $a1, -0x1740
    ctx->pc = 0x1bed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961344));
    // 0x1bed7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bed84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bed84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed88: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1bed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bed8c: 0xc079ce8  jal         func_1E73A0
    ctx->pc = 0x1BED8Cu;
    SET_GPR_U32(ctx, 31, 0x1BED94u);
    ctx->pc = 0x1BED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED8Cu;
    // 0x1bed90: 0x3c130055  lui         $s3, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73A0u, 0x1BED8Cu, 0x1BED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED94u;
label_1bed94:
    // 0x1bed94: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1BED94u;
    {
        const bool branch_taken_0x1bed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED94u;
        // 0x1bed98: 0x8e820044  lw          $v0, 0x44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed94) {
            ctx->pc = 0x1BEF40u;
            goto label_1bef40;
        }
    }
    ctx->pc = 0x1BED9Cu;
label_1bed9c:
    // 0x1bed9c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1beda0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beda4: 0x24a5e8b0  addiu       $a1, $a1, -0x1750
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961328));
    // 0x1beda8: 0xc079ce8  jal         func_1E73A0
    ctx->pc = 0x1BEDA8u;
    SET_GPR_U32(ctx, 31, 0x1BEDB0u);
    ctx->pc = 0x1BEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDA8u;
    // 0x1bedac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73A0u, 0x1BEDA8u, 0x1BEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDB0u;
label_1bedb0:
    // 0x1bedb0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1BEDB0u;
    {
        const bool branch_taken_0x1bedb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDB0u;
        // 0x1bedb4: 0x3c130055  lui         $s3, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedb0) {
            ctx->pc = 0x1BEF3Cu;
            goto label_1bef3c;
        }
    }
    ctx->pc = 0x1BEDB8u;
label_1bedb8:
    // 0x1bedb8: 0x2c29023  subu        $s2, $s6, $v0
    ctx->pc = 0x1bedb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1bedbc: 0x641000e  bgez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1BEDBCu;
    {
        const bool branch_taken_0x1bedbc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1BEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDBCu;
        // 0x1bedc0: 0xa28008c0  sb          $zero, 0x8C0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2240), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedbc) {
            ctx->pc = 0x1BEDF8u;
            goto label_1bedf8;
        }
    }
    ctx->pc = 0x1BEDC4u;
    // 0x1bedc4: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1bedc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    // 0x1bedc8: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x1bedc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bedcc: 0x26104d90  addiu       $s0, $s0, 0x4D90
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19856));
    // 0x1bedd0: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1BEDD0u;
    SET_GPR_U32(ctx, 31, 0x1BEDD8u);
    ctx->pc = 0x1BEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDD0u;
    // 0x1bedd4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1BEDD0u, 0x1BEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDD8u;
label_1bedd8:
    // 0x1bedd8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1bedd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beddc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1beddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bede0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1bede0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bede4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bede8: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1BEDE8u;
    SET_GPR_U32(ctx, 31, 0x1BEDF0u);
    ctx->pc = 0x1BEDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDE8u;
    // 0x1bedec: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1BEDE8u, 0x1BEDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDF0u;
label_1bedf0:
    // 0x1bedf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BEDF0u;
    {
        const bool branch_taken_0x1bedf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF0u;
        // 0x1bedf4: 0x129023  negu        $s2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedf0) {
            ctx->pc = 0x1BEE24u;
            goto label_1bee24;
        }
    }
    ctx->pc = 0x1BEDF8u;
label_1bedf8:
    // 0x1bedf8: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1bedf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    // 0x1bedfc: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x1bedfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bee00: 0x26104dc0  addiu       $s0, $s0, 0x4DC0
    ctx->pc = 0x1bee00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19904));
    // 0x1bee04: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1BEE04u;
    SET_GPR_U32(ctx, 31, 0x1BEE0Cu);
    ctx->pc = 0x1BEE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE04u;
    // 0x1bee08: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1BEE04u, 0x1BEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE0Cu;
label_1bee0c:
    // 0x1bee0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bee0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1bee10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee18: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1BEE18u;
    SET_GPR_U32(ctx, 31, 0x1BEE20u);
    ctx->pc = 0x1BEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE18u;
    // 0x1bee1c: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1BEE18u, 0x1BEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE20u;
label_1bee20:
    // 0x1bee20: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1bee20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bee24:
    // 0x1bee24: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1bee24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
    // 0x1bee28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bee2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee30: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1bee34: 0x26664df0  addiu       $a2, $s3, 0x4DF0
    ctx->pc = 0x1bee34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 19952));
    // 0x1bee38: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1BEE38u;
    SET_GPR_U32(ctx, 31, 0x1BEE40u);
    ctx->pc = 0x1BEE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE38u;
    // 0x1bee3c: 0x269108c0  addiu       $s1, $s4, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1BEE38u, 0x1BEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE40u;
label_1bee40:
    // 0x1bee40: 0x26920480  addiu       $s2, $s4, 0x480
    ctx->pc = 0x1bee40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
    // 0x1bee44: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1bee44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    // 0x1bee48: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1bee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bee4c: 0x26104df8  addiu       $s0, $s0, 0x4DF8
    ctx->pc = 0x1bee4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19960));
    // 0x1bee50: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1BEE50u;
    SET_GPR_U32(ctx, 31, 0x1BEE58u);
    ctx->pc = 0x1BEE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE50u;
    // 0x1bee54: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1BEE50u, 0x1BEE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE58u;
label_1bee58:
    // 0x1bee58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1bee58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bee5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee60: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1bee60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee68: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1BEE68u;
    SET_GPR_U32(ctx, 31, 0x1BEE70u);
    ctx->pc = 0x1BEE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE68u;
    // 0x1bee6c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1BEE68u, 0x1BEE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE70u;
label_1bee70:
    // 0x1bee70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee74: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BEE74u;
    SET_GPR_U32(ctx, 31, 0x1BEE7Cu);
    ctx->pc = 0x1BEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE74u;
    // 0x1bee78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BEE74u, 0x1BEE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE7Cu;
label_1bee7c:
    // 0x1bee7c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1bee80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee84: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BEE84u;
    SET_GPR_U32(ctx, 31, 0x1BEE8Cu);
    ctx->pc = 0x1BEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE84u;
    // 0x1bee88: 0x24a54e10  addiu       $a1, $a1, 0x4E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BEE84u, 0x1BEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE8Cu;
label_1bee8c:
    // 0x1bee8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bee8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee90: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1BEE90u;
    SET_GPR_U32(ctx, 31, 0x1BEE98u);
    ctx->pc = 0x1BEE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE90u;
    // 0x1bee94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1BEE90u, 0x1BEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE98u;
label_1bee98:
    // 0x1bee98: 0x8e820a20  lw          $v0, 0xA20($s4)
    ctx->pc = 0x1bee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2592)));
    // 0x1bee9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beea0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1beea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1beea4: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x1BEEA4u;
    SET_GPR_U32(ctx, 31, 0x1BEEACu);
    ctx->pc = 0x1BEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEA4u;
    // 0x1beea8: 0x8e850a20  lw          $a1, 0xA20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1BEEA4u, 0x1BEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEACu;
label_1beeac:
    // 0x1beeac: 0x7a4301f0  lq          $v1, 0x1F0($s2)
    ctx->pc = 0x1beeacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x1beeb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1beeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1beeb4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1beeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1beeb8: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x1beeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
    // 0x1beebc: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1beec0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1beec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1beec4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1beec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1beec8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEEC8u;
    {
        const bool branch_taken_0x1beec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEC8u;
        // 0x1beecc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beec8) {
            ctx->pc = 0x1BEEE8u;
            goto label_1beee8;
        }
    }
    ctx->pc = 0x1BEED0u;
    // 0x1beed0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1beed4: 0x2463e8c0  addiu       $v1, $v1, -0x1740
    ctx->pc = 0x1beed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961344));
    // 0x1beed8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1beed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1beedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1beedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1beee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEEE0u;
    {
        const bool branch_taken_0x1beee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE0u;
        // 0x1beee4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beee0) {
            ctx->pc = 0x1BEEF0u;
            goto label_1beef0;
        }
    }
    ctx->pc = 0x1BEEE8u;
label_1beee8:
    // 0x1beee8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1beee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1beeec: 0xc440e8b0  lwc1        $f0, -0x1750($v0)
    ctx->pc = 0x1beeecu;
    { uint32_t bits = FAST_READ32(0x50E8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1beef0:
    // 0x1beef0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x1beef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x1beef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1beef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1beef8: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x1beef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beefc: 0xc441e8e0  lwc1        $f1, -0x1720($v0)
    ctx->pc = 0x1beefcu;
    { uint32_t bits = FAST_READ32(0x50E8E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bef00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bef00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef04: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1bef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1bef08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bef08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bef0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bef10: 0xc079ce8  jal         func_1E73A0
    ctx->pc = 0x1BEF10u;
    SET_GPR_U32(ctx, 31, 0x1BEF18u);
    ctx->pc = 0x1BEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF10u;
    // 0x1bef14: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73A0u, 0x1BEF10u, 0x1BEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF18u;
label_1bef18:
    // 0x1bef18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEF18u;
    {
        const bool branch_taken_0x1bef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF18u;
        // 0x1bef1c: 0x8e820044  lw          $v0, 0x44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef18) {
            ctx->pc = 0x1BEF40u;
            goto label_1bef40;
        }
    }
    ctx->pc = 0x1BEF20u;
label_1bef20:
    // 0x1bef20: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x1bef20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
    // 0x1bef24: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bef24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bef28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bef28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef2c: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x1BEF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF34u);
    ctx->pc = 0x1BEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF2Cu;
    // 0x1bef30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1BEF2Cu, 0x1BEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF34u;
label_1bef34:
    // 0x1bef34: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1bef34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef38: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1bef38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1bef3c:
    // 0x1bef3c: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x1bef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_1bef40:
    // 0x1bef40: 0x1056001e  beq         $v0, $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BEF40u;
    {
        const bool branch_taken_0x1bef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF40u;
        // 0x1bef44: 0x8e82004c  lw          $v0, 0x4C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef40) {
            ctx->pc = 0x1BEFBCu;
            goto label_1befbc;
        }
    }
    ctx->pc = 0x1BEF48u;
    // 0x1bef48: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BEF48u;
    {
        const bool branch_taken_0x1bef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF48u;
        // 0x1bef4c: 0x3c10005a  lui         $s0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef48) {
            ctx->pc = 0x1BEFD8u;
            goto label_1befd8;
        }
    }
    ctx->pc = 0x1BEF50u;
    // 0x1bef50: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1bef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1bef54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1bef58: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x1bef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x1bef5c: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x1bef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1bef60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bef60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bef64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bef68: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1bef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bef6c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x1BEF6Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF74u);
    ctx->pc = 0x1BEF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF6Cu;
    // 0x1bef70: 0xaca0411c  sw          $zero, 0x411C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16668), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1BEF6Cu, 0x1BEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF74u;
label_1bef74:
    // 0x1bef74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEF74u;
    {
        const bool branch_taken_0x1bef74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bef74) {
            ctx->pc = 0x1BEF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEF74u;
            // 0x1bef78: 0x8e820044  lw          $v0, 0x44($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEF94u;
            goto label_1bef94;
        }
    }
    ctx->pc = 0x1BEF7Cu;
    // 0x1bef7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bef80: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bef84: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1BEF84u;
    SET_GPR_U32(ctx, 31, 0x1BEF8Cu);
    ctx->pc = 0x1BEF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF84u;
    // 0x1bef88: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BEF84u, 0x1BEF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF8Cu;
label_1bef8c:
    // 0x1bef8c: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1bef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1bef90: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_1bef94:
    // 0x1bef94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bef94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef98: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1bef98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1bef9c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEF9Cu;
    {
        const bool branch_taken_0x1bef9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF9Cu;
        // 0x1befa0: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef9c) {
            ctx->pc = 0x1BEFACu;
            goto label_1befac;
        }
    }
    ctx->pc = 0x1BEFA4u;
    // 0x1befa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEFA4u;
    {
        const bool branch_taken_0x1befa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFA4u;
        // 0x1befa8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befa4) {
            ctx->pc = 0x1BEFB0u;
            goto label_1befb0;
        }
    }
    ctx->pc = 0x1BEFACu;
label_1befac:
    // 0x1befac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1befacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1befb0:
    // 0x1befb0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1befb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1befb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BEFB4u;
    {
        const bool branch_taken_0x1befb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB4u;
        // 0x1befb8: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befb4) {
            ctx->pc = 0x1BEFFCu;
            goto label_1beffc;
        }
    }
    ctx->pc = 0x1BEFBCu;
label_1befbc:
    // 0x1befbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEFBCu;
    {
        const bool branch_taken_0x1befbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFBCu;
        // 0x1befc0: 0x3c10005a  lui         $s0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befbc) {
            ctx->pc = 0x1BEFD8u;
            goto label_1befd8;
        }
    }
    ctx->pc = 0x1BEFC4u;
    // 0x1befc4: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1befc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x1befc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1befc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befcc: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x1BEFCCu;
    SET_GPR_U32(ctx, 31, 0x1BEFD4u);
    ctx->pc = 0x1BEFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFCCu;
    // 0x1befd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1BEFCCu, 0x1BEFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFD4u;
label_1befd4:
    // 0x1befd4: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x1befd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
label_1befd8:
    // 0x1befd8: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1befdc: 0x8e028690  lw          $v0, -0x7970($s0)
    ctx->pc = 0x1befdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936208)));
    // 0x1befe0: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEFE0u;
    {
        const bool branch_taken_0x1befe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE0u;
        // 0x1befe4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befe0) {
            ctx->pc = 0x1BEFFCu;
            goto label_1beffc;
        }
    }
    ctx->pc = 0x1BEFE8u;
    // 0x1befe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1befe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befec: 0xc0440c6  jal         func_110318
    ctx->pc = 0x1BEFECu;
    SET_GPR_U32(ctx, 31, 0x1BEFF4u);
    ctx->pc = 0x1BEFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFECu;
    // 0x1beff0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1BEFECu, 0x1BEFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFF4u;
label_1beff4:
    // 0x1beff4: 0x8e028690  lw          $v0, -0x7970($s0)
    ctx->pc = 0x1beff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936208)));
    // 0x1beff8: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1beff8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_1beffc:
    // 0x1beffc: 0x8e870044  lw          $a3, 0x44($s4)
    ctx->pc = 0x1beffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x1bf000: 0x269009c0  addiu       $s0, $s4, 0x9C0
    ctx->pc = 0x1bf000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2496));
    // 0x1bf004: 0x26664df0  addiu       $a2, $s3, 0x4DF0
    ctx->pc = 0x1bf004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 19952));
    // 0x1bf008: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1bf008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1bf00c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1BF00Cu;
    SET_GPR_U32(ctx, 31, 0x1BF014u);
    ctx->pc = 0x1BF010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF00Cu;
    // 0x1bf010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1BF00Cu, 0x1BF014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF014u;
label_1bf014:
    // 0x1bf014: 0xc06ed28  jal         func_1BB4A0
    ctx->pc = 0x1BF014u;
    SET_GPR_U32(ctx, 31, 0x1BF01Cu);
    ctx->pc = 0x1BF018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF014u;
    // 0x1bf018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB4A0u, 0x1BF014u, 0x1BF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF01Cu;
label_1bf01c:
    // 0x1bf01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf020: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1BF020u;
    SET_GPR_U32(ctx, 31, 0x1BF028u);
    ctx->pc = 0x1BF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF020u;
    // 0x1bf024: 0x26840170  addiu       $a0, $s4, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1BF020u, 0x1BF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF028u;
label_1bf028:
    // 0x1bf028: 0xc06dbd8  jal         func_1B6F60
    ctx->pc = 0x1BF028u;
    SET_GPR_U32(ctx, 31, 0x1BF030u);
    ctx->pc = 0x1BF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF028u;
    // 0x1bf02c: 0x26840060  addiu       $a0, $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F60u, 0x1BF028u, 0x1BF030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF030u;
label_1bf030:
    // 0x1bf030: 0xc079d1a  jal         func_1E7468
    ctx->pc = 0x1BF030u;
    SET_GPR_U32(ctx, 31, 0x1BF038u);
    ctx->pc = 0x1BF034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF030u;
    // 0x1bf034: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7468u, 0x1BF030u, 0x1BF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF038u;
label_1bf038:
    // 0x1bf038: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x1bf038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1bf03c: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x1bf03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1bf040: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x1bf040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1bf044: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x1bf044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1bf048: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x1bf048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1bf04c: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x1bf04cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1bf050: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x1bf050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1bf054: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x1bf054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1bf058: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x1bf058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1bf05c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF05Cu;
        // 0x1bf060: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF064u;
    // 0x1bf064: 0x0  nop
    ctx->pc = 0x1bf064u;
    // NOP
    ctx->pc = 0x1bf068u;
}
