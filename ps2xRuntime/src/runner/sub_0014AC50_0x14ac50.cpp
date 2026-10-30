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

// Function: sub_0014AC50
// Address: 0x14ac50 - 0x14ad90
void sub_0014AC50_0x14ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AC50_0x14ac50");
#endif

    switch (ctx->pc) {
        case 0x14aca8u: goto label_14aca8;
        case 0x14ad38u: goto label_14ad38;
        default: break;
    }

    ctx->pc = 0x14ac50u;

    // 0x14ac50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14ac54: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x14ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x14ac58: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x14ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x14ac5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14ac5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac60: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x14ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x14ac64: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x14ac64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac68: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x14ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x14ac6c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x14ac6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x14ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x14ac74: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x14ac74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14ac7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14ac7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac80: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x14ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x14ac84: 0x2414ff81  addiu       $s4, $zero, -0x7F
    ctx->pc = 0x14ac84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
    // 0x14ac88: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x14ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x14ac8c: 0x2415ff82  addiu       $s5, $zero, -0x7E
    ctx->pc = 0x14ac8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
    // 0x14ac90: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x14ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x14ac94: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x14ac94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ac98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ac9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x14AC9Cu;
    {
        const bool branch_taken_0x14ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC9Cu;
        // 0x14aca0: 0x241e006a  addiu       $fp, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac9c) {
            ctx->pc = 0x14AD30u;
            goto label_14ad30;
        }
    }
    ctx->pc = 0x14ACA4u;
    // 0x14aca4: 0x0  nop
    ctx->pc = 0x14aca4u;
    // NOP
label_14aca8:
    // 0x14aca8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14acac: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ACACu;
    {
        const bool branch_taken_0x14acac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACACu;
        // 0x14acb0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acac) {
            ctx->pc = 0x14ACBCu;
            goto label_14acbc;
        }
    }
    ctx->pc = 0x14ACB4u;
    // 0x14acb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14ACB4u;
    {
        const bool branch_taken_0x14acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACB4u;
        // 0x14acb8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acb4) {
            ctx->pc = 0x14AD08u;
            goto label_14ad08;
        }
    }
    ctx->pc = 0x14ACBCu;
label_14acbc:
    // 0x14acbc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ACBCu;
    {
        const bool branch_taken_0x14acbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACBCu;
        // 0x14acc0: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acbc) {
            ctx->pc = 0x14ACD0u;
            goto label_14acd0;
        }
    }
    ctx->pc = 0x14ACC4u;
    // 0x14acc4: 0x12b040  sll         $s6, $s2, 1
    ctx->pc = 0x14acc4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x14acc8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14ACC8u;
    {
        const bool branch_taken_0x14acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACC8u;
        // 0x14accc: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acc8) {
            ctx->pc = 0x14AD24u;
            goto label_14ad24;
        }
    }
    ctx->pc = 0x14ACD0u;
label_14acd0:
    // 0x14acd0: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x14acd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x14acd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ACD4u;
    {
        const bool branch_taken_0x14acd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACD4u;
        // 0x14acd8: 0x2462001f  addiu       $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acd4) {
            ctx->pc = 0x14ACECu;
            goto label_14acec;
        }
    }
    ctx->pc = 0x14ACDCu;
    // 0x14acdc: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x14acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x14ace0: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x14ace0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x14ace4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ACE4u;
    {
        const bool branch_taken_0x14ace4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACE4u;
        // 0x14ace8: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ace4) {
            ctx->pc = 0x14ACF8u;
            goto label_14acf8;
        }
    }
    ctx->pc = 0x14ACECu;
label_14acec:
    // 0x14acec: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x14acecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x14acf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14ACF0u;
    {
        const bool branch_taken_0x14acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACF0u;
        // 0x14acf4: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acf0) {
            ctx->pc = 0x14AD24u;
            goto label_14ad24;
        }
    }
    ctx->pc = 0x14ACF8u;
label_14acf8:
    // 0x14acf8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x14acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14acfc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ACFCu;
    {
        const bool branch_taken_0x14acfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACFCu;
        // 0x14ad00: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acfc) {
            ctx->pc = 0x14AD14u;
            goto label_14ad14;
        }
    }
    ctx->pc = 0x14AD04u;
    // 0x14ad04: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x14ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_14ad08:
    // 0x14ad08: 0xa2140000  sb          $s4, 0x0($s0)
    ctx->pc = 0x14ad08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x14ad0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14AD0Cu;
    {
        const bool branch_taken_0x14ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD0Cu;
        // 0x14ad10: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad0c) {
            ctx->pc = 0x14AD24u;
            goto label_14ad24;
        }
    }
    ctx->pc = 0x14AD14u;
label_14ad14:
    // 0x14ad14: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AD14u;
    {
        const bool branch_taken_0x14ad14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ad14) {
            ctx->pc = 0x14AD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD14u;
            // 0x14ad18: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AD28u;
            goto label_14ad28;
        }
    }
    ctx->pc = 0x14AD1Cu;
    // 0x14ad1c: 0xa2140000  sb          $s4, 0x0($s0)
    ctx->pc = 0x14ad1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x14ad20: 0xa21e0001  sb          $fp, 0x1($s0)
    ctx->pc = 0x14ad20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 30));
label_14ad24:
    // 0x14ad24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ad24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14ad28:
    // 0x14ad28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14ad2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x14ad2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_14ad30:
    // 0x14ad30: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x14AD30u;
    SET_GPR_U32(ctx, 31, 0x14AD38u);
    ctx->pc = 0x14AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD30u;
    // 0x14ad34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x14AD30u, 0x14AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD38u;
label_14ad38:
    // 0x14ad38: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x14ad38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14ad3c: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x14AD3Cu;
    {
        const bool branch_taken_0x14ad3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad3c) {
            ctx->pc = 0x14AD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD3Cu;
            // 0x14ad40: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aca8;
        }
    }
    ctx->pc = 0x14AD44u;
    // 0x14ad44: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x14ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x14ad48: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x14ad48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad4c: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x14ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x14ad50: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x14ad50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14ad54: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x14ad54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14ad58: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x14ad58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ad5c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x14ad5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ad60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14ad60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ad64: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x14ad64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ad68: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x14ad68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ad6c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x14ad6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ad70: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x14ad70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ad74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad78: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14ad78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ad7c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x14ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ad80: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD80u;
        // 0x14ad84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD88u;
    // 0x14ad88: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x14ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14ad8c: 0x0  nop
    ctx->pc = 0x14ad8cu;
    // NOP
    ctx->pc = 0x14ad90u;
}
