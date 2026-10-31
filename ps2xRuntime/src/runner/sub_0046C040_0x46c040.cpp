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

// Function: sub_0046C040
// Address: 0x46c040 - 0x46c100
void sub_0046C040_0x46c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C040_0x46c040");
#endif

    switch (ctx->pc) {
        case 0x46c040u: goto label_46c040;
        case 0x46c044u: goto label_46c044;
        case 0x46c048u: goto label_46c048;
        case 0x46c04cu: goto label_46c04c;
        case 0x46c050u: goto label_46c050;
        case 0x46c054u: goto label_46c054;
        case 0x46c058u: goto label_46c058;
        case 0x46c05cu: goto label_46c05c;
        case 0x46c060u: goto label_46c060;
        case 0x46c064u: goto label_46c064;
        case 0x46c068u: goto label_46c068;
        case 0x46c06cu: goto label_46c06c;
        case 0x46c070u: goto label_46c070;
        case 0x46c074u: goto label_46c074;
        case 0x46c078u: goto label_46c078;
        case 0x46c07cu: goto label_46c07c;
        case 0x46c080u: goto label_46c080;
        case 0x46c084u: goto label_46c084;
        case 0x46c088u: goto label_46c088;
        case 0x46c08cu: goto label_46c08c;
        case 0x46c090u: goto label_46c090;
        case 0x46c094u: goto label_46c094;
        case 0x46c098u: goto label_46c098;
        case 0x46c09cu: goto label_46c09c;
        case 0x46c0a0u: goto label_46c0a0;
        case 0x46c0a4u: goto label_46c0a4;
        case 0x46c0a8u: goto label_46c0a8;
        case 0x46c0acu: goto label_46c0ac;
        case 0x46c0b0u: goto label_46c0b0;
        case 0x46c0b4u: goto label_46c0b4;
        case 0x46c0b8u: goto label_46c0b8;
        case 0x46c0bcu: goto label_46c0bc;
        case 0x46c0c0u: goto label_46c0c0;
        case 0x46c0c4u: goto label_46c0c4;
        case 0x46c0c8u: goto label_46c0c8;
        case 0x46c0ccu: goto label_46c0cc;
        case 0x46c0d0u: goto label_46c0d0;
        case 0x46c0d4u: goto label_46c0d4;
        case 0x46c0d8u: goto label_46c0d8;
        case 0x46c0dcu: goto label_46c0dc;
        case 0x46c0e0u: goto label_46c0e0;
        case 0x46c0e4u: goto label_46c0e4;
        case 0x46c0e8u: goto label_46c0e8;
        case 0x46c0ecu: goto label_46c0ec;
        case 0x46c0f0u: goto label_46c0f0;
        case 0x46c0f4u: goto label_46c0f4;
        case 0x46c0f8u: goto label_46c0f8;
        case 0x46c0fcu: goto label_46c0fc;
        default: break;
    }

    ctx->pc = 0x46c040u;

label_46c040:
    // 0x46c040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_46c044:
    // 0x46c044: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_46c048:
    // 0x46c048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46c04c:
    // 0x46c04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46c04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46c050:
    // 0x46c050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46c054:
    // 0x46c054: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x46c054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_46c058:
    // 0x46c058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46c05c:
    // 0x46c05c: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_46c060:
    if (ctx->pc == 0x46C060u) {
        ctx->pc = 0x46C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C05Cu;
        // 0x46c060: 0x9603000e  lhu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C064u;
        goto label_46c064;
    }
    ctx->pc = 0x46C05Cu;
    {
        const bool branch_taken_0x46c05c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C05Cu;
        // 0x46c060: 0x9603000e  lhu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c05c) {
            ctx->pc = 0x46C0E0u;
            goto label_46c0e0;
        }
    }
    ctx->pc = 0x46C064u;
label_46c064:
    // 0x46c064: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x46c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_46c068:
    // 0x46c068: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46c06c:
    if (ctx->pc == 0x46C06Cu) {
        ctx->pc = 0x46C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C068u;
        // 0x46c06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C070u;
        goto label_46c070;
    }
    ctx->pc = 0x46C068u;
    {
        const bool branch_taken_0x46c068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c068) {
            ctx->pc = 0x46C06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46C068u;
            // 0x46c06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46C07Cu;
            goto label_46c07c;
        }
    }
    ctx->pc = 0x46C070u;
label_46c070:
    // 0x46c070: 0xc11fa54  jal         func_47E950
