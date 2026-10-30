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

// Function: sub_0016C078
// Address: 0x16c078 - 0x16c27c
void sub_0016C078_0x16c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C078_0x16c078");
#endif

    switch (ctx->pc) {
        case 0x16c078u: goto label_16c078;
        case 0x16c07cu: goto label_16c07c;
        case 0x16c080u: goto label_16c080;
        case 0x16c084u: goto label_16c084;
        case 0x16c088u: goto label_16c088;
        case 0x16c08cu: goto label_16c08c;
        case 0x16c090u: goto label_16c090;
        case 0x16c094u: goto label_16c094;
        case 0x16c098u: goto label_16c098;
        case 0x16c09cu: goto label_16c09c;
        case 0x16c0a0u: goto label_16c0a0;
        case 0x16c0a4u: goto label_16c0a4;
        case 0x16c0a8u: goto label_16c0a8;
        case 0x16c0acu: goto label_16c0ac;
        case 0x16c0b0u: goto label_16c0b0;
        case 0x16c0b4u: goto label_16c0b4;
        case 0x16c0b8u: goto label_16c0b8;
        case 0x16c0bcu: goto label_16c0bc;
        case 0x16c0c0u: goto label_16c0c0;
        case 0x16c0c4u: goto label_16c0c4;
        case 0x16c0c8u: goto label_16c0c8;
        case 0x16c0ccu: goto label_16c0cc;
        case 0x16c0d0u: goto label_16c0d0;
        case 0x16c0d4u: goto label_16c0d4;
        case 0x16c0d8u: goto label_16c0d8;
        case 0x16c0dcu: goto label_16c0dc;
        case 0x16c0e0u: goto label_16c0e0;
        case 0x16c0e4u: goto label_16c0e4;
        case 0x16c0e8u: goto label_16c0e8;
        case 0x16c0ecu: goto label_16c0ec;
        case 0x16c0f0u: goto label_16c0f0;
        case 0x16c0f4u: goto label_16c0f4;
        case 0x16c0f8u: goto label_16c0f8;
        case 0x16c0fcu: goto label_16c0fc;
        case 0x16c100u: goto label_16c100;
        case 0x16c104u: goto label_16c104;
        case 0x16c108u: goto label_16c108;
        case 0x16c10cu: goto label_16c10c;
        case 0x16c110u: goto label_16c110;
        case 0x16c114u: goto label_16c114;
        case 0x16c118u: goto label_16c118;
        case 0x16c11cu: goto label_16c11c;
        case 0x16c120u: goto label_16c120;
        case 0x16c124u: goto label_16c124;
        case 0x16c128u: goto label_16c128;
        case 0x16c12cu: goto label_16c12c;
        case 0x16c130u: goto label_16c130;
        case 0x16c134u: goto label_16c134;
        case 0x16c138u: goto label_16c138;
        case 0x16c13cu: goto label_16c13c;
        case 0x16c140u: goto label_16c140;
        case 0x16c144u: goto label_16c144;
        case 0x16c148u: goto label_16c148;
        case 0x16c14cu: goto label_16c14c;
        case 0x16c150u: goto label_16c150;
        case 0x16c154u: goto label_16c154;
        case 0x16c158u: goto label_16c158;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c160u: goto label_16c160;
        case 0x16c164u: goto label_16c164;
        case 0x16c168u: goto label_16c168;
        case 0x16c16cu: goto label_16c16c;
        case 0x16c170u: goto label_16c170;
        case 0x16c174u: goto label_16c174;
        case 0x16c178u: goto label_16c178;
        case 0x16c17cu: goto label_16c17c;
        case 0x16c180u: goto label_16c180;
        case 0x16c184u: goto label_16c184;
        case 0x16c188u: goto label_16c188;
        case 0x16c18cu: goto label_16c18c;
        case 0x16c190u: goto label_16c190;
        case 0x16c194u: goto label_16c194;
        case 0x16c198u: goto label_16c198;
        case 0x16c19cu: goto label_16c19c;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1a4u: goto label_16c1a4;
        case 0x16c1a8u: goto label_16c1a8;
        case 0x16c1acu: goto label_16c1ac;
        case 0x16c1b0u: goto label_16c1b0;
        case 0x16c1b4u: goto label_16c1b4;
        case 0x16c1b8u: goto label_16c1b8;
        case 0x16c1bcu: goto label_16c1bc;
        case 0x16c1c0u: goto label_16c1c0;
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c1ccu: goto label_16c1cc;
        case 0x16c1d0u: goto label_16c1d0;
        case 0x16c1d4u: goto label_16c1d4;
        case 0x16c1d8u: goto label_16c1d8;
        case 0x16c1dcu: goto label_16c1dc;
        case 0x16c1e0u: goto label_16c1e0;
        case 0x16c1e4u: goto label_16c1e4;
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1ecu: goto label_16c1ec;
        case 0x16c1f0u: goto label_16c1f0;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c1f8u: goto label_16c1f8;
        case 0x16c1fcu: goto label_16c1fc;
        case 0x16c200u: goto label_16c200;
        case 0x16c204u: goto label_16c204;
        case 0x16c208u: goto label_16c208;
        case 0x16c20cu: goto label_16c20c;
        case 0x16c210u: goto label_16c210;
        case 0x16c214u: goto label_16c214;
        case 0x16c218u: goto label_16c218;
        case 0x16c21cu: goto label_16c21c;
        case 0x16c220u: goto label_16c220;
        case 0x16c224u: goto label_16c224;
        case 0x16c228u: goto label_16c228;
        case 0x16c22cu: goto label_16c22c;
        case 0x16c230u: goto label_16c230;
        case 0x16c234u: goto label_16c234;
        case 0x16c238u: goto label_16c238;
        case 0x16c23cu: goto label_16c23c;
        case 0x16c240u: goto label_16c240;
        case 0x16c244u: goto label_16c244;
        case 0x16c248u: goto label_16c248;
        case 0x16c24cu: goto label_16c24c;
        case 0x16c250u: goto label_16c250;
        case 0x16c254u: goto label_16c254;
        case 0x16c258u: goto label_16c258;
        case 0x16c25cu: goto label_16c25c;
        case 0x16c260u: goto label_16c260;
        case 0x16c264u: goto label_16c264;
        case 0x16c268u: goto label_16c268;
        case 0x16c26cu: goto label_16c26c;
        case 0x16c270u: goto label_16c270;
        case 0x16c274u: goto label_16c274;
        case 0x16c278u: goto label_16c278;
        default: break;
    }

    ctx->pc = 0x16c078u;

