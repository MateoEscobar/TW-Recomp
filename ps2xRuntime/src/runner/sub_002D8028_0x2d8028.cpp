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

// Function: sub_002D8028
// Address: 0x2d8028 - 0x2d80c8
void sub_002D8028_0x2d8028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8028_0x2d8028");
#endif

    switch (ctx->pc) {
        case 0x2d8058u: goto label_2d8058;
        case 0x2d8094u: goto label_2d8094;
        default: break;
    }

    ctx->pc = 0x2d8028u;

    // 0x2d8028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d8028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d802c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d8030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d8034: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d8034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d8038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d8038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d803c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d8040: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d8040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8048: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d8048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d804c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d804cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8050: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2D8050u;
    SET_GPR_U32(ctx, 31, 0x2D8058u);
    ctx->pc = 0x2D8054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8050u;
    // 0x2d8054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2D8050u, 0x2D8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8058u;
label_2d8058:
    // 0x2d8058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d805c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8060: 0x56220013  bnel        $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8060u;
    {
        const bool branch_taken_0x2d8060 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8060) {
            ctx->pc = 0x2D8064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8060u;
            // 0x2d8064: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D80B0u;
            goto label_2d80b0;
        }
    }
    ctx->pc = 0x2D8068u;
    // 0x2d8068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d806c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d806cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8070: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8074: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d8074u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d8078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d807c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2d807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d8080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d8084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8088: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d8088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d808c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2D808Cu;
    SET_GPR_U32(ctx, 31, 0x2D8094u);
    ctx->pc = 0x2D8090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D808Cu;
    // 0x2d8090: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D808Cu, 0x2D8094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8094u;
label_2d8094:
    // 0x2d8094: 0x16710006  bne         $s3, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8094u;
    {
        const bool branch_taken_0x2d8094 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8094u;
        // 0x2d8098: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8094) {
            ctx->pc = 0x2D80B0u;
            goto label_2d80b0;
        }
    }
    ctx->pc = 0x2D809Cu;
    // 0x2d809c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d80a0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2d80a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2d80a4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2d80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d80a8: 0x24633e80  addiu       $v1, $v1, 0x3E80
    ctx->pc = 0x2d80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16000));
    // 0x2d80ac: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x2d80acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
label_2d80b0:
    // 0x2d80b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d80b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d80b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d80b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d80b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d80b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d80bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d80bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d80c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D80C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80C0u;
        // 0x2d80c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D80C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D80C8u;
}