label_46c074:
    if (ctx->pc == 0x46C074u) {
        ctx->pc = 0x46C078u;
        goto label_46c078;
    }
    ctx->pc = 0x46C070u;
    SET_GPR_U32(ctx, 31, 0x46C078u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46C070u, 0x46C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C078u;
label_46c078:
    // 0x46c078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46c07c:
    // 0x46c07c: 0xc11affa  jal         func_46BFE8
label_46c080:
    if (ctx->pc == 0x46C080u) {
        ctx->pc = 0x46C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C07Cu;
        // 0x46c080: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C084u;
        goto label_46c084;
    }
    ctx->pc = 0x46C07Cu;
    SET_GPR_U32(ctx, 31, 0x46C084u);
    ctx->pc = 0x46C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C07Cu;
    // 0x46c080: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46C07Cu, 0x46C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C084u;
label_46c084:
    // 0x46c084: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x46c084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_46c088:
    // 0x46c088: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46c088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46c08c:
    // 0x46c08c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46c08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46c090:
    // 0x46c090: 0xc11ffb4  jal         func_47FED0
label_46c094:
    if (ctx->pc == 0x46C094u) {
        ctx->pc = 0x46C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C090u;
        // 0x46c094: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C098u;
        goto label_46c098;
    }
    ctx->pc = 0x46C090u;
    SET_GPR_U32(ctx, 31, 0x46C098u);
    ctx->pc = 0x46C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C090u;
    // 0x46c094: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46C090u, 0x46C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C098u;
label_46c098:
    // 0x46c098: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x46c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_46c09c:
    // 0x46c09c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46c0a0:
    if (ctx->pc == 0x46C0A0u) {
        ctx->pc = 0x46C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C09Cu;
        // 0x46c0a0: 0x2622ad18  addiu       $v0, $s1, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C0A4u;
        goto label_46c0a4;
    }
    ctx->pc = 0x46C09Cu;
    {
        const bool branch_taken_0x46c09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C09Cu;
        // 0x46c0a0: 0x2622ad18  addiu       $v0, $s1, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c09c) {
            ctx->pc = 0x46C0B4u;
            goto label_46c0b4;
        }
    }
    ctx->pc = 0x46C0A4u;
label_46c0a4:
    // 0x46c0a4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46c0a8:
    // 0x46c0a8: 0x60f809  jalr        $v1
label_46c0ac:
    if (ctx->pc == 0x46C0ACu) {
        ctx->pc = 0x46C0B0u;
        goto label_46c0b0;
    }
    ctx->pc = 0x46C0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46C0B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C0A8u, 0x46C0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46C0B0u;
label_46c0b0:
    // 0x46c0b0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x46c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_46c0b4:
    // 0x46c0b4: 0xc11b596  jal         func_46D658
label_46c0b8:
    if (ctx->pc == 0x46C0B8u) {
        ctx->pc = 0x46C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C0B4u;
        // 0x46c0b8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C0BCu;
        goto label_46c0bc;
    }
    ctx->pc = 0x46C0B4u;
    SET_GPR_U32(ctx, 31, 0x46C0BCu);
    ctx->pc = 0x46C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C0B4u;
    // 0x46c0b8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46C0B4u, 0x46C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C0BCu;
label_46c0bc:
    // 0x46c0bc: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x46c0bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_46c0c0:
    // 0x46c0c0: 0x2625ad18  addiu       $a1, $s1, -0x52E8
    ctx->pc = 0x46c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_46c0c4:
    // 0x46c0c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46c0c8:
    // 0x46c0c8: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x46c0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_46c0cc:
    // 0x46c0cc: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46c0d0:
    // 0x46c0d0: 0x40f809  jalr        $v0
label_46c0d4:
    if (ctx->pc == 0x46C0D4u) {
        ctx->pc = 0x46C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C0D0u;
        // 0x46c0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C0D8u;
        goto label_46c0d8;
    }
    ctx->pc = 0x46C0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46C0D8u);
        ctx->pc = 0x46C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C0D0u;
        // 0x46c0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C0D0u, 0x46C0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46C0D8u;
label_46c0d8:
    // 0x46c0d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_46c0dc:
    if (ctx->pc == 0x46C0DCu) {
        ctx->pc = 0x46C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C0D8u;
        // 0x46c0dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C0E0u;
        goto label_46c0e0;
    }
    ctx->pc = 0x46C0D8u;
    {
        const bool branch_taken_0x46c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C0D8u;
        // 0x46c0dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c0d8) {
            ctx->pc = 0x46C0ECu;
            goto label_46c0ec;
        }
    }
    ctx->pc = 0x46C0E0u;
label_46c0e0:
    // 0x46c0e0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46c0e4:
    // 0x46c0e4: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x46c0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_46c0e8:
    // 0x46c0e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46c0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46c0ec:
    // 0x46c0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c0f0:
    // 0x46c0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46c0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46c0f4:
    // 0x46c0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46c0f8:
    // 0x46c0f8: 0x3e00008  jr          $ra
label_46c0fc:
    if (ctx->pc == 0x46C0FCu) {
        ctx->pc = 0x46C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C0F8u;
        // 0x46c0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C100u;
        goto label_fallthrough_0x46c0f8;
    }
    ctx->pc = 0x46C0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C0F8u;
        // 0x46c0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46c0f8:
    ctx->pc = 0x46C100u;
}
