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

// Function: sub_0021CDA8
// Address: 0x21cda8 - 0x21ce08
void sub_0021CDA8_0x21cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CDA8_0x21cda8");
#endif

    switch (ctx->pc) {
        case 0x21cdd8u: goto label_21cdd8;
        case 0x21cdecu: goto label_21cdec;
        default: break;
    }

    ctx->pc = 0x21cda8u;

    // 0x21cda8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21cda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21cdac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x21cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21cdb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21cdb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21cdbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21cdc0: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x21cdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x21cdc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21cdc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cdcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdd0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x21CDD0u;
    SET_GPR_U32(ctx, 31, 0x21CDD8u);
    ctx->pc = 0x21CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CDD0u;
    // 0x21cdd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x21CDD0u, 0x21CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CDD8u;
label_21cdd8:
    // 0x21cdd8: 0xa200008f  sb          $zero, 0x8F($s0)
    ctx->pc = 0x21cdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cde0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21cde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cde4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x21CDE4u;
    SET_GPR_U32(ctx, 31, 0x21CDECu);
    ctx->pc = 0x21CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CDE4u;
    // 0x21cde8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x21CDE4u, 0x21CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CDECu;
label_21cdec:
    // 0x21cdec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21cdecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cdf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21cdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cdf4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21cdf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x21CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CDFCu;
        // 0x21ce00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CE04u;
    // 0x21ce04: 0x0  nop
    ctx->pc = 0x21ce04u;
    // NOP
    ctx->pc = 0x21ce08u;
}
