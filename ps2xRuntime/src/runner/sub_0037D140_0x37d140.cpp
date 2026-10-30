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

// Function: sub_0037D140
// Address: 0x37d140 - 0x37d1c0
void sub_0037D140_0x37d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D140_0x37d140");
#endif

    switch (ctx->pc) {
        case 0x37d168u: goto label_37d168;
        case 0x37d170u: goto label_37d170;
        case 0x37d184u: goto label_37d184;
        case 0x37d18cu: goto label_37d18c;
        case 0x37d198u: goto label_37d198;
        case 0x37d1a4u: goto label_37d1a4;
        default: break;
    }

    ctx->pc = 0x37d140u;

    // 0x37d140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37d144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d148: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37d14c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37d150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d154: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37d154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d158: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37d15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d160: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D160u;
    SET_GPR_U32(ctx, 31, 0x37D168u);
    ctx->pc = 0x37D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D160u;
    // 0x37d164: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D160u, 0x37D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D168u;
label_37d168:
    // 0x37d168: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D168u;
    SET_GPR_U32(ctx, 31, 0x37D170u);
    ctx->pc = 0x37D16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D168u;
    // 0x37d16c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D168u, 0x37D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D170u;
label_37d170:
    // 0x37d170: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37d170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d174: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37d174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37d178: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37d178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d17c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D17Cu;
    SET_GPR_U32(ctx, 31, 0x37D184u);
    ctx->pc = 0x37D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D17Cu;
    // 0x37d180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D17Cu, 0x37D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D184u;
label_37d184:
    // 0x37d184: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37D184u;
    SET_GPR_U32(ctx, 31, 0x37D18Cu);
    ctx->pc = 0x37D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D184u;
    // 0x37d188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37D184u, 0x37D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D18Cu;
label_37d18c:
    // 0x37d18c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37d18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d190: 0xc108e1a  jal         func_423868
    ctx->pc = 0x37D190u;
    SET_GPR_U32(ctx, 31, 0x37D198u);
    ctx->pc = 0x37D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D190u;
    // 0x37d194: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423868u, 0x37D190u, 0x37D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D198u;
label_37d198:
    // 0x37d198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37d198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d19c: 0xc102562  jal         func_409588
    ctx->pc = 0x37D19Cu;
    SET_GPR_U32(ctx, 31, 0x37D1A4u);
    ctx->pc = 0x37D1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D19Cu;
    // 0x37d1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37D19Cu, 0x37D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1A4u;
label_37d1a4:
    // 0x37d1a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37d1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d1a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d1ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37d1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d1b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37d1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x37D1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D1B8u;
        // 0x37d1bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D1C0u;
}
