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

// Function: sub_0028C140
// Address: 0x28c140 - 0x28c1a8
void sub_0028C140_0x28c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C140_0x28c140");
#endif

    switch (ctx->pc) {
        case 0x28c168u: goto label_28c168;
        case 0x28c184u: goto label_28c184;
        default: break;
    }

    ctx->pc = 0x28c140u;

    // 0x28c140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c144: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28c148: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28c14c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28c14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28c150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28c154: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28c15c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28c15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c160: 0xc087502  jal         func_21D408
    ctx->pc = 0x28C160u;
    SET_GPR_U32(ctx, 31, 0x28C168u);
    ctx->pc = 0x28C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C160u;
    // 0x28c164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28C160u, 0x28C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C168u;
label_28c168:
    // 0x28c168: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x28c168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
    // 0x28c16c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C16Cu;
    {
        const bool branch_taken_0x28c16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C16Cu;
        // 0x28c170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c16c) {
            ctx->pc = 0x28C17Cu;
            goto label_28c17c;
        }
    }
    ctx->pc = 0x28C174u;
    // 0x28c174: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C174u;
    {
        const bool branch_taken_0x28c174 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c174) {
            ctx->pc = 0x28C178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C174u;
            // 0x28c178: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C190u;
            goto label_28c190;
        }
    }
    ctx->pc = 0x28C17Cu;
label_28c17c:
    // 0x28c17c: 0xc087420  jal         func_21D080
    ctx->pc = 0x28C17Cu;
    SET_GPR_U32(ctx, 31, 0x28C184u);
    ctx->pc = 0x28C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C17Cu;
    // 0x28c180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x28C17Cu, 0x28C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C184u;
label_28c184:
    // 0x28c184: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28c184u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c188: 0x7e430240  sq          $v1, 0x240($s2)
    ctx->pc = 0x28c188u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 576), GPR_VEC(ctx, 3));
    // 0x28c18c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28c18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c190:
    // 0x28c190: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28c190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c194: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28c194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C19Cu;
        // 0x28c1a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C1A4u;
    // 0x28c1a4: 0x0  nop
    ctx->pc = 0x28c1a4u;
    // NOP
    ctx->pc = 0x28c1a8u;
}
