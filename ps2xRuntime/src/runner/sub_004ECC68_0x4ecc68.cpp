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

// Function: sub_004ECC68
// Address: 0x4ecc68 - 0x4ecd58
void sub_004ECC68_0x4ecc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC68_0x4ecc68");
#endif

    switch (ctx->pc) {
        case 0x4ecca0u: goto label_4ecca0;
        case 0x4ecd48u: goto label_4ecd48;
        default: break;
    }

    ctx->pc = 0x4ecc68u;

    // 0x4ecc68: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4ecc68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecc6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ecc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ecc70: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x4ecc70u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecc74: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x4ecc74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecc78: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x4ecc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x4ecc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ecc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ecc80: 0x24690002  addiu       $t1, $v1, 0x2
    ctx->pc = 0x4ecc80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4ecc84: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4ecc84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecc88: 0x12c102a  slt         $v0, $t1, $t4
    ctx->pc = 0x4ecc88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x4ecc8c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4ECC8Cu;
    {
        const bool branch_taken_0x4ecc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECC8Cu;
        // 0x4ecc90: 0xe0c02d  daddu       $t8, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecc8c) {
            ctx->pc = 0x4ECD0Cu;
            goto label_4ecd0c;
        }
    }
    ctx->pc = 0x4ECC94u;
    // 0x4ecc94: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x4ecc94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x4ecc98: 0x240d0084  addiu       $t5, $zero, 0x84
    ctx->pc = 0x4ecc98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ecc9c: 0x0  nop
    ctx->pc = 0x4ecc9cu;
    // NOP
label_4ecca0:
    // 0x4ecca0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x4ecca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4ecca4: 0x8de5489c  lw          $a1, 0x489C($t7)
    ctx->pc = 0x4ecca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18588)));
    // 0x4ecca8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4ecca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4eccac: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x4eccacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4eccb0: 0x8c46fffc  lw          $a2, -0x4($v0)
    ctx->pc = 0x4eccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4eccb4: 0x24a514d4  addiu       $a1, $a1, 0x14D4
    ctx->pc = 0x4eccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5332));
    // 0x4eccb8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4eccb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4eccbc: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x4eccbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x4eccc0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4eccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eccc4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4eccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eccc8: 0x8d1018  mult        $v0, $a0, $t5
    ctx->pc = 0x4eccc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ecccc: 0x6d1818  mult        $v1, $v1, $t5
    ctx->pc = 0x4eccccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4eccd0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x4eccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4eccd4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4eccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4eccd8: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x4eccd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4eccdc: 0x90a2000c  lbu         $v0, 0xC($a1)
    ctx->pc = 0x4eccdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4ecce0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ecce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ecce4: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4ecce4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4ecce8: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x4ecce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4eccec: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x4eccecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eccf0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4eccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4eccf4: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x4eccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4eccf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4eccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4eccfc: 0x24840  sll         $t1, $v0, 1
    ctx->pc = 0x4eccfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ecd00: 0x12c182a  slt         $v1, $t1, $t4
    ctx->pc = 0x4ecd00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x4ecd04: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4ECD04u;
    {
        const bool branch_taken_0x4ecd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ECD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECD04u;
        // 0x4ecd08: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecd04) {
            ctx->pc = 0x4ECCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ecca0;
        }
    }
    ctx->pc = 0x4ECD0Cu;
label_4ecd0c:
    // 0x4ecd0c: 0x152c0009  bne         $t1, $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x4ECD0Cu;
    {
        const bool branch_taken_0x4ecd0c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        ctx->pc = 0x4ECD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECD0Cu;
        // 0x4ecd10: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecd0c) {
            ctx->pc = 0x4ECD34u;
            goto label_4ecd34;
        }
    }
    ctx->pc = 0x4ECD14u;
    // 0x4ecd14: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x4ecd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4ecd18: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x4ecd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4ecd1c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4ecd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4ecd20: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4ecd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4ecd24: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x4ecd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4ecd28: 0x252affff  addiu       $t2, $t1, -0x1
    ctx->pc = 0x4ecd28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4ecd2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4ecd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4ecd30: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4ecd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4ecd34:
    // 0x4ecd34: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4ecd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecd38: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4ecd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecd3c: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x4ecd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecd40: 0xc13b2f0  jal         func_4ECBC0
    ctx->pc = 0x4ECD40u;
    SET_GPR_U32(ctx, 31, 0x4ECD48u);
    ctx->pc = 0x4ECD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECD40u;
    // 0x4ecd44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECBC0u, 0x4ECD40u, 0x4ECD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECD48u;
label_4ecd48:
    // 0x4ecd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ecd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ecd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECD4Cu;
        // 0x4ecd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ECD54u;
    // 0x4ecd54: 0x0  nop
    ctx->pc = 0x4ecd54u;
    // NOP
    ctx->pc = 0x4ecd58u;
}
