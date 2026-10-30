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

// Function: sub_002EBDB8
// Address: 0x2ebdb8 - 0x2ebe20
void sub_002EBDB8_0x2ebdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBDB8_0x2ebdb8");
#endif

    switch (ctx->pc) {
        case 0x2ebde0u: goto label_2ebde0;
        case 0x2ebdf0u: goto label_2ebdf0;
        default: break;
    }

    ctx->pc = 0x2ebdb8u;

    // 0x2ebdb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ebdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ebdbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ebdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ebdc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ebdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ebdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ebdc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ebdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ebdcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2ebdccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebdd8: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x2EBDD8u;
    SET_GPR_U32(ctx, 31, 0x2EBDE0u);
    ctx->pc = 0x2EBDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDD8u;
    // 0x2ebddc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2EBDD8u, 0x2EBDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDE0u;
label_2ebde0:
    // 0x2ebde0: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBDE0u;
    {
        const bool branch_taken_0x2ebde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2ebde0) {
            ctx->pc = 0x2EBDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBDE0u;
            // 0x2ebde4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBDFCu;
            goto label_2ebdfc;
        }
    }
    ctx->pc = 0x2EBDE8u;
    // 0x2ebde8: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x2EBDE8u;
    SET_GPR_U32(ctx, 31, 0x2EBDF0u);
    ctx->pc = 0x2EBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDE8u;
    // 0x2ebdec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EBDE8u, 0x2EBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDF0u;
label_2ebdf0:
    // 0x2ebdf0: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBDF0u;
    {
        const bool branch_taken_0x2ebdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDF0u;
        // 0x2ebdf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdf0) {
            ctx->pc = 0x2EBE08u;
            goto label_2ebe08;
        }
    }
    ctx->pc = 0x2EBDF8u;
    // 0x2ebdf8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ebdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ebdfc:
    // 0x2ebdfc: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x2ebdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2ebe00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ebe00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ebe04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ebe04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebe08:
    // 0x2ebe08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ebe08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebe0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ebe0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebe10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebe14: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE14u;
        // 0x2ebe18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBE1Cu;
    // 0x2ebe1c: 0x0  nop
    ctx->pc = 0x2ebe1cu;
    // NOP
    ctx->pc = 0x2ebe20u;
}
