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

// Function: sub_004ECDE8
// Address: 0x4ecde8 - 0x4ece90
void sub_004ECDE8_0x4ecde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECDE8_0x4ecde8");
#endif

    switch (ctx->pc) {
        case 0x4ece30u: goto label_4ece30;
        case 0x4ece58u: goto label_4ece58;
        default: break;
    }

    ctx->pc = 0x4ecde8u;

    // 0x4ecde8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ecde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4ecdec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4ecdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4ecdf0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4ecdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4ecdf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ecdf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecdf8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ecdf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecdfc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4ecdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4ece00: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4ece00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4ece04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ece04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4ece08: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ece08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ece0c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4ece0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4ece10: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4ece10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4ece14: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4ECE14u;
    {
        const bool branch_taken_0x4ece14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ECE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECE14u;
        // 0x4ece18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ece14) {
            ctx->pc = 0x4ECE6Cu;
            goto label_4ece6c;
        }
    }
    ctx->pc = 0x4ECE1Cu;
    // 0x4ece1c: 0xb49023  subu        $s2, $a1, $s4
    ctx->pc = 0x4ece1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4ece20: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x4ece20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece24: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4ece24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ece28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ece2c: 0x0  nop
    ctx->pc = 0x4ece2cu;
    // NOP
label_4ece30:
    // 0x4ece30: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4ece30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4ece34: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4ece34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ece38: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x4ece38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4ece3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ece3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ece40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ece40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ece44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece48: 0x123083  sra         $a2, $s2, 2
    ctx->pc = 0x4ece48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 2));
    // 0x4ece4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ece4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece50: 0xc13b31a  jal         func_4ECC68
    ctx->pc = 0x4ECE50u;
    SET_GPR_U32(ctx, 31, 0x4ECE58u);
    ctx->pc = 0x4ECE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECE50u;
    // 0x4ece54: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECC68u, 0x4ECE50u, 0x4ECE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECE58u;
label_4ece58:
    // 0x4ece58: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4ece58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4ece5c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ece5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ece60: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4ece60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4ece64: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x4ECE64u;
    {
        const bool branch_taken_0x4ece64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ece64) {
            ctx->pc = 0x4ECE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECE64u;
            // 0x4ece68: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ECE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ece30;
        }
    }
    ctx->pc = 0x4ECE6Cu;
label_4ece6c:
    // 0x4ece6c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4ece6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ece70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4ece70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ece74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ece74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ece78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4ece78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ece7c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4ece7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ece80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ece80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ece84: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECE84u;
        // 0x4ece88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ECE8Cu;
    // 0x4ece8c: 0x0  nop
    ctx->pc = 0x4ece8cu;
    // NOP
    ctx->pc = 0x4ece90u;
}
