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

// Function: sub_004D87B8
// Address: 0x4d87b8 - 0x4d8868
void sub_004D87B8_0x4d87b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D87B8_0x4d87b8");
#endif

    ctx->pc = 0x4d87b8u;

    // 0x4d87b8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4d87b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d87bc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4d87bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d87c0: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x4d87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4d87c4: 0x2c427fff  sltiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x4d87c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32767) ? 1 : 0);
    // 0x4d87c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4D87C8u;
    {
        const bool branch_taken_0x4d87c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D87C8u;
        // 0x4d87cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d87c8) {
            ctx->pc = 0x4D8810u;
            goto label_4d8810;
        }
    }
    ctx->pc = 0x4D87D0u;
    // 0x4d87d0: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x4d87d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x4d87d4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4d87d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d87d8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4D87D8u;
    {
        const bool branch_taken_0x4d87d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d87d8) {
            ctx->pc = 0x4D87DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D87D8u;
            // 0x4d87dc: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8814u;
            goto label_4d8814;
        }
    }
    ctx->pc = 0x4D87E0u;
    // 0x4d87e0: 0x2c627fff  sltiu       $v0, $v1, 0x7FFF
    ctx->pc = 0x4d87e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32767) ? 1 : 0);
    // 0x4d87e4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4D87E4u;
    {
        const bool branch_taken_0x4d87e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d87e4) {
            ctx->pc = 0x4D87E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D87E4u;
            // 0x4d87e8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8814u;
            goto label_4d8814;
        }
    }
    ctx->pc = 0x4D87ECu;
    // 0x4d87ec: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x4d87ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4d87f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D87F0u;
    {
        const bool branch_taken_0x4d87f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D87F0u;
        // 0x4d87f4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d87f0) {
            ctx->pc = 0x4D8814u;
            goto label_4d8814;
        }
    }
    ctx->pc = 0x4D87F8u;
    // 0x4d87f8: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x4d87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x4d87fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8800: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x4d8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x4d8804: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8808: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8808u;
        // 0x4d880c: 0xad430018  sw          $v1, 0x18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8810u;
label_4d8810:
    // 0x4d8810: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4d8810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4d8814:
    // 0x4d8814: 0x8d460018  lw          $a2, 0x18($t2)
    ctx->pc = 0x4d8814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x4d8818: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x4d8818u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d881c: 0x834018  mult        $t0, $a0, $v1
    ctx->pc = 0x4d881cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d8820: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x4d8820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4d8824: 0x30c70001  andi        $a3, $a2, 0x1
    ctx->pc = 0x4d8824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4d8828: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x4d8828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x4d882c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4d882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4d8830: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x4d8830u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x4d8834: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x4d8834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d8838: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4d8838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d883c: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x4d883cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x4d8840: 0x484006  srlv        $t0, $t0, $v0
    ctx->pc = 0x4d8840u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x4d8844: 0x452806  srlv        $a1, $a1, $v0
    ctx->pc = 0x4d8844u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x4d8848: 0xad460018  sw          $a2, 0x18($t2)
    ctx->pc = 0x4d8848u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 6));
    // 0x4d884c: 0xad450010  sw          $a1, 0x10($t2)
    ctx->pc = 0x4d884cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 5));
    // 0x4d8850: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8850u;
        // 0x4d8854: 0xad480014  sw          $t0, 0x14($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8858u;
    // 0x4d8858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d8858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d885c: 0x0  nop
    ctx->pc = 0x4d885cu;
    // NOP
    // 0x4d8860: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d8860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8864: 0x0  nop
    ctx->pc = 0x4d8864u;
    // NOP
    ctx->pc = 0x4d8868u;
}
