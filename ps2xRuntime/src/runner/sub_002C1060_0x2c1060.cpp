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

// Function: sub_002C1060
// Address: 0x2c1060 - 0x2c1110
void sub_002C1060_0x2c1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1060_0x2c1060");
#endif

    switch (ctx->pc) {
        case 0x2c10a4u: goto label_2c10a4;
        case 0x2c10acu: goto label_2c10ac;
        case 0x2c10b4u: goto label_2c10b4;
        case 0x2c10e0u: goto label_2c10e0;
        case 0x2c10ecu: goto label_2c10ec;
        default: break;
    }

    ctx->pc = 0x2c1060u;

    // 0x2c1060: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c1060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c1064: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2c1064u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2c1068: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c1068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c106c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2c106cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2c1070: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c1070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c1074: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c1074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1078: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c107c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c107cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1080: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c1080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c1084: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x2c1084u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2c1088: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c1088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c108c: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x2c108cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2c1090: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c1090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c1094: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c1094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c1098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c109c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C109Cu;
    SET_GPR_U32(ctx, 31, 0x2C10A4u);
    ctx->pc = 0x2C10A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C109Cu;
    // 0x2c10a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C109Cu, 0x2C10A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10A4u;
label_2c10a4:
    // 0x2c10a4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C10A4u;
    SET_GPR_U32(ctx, 31, 0x2C10ACu);
    ctx->pc = 0x2C10A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C10A4u;
    // 0x2c10a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C10A4u, 0x2C10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10ACu;
label_2c10ac:
    // 0x2c10ac: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C10ACu;
    SET_GPR_U32(ctx, 31, 0x2C10B4u);
    ctx->pc = 0x2C10B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C10ACu;
    // 0x2c10b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C10ACu, 0x2C10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10B4u;
label_2c10b4:
    // 0x2c10b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c10b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10b8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C10B8u;
    {
        const bool branch_taken_0x2c10b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10B8u;
        // 0x2c10bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10b8) {
            ctx->pc = 0x2C10E0u;
            goto label_2c10e0;
        }
    }
    ctx->pc = 0x2C10C0u;
    // 0x2c10c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c10c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10c4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2c10c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10c8: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x2c10c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c10ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c10d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c10d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d8: 0xc0b0444  jal         func_2C1110
    ctx->pc = 0x2C10D8u;
    SET_GPR_U32(ctx, 31, 0x2C10E0u);
    ctx->pc = 0x2C10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C10D8u;
    // 0x2c10dc: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1110u, 0x2C10D8u, 0x2C10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10E0u;
label_2c10e0:
    // 0x2c10e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c10e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10e4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C10E4u;
    SET_GPR_U32(ctx, 31, 0x2C10ECu);
    ctx->pc = 0x2C10E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C10E4u;
    // 0x2c10e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C10E4u, 0x2C10ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C10ECu;
label_2c10ec:
    // 0x2c10ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c10ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c10f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c10f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c10f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c10f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c10f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c10f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c10fc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c10fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1100: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c1100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c1104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1108: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1108u;
        // 0x2c110c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1110u;
}
