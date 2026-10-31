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

// Function: sub_00329F28
// Address: 0x329f28 - 0x329fd8
void sub_00329F28_0x329f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329F28_0x329f28");
#endif

    switch (ctx->pc) {
        case 0x329f50u: goto label_329f50;
        case 0x329f78u: goto label_329f78;
        case 0x329fb8u: goto label_329fb8;
        default: break;
    }

    ctx->pc = 0x329f28u;

    // 0x329f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x329f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x329f2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x329f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x329f30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x329f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x329f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329f38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x329f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329f3c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x329f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x329f40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x329f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x329f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329f48: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x329F48u;
    SET_GPR_U32(ctx, 31, 0x329F50u);
    ctx->pc = 0x329F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F48u;
    // 0x329f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x329F48u, 0x329F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F50u;
label_329f50:
    // 0x329f50: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x329f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x329f54: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x329f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x329f58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329f5c: 0x8c530034  lw          $s3, 0x34($v0)
    ctx->pc = 0x329f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x329f60: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x329F60u;
    {
        const bool branch_taken_0x329f60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F60u;
        // 0x329f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f60) {
            ctx->pc = 0x329FBCu;
            goto label_329fbc;
        }
    }
    ctx->pc = 0x329F68u;
    // 0x329f68: 0x8e30006c  lw          $s0, 0x6C($s1)
    ctx->pc = 0x329f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x329f6c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x329f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x329f70: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x329F70u;
    SET_GPR_U32(ctx, 31, 0x329F78u);
    ctx->pc = 0x329F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F70u;
    // 0x329f74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x329F70u, 0x329F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F78u;
label_329f78:
    // 0x329f78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x329f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329f7c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x329f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x329f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329f88: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x329f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x329f8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x329f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329f90: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x329f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x329f94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x329f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329f98: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x329f98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x329f9c: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x329f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x329fa0: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x329fa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x329fa4: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x329fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x329fa8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x329fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329fac: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x329facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x329fb0: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x329FB0u;
    SET_GPR_U32(ctx, 31, 0x329FB8u);
    ctx->pc = 0x329FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FB0u;
    // 0x329fb4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x329FB0u, 0x329FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FB8u;
label_329fb8:
    // 0x329fb8: 0xae30006c  sw          $s0, 0x6C($s1)
    ctx->pc = 0x329fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 16));
label_329fbc:
    // 0x329fbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x329fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329fc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x329fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329fc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x329fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x329FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FD0u;
        // 0x329fd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329FD8u;
}
