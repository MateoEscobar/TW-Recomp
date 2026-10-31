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

// Function: sub_00353020
// Address: 0x353020 - 0x353158
void sub_00353020_0x353020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353020_0x353020");
#endif

    switch (ctx->pc) {
        case 0x353020u: goto label_353020;
        case 0x353024u: goto label_353024;
        case 0x353028u: goto label_353028;
        case 0x35302cu: goto label_35302c;
        case 0x353030u: goto label_353030;
        case 0x353034u: goto label_353034;
        case 0x353038u: goto label_353038;
        case 0x35303cu: goto label_35303c;
        case 0x353040u: goto label_353040;
        case 0x353044u: goto label_353044;
        case 0x353048u: goto label_353048;
        case 0x35304cu: goto label_35304c;
        case 0x353050u: goto label_353050;
        case 0x353054u: goto label_353054;
        case 0x353058u: goto label_353058;
        case 0x35305cu: goto label_35305c;
        case 0x353060u: goto label_353060;
        case 0x353064u: goto label_353064;
        case 0x353068u: goto label_353068;
        case 0x35306cu: goto label_35306c;
        case 0x353070u: goto label_353070;
        case 0x353074u: goto label_353074;
        case 0x353078u: goto label_353078;
        case 0x35307cu: goto label_35307c;
        case 0x353080u: goto label_353080;
        case 0x353084u: goto label_353084;
        case 0x353088u: goto label_353088;
        case 0x35308cu: goto label_35308c;
        case 0x353090u: goto label_353090;
        case 0x353094u: goto label_353094;
        case 0x353098u: goto label_353098;
        case 0x35309cu: goto label_35309c;
        case 0x3530a0u: goto label_3530a0;
        case 0x3530a4u: goto label_3530a4;
        case 0x3530a8u: goto label_3530a8;
        case 0x3530acu: goto label_3530ac;
        case 0x3530b0u: goto label_3530b0;
        case 0x3530b4u: goto label_3530b4;
        case 0x3530b8u: goto label_3530b8;
        case 0x3530bcu: goto label_3530bc;
        case 0x3530c0u: goto label_3530c0;
        case 0x3530c4u: goto label_3530c4;
        case 0x3530c8u: goto label_3530c8;
        case 0x3530ccu: goto label_3530cc;
        case 0x3530d0u: goto label_3530d0;
        case 0x3530d4u: goto label_3530d4;
        case 0x3530d8u: goto label_3530d8;
        case 0x3530dcu: goto label_3530dc;
        case 0x3530e0u: goto label_3530e0;
        case 0x3530e4u: goto label_3530e4;
        case 0x3530e8u: goto label_3530e8;
        case 0x3530ecu: goto label_3530ec;
        case 0x3530f0u: goto label_3530f0;
        case 0x3530f4u: goto label_3530f4;
        case 0x3530f8u: goto label_3530f8;
        case 0x3530fcu: goto label_3530fc;
        case 0x353100u: goto label_353100;
        case 0x353104u: goto label_353104;
        case 0x353108u: goto label_353108;
        case 0x35310cu: goto label_35310c;
        case 0x353110u: goto label_353110;
        case 0x353114u: goto label_353114;
        case 0x353118u: goto label_353118;
        case 0x35311cu: goto label_35311c;
        case 0x353120u: goto label_353120;
        case 0x353124u: goto label_353124;
        case 0x353128u: goto label_353128;
        case 0x35312cu: goto label_35312c;
        case 0x353130u: goto label_353130;
        case 0x353134u: goto label_353134;
        case 0x353138u: goto label_353138;
        case 0x35313cu: goto label_35313c;
        case 0x353140u: goto label_353140;
        case 0x353144u: goto label_353144;
        case 0x353148u: goto label_353148;
        case 0x35314cu: goto label_35314c;
        case 0x353150u: goto label_353150;
        case 0x353154u: goto label_353154;
        default: break;
    }

    ctx->pc = 0x353020u;

label_353020:
    // 0x353020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x353020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_353024:
    // 0x353024: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x353024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_353028:
    // 0x353028: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x353028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_35302c:
    // 0x35302c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35302cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_353030:
    // 0x353030: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x353030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_353034:
    // 0x353034: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x353034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_353038:
    // 0x353038: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x353038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_35303c:
    // 0x35303c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35303cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_353040:
    // 0x353040: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x353040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_353044:
    // 0x353044: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x353044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
label_353048:
    // 0x353048: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_35304c:
    if (ctx->pc == 0x35304Cu) {
        ctx->pc = 0x35304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353048u;
        // 0x35304c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x353050u;
        goto label_353050;
    }
    ctx->pc = 0x353048u;
    {
        const bool branch_taken_0x353048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353048u;
        // 0x35304c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353048) {
            ctx->pc = 0x353134u;
            goto label_353134;
        }
    }
    ctx->pc = 0x353050u;
