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

// Function: sub_0043AB90
// Address: 0x43ab90 - 0x43ac38
void sub_0043AB90_0x43ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AB90_0x43ab90");
#endif

    ctx->pc = 0x43ab90u;

    // 0x43ab90: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x43ab90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43ab94: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x43ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x43ab98: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x43AB98u;
    {
        const bool branch_taken_0x43ab98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AB98u;
        // 0x43ab9c: 0x28620073  slti        $v0, $v1, 0x73 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)115) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ab98) {
            ctx->pc = 0x43ABCCu;
            goto label_43abcc;
        }
    }
    ctx->pc = 0x43ABA0u;
    // 0x43aba0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43ABA0u;
    {
        const bool branch_taken_0x43aba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABA0u;
        // 0x43aba4: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43aba0) {
            ctx->pc = 0x43ABB8u;
            goto label_43abb8;
        }
    }
    ctx->pc = 0x43ABA8u;
    // 0x43aba8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x43ABA8u;
    {
        const bool branch_taken_0x43aba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABA8u;
        // 0x43abac: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43aba8) {
            ctx->pc = 0x43ABECu;
            goto label_43abec;
        }
    }
    ctx->pc = 0x43ABB0u;
    // 0x43abb0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x43ABB0u;
    {
        const bool branch_taken_0x43abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABB0u;
        // 0x43abb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43abb0) {
            ctx->pc = 0x43ABFCu;
            goto label_43abfc;
        }
    }
    ctx->pc = 0x43ABB8u;
label_43abb8:
    // 0x43abb8: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x43abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x43abbc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43ABBCu;
    {
        const bool branch_taken_0x43abbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABBCu;
        // 0x43abc0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43abbc) {
            ctx->pc = 0x43ABDCu;
            goto label_43abdc;
        }
    }
    ctx->pc = 0x43ABC4u;
    // 0x43abc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x43ABC4u;
    {
        const bool branch_taken_0x43abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABC4u;
        // 0x43abc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43abc4) {
            ctx->pc = 0x43ABFCu;
            goto label_43abfc;
        }
    }
    ctx->pc = 0x43ABCCu;
label_43abcc:
    // 0x43abcc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x43abccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43abd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43abd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43abd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x43ABD4u;
    {
        const bool branch_taken_0x43abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABD4u;
        // 0x43abd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43abd4) {
            ctx->pc = 0x43AC04u;
            goto label_43ac04;
        }
    }
    ctx->pc = 0x43ABDCu;
label_43abdc:
    // 0x43abdc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x43abdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43abe0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43abe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43abe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x43ABE4u;
    {
        const bool branch_taken_0x43abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABE4u;
        // 0x43abe8: 0x24080600  addiu       $t0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43abe4) {
            ctx->pc = 0x43AC04u;
            goto label_43ac04;
        }
    }
    ctx->pc = 0x43ABECu;
label_43abec:
    // 0x43abec: 0x24090108  addiu       $t1, $zero, 0x108
    ctx->pc = 0x43abecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x43abf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43abf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43abf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43ABF4u;
    {
        const bool branch_taken_0x43abf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABF4u;
        // 0x43abf8: 0x24080208  addiu       $t0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43abf4) {
            ctx->pc = 0x43AC04u;
            goto label_43ac04;
        }
    }
    ctx->pc = 0x43ABFCu;
label_43abfc:
    // 0x43abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x43ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ABFCu;
        // 0x43ac00: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43ABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AC04u;
label_43ac04:
    // 0x43ac04: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x43ac04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x43ac08: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x43ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x43ac0c: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x43AC0Cu;
    {
        const bool branch_taken_0x43ac0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x43ac0c) {
            ctx->pc = 0x43AC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AC0Cu;
            // 0x43ac10: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AC24u;
            goto label_43ac24;
        }
    }
    ctx->pc = 0x43AC14u;
    // 0x43ac14: 0x80a20002  lb          $v0, 0x2($a1)
    ctx->pc = 0x43ac14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x43ac18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x43AC18u;
    {
        const bool branch_taken_0x43ac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x43AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AC18u;
        // 0x43ac1c: 0xe81825  or          $v1, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ac18) {
            ctx->pc = 0x43AC2Cu;
            goto label_43ac2c;
        }
    }
    ctx->pc = 0x43AC20u;
    // 0x43ac20: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x43ac20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43ac24:
    // 0x43ac24: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x43ac24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43ac28: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x43ac28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_43ac2c:
    // 0x43ac2c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x43ac2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ac30: 0x3e00008  jr          $ra
    ctx->pc = 0x43AC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AC30u;
        // 0x43ac34: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AC38u;
}
