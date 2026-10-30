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

// Function: sub_004219D0
// Address: 0x4219d0 - 0x421ad0
void sub_004219D0_0x4219d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004219D0_0x4219d0");
#endif

    switch (ctx->pc) {
        case 0x4219d0u: goto label_4219d0;
        case 0x4219d4u: goto label_4219d4;
        case 0x4219d8u: goto label_4219d8;
        case 0x4219dcu: goto label_4219dc;
        case 0x4219e0u: goto label_4219e0;
        case 0x4219e4u: goto label_4219e4;
        case 0x4219e8u: goto label_4219e8;
        case 0x4219ecu: goto label_4219ec;
        case 0x4219f0u: goto label_4219f0;
        case 0x4219f4u: goto label_4219f4;
        case 0x4219f8u: goto label_4219f8;
        case 0x4219fcu: goto label_4219fc;
        case 0x421a00u: goto label_421a00;
        case 0x421a04u: goto label_421a04;
        case 0x421a08u: goto label_421a08;
        case 0x421a0cu: goto label_421a0c;
        case 0x421a10u: goto label_421a10;
        case 0x421a14u: goto label_421a14;
        case 0x421a18u: goto label_421a18;
        case 0x421a1cu: goto label_421a1c;
        case 0x421a20u: goto label_421a20;
        case 0x421a24u: goto label_421a24;
        case 0x421a28u: goto label_421a28;
        case 0x421a2cu: goto label_421a2c;
        case 0x421a30u: goto label_421a30;
        case 0x421a34u: goto label_421a34;
        case 0x421a38u: goto label_421a38;
        case 0x421a3cu: goto label_421a3c;
        case 0x421a40u: goto label_421a40;
        case 0x421a44u: goto label_421a44;
        case 0x421a48u: goto label_421a48;
        case 0x421a4cu: goto label_421a4c;
        case 0x421a50u: goto label_421a50;
        case 0x421a54u: goto label_421a54;
        case 0x421a58u: goto label_421a58;
        case 0x421a5cu: goto label_421a5c;
        case 0x421a60u: goto label_421a60;
        case 0x421a64u: goto label_421a64;
        case 0x421a68u: goto label_421a68;
        case 0x421a6cu: goto label_421a6c;
        case 0x421a70u: goto label_421a70;
        case 0x421a74u: goto label_421a74;
        case 0x421a78u: goto label_421a78;
        case 0x421a7cu: goto label_421a7c;
        case 0x421a80u: goto label_421a80;
        case 0x421a84u: goto label_421a84;
        case 0x421a88u: goto label_421a88;
        case 0x421a8cu: goto label_421a8c;
        case 0x421a90u: goto label_421a90;
        case 0x421a94u: goto label_421a94;
        case 0x421a98u: goto label_421a98;
        case 0x421a9cu: goto label_421a9c;
        case 0x421aa0u: goto label_421aa0;
        case 0x421aa4u: goto label_421aa4;
        case 0x421aa8u: goto label_421aa8;
        case 0x421aacu: goto label_421aac;
        case 0x421ab0u: goto label_421ab0;
        case 0x421ab4u: goto label_421ab4;
        case 0x421ab8u: goto label_421ab8;
        case 0x421abcu: goto label_421abc;
        case 0x421ac0u: goto label_421ac0;
        case 0x421ac4u: goto label_421ac4;
        case 0x421ac8u: goto label_421ac8;
        case 0x421accu: goto label_421acc;
        default: break;
    }

    ctx->pc = 0x4219d0u;

label_4219d0:
    // 0x4219d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4219d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4219d4:
    // 0x4219d4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x4219d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4219d8:
    // 0x4219d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4219d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4219dc:
    // 0x4219dc: 0xc29818  mult        $s3, $a2, $v0
    ctx->pc = 0x4219dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_4219e0:
    // 0x4219e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4219e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4219e4:
    // 0x4219e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4219e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4219e8:
    // 0x4219e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4219e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4219ec:
    // 0x4219ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4219ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4219f0:
    // 0x4219f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4219f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4219f4:
    // 0x4219f4: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x4219f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_4219f8:
    // 0x4219f8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x4219f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4219fc:
    // 0x4219fc: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_421a00:
    if (ctx->pc == 0x421A00u) {
        ctx->pc = 0x421A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4219FCu;
        // 0x421a00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421A04u;
        goto label_421a04;
    }
    ctx->pc = 0x4219FCu;
    {
        const bool branch_taken_0x4219fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x421A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4219FCu;
        // 0x421a00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4219fc) {
            ctx->pc = 0x421AB0u;
            goto label_421ab0;
        }
    }
    ctx->pc = 0x421A04u;
label_421a04:
    // 0x421a04: 0x8e450108  lw          $a1, 0x108($s2)
    ctx->pc = 0x421a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_421a08:
    // 0x421a08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x421a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421a0c:
    // 0x421a0c: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x421a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_421a10:
    // 0x421a10: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x421a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_421a14:
    // 0x421a14: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x421a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_421a18:
    // 0x421a18: 0x2812  mflo        $a1
    ctx->pc = 0x421a18u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_421a1c:
    // 0x421a1c: 0x60f809  jalr        $v1