label_353050:
    // 0x353050: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_353054:
    if (ctx->pc == 0x353054u) {
        ctx->pc = 0x353054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353050u;
        // 0x353054: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353058u;
        goto label_353058;
    }
    ctx->pc = 0x353050u;
    {
        const bool branch_taken_0x353050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353050u;
        // 0x353054: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353050) {
            ctx->pc = 0x35306Cu;
            goto label_35306c;
        }
    }
    ctx->pc = 0x353058u;
label_353058:
    // 0x353058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35305c:
    // 0x35305c: 0xc0552b8  jal         func_154AE0
label_353060:
    if (ctx->pc == 0x353060u) {
        ctx->pc = 0x353060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35305Cu;
        // 0x353060: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353064u;
        goto label_353064;
    }
    ctx->pc = 0x35305Cu;
    SET_GPR_U32(ctx, 31, 0x353064u);
    ctx->pc = 0x353060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35305Cu;
    // 0x353060: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x35305Cu, 0x353064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353064u;
label_353064:
    // 0x353064: 0x10000034  b           . + 4 + (0x34 << 2)
label_353068:
    if (ctx->pc == 0x353068u) {
        ctx->pc = 0x353068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353064u;
        // 0x353068: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35306Cu;
        goto label_35306c;
    }
    ctx->pc = 0x353064u;
    {
        const bool branch_taken_0x353064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353064u;
        // 0x353068: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353064) {
            ctx->pc = 0x353138u;
            goto label_353138;
        }
    }
    ctx->pc = 0x35306Cu;
label_35306c:
    // 0x35306c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x35306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_353070:
    // 0x353070: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_353074:
    if (ctx->pc == 0x353074u) {
        ctx->pc = 0x353074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353070u;
        // 0x353074: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353078u;
        goto label_353078;
    }
    ctx->pc = 0x353070u;
    {
        const bool branch_taken_0x353070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353070u;
        // 0x353074: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353070) {
            ctx->pc = 0x353134u;
            goto label_353134;
        }
    }
    ctx->pc = 0x353078u;
label_353078:
    // 0x353078: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x353078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_35307c:
    // 0x35307c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35307cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_353080:
    // 0x353080: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x353080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_353084:
    // 0x353084: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x353084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_353088:
    // 0x353088: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x353088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_35308c:
    // 0x35308c: 0x40f809  jalr        $v0
label_353090:
    if (ctx->pc == 0x353090u) {
        ctx->pc = 0x353090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35308Cu;
        // 0x353090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353094u;
        goto label_353094;
    }
    ctx->pc = 0x35308Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x353094u);
        ctx->pc = 0x353090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35308Cu;
        // 0x353090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35308Cu, 0x353094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353094u;
label_353094:
    // 0x353094: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x353094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_353098:
    // 0x353098: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x353098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_35309c:
    // 0x35309c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_3530a0:
    if (ctx->pc == 0x3530A0u) {
        ctx->pc = 0x3530A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35309Cu;
        // 0x3530a0: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3530A4u;
        goto label_3530a4;
    }
    ctx->pc = 0x35309Cu;
    {
        const bool branch_taken_0x35309c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3530A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35309Cu;
        // 0x3530a0: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35309c) {
            ctx->pc = 0x353100u;
            goto label_353100;
        }
    }
    ctx->pc = 0x3530A4u;
label_3530a4:
    // 0x3530a4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x3530a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_3530a8:
    // 0x3530a8: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x3530a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_3530ac:
    // 0x3530ac: 0x8e85cdb4  lw          $a1, -0x324C($s4)
    ctx->pc = 0x3530acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
label_3530b0:
    // 0x3530b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3530b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3530b4:
    // 0x3530b4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x3530b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_3530b8:
    // 0x3530b8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3530b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3530bc:
    // 0x3530bc: 0x60f809  jalr        $v1
label_3530c0:
    if (ctx->pc == 0x3530C0u) {
        ctx->pc = 0x3530C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530BCu;
        // 0x3530c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3530C4u;
        goto label_3530c4;
    }
    ctx->pc = 0x3530BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3530C4u);
        ctx->pc = 0x3530C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530BCu;
        // 0x3530c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3530BCu, 0x3530C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3530C4u;
label_3530c4:
    // 0x3530c4: 0xc103e28  jal         func_40F8A0
