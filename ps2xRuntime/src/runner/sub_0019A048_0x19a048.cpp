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

// Function: sub_0019A048
// Address: 0x19a048 - 0x19a118
void sub_0019A048_0x19a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A048_0x19a048");
#endif

    switch (ctx->pc) {
        case 0x19a070u: goto label_19a070;
        case 0x19a090u: goto label_19a090;
        case 0x19a0a0u: goto label_19a0a0;
        case 0x19a0d4u: goto label_19a0d4;
        default: break;
    }

    ctx->pc = 0x19a048u;

    // 0x19a048: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19a04c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19a050: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19a054: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19a058: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19a05c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x19a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x19a060: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x19a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x19a064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a068: 0xc066846  jal         func_19A118
    ctx->pc = 0x19A068u;
    SET_GPR_U32(ctx, 31, 0x19A070u);
    ctx->pc = 0x19A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A068u;
    // 0x19a06c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A118u, 0x19A068u, 0x19A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A070u;
label_19a070:
    // 0x19a070: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x19a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x19a074: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19A074u;
    {
        const bool branch_taken_0x19a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A074u;
        // 0x19a078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a074) {
            ctx->pc = 0x19A0F4u;
            goto label_19a0f4;
        }
    }
    ctx->pc = 0x19A07Cu;
    // 0x19a07c: 0x26340098  addiu       $s4, $s1, 0x98
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x19a080: 0x263300f4  addiu       $s3, $s1, 0xF4
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
    // 0x19a084: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x19a084u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x19a088: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x19a088u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19a08c: 0x2151818  mult        $v1, $s0, $s5
    ctx->pc = 0x19a08cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19a090:
    // 0x19a090: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x19a090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    // 0x19a094: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x19a098: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x19A098u;
    SET_GPR_U32(ctx, 31, 0x19A0A0u);
    ctx->pc = 0x19A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A098u;
    // 0x19a09c: 0x94450002  lhu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x19A098u, 0x19A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0A0u;
label_19a0a0:
    // 0x19a0a0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x19a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x19a0a4: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19a0a8: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x19a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    // 0x19a0ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a0b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19a0b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0b8: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x19a0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x19a0bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19a0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a0c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19a0c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a0c4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19a0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19a0c8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a0cc: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x19A0CCu;
    SET_GPR_U32(ctx, 31, 0x19A0D4u);
    ctx->pc = 0x19A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0CCu;
    // 0x19a0d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x19A0CCu, 0x19A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0D4u;
label_19a0d4:
    // 0x19a0d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19a0d8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x19a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19a0dc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x19a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x19a0e0: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x19a0e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19a0e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19a0e8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x19a0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a0ec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19A0ECu;
    {
        const bool branch_taken_0x19a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0ECu;
        // 0x19a0f0: 0x2151818  mult        $v1, $s0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0ec) {
            ctx->pc = 0x19A090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a090;
        }
    }
    ctx->pc = 0x19A0F4u;
label_19a0f4:
    // 0x19a0f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a0f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a0fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19a0fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a100: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19a100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a104: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x19a104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a108: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x19a108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a110: 0x3e00008  jr          $ra
    ctx->pc = 0x19A110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A110u;
        // 0x19a114: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A118u;
}
