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

// Function: sub_0043AE20
// Address: 0x43ae20 - 0x43af58
void sub_0043AE20_0x43ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AE20_0x43ae20");
#endif

    switch (ctx->pc) {
        case 0x43ae80u: goto label_43ae80;
        case 0x43aea4u: goto label_43aea4;
        case 0x43aec8u: goto label_43aec8;
        case 0x43aee0u: goto label_43aee0;
        case 0x43af08u: goto label_43af08;
        case 0x43af24u: goto label_43af24;
        default: break;
    }

    ctx->pc = 0x43ae20u;

    // 0x43ae20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x43ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x43ae24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x43ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x43ae28: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x43ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x43ae2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x43ae2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ae30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x43ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x43ae34: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x43ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x43ae38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x43ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x43ae3c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x43ae3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x43ae40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x43ae44: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x43ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x43ae48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43ae48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43ae4c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x43ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x43ae50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43ae50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ae54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43ae58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43ae58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ae5c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43AE5Cu;
    {
        const bool branch_taken_0x43ae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ae5c) {
            ctx->pc = 0x43AE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AE5Cu;
            // 0x43ae60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AE64u;
            goto label_43ae64;
        }
    }
    ctx->pc = 0x43AE64u;
label_43ae64:
    // 0x43ae64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x43ae64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ae68: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x43ae68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ae6c: 0x1812  mflo        $v1
    ctx->pc = 0x43ae6cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x43ae70: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x43ae70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x43ae74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43AE74u;
    {
        const bool branch_taken_0x43ae74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AE74u;
        // 0x43ae78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ae74) {
            ctx->pc = 0x43AE98u;
            goto label_43ae98;
        }
    }
    ctx->pc = 0x43AE7Cu;
    // 0x43ae7c: 0x0  nop
    ctx->pc = 0x43ae7cu;
    // NOP
label_43ae80:
    // 0x43ae80: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x43ae80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x43ae84: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x43ae84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x43ae88: 0x0  nop
    ctx->pc = 0x43ae88u;
    // NOP
    // 0x43ae8c: 0x0  nop
    ctx->pc = 0x43ae8cu;
    // NOP
    // 0x43ae90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x43AE90u;
    {
        const bool branch_taken_0x43ae90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AE90u;
        // 0x43ae94: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ae90) {
            ctx->pc = 0x43AE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ae80;
        }
    }
    ctx->pc = 0x43AE98u;
label_43ae98:
    // 0x43ae98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ae9c: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43AE9Cu;
    SET_GPR_U32(ctx, 31, 0x43AEA4u);
    ctx->pc = 0x43AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AE9Cu;
    // 0x43aea0: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43AE9Cu, 0x43AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AEA4u;
label_43aea4:
    // 0x43aea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43aea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43aeac: 0xacb50014  sw          $s5, 0x14($a1)
    ctx->pc = 0x43aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 21));
    // 0x43aeb0: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x43aeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x43aeb4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x43AEB4u;
    {
        const bool branch_taken_0x43aeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AEB4u;
        // 0x43aeb8: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43aeb4) {
            ctx->pc = 0x43AEF8u;
            goto label_43aef8;
        }
    }
    ctx->pc = 0x43AEBCu;
    // 0x43aebc: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x43aebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x43aec0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x43aec0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43aec4: 0x0  nop
    ctx->pc = 0x43aec4u;
    // NOP
label_43aec8:
    // 0x43aec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aecc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x43aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x43aed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43aed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x43aed4: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x43aed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x43aed8: 0xc10eb46  jal         func_43AD18
    ctx->pc = 0x43AED8u;
    SET_GPR_U32(ctx, 31, 0x43AEE0u);
    ctx->pc = 0x43AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AED8u;
    // 0x43aedc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AD18u, 0x43AED8u, 0x43AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AEE0u;
label_43aee0:
    // 0x43aee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43aee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aee4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x43aee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x43aee8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x43AEE8u;
    {
        const bool branch_taken_0x43aee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43aee8) {
            ctx->pc = 0x43AEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AEE8u;
            // 0x43aeec: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43aec8;
        }
    }
    ctx->pc = 0x43AEF0u;
    // 0x43aef0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43AEF0u;
    {
        const bool branch_taken_0x43aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AEF0u;
        // 0x43aef4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43aef0) {
            ctx->pc = 0x43AEFCu;
            goto label_43aefc;
        }
    }
    ctx->pc = 0x43AEF8u;
label_43aef8:
    // 0x43aef8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x43aef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_43aefc:
    // 0x43aefc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x43aefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x43af00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x43AF00u;
    {
        const bool branch_taken_0x43af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AF00u;
        // 0x43af04: 0x2918823  subu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43af00) {
            ctx->pc = 0x43AF2Cu;
            goto label_43af2c;
        }
    }
    ctx->pc = 0x43AF08u;
label_43af08:
    // 0x43af08: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x43af08u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43af0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43af0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43af10: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x43af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x43af14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43af14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43af18: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x43af18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x43af1c: 0xc10eb46  jal         func_43AD18
    ctx->pc = 0x43AF1Cu;
    SET_GPR_U32(ctx, 31, 0x43AF24u);
    ctx->pc = 0x43AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AF1Cu;
    // 0x43af20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AD18u, 0x43AF1Cu, 0x43AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AF24u;
label_43af24:
    // 0x43af24: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x43AF24u;
    {
        const bool branch_taken_0x43af24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AF24u;
        // 0x43af28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43af24) {
            ctx->pc = 0x43AF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43af08;
        }
    }
    ctx->pc = 0x43AF2Cu;
label_43af2c:
    // 0x43af2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x43af2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43af30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x43af30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43af34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x43af34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43af38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x43af38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43af3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43af3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43af40: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x43af40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43af44: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x43af44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43af48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43af48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43af4c: 0x3e00008  jr          $ra
    ctx->pc = 0x43AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AF4Cu;
        // 0x43af50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AF54u;
    // 0x43af54: 0x0  nop
    ctx->pc = 0x43af54u;
    // NOP
    ctx->pc = 0x43af58u;
}
