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

// Function: sub_00358328
// Address: 0x358328 - 0x358390
void sub_00358328_0x358328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358328_0x358328");
#endif

    switch (ctx->pc) {
        case 0x358348u: goto label_358348;
        case 0x358360u: goto label_358360;
        case 0x358368u: goto label_358368;
        case 0x358374u: goto label_358374;
        default: break;
    }

    ctx->pc = 0x358328u;

    // 0x358328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35832c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35832cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358330: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35833c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358340: 0xc1024a0  jal         func_409280
    ctx->pc = 0x358340u;
    SET_GPR_U32(ctx, 31, 0x358348u);
    ctx->pc = 0x358344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358340u;
    // 0x358344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x358340u, 0x358348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358348u;
label_358348:
    // 0x358348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35834c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35834Cu;
    {
        const bool branch_taken_0x35834c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x358350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35834Cu;
        // 0x358350: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35834c) {
            ctx->pc = 0x358360u;
            goto label_358360;
        }
    }
    ctx->pc = 0x358354u;
    // 0x358354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358358: 0xc10241a  jal         func_409068
    ctx->pc = 0x358358u;
    SET_GPR_U32(ctx, 31, 0x358360u);
    ctx->pc = 0x35835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358358u;
    // 0x35835c: 0x24a59260  addiu       $a1, $a1, -0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x358358u, 0x358360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358360u;
label_358360:
    // 0x358360: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x358360u;
    SET_GPR_U32(ctx, 31, 0x358368u);
    ctx->pc = 0x358364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358360u;
    // 0x358364: 0xc62c000c  lwc1        $f12, 0xC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x358360u, 0x358368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358368u;
label_358368:
    // 0x358368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35836c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35836Cu;
    SET_GPR_U32(ctx, 31, 0x358374u);
    ctx->pc = 0x358370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35836Cu;
    // 0x358370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35836Cu, 0x358374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358374u;
label_358374:
    // 0x358374: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35837c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35837cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358384: 0x3e00008  jr          $ra
    ctx->pc = 0x358384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358384u;
        // 0x358388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35838Cu;
    // 0x35838c: 0x0  nop
    ctx->pc = 0x35838cu;
    // NOP
    ctx->pc = 0x358390u;
}