label_3530c8:
    if (ctx->pc == 0x3530C8u) {
        ctx->pc = 0x3530C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530C4u;
        // 0x3530c8: 0x8e6447c4  lw          $a0, 0x47C4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3530CCu;
        goto label_3530cc;
    }
    ctx->pc = 0x3530C4u;
    SET_GPR_U32(ctx, 31, 0x3530CCu);
    ctx->pc = 0x3530C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3530C4u;
    // 0x3530c8: 0x8e6447c4  lw          $a0, 0x47C4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x3530C4u, 0x3530CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3530CCu;
label_3530cc:
    // 0x3530cc: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x3530ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_3530d0:
    // 0x3530d0: 0xc0552b8  jal         func_154AE0
label_3530d4:
    if (ctx->pc == 0x3530D4u) {
        ctx->pc = 0x3530D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530D0u;
        // 0x3530d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3530D8u;
        goto label_3530d8;
    }
    ctx->pc = 0x3530D0u;
    SET_GPR_U32(ctx, 31, 0x3530D8u);
    ctx->pc = 0x3530D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3530D0u;
    // 0x3530d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x3530D0u, 0x3530D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3530D8u;
label_3530d8:
    // 0x3530d8: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x3530d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_3530dc:
    // 0x3530dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3530dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3530e0:
    // 0x3530e0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3530e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3530e4:
    // 0x3530e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3530e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3530e8:
    // 0x3530e8: 0x40f809  jalr        $v0
label_3530ec:
    if (ctx->pc == 0x3530ECu) {
        ctx->pc = 0x3530ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530E8u;
        // 0x3530ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3530F0u;
        goto label_3530f0;
    }
    ctx->pc = 0x3530E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3530F0u);
        ctx->pc = 0x3530ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530E8u;
        // 0x3530ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3530E8u, 0x3530F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3530F0u;
label_3530f0:
    // 0x3530f0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3530f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3530f4:
    // 0x3530f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3530f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3530f8:
    // 0x3530f8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_3530fc:
    if (ctx->pc == 0x3530FCu) {
        ctx->pc = 0x3530FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530F8u;
        // 0x3530fc: 0x8e85cdb4  lw          $a1, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353100u;
        goto label_353100;
    }
    ctx->pc = 0x3530F8u;
    {
        const bool branch_taken_0x3530f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3530FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530F8u;
        // 0x3530fc: 0x8e85cdb4  lw          $a1, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3530f8) {
            ctx->pc = 0x3530B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3530b0;
        }
    }
    ctx->pc = 0x353100u;
label_353100:
    // 0x353100: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x353100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_353104:
    // 0x353104: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x353104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_353108:
    // 0x353108: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_35310c:
    if (ctx->pc == 0x35310Cu) {
        ctx->pc = 0x35310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353108u;
        // 0x35310c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353110u;
        goto label_353110;
    }
    ctx->pc = 0x353108u;
    {
        const bool branch_taken_0x353108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353108u;
        // 0x35310c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353108) {
            ctx->pc = 0x353134u;
            goto label_353134;
        }
    }
    ctx->pc = 0x353110u;
label_353110:
    // 0x353110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353114:
    // 0x353114: 0xc0552b8  jal         func_154AE0
label_353118:
    if (ctx->pc == 0x353118u) {
        ctx->pc = 0x353118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353114u;
        // 0x353118: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35311Cu;
        goto label_35311c;
    }
    ctx->pc = 0x353114u;
    SET_GPR_U32(ctx, 31, 0x35311Cu);
    ctx->pc = 0x353118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353114u;
    // 0x353118: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x353114u, 0x35311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35311Cu;
label_35311c:
    // 0x35311c: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x35311cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_353120:
    // 0x353120: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x353120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_353124:
    // 0x353124: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x353124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_353128:
    // 0x353128: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x353128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_35312c:
    // 0x35312c: 0x40f809  jalr        $v0
label_353130:
    if (ctx->pc == 0x353130u) {
        ctx->pc = 0x353130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35312Cu;
        // 0x353130: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353134u;
        goto label_353134;
    }
    ctx->pc = 0x35312Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x353134u);
        ctx->pc = 0x353130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35312Cu;
        // 0x353130: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35312Cu, 0x353134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353134u;
label_353134:
    // 0x353134: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x353134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_353138:
    // 0x353138: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x353138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35313c:
    // 0x35313c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35313cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_353140:
    // 0x353140: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x353140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_353144:
    // 0x353144: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x353144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_353148:
    // 0x353148: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x353148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35314c:
    // 0x35314c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_353150:
    // 0x353150: 0x3e00008  jr          $ra
label_353154:
    if (ctx->pc == 0x353154u) {
        ctx->pc = 0x353154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353150u;
        // 0x353154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353158u;
        goto label_fallthrough_0x353150;
    }
    ctx->pc = 0x353150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353150u;
        // 0x353154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x353150:
    ctx->pc = 0x353158u;
}