label_16c078:
    // 0x16c078: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16c078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16c07c:
    // 0x16c07c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x16c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_16c080:
    // 0x16c080: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16c084:
    // 0x16c084: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x16c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_16c088:
    // 0x16c088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c08c:
    // 0x16c08c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16c090:
    // 0x16c090: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_16c094:
    // 0x16c094: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16c094u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16c098:
    // 0x16c098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16c09c:
    // 0x16c09c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16c09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c0a0:
    // 0x16c0a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_16c0a4:
    // 0x16c0a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16c0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c0a8:
    // 0x16c0a8: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x16c0a8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_16c0ac:
    // 0x16c0ac: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x16c0acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_16c0b0:
    // 0x16c0b0: 0xc05b0e2  jal         func_16C388
label_16c0b4:
    if (ctx->pc == 0x16C0B4u) {
        ctx->pc = 0x16C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0B0u;
        // 0x16c0b4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0B8u;
        goto label_16c0b8;
    }
    ctx->pc = 0x16C0B0u;
    SET_GPR_U32(ctx, 31, 0x16C0B8u);
    ctx->pc = 0x16C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0B0u;
    // 0x16c0b4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C0B0u, 0x16C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0B8u;
label_16c0b8:
    // 0x16c0b8: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x16c0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16c0bc:
    // 0x16c0bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c0:
    // 0x16c0c0: 0xc13b748  jal         func_4EDD20
label_16c0c4:
    if (ctx->pc == 0x16C0C4u) {
        ctx->pc = 0x16C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0C0u;
        // 0x16c0c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0C8u;
        goto label_16c0c8;
    }
    ctx->pc = 0x16C0C0u;
    SET_GPR_U32(ctx, 31, 0x16C0C8u);
    ctx->pc = 0x16C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0C0u;
    // 0x16c0c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x16C0C0u, 0x16C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0C8u;
label_16c0c8:
    // 0x16c0c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c0cc:
    // 0x16c0cc: 0x0  nop
    ctx->pc = 0x16c0ccu;
    // NOP
