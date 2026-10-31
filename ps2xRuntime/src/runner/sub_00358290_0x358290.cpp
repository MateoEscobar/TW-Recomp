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

// Function: sub_00358290
// Address: 0x358290 - 0x358328
void sub_00358290_0x358290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358290_0x358290");
#endif

    switch (ctx->pc) {
        case 0x3582b0u: goto label_3582b0;
        case 0x3582c8u: goto label_3582c8;
        case 0x3582dcu: goto label_3582dc;
        case 0x3582f0u: goto label_3582f0;
        case 0x358300u: goto label_358300;
        case 0x358308u: goto label_358308;
        default: break;
    }

    ctx->pc = 0x358290u;

    // 0x358290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358298: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35829c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35829cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3582a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3582a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3582a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3582a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3582a8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x3582A8u;
    SET_GPR_U32(ctx, 31, 0x3582B0u);
    ctx->pc = 0x3582ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582A8u;
    // 0x3582ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x3582A8u, 0x3582B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582B0u;
label_3582b0:
    // 0x3582b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3582b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3582b4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3582B4u;
    {
        const bool branch_taken_0x3582b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3582B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582B4u;
        // 0x3582b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582b4) {
            ctx->pc = 0x3582CCu;
            goto label_3582cc;
        }
    }
    ctx->pc = 0x3582BCu;
    // 0x3582bc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3582bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3582c0: 0xc10241a  jal         func_409068
    ctx->pc = 0x3582C0u;
    SET_GPR_U32(ctx, 31, 0x3582C8u);
    ctx->pc = 0x3582C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582C0u;
    // 0x3582c4: 0x24a59230  addiu       $a1, $a1, -0x6DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3582C0u, 0x3582C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582C8u;
label_3582c8:
    // 0x3582c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3582c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3582cc:
    // 0x3582cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3582ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3582d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3582d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3582d4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3582D4u;
    SET_GPR_U32(ctx, 31, 0x3582DCu);
    ctx->pc = 0x3582D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582D4u;
    // 0x3582d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3582D4u, 0x3582DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582DCu;
label_3582dc:
    // 0x3582dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3582DCu;
    {
        const bool branch_taken_0x3582dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3582E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582DCu;
        // 0x3582e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582dc) {
            ctx->pc = 0x3582F4u;
            goto label_3582f4;
        }
    }
    ctx->pc = 0x3582E4u;
    // 0x3582e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3582e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3582e8: 0xc10241a  jal         func_409068
    ctx->pc = 0x3582E8u;
    SET_GPR_U32(ctx, 31, 0x3582F0u);
    ctx->pc = 0x3582ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582E8u;
    // 0x3582ec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3582E8u, 0x3582F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582F0u;
label_3582f0:
    // 0x3582f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3582f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3582f4:
    // 0x3582f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3582f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3582f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3582F8u;
    SET_GPR_U32(ctx, 31, 0x358300u);
    ctx->pc = 0x3582FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582F8u;
    // 0x3582fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3582F8u, 0x358300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358300u;
label_358300:
    // 0x358300: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358300u;
    SET_GPR_U32(ctx, 31, 0x358308u);
    ctx->pc = 0x358304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358300u;
    // 0x358304: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358300u, 0x358308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358308u;
label_358308:
    // 0x358308: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x358308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x35830c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35830cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358310: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35831c: 0x3e00008  jr          $ra
    ctx->pc = 0x35831Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35831Cu;
        // 0x358320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35831Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358324u;
    // 0x358324: 0x0  nop
    ctx->pc = 0x358324u;
    // NOP
    ctx->pc = 0x358328u;
}
