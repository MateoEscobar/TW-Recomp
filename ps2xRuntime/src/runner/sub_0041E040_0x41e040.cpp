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

// Function: sub_0041E040
// Address: 0x41e040 - 0x41e0b8
void sub_0041E040_0x41e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E040_0x41e040");
#endif

    switch (ctx->pc) {
        case 0x41e070u: goto label_41e070;
        case 0x41e080u: goto label_41e080;
        case 0x41e0acu: goto label_41e0ac;
        default: break;
    }

    ctx->pc = 0x41e040u;

    // 0x41e040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41e044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41e048: 0xa0800fd4  sb          $zero, 0xFD4($a0)
    ctx->pc = 0x41e048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4052), (uint8_t)GPR_U32(ctx, 0));
    // 0x41e04c: 0xa0801034  sb          $zero, 0x1034($a0)
    ctx->pc = 0x41e04cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4148), (uint8_t)GPR_U32(ctx, 0));
    // 0x41e050: 0xa0800ff4  sb          $zero, 0xFF4($a0)
    ctx->pc = 0x41e050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4084), (uint8_t)GPR_U32(ctx, 0));
    // 0x41e054: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x41E054u;
    {
        const bool branch_taken_0x41e054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E054u;
        // 0x41e058: 0xa0801014  sb          $zero, 0x1014($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4116), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e054) {
            ctx->pc = 0x41E0ACu;
            goto label_41e0ac;
        }
    }
    ctx->pc = 0x41E05Cu;
    // 0x41e05c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41e05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e060: 0x240703f4  addiu       $a3, $zero, 0x3F4
    ctx->pc = 0x41e060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41e064: 0x24880004  addiu       $t0, $a0, 0x4
    ctx->pc = 0x41e064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x41e068: 0xc71018  mult        $v0, $a2, $a3
    ctx->pc = 0x41e068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41e06c: 0x0  nop
    ctx->pc = 0x41e06cu;
    // NOP
label_41e070:
    // 0x41e070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41e070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e074: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x41e074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x41e078: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x41e078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41e07c: 0x0  nop
    ctx->pc = 0x41e07cu;
    // NOP
label_41e080:
    // 0x41e080: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x41e080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x41e084: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41e084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x41e088: 0x2ca20017  sltiu       $v0, $a1, 0x17
    ctx->pc = 0x41e088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x41e08c: 0x0  nop
    ctx->pc = 0x41e08cu;
    // NOP
    // 0x41e090: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x41E090u;
    {
        const bool branch_taken_0x41e090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E090u;
        // 0x41e094: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e090) {
            ctx->pc = 0x41E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e080;
        }
    }
    ctx->pc = 0x41E098u;
    // 0x41e098: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x41e098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x41e09c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x41E09Cu;
    {
        const bool branch_taken_0x41e09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E09Cu;
        // 0x41e0a0: 0xc71018  mult        $v0, $a2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e09c) {
            ctx->pc = 0x41E070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e070;
        }
    }
    ctx->pc = 0x41E0A4u;
    // 0x41e0a4: 0xc10782e  jal         func_41E0B8
    ctx->pc = 0x41E0A4u;
    SET_GPR_U32(ctx, 31, 0x41E0ACu);
    ctx->pc = 0x41E0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E0B8u, 0x41E0A4u, 0x41E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E0ACu;
label_41e0ac:
    // 0x41e0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x41E0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E0B0u;
        // 0x41e0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E0B8u;
}