label_16c0d0:
    // 0x16c0d0: 0xc137826  jal         func_4DE098
label_16c0d4:
    if (ctx->pc == 0x16C0D4u) {
        ctx->pc = 0x16C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0D0u;
        // 0x16c0d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0D8u;
        goto label_16c0d8;
    }
    ctx->pc = 0x16C0D0u;
    SET_GPR_U32(ctx, 31, 0x16C0D8u);
    ctx->pc = 0x16C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0D0u;
    // 0x16c0d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16C0D0u, 0x16C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0D8u;
label_16c0d8:
    // 0x16c0d8: 0xc0e409a  jal         func_390268
label_16c0dc:
    if (ctx->pc == 0x16C0DCu) {
        ctx->pc = 0x16C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0D8u;
        // 0x16c0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0E0u;
        goto label_16c0e0;
    }
    ctx->pc = 0x16C0D8u;
    SET_GPR_U32(ctx, 31, 0x16C0E0u);
    ctx->pc = 0x16C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0D8u;
    // 0x16c0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16C0D8u, 0x16C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0E0u;
label_16c0e0:
    // 0x16c0e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_16c0e4:
    if (ctx->pc == 0x16C0E4u) {
        ctx->pc = 0x16C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0E0u;
        // 0x16c0e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0E8u;
        goto label_16c0e8;
    }
    ctx->pc = 0x16C0E0u;
    {
        const bool branch_taken_0x16c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c0e0) {
            ctx->pc = 0x16C0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C0E0u;
            // 0x16c0e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C0F4u;
            goto label_16c0f4;
        }
    }
    ctx->pc = 0x16C0E8u;
label_16c0e8:
    // 0x16c0e8: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_16c0ec:
    if (ctx->pc == 0x16C0ECu) {
        ctx->pc = 0x16C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0E8u;
        // 0x16c0ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C0F0u;
        goto label_16c0f0;
    }
    ctx->pc = 0x16C0E8u;
    {
        const bool branch_taken_0x16c0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x16C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0E8u;
        // 0x16c0ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c0e8) {
            ctx->pc = 0x16C108u;
            goto label_16c108;
        }
    }
    ctx->pc = 0x16C0F0u;
label_16c0f0:
    // 0x16c0f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16c0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16c0f4:
    // 0x16c0f4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x16c0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16c0f8:
    // 0x16c0f8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_16c0fc:
    if (ctx->pc == 0x16C0FCu) {
        ctx->pc = 0x16C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0F8u;
        // 0x16c0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C100u;
        goto label_16c100;
    }
    ctx->pc = 0x16C0F8u;
    {
        const bool branch_taken_0x16c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c0f8) {
            ctx->pc = 0x16C0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C0F8u;
            // 0x16c0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c0d0;
        }
    }
    ctx->pc = 0x16C100u;
label_16c100:
    // 0x16c100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16c100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c104:
    // 0x16c104: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16c104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16c108:
    // 0x16c108: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16c108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c10c:
    // 0x16c10c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c10cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c110:
    // 0x16c110: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16c110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c114:
    // 0x16c114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c118:
    // 0x16c118: 0x3e00008  jr          $ra
label_16c11c:
    if (ctx->pc == 0x16C11Cu) {
        ctx->pc = 0x16C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C118u;
        // 0x16c11c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C120u;
        goto label_16c120;
    }
    ctx->pc = 0x16C118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C118u;
        // 0x16c11c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C120u;
label_16c120:
    // 0x16c120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_16c124:
    // 0x16c124: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x16c124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c128:
    // 0x16c128: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_16c12c:
    // 0x16c12c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_16c130:
    // 0x16c130: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_16c134:
    // 0x16c134: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x16c134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_16c138:
    // 0x16c138: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_16c13c:
    // 0x16c13c: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
label_16c140:
    // 0x16c140: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16c144:
    // 0x16c144: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16c144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16c148:
    // 0x16c148: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x16c148u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
label_16c14c:
    // 0x16c14c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16c14cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c150:
    // 0x16c150: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16c154:
    // 0x16c154: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x16c154u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_16c158:
    // 0x16c158: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x16c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_16c15c:
    // 0x16c15c: 0x60f809  jalr        $v1
