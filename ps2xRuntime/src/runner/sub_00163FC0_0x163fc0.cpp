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

// Function: sub_00163FC0
// Address: 0x163fc0 - 0x164100
void sub_00163FC0_0x163fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163FC0_0x163fc0");
#endif

    switch (ctx->pc) {
        case 0x163fecu: goto label_163fec;
        case 0x164030u: goto label_164030;
        case 0x164090u: goto label_164090;
        case 0x1640a8u: goto label_1640a8;
        case 0x1640e8u: goto label_1640e8;
        default: break;
    }

    ctx->pc = 0x163fc0u;

    // 0x163fc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x163fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x163fc4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x163fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x163fc8: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x163fcc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x163fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x163fd0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x163fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fd4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x163fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x163fd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x163fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x163fe4: 0xc058fc4  jal         func_163F10
    ctx->pc = 0x163FE4u;
    SET_GPR_U32(ctx, 31, 0x163FECu);
    ctx->pc = 0x163FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163FE4u;
    // 0x163fe8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163F10u, 0x163FE4u, 0x163FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163FECu;
label_163fec:
    // 0x163fec: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x163fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x163ff0: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x163FF0u;
    {
        const bool branch_taken_0x163ff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FF0u;
        // 0x163ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ff0) {
            ctx->pc = 0x1640E8u;
            goto label_1640e8;
        }
    }
    ctx->pc = 0x163FF8u;
    // 0x163ff8: 0x6010030  bgez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x163FF8u;
    {
        const bool branch_taken_0x163ff8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x163FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FF8u;
        // 0x163ffc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ff8) {
            ctx->pc = 0x1640BCu;
            goto label_1640bc;
        }
    }
    ctx->pc = 0x164000u;
    // 0x164000: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x164000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164004: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x164008: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x164008u;
    {
        const bool branch_taken_0x164008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164008u;
        // 0x16400c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164008) {
            ctx->pc = 0x1640A0u;
            goto label_1640a0;
        }
    }
    ctx->pc = 0x164010u;
    // 0x164010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x164010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164014: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x164014u;
    {
        const bool branch_taken_0x164014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x164018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164014u;
        // 0x164018: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164014) {
            ctx->pc = 0x16407Cu;
            goto label_16407c;
        }
    }
    ctx->pc = 0x16401Cu;
    // 0x16401c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16401cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x164020: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x164020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164024: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x164024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164028: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x164028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16402c: 0x0  nop
    ctx->pc = 0x16402cu;
    // NOP
label_164030:
    // 0x164030: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x164030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x164034: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x164034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x164038: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x164038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16403c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x164040: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x164040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x164044: 0x14490009  bne         $v0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164044u;
    {
        const bool branch_taken_0x164044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x164048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164044u;
        // 0x164048: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164044) {
            ctx->pc = 0x16406Cu;
            goto label_16406c;
        }
    }
    ctx->pc = 0x16404Cu;
    // 0x16404c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16404cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164050: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x164050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x164054: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x164054u;
    {
        const bool branch_taken_0x164054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x164058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164054u;
        // 0x164058: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164054) {
            ctx->pc = 0x16406Cu;
            goto label_16406c;
        }
    }
    ctx->pc = 0x16405Cu;
    // 0x16405c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x16405cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x164060: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x164060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x164064: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x164064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x164068: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x164068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_16406c:
    // 0x16406c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16406cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x164070: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x164070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x164074: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x164074u;
    {
        const bool branch_taken_0x164074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164074u;
        // 0x164078: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164074) {
            ctx->pc = 0x164030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164030;
        }
    }
    ctx->pc = 0x16407Cu;
label_16407c:
    // 0x16407c: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16407Cu;
    {
        const bool branch_taken_0x16407c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x164080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16407Cu;
        // 0x164080: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16407c) {
            ctx->pc = 0x1640D8u;
            goto label_1640d8;
        }
    }
    ctx->pc = 0x164084u;
    // 0x164084: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x164084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x164088: 0xc0cd526  jal         func_335498
    ctx->pc = 0x164088u;
    SET_GPR_U32(ctx, 31, 0x164090u);
    ctx->pc = 0x16408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164088u;
    // 0x16408c: 0x2484b878  addiu       $a0, $a0, -0x4788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x164088u, 0x164090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164090u;
label_164090:
    // 0x164090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164094: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x164094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x164098: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164098u;
    {
        const bool branch_taken_0x164098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164098u;
        // 0x16409c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164098) {
            ctx->pc = 0x1640B8u;
            goto label_1640b8;
        }
    }
    ctx->pc = 0x1640A0u;
label_1640a0:
    // 0x1640a0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x1640A0u;
    SET_GPR_U32(ctx, 31, 0x1640A8u);
    ctx->pc = 0x1640A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640A0u;
    // 0x1640a4: 0x2484b878  addiu       $a0, $a0, -0x4788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x1640A0u, 0x1640A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640A8u;
label_1640a8:
    // 0x1640a8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1640a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1640ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1640acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640b0: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1640B0u;
    {
        const bool branch_taken_0x1640b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1640B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640B0u;
        // 0x1640b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640b0) {
            ctx->pc = 0x1640E8u;
            goto label_1640e8;
        }
    }
    ctx->pc = 0x1640B8u;
label_1640b8:
    // 0x1640b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1640bc:
    // 0x1640bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1640bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1640c0: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x1640c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1640c4: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x1640c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1640c8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1640c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1640cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1640d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1640D0u;
    {
        const bool branch_taken_0x1640d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0xc41018  mult        $v0, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640d0) {
            ctx->pc = 0x1640E0u;
            goto label_1640e0;
        }
    }
    ctx->pc = 0x1640D8u;
label_1640d8:
    // 0x1640d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1640D8u;
    {
        const bool branch_taken_0x1640d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D8u;
        // 0x1640dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640d8) {
            ctx->pc = 0x1640E8u;
            goto label_1640e8;
        }
    }
    ctx->pc = 0x1640E0u;
label_1640e0:
    // 0x1640e0: 0xc042f60  jal         func_10BD80
    ctx->pc = 0x1640E0u;
    SET_GPR_U32(ctx, 31, 0x1640E8u);
    ctx->pc = 0x1640E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640E0u;
    // 0x1640e4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD80u, 0x1640E0u, 0x1640E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640E8u;
label_1640e8:
    // 0x1640e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1640e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1640ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1640ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1640f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1640f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1640f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1640f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1640f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1640F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1640FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640F8u;
        // 0x1640fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1640F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164100u;
}
