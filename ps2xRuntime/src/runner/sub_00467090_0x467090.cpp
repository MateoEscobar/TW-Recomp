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

// Function: sub_00467090
// Address: 0x467090 - 0x467120
void sub_00467090_0x467090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467090_0x467090");
#endif

    switch (ctx->pc) {
        case 0x4670f8u: goto label_4670f8;
        case 0x467108u: goto label_467108;
        default: break;
    }

    ctx->pc = 0x467090u;

    // 0x467090: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x467090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x467094: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x467098: 0x8c62e688  lw          $v0, -0x1978($v1)
    ctx->pc = 0x467098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52E688u));
    // 0x46709c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4670a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4670a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4670a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4670a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4670a8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4670a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4670ac: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4670ACu;
    {
        const bool branch_taken_0x4670ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4670B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4670ACu;
        // 0x4670b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4670ac) {
            ctx->pc = 0x46710Cu;
            goto label_46710c;
        }
    }
    ctx->pc = 0x4670B4u;
    // 0x4670b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4670b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4670b8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x4670b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x4670bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4670bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4670c0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4670C0u;
    {
        const bool branch_taken_0x4670c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4670c0) {
            ctx->pc = 0x467100u;
            goto label_467100;
        }
    }
    ctx->pc = 0x4670C8u;
    // 0x4670c8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4670c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4670cc: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x4670ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4670d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4670d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4670d4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x4670d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4670d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4670d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4670dc: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x4670dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4670e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4670e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4670e4: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4670e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x4670e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4670e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4670ec: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4670ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4670f0: 0xc119eba  jal         func_467AE8
    ctx->pc = 0x4670F0u;
    SET_GPR_U32(ctx, 31, 0x4670F8u);
    ctx->pc = 0x4670F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4670F0u;
    // 0x4670f4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467AE8u, 0x4670F0u, 0x4670F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4670F8u;
label_4670f8:
    // 0x4670f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4670F8u;
    {
        const bool branch_taken_0x4670f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4670FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4670F8u;
        // 0x4670fc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4670f8) {
            ctx->pc = 0x46710Cu;
            goto label_46710c;
        }
    }
    ctx->pc = 0x467100u;
label_467100:
    // 0x467100: 0xc119dc4  jal         func_467710
    ctx->pc = 0x467100u;
    SET_GPR_U32(ctx, 31, 0x467108u);
    ctx->pc = 0x467710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467710u, 0x467100u, 0x467108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467108u;
label_467108:
    // 0x467108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x467108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46710c:
    // 0x46710c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46710cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467114: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x467114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467118: 0x3e00008  jr          $ra
    ctx->pc = 0x467118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467118u;
        // 0x46711c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467120u;
}