label_16c160:
    if (ctx->pc == 0x16C160u) {
        ctx->pc = 0x16C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C15Cu;
        // 0x16c160: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C164u;
        goto label_16c164;
    }
    ctx->pc = 0x16C15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C164u);
        ctx->pc = 0x16C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C15Cu;
        // 0x16c160: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C15Cu, 0x16C164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C164u;
label_16c164:
    // 0x16c164: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x16c164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c168:
    // 0x16c168: 0x2e230007  sltiu       $v1, $s1, 0x7
    ctx->pc = 0x16c168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_16c16c:
    // 0x16c16c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_16c170:
    if (ctx->pc == 0x16C170u) {
        ctx->pc = 0x16C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C16Cu;
        // 0x16c170: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C174u;
        goto label_16c174;
    }
    ctx->pc = 0x16C16Cu;
    {
        const bool branch_taken_0x16c16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C16Cu;
        // 0x16c170: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c16c) {
            ctx->pc = 0x16C27Cu;
            return;
        }
    }
    ctx->pc = 0x16C174u;
label_16c174:
    // 0x16c174: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x16c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_16c178:
    // 0x16c178: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16c178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16c17c:
    // 0x16c17c: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x16c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_16c180:
    // 0x16c180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16c184:
    // 0x16c184: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16c188:
    // 0x16c188: 0x800008  jr          $a0
label_16c18c:
    if (ctx->pc == 0x16C18Cu) {
        ctx->pc = 0x16C190u;
        goto label_16c190;
    }
    ctx->pc = 0x16C188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C190u: goto label_16c190;
            case 0x16C1B0u: goto label_16c1b0;
            case 0x16C1E8u: goto label_16c1e8;
            case 0x16C22Cu: goto label_16c22c;
            case 0x16C258u: goto label_16c258;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C188u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16C190u;
label_16c190:
    // 0x16c190: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x16c190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_16c194:
    // 0x16c194: 0xc0cd4e4  jal         func_335390
label_16c198:
    if (ctx->pc == 0x16C198u) {
        ctx->pc = 0x16C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C194u;
        // 0x16c198: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C19Cu;
        goto label_16c19c;
    }
    ctx->pc = 0x16C194u;
    SET_GPR_U32(ctx, 31, 0x16C19Cu);
    ctx->pc = 0x16C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C194u;
    // 0x16c198: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x16C194u, 0x16C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C19Cu;
label_16c19c:
    // 0x16c19c: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x16c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_16c1a0:
    // 0x16c1a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_16c1a4:
    if (ctx->pc == 0x16C1A4u) {
        ctx->pc = 0x16C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1A0u;
        // 0x16c1a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1A8u;
        goto label_16c1a8;
    }
    ctx->pc = 0x16C1A0u;
    {
        const bool branch_taken_0x16c1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1a0) {
            ctx->pc = 0x16C1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1A0u;
            // 0x16c1a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1A8u;
            goto label_16c1a8;
        }
    }
    ctx->pc = 0x16C1A8u;
label_16c1a8:
    // 0x16c1a8: 0x10000035  b           . + 4 + (0x35 << 2)
label_16c1ac:
    if (ctx->pc == 0x16C1ACu) {
        ctx->pc = 0x16C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1A8u;
        // 0x16c1ac: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1B0u;
        goto label_16c1b0;
    }
    ctx->pc = 0x16C1A8u;
    {
        const bool branch_taken_0x16c1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1A8u;
        // 0x16c1ac: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1a8) {
            ctx->pc = 0x16C280u;
            return;
        }
    }
    ctx->pc = 0x16C1B0u;
label_16c1b0:
    // 0x16c1b0: 0xc0e402c  jal         func_3900B0
label_16c1b4:
    if (ctx->pc == 0x16C1B4u) {
        ctx->pc = 0x16C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1B0u;
        // 0x16c1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1B8u;
        goto label_16c1b8;
    }
    ctx->pc = 0x16C1B0u;
    SET_GPR_U32(ctx, 31, 0x16C1B8u);
    ctx->pc = 0x16C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1B0u;
    // 0x16c1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x16C1B0u, 0x16C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1B8u;
label_16c1b8:
    // 0x16c1b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16c1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c1bc:
    // 0x16c1bc: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
