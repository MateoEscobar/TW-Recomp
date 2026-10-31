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

// Function: sub_00333268
// Address: 0x333268 - 0x3332f0
void sub_00333268_0x333268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333268_0x333268");
#endif

    switch (ctx->pc) {
        case 0x333290u: goto label_333290;
        case 0x3332a4u: goto label_3332a4;
        case 0x3332c4u: goto label_3332c4;
        case 0x3332d4u: goto label_3332d4;
        default: break;
    }

    ctx->pc = 0x333268u;

    // 0x333268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x333268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33326c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x333270: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x333270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x333274: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x333274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x333278: 0x24506690  addiu       $s0, $v0, 0x6690
    ctx->pc = 0x333278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x33327c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x333280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x333280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333288: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x333288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33328c: 0x0  nop
    ctx->pc = 0x33328cu;
    // NOP
label_333290:
    // 0x333290: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x333290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333294: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x333294u;
    {
        const bool branch_taken_0x333294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333294u;
        // 0x333298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333294) {
            ctx->pc = 0x3332D4u;
            goto label_3332d4;
        }
    }
    ctx->pc = 0x33329Cu;
    // 0x33329c: 0xc0cca8e  jal         func_332A38
    ctx->pc = 0x33329Cu;
    SET_GPR_U32(ctx, 31, 0x3332A4u);
    ctx->pc = 0x3332A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33329Cu;
    // 0x3332a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A38u, 0x33329Cu, 0x3332A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332A4u;
label_3332a4:
    // 0x3332a4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3332a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3332a8: 0x5043fff9  beql        $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3332A8u;
    {
        const bool branch_taken_0x3332a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3332a8) {
            ctx->pc = 0x3332ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3332A8u;
            // 0x3332ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333290;
        }
    }
    ctx->pc = 0x3332B0u;
    // 0x3332b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3332B0u;
    {
        const bool branch_taken_0x3332b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3332B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332B0u;
        // 0x3332b4: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332b0) {
            ctx->pc = 0x3332D4u;
            goto label_3332d4;
        }
    }
    ctx->pc = 0x3332B8u;
    // 0x3332b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3332b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3332bc: 0xc0cca76  jal         func_3329D8
    ctx->pc = 0x3332BCu;
    SET_GPR_U32(ctx, 31, 0x3332C4u);
    ctx->pc = 0x3332C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332BCu;
    // 0x3332c0: 0x26106698  addiu       $s0, $s0, 0x6698 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329D8u, 0x3332BCu, 0x3332C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332C4u;
label_3332c4:
    // 0x3332c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3332c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3332c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3332c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3332cc: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3332CCu;
    SET_GPR_U32(ctx, 31, 0x3332D4u);
    ctx->pc = 0x3332D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332CCu;
    // 0x3332d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3332CCu, 0x3332D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332D4u;
label_3332d4:
    // 0x3332d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3332d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3332d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3332d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3332dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3332dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3332e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3332e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3332e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3332E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3332E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332E4u;
        // 0x3332e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3332E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3332ECu;
    // 0x3332ec: 0x0  nop
    ctx->pc = 0x3332ecu;
    // NOP
    ctx->pc = 0x3332f0u;
}
