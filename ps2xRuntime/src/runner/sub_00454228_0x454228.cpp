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

// Function: sub_00454228
// Address: 0x454228 - 0x454298
void sub_00454228_0x454228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454228_0x454228");
#endif

    switch (ctx->pc) {
        case 0x45423cu: goto label_45423c;
        case 0x454250u: goto label_454250;
        case 0x45426cu: goto label_45426c;
        case 0x454274u: goto label_454274;
        case 0x454284u: goto label_454284;
        default: break;
    }

    ctx->pc = 0x454228u;

    // 0x454228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x454228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45422c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x454230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x454230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x454234: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x454234u;
    SET_GPR_U32(ctx, 31, 0x45423Cu);
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x454234u, 0x45423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45423Cu;
label_45423c:
    // 0x45423c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45423cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454240: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x454240u;
    {
        const bool branch_taken_0x454240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x454244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454240u;
        // 0x454244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454240) {
            ctx->pc = 0x454288u;
            goto label_454288;
        }
    }
    ctx->pc = 0x454248u;
    // 0x454248: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x454248u;
    SET_GPR_U32(ctx, 31, 0x454250u);
    ctx->pc = 0x45424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454248u;
    // 0x45424c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x454248u, 0x454250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454250u;
label_454250:
    // 0x454250: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x454250u;
    {
        const bool branch_taken_0x454250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x454254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454250u;
        // 0x454254: 0x3c060052  lui         $a2, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454250) {
            ctx->pc = 0x45427Cu;
            goto label_45427c;
        }
    }
    ctx->pc = 0x454258u;
    // 0x454258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45425c: 0x24c6ad68  addiu       $a2, $a2, -0x5298
    ctx->pc = 0x45425cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946152));
    // 0x454260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454264: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x454264u;
    SET_GPR_U32(ctx, 31, 0x45426Cu);
    ctx->pc = 0x454268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454264u;
    // 0x454268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x454264u, 0x45426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45426Cu;
label_45426c:
    // 0x45426c: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x45426Cu;
    SET_GPR_U32(ctx, 31, 0x454274u);
    ctx->pc = 0x454270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45426Cu;
    // 0x454270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x45426Cu, 0x454274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454274u;
label_454274:
    // 0x454274: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x454274u;
    {
        const bool branch_taken_0x454274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x454278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454274u;
        // 0x454278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454274) {
            ctx->pc = 0x454288u;
            goto label_454288;
        }
    }
    ctx->pc = 0x45427Cu;
label_45427c:
    // 0x45427c: 0xc1295f2  jal         func_4A57C8
    ctx->pc = 0x45427Cu;
    SET_GPR_U32(ctx, 31, 0x454284u);
    ctx->pc = 0x454280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45427Cu;
    // 0x454280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x45427Cu, 0x454284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454284u;
label_454284:
    // 0x454284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x454284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454288:
    // 0x454288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x454288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45428c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45428cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x454290: 0x3e00008  jr          $ra
    ctx->pc = 0x454290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454290u;
        // 0x454294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454298u;
}