label_16c1c0:
    if (ctx->pc == 0x16C1C0u) {
        ctx->pc = 0x16C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1BCu;
        // 0x16c1c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1C4u;
        goto label_16c1c4;
    }
    ctx->pc = 0x16C1BCu;
    {
        const bool branch_taken_0x16c1bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1BCu;
        // 0x16c1c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1bc) {
            ctx->pc = 0x16C27Cu;
            return;
        }
    }
    ctx->pc = 0x16C1C4u;
label_16c1c4:
    // 0x16c1c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16c1c8:
    // 0x16c1c8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x16c1c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_16c1cc:
    // 0x16c1cc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_16c1d0:
    // 0x16c1d0: 0x60f809  jalr        $v1
label_16c1d4:
    if (ctx->pc == 0x16C1D4u) {
        ctx->pc = 0x16C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1D0u;
        // 0x16c1d4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1D8u;
        goto label_16c1d8;
    }
    ctx->pc = 0x16C1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C1D8u);
        ctx->pc = 0x16C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1D0u;
        // 0x16c1d4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C1D0u, 0x16C1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C1D8u;
label_16c1d8:
    // 0x16c1d8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x16c1d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c1dc:
    // 0x16c1dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16c1e0:
    // 0x16c1e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_16c1e4:
    if (ctx->pc == 0x16C1E4u) {
        ctx->pc = 0x16C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1E0u;
        // 0x16c1e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1E8u;
        goto label_16c1e8;
    }
    ctx->pc = 0x16C1E0u;
    {
        const bool branch_taken_0x16c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1E0u;
        // 0x16c1e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1e0) {
            ctx->pc = 0x16C21Cu;
            goto label_16c21c;
        }
    }
    ctx->pc = 0x16C1E8u;
label_16c1e8:
    // 0x16c1e8: 0xc0e402c  jal         func_3900B0
label_16c1ec:
    if (ctx->pc == 0x16C1ECu) {
        ctx->pc = 0x16C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1E8u;
        // 0x16c1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1F0u;
        goto label_16c1f0;
    }
    ctx->pc = 0x16C1E8u;
    SET_GPR_U32(ctx, 31, 0x16C1F0u);
    ctx->pc = 0x16C1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1E8u;
    // 0x16c1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x16C1E8u, 0x16C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1F0u;
label_16c1f0:
    // 0x16c1f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16c1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c1f4:
    // 0x16c1f4: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
label_16c1f8:
    if (ctx->pc == 0x16C1F8u) {
        ctx->pc = 0x16C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1F4u;
        // 0x16c1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1FCu;
        goto label_16c1fc;
    }
    ctx->pc = 0x16C1F4u;
    {
        const bool branch_taken_0x16c1f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1F4u;
        // 0x16c1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1f4) {
            ctx->pc = 0x16C27Cu;
            return;
        }
    }
    ctx->pc = 0x16C1FCu;
label_16c1fc:
    // 0x16c1fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16c200:
    // 0x16c200: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x16c200u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_16c204:
    // 0x16c204: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x16c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_16c208:
    // 0x16c208: 0x60f809  jalr        $v1
label_16c20c:
    if (ctx->pc == 0x16C20Cu) {
        ctx->pc = 0x16C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C208u;
        // 0x16c20c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C210u;
        goto label_16c210;
    }
    ctx->pc = 0x16C208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C210u);
        ctx->pc = 0x16C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C208u;
        // 0x16c20c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C208u, 0x16C210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C210u;
label_16c210:
    // 0x16c210: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x16c210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c214:
    // 0x16c214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16c214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16c218:
    // 0x16c218: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x16c218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16c21c:
    // 0x16c21c: 0xc105b84  jal         func_416E10
label_16c220:
    if (ctx->pc == 0x16C220u) {
        ctx->pc = 0x16C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C21Cu;
        // 0x16c220: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C224u;
        goto label_16c224;
    }
    ctx->pc = 0x16C21Cu;
    SET_GPR_U32(ctx, 31, 0x16C224u);
    ctx->pc = 0x16C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C21Cu;
    // 0x16c220: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x16C21Cu, 0x16C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C224u;
label_16c224:
    // 0x16c224: 0x10000016  b           . + 4 + (0x16 << 2)
