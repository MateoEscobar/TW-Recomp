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

// Function: sub_002C0910
// Address: 0x2c0910 - 0x2c09b0
void sub_002C0910_0x2c0910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0910_0x2c0910");
#endif

    switch (ctx->pc) {
        case 0x2c0948u: goto label_2c0948;
        case 0x2c0950u: goto label_2c0950;
        case 0x2c0958u: goto label_2c0958;
        case 0x2c096cu: goto label_2c096c;
        case 0x2c0984u: goto label_2c0984;
        case 0x2c0990u: goto label_2c0990;
        default: break;
    }

    ctx->pc = 0x2c0910u;

    // 0x2c0910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c0914: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2c0914u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2c0918: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c091c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2c091cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2c0920: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c0920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c0924: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x2c0924u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2c0928: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c0928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c092c: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x2c092cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2c0930: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c0930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c0934: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c0934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0938: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c0938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c093c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c0940: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C0940u;
    SET_GPR_U32(ctx, 31, 0x2C0948u);
    ctx->pc = 0x2C0944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0940u;
    // 0x2c0944: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C0940u, 0x2C0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0948u;
label_2c0948:
    // 0x2c0948: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C0948u;
    SET_GPR_U32(ctx, 31, 0x2C0950u);
    ctx->pc = 0x2C094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0948u;
    // 0x2c094c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C0948u, 0x2C0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0950u;
label_2c0950:
    // 0x2c0950: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C0950u;
    SET_GPR_U32(ctx, 31, 0x2C0958u);
    ctx->pc = 0x2C0954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0950u;
    // 0x2c0954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C0950u, 0x2C0958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0958u;
label_2c0958:
    // 0x2c0958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c095c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C095Cu;
    {
        const bool branch_taken_0x2c095c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C095Cu;
        // 0x2c0960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c095c) {
            ctx->pc = 0x2C0988u;
            goto label_2c0988;
        }
    }
    ctx->pc = 0x2C0964u;
    // 0x2c0964: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2C0964u;
    SET_GPR_U32(ctx, 31, 0x2C096Cu);
    ctx->pc = 0x2C0968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0964u;
    // 0x2c0968: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C0964u, 0x2C096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C096Cu;
label_2c096c:
    // 0x2c096c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c096cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0970: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c0970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0974: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c0974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c097c: 0xc0b026c  jal         func_2C09B0
    ctx->pc = 0x2C097Cu;
    SET_GPR_U32(ctx, 31, 0x2C0984u);
    ctx->pc = 0x2C0980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C097Cu;
    // 0x2c0980: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C09B0u, 0x2C097Cu, 0x2C0984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0984u;
label_2c0984:
    // 0x2c0984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0988:
    // 0x2c0988: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C0988u;
    SET_GPR_U32(ctx, 31, 0x2C0990u);
    ctx->pc = 0x2C098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0988u;
    // 0x2c098c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C0988u, 0x2C0990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0990u;
label_2c0990:
    // 0x2c0990: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c0990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0994: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c0994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0998: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c099c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c099cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c09a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c09a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c09a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C09A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09A4u;
        // 0x2c09a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C09A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C09ACu;
    // 0x2c09ac: 0x0  nop
    ctx->pc = 0x2c09acu;
    // NOP
    ctx->pc = 0x2c09b0u;
}
