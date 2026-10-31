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

// Function: sub_00358128
// Address: 0x358128 - 0x358190
void sub_00358128_0x358128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358128_0x358128");
#endif

    switch (ctx->pc) {
        case 0x358148u: goto label_358148;
        case 0x358160u: goto label_358160;
        case 0x358168u: goto label_358168;
        case 0x358174u: goto label_358174;
        default: break;
    }

    ctx->pc = 0x358128u;

    // 0x358128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35812c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35812cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358130: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35813c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358140: 0xc1024a0  jal         func_409280
    ctx->pc = 0x358140u;
    SET_GPR_U32(ctx, 31, 0x358148u);
    ctx->pc = 0x358144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358140u;
    // 0x358144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x358140u, 0x358148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358148u;
label_358148:
    // 0x358148: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35814c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35814Cu;
    {
        const bool branch_taken_0x35814c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x358150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35814Cu;
        // 0x358150: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35814c) {
            ctx->pc = 0x358160u;
            goto label_358160;
        }
    }
    ctx->pc = 0x358154u;
    // 0x358154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358158: 0xc10241a  jal         func_409068
    ctx->pc = 0x358158u;
    SET_GPR_U32(ctx, 31, 0x358160u);
    ctx->pc = 0x35815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358158u;
    // 0x35815c: 0x24a59200  addiu       $a1, $a1, -0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x358158u, 0x358160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358160u;
label_358160:
    // 0x358160: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x358160u;
    SET_GPR_U32(ctx, 31, 0x358168u);
    ctx->pc = 0x358164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358160u;
    // 0x358164: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x358160u, 0x358168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358168u;
label_358168:
    // 0x358168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35816c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35816Cu;
    SET_GPR_U32(ctx, 31, 0x358174u);
    ctx->pc = 0x358170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35816Cu;
    // 0x358170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35816Cu, 0x358174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358174u;
label_358174:
    // 0x358174: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35817c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35817cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358184: 0x3e00008  jr          $ra
    ctx->pc = 0x358184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358184u;
        // 0x358188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35818Cu;
    // 0x35818c: 0x0  nop
    ctx->pc = 0x35818cu;
    // NOP
    ctx->pc = 0x358190u;
}