label_16c228:
    if (ctx->pc == 0x16C228u) {
        ctx->pc = 0x16C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C224u;
        // 0x16c228: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C22Cu;
        goto label_16c22c;
    }
    ctx->pc = 0x16C224u;
    {
        const bool branch_taken_0x16c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C224u;
        // 0x16c228: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c224) {
            ctx->pc = 0x16C280u;
            return;
        }
    }
    ctx->pc = 0x16C22Cu;
label_16c22c:
    // 0x16c22c: 0xc0e4034  jal         func_3900D0
label_16c230:
    if (ctx->pc == 0x16C230u) {
        ctx->pc = 0x16C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C22Cu;
        // 0x16c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C234u;
        goto label_16c234;
    }
    ctx->pc = 0x16C22Cu;
    SET_GPR_U32(ctx, 31, 0x16C234u);
    ctx->pc = 0x16C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C22Cu;
    // 0x16c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900D0u, 0x16C22Cu, 0x16C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C234u;
label_16c234:
    // 0x16c234: 0xc10587a  jal         func_4161E8
label_16c238:
    if (ctx->pc == 0x16C238u) {
        ctx->pc = 0x16C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C234u;
        // 0x16c238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C23Cu;
        goto label_16c23c;
    }
    ctx->pc = 0x16C234u;
    SET_GPR_U32(ctx, 31, 0x16C23Cu);
    ctx->pc = 0x16C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C234u;
    // 0x16c238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x16C234u, 0x16C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C23Cu;
label_16c23c:
    // 0x16c23c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16c23cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16c240:
    // 0x16c240: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16c244:
    // 0x16c244: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16c244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16c248:
    // 0x16c248: 0xc105b84  jal         func_416E10
label_16c24c:
    if (ctx->pc == 0x16C24Cu) {
        ctx->pc = 0x16C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C248u;
        // 0x16c24c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C250u;
        goto label_16c250;
    }
    ctx->pc = 0x16C248u;
    SET_GPR_U32(ctx, 31, 0x16C250u);
    ctx->pc = 0x16C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C248u;
    // 0x16c24c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x16C248u, 0x16C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C250u;
label_16c250:
    // 0x16c250: 0x1000000b  b           . + 4 + (0xB << 2)
label_16c254:
    if (ctx->pc == 0x16C254u) {
        ctx->pc = 0x16C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C250u;
        // 0x16c254: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C258u;
        goto label_16c258;
    }
    ctx->pc = 0x16C250u;
    {
        const bool branch_taken_0x16c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C250u;
        // 0x16c254: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c250) {
            ctx->pc = 0x16C280u;
            return;
        }
    }
    ctx->pc = 0x16C258u;
label_16c258:
    // 0x16c258: 0xc0e4034  jal         func_3900D0
label_16c25c:
    if (ctx->pc == 0x16C25Cu) {
        ctx->pc = 0x16C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C258u;
        // 0x16c25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C260u;
        goto label_16c260;
    }
    ctx->pc = 0x16C258u;
    SET_GPR_U32(ctx, 31, 0x16C260u);
    ctx->pc = 0x16C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C258u;
    // 0x16c25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900D0u, 0x16C258u, 0x16C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C260u;
label_16c260:
    // 0x16c260: 0xc10587a  jal         func_4161E8
label_16c264:
    if (ctx->pc == 0x16C264u) {
        ctx->pc = 0x16C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C260u;
        // 0x16c264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C268u;
        goto label_16c268;
    }
    ctx->pc = 0x16C260u;
    SET_GPR_U32(ctx, 31, 0x16C268u);
    ctx->pc = 0x16C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C260u;
    // 0x16c264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x16C260u, 0x16C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C268u;
label_16c268:
    // 0x16c268: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16c268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16c26c:
    // 0x16c26c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16c270:
    // 0x16c270: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x16c270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16c274:
    // 0x16c274: 0xc105b84  jal         func_416E10
label_16c278:
    if (ctx->pc == 0x16C278u) {
        ctx->pc = 0x16C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C274u;
        // 0x16c278: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C27Cu;
        goto label_fallthrough_0x16c274;
    }
    ctx->pc = 0x16C274u;
    SET_GPR_U32(ctx, 31, 0x16C27Cu);
    ctx->pc = 0x16C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C274u;
    // 0x16c278: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x16C274u, 0x16C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x16c274:
    ctx->pc = 0x16C27Cu;
}
