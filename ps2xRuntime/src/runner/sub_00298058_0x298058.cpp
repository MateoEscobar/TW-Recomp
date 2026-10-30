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

// Function: sub_00298058
// Address: 0x298058 - 0x2980c0
void sub_00298058_0x298058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298058_0x298058");
#endif

    switch (ctx->pc) {
        case 0x29806cu: goto label_29806c;
        case 0x298074u: goto label_298074;
        case 0x298094u: goto label_298094;
        case 0x2980acu: goto label_2980ac;
        default: break;
    }

    ctx->pc = 0x298058u;

    // 0x298058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29805c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x298060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298064: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x298064u;
    SET_GPR_U32(ctx, 31, 0x29806Cu);
    ctx->pc = 0x298068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298064u;
    // 0x298068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298064u, 0x29806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29806Cu;
label_29806c:
    // 0x29806c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29806Cu;
    SET_GPR_U32(ctx, 31, 0x298074u);
    ctx->pc = 0x298070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29806Cu;
    // 0x298070: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29806Cu, 0x298074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298074u;
label_298074:
    // 0x298074: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298074u;
    {
        const bool branch_taken_0x298074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298074u;
        // 0x298078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298074) {
            ctx->pc = 0x29809Cu;
            goto label_29809c;
        }
    }
    ctx->pc = 0x29807Cu;
    // 0x29807c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x29807cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x298080: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29808c: 0xc0a5bc2  jal         func_296F08
    ctx->pc = 0x29808Cu;
    SET_GPR_U32(ctx, 31, 0x298094u);
    ctx->pc = 0x298090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29808Cu;
    // 0x298090: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F08u, 0x29808Cu, 0x298094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298094u;
label_298094:
    // 0x298094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x298094u;
    {
        const bool branch_taken_0x298094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298094u;
        // 0x298098: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298094) {
            ctx->pc = 0x2980B0u;
            goto label_2980b0;
        }
    }
    ctx->pc = 0x29809Cu;
label_29809c:
    // 0x29809c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2980a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2980a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2980a4: 0xc0a5bf2  jal         func_296FC8
    ctx->pc = 0x2980A4u;
    SET_GPR_U32(ctx, 31, 0x2980ACu);
    ctx->pc = 0x2980A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980A4u;
    // 0x2980a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296FC8u, 0x2980A4u, 0x2980ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980ACu;
label_2980ac:
    // 0x2980ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2980acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2980b0:
    // 0x2980b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2980b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2980b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2980B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2980B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980B4u;
        // 0x2980b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2980B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2980BCu;
    // 0x2980bc: 0x0  nop
    ctx->pc = 0x2980bcu;
    // NOP
    ctx->pc = 0x2980c0u;
}