label_421a20:
    if (ctx->pc == 0x421A20u) {
        ctx->pc = 0x421A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A1Cu;
        // 0x421a20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421A24u;
        goto label_421a24;
    }
    ctx->pc = 0x421A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421A24u);
        ctx->pc = 0x421A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A1Cu;
        // 0x421a20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421A1Cu, 0x421A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421A24u;
label_421a24:
    // 0x421a24: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x421a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421a28:
    // 0x421a28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x421a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421a2c:
    // 0x421a2c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421a30:
    // 0x421a30: 0x84e40050  lh          $a0, 0x50($a3)
    ctx->pc = 0x421a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_421a34:
    // 0x421a34: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x421a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_421a38:
    // 0x421a38: 0x40f809  jalr        $v0
label_421a3c:
    if (ctx->pc == 0x421A3Cu) {
        ctx->pc = 0x421A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A38u;
        // 0x421a3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421A40u;
        goto label_421a40;
    }
    ctx->pc = 0x421A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421A40u);
        ctx->pc = 0x421A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A38u;
        // 0x421a3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421A38u, 0x421A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421A40u;
label_421a40:
    // 0x421a40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x421a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_421a44:
    // 0x421a44: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x421a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_421a48:
    // 0x421a48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_421a4c:
    if (ctx->pc == 0x421A4Cu) {
        ctx->pc = 0x421A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A48u;
        // 0x421a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421A50u;
        goto label_421a50;
    }
    ctx->pc = 0x421A48u;
    {
        const bool branch_taken_0x421a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A48u;
        // 0x421a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421a48) {
            ctx->pc = 0x421A58u;
            goto label_421a58;
        }
    }
    ctx->pc = 0x421A50u;
label_421a50:
    // 0x421a50: 0x10000017  b           . + 4 + (0x17 << 2)
label_421a54:
    if (ctx->pc == 0x421A54u) {
        ctx->pc = 0x421A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A50u;
        // 0x421a54: 0xae42011c  sw          $v0, 0x11C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421A58u;
        goto label_421a58;
    }
    ctx->pc = 0x421A50u;
    {
        const bool branch_taken_0x421a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A50u;
        // 0x421a54: 0xae42011c  sw          $v0, 0x11C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421a50) {
            ctx->pc = 0x421AB0u;
            goto label_421ab0;
        }
    }
    ctx->pc = 0x421A58u;
label_421a58:
    // 0x421a58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x421a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421a5c:
    // 0x421a5c: 0x2538021  addu        $s0, $s2, $s3
    ctx->pc = 0x421a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_421a60:
    // 0x421a60: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x421a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_421a64:
    // 0x421a64: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x421a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_421a68:
    // 0x421a68: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x421a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_421a6c:
    // 0x421a6c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x421a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_421a70:
    // 0x421a70: 0x60f809  jalr        $v1
label_421a74:
    if (ctx->pc == 0x421A74u) {
        ctx->pc = 0x421A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A70u;
        // 0x421a74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421A78u;
        goto label_421a78;
    }
    ctx->pc = 0x421A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421A78u);
        ctx->pc = 0x421A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A70u;
        // 0x421a74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421A70u, 0x421A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421A78u;
label_421a78:
    // 0x421a78: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x421a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_421a7c:
    // 0x421a7c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x421a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_421a80:
    // 0x421a80: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x421a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_421a84:
    // 0x421a84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421a88:
    // 0x421a88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x421a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_421a8c:
    // 0x421a8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x421a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_421a90:
    // 0x421a90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421a94:
    // 0x421a94: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421a98:
    // 0x421a98: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421a9c:
    // 0x421a9c: 0x40f809  jalr        $v0
label_421aa0:
    if (ctx->pc == 0x421AA0u) {
        ctx->pc = 0x421AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A9Cu;
        // 0x421aa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421AA4u;
        goto label_421aa4;
    }
    ctx->pc = 0x421A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421AA4u);
        ctx->pc = 0x421AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A9Cu;
        // 0x421aa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421A9Cu, 0x421AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421AA4u;
label_421aa4:
    // 0x421aa4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x421aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_421aa8:
    // 0x421aa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x421aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_421aac:
    // 0x421aac: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x421aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_421ab0:
    // 0x421ab0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x421ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_421ab4:
    // 0x421ab4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x421ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_421ab8:
    // 0x421ab8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x421ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_421abc:
    // 0x421abc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x421abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_421ac0:
    // 0x421ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x421ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_421ac4:
    // 0x421ac4: 0x3e00008  jr          $ra
label_421ac8:
    if (ctx->pc == 0x421AC8u) {
        ctx->pc = 0x421AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AC4u;
        // 0x421ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421ACCu;
        goto label_421acc;
    }
    ctx->pc = 0x421AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AC4u;
        // 0x421ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421ACCu;
label_421acc:
    // 0x421acc: 0x0  nop
    ctx->pc = 0x421accu;
    // NOP
    ctx->pc = 0x421ad0u;
}
