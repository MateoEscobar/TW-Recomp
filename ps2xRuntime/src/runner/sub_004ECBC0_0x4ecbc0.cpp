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

// Function: sub_004ECBC0
// Address: 0x4ecbc0 - 0x4ecc68
void sub_004ECBC0_0x4ecbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECBC0_0x4ecbc0");
#endif

    switch (ctx->pc) {
        case 0x4ecbf0u: goto label_4ecbf0;
        default: break;
    }

    ctx->pc = 0x4ecbc0u;

    // 0x4ecbc0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4ecbc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecbc4: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x4ecbc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecbc8: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x4ecbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4ecbcc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4ecbccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecbd0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4ecbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4ecbd4: 0x188202a  slt         $a0, $t4, $t0
    ctx->pc = 0x4ecbd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4ecbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ecbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ecbdc: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4ECBDCu;
    {
        const bool branch_taken_0x4ecbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECBDCu;
        // 0x4ecbe0: 0x25043  sra         $t2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecbdc) {
            ctx->pc = 0x4ECC54u;
            goto label_4ecc54;
        }
    }
    ctx->pc = 0x4ECBE4u;
    // 0x4ecbe4: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x4ecbe4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x4ecbe8: 0x240d0084  addiu       $t5, $zero, 0x84
    ctx->pc = 0x4ecbe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ecbec: 0x0  nop
    ctx->pc = 0x4ecbecu;
    // NOP
label_4ecbf0:
    // 0x4ecbf0: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x4ecbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4ecbf4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4ecbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ecbf8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4ecbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4ecbfc: 0x8dc4489c  lw          $a0, 0x489C($t6)
    ctx->pc = 0x4ecbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 18588)));
    // 0x4ecc00: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4ecc00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ecc04: 0xad1018  mult        $v0, $a1, $t5
    ctx->pc = 0x4ecc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ecc08: 0x248414d4  addiu       $a0, $a0, 0x14D4
    ctx->pc = 0x4ecc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
    // 0x4ecc0c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ecc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ecc10: 0x6d1818  mult        $v1, $v1, $t5
    ctx->pc = 0x4ecc10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ecc14: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x4ecc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ecc18: 0x90a6000c  lbu         $a2, 0xC($a1)
    ctx->pc = 0x4ecc18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4ecc1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ecc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ecc20: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x4ecc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ecc24: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4ecc24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4ecc28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4ECC28u;
    {
        const bool branch_taken_0x4ecc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECC28u;
        // 0x4ecc2c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecc28) {
            ctx->pc = 0x4ECC54u;
            goto label_4ecc54;
        }
    }
    ctx->pc = 0x4ECC30u;
    // 0x4ecc30: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x4ecc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecc34: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4ecc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4ecc38: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x4ecc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4ecc3c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4ecc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x4ecc40: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x4ecc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4ecc44: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x4ecc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4ecc48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ecc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ecc4c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4ECC4Cu;
    {
        const bool branch_taken_0x4ecc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ECC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECC4Cu;
        // 0x4ecc50: 0x35043  sra         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecc4c) {
            ctx->pc = 0x4ECBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ecbf0;
        }
    }
    ctx->pc = 0x4ECC54u;
label_4ecc54:
    // 0x4ecc54: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4ecc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4ecc58: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4ecc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4ecc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECC5Cu;
        // 0x4ecc60: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ECC64u;
    // 0x4ecc64: 0x0  nop
    ctx->pc = 0x4ecc64u;
    // NOP
    ctx->pc = 0x4ecc68u;
}
