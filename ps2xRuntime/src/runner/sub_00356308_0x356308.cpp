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

// Function: sub_00356308
// Address: 0x356308 - 0x356390
void sub_00356308_0x356308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356308_0x356308");
#endif

    switch (ctx->pc) {
        case 0x35633cu: goto label_35633c;
        case 0x35634cu: goto label_35634c;
        default: break;
    }

    ctx->pc = 0x356308u;

    // 0x356308: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x356308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35630c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x356310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356314: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x356314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x356318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35631c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35631cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356320: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x356320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x356324: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x356324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35632c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x35632cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356330: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x356330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x356334: 0xc0d5828  jal         func_3560A0
    ctx->pc = 0x356334u;
    SET_GPR_U32(ctx, 31, 0x35633Cu);
    ctx->pc = 0x356338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356334u;
    // 0x356338: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560A0u, 0x356334u, 0x35633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35633Cu;
label_35633c:
    // 0x35633c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356344: 0xc0d580a  jal         func_356028
    ctx->pc = 0x356344u;
    SET_GPR_U32(ctx, 31, 0x35634Cu);
    ctx->pc = 0x356348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356344u;
    // 0x356348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356028u, 0x356344u, 0x35634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35634Cu;
label_35634c:
    // 0x35634c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x35634cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x356350: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x356350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356354: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x356354u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x356358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35635c: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x35635cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x356360: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x356360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x356364: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x356364u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x356368: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x356368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35636c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35636cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356374: 0x3e00008  jr          $ra
    ctx->pc = 0x356374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356374u;
        // 0x356378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35637Cu;
    // 0x35637c: 0x0  nop
    ctx->pc = 0x35637cu;
    // NOP
    // 0x356380: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x356380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x356384: 0x0  nop
    ctx->pc = 0x356384u;
    // NOP
    // 0x356388: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x356388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35638c: 0x0  nop
    ctx->pc = 0x35638cu;
    // NOP
    ctx->pc = 0x356390u;
}
