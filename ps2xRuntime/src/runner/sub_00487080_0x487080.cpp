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

// Function: sub_00487080
// Address: 0x487080 - 0x487148
void sub_00487080_0x487080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487080_0x487080");
#endif

    switch (ctx->pc) {
        case 0x4870e0u: goto label_4870e0;
        case 0x487100u: goto label_487100;
        case 0x487118u: goto label_487118;
        default: break;
    }

    ctx->pc = 0x487080u;

    // 0x487080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x487080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x487084: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x487084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x487088: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x487088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x48708c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48708cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x487090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x487094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487098: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x487098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x48709c: 0x92330003  lbu         $s3, 0x3($s1)
    ctx->pc = 0x48709cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x4870a0: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x4870a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x4870a4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4870A4u;
    {
        const bool branch_taken_0x4870a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4870a4) {
            ctx->pc = 0x4870A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4870A4u;
            // 0x4870a8: 0x8e300098  lw          $s0, 0x98($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4870D0u;
            goto label_4870d0;
        }
    }
    ctx->pc = 0x4870ACu;
    // 0x4870ac: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x4870acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4870b0: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x4870b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4870b4: 0x7a240030  lq          $a0, 0x30($s1)
    ctx->pc = 0x4870b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x4870b8: 0x7a250040  lq          $a1, 0x40($s1)
    ctx->pc = 0x4870b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x4870bc: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x4870bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x4870c0: 0x7e230060  sq          $v1, 0x60($s1)
    ctx->pc = 0x4870c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 3));
    // 0x4870c4: 0x7e240070  sq          $a0, 0x70($s1)
    ctx->pc = 0x4870c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 4));
    // 0x4870c8: 0x7e250080  sq          $a1, 0x80($s1)
    ctx->pc = 0x4870c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 5));
    // 0x4870cc: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x4870ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_4870d0:
    // 0x4870d0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4870D0u;
    {
        const bool branch_taken_0x4870d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4870D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4870D0u;
        // 0x4870d4: 0x326200fa  andi        $v0, $s3, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)250);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4870d0) {
            ctx->pc = 0x487128u;
            goto label_487128;
        }
    }
    ctx->pc = 0x4870D8u;
    // 0x4870d8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x4870d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x4870dc: 0x0  nop
    ctx->pc = 0x4870dcu;
    // NOP
label_4870e0:
    // 0x4870e0: 0x2629025  or          $s2, $s3, $v0
    ctx->pc = 0x4870e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x4870e4: 0x32430004  andi        $v1, $s2, 0x4
    ctx->pc = 0x4870e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x4870e8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4870E8u;
    {
        const bool branch_taken_0x4870e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4870ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4870E8u;
        // 0x4870ec: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4870e8) {
            ctx->pc = 0x48710Cu;
            goto label_48710c;
        }
    }
    ctx->pc = 0x4870F0u;
    // 0x4870f0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x4870f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4870f4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4870f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4870f8: 0xc11f4a0  jal         func_47D280
    ctx->pc = 0x4870F8u;
    SET_GPR_U32(ctx, 31, 0x487100u);
    ctx->pc = 0x4870FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4870F8u;
    // 0x4870fc: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x4870F8u, 0x487100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487100u;
label_487100:
    // 0x487100: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x487100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x487104: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x487104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x487108: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x487108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_48710c:
    // 0x48710c: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x48710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x487110: 0xc121ca6  jal         func_487298
    ctx->pc = 0x487110u;
    SET_GPR_U32(ctx, 31, 0x487118u);
    ctx->pc = 0x487114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487110u;
    // 0x487114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487298u, 0x487110u, 0x487118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487118u;
label_487118:
    // 0x487118: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x487118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x48711c: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x48711Cu;
    {
        const bool branch_taken_0x48711c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x48711c) {
            ctx->pc = 0x487120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48711Cu;
            // 0x487120: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4870E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4870e0;
        }
    }
    ctx->pc = 0x487124u;
    // 0x487124: 0x326200fa  andi        $v0, $s3, 0xFA
    ctx->pc = 0x487124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)250);
label_487128:
    // 0x487128: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x487128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48712c: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x48712cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x487130: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x487130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x487134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x487134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487138: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x487138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48713c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48713cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487140: 0x3e00008  jr          $ra
    ctx->pc = 0x487140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487140u;
        // 0x487144: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487148u;
}
