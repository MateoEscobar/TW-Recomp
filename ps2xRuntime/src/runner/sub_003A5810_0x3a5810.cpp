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

// Function: sub_003A5810
// Address: 0x3a5810 - 0x3a5870
void sub_003A5810_0x3a5810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5810_0x3a5810");
#endif

    switch (ctx->pc) {
        case 0x3a5810u: goto label_3a5810;
        case 0x3a5814u: goto label_3a5814;
        case 0x3a5818u: goto label_3a5818;
        case 0x3a581cu: goto label_3a581c;
        case 0x3a5820u: goto label_3a5820;
        case 0x3a5824u: goto label_3a5824;
        case 0x3a5828u: goto label_3a5828;
        case 0x3a582cu: goto label_3a582c;
        case 0x3a5830u: goto label_3a5830;
        case 0x3a5834u: goto label_3a5834;
        case 0x3a5838u: goto label_3a5838;
        case 0x3a583cu: goto label_3a583c;
        case 0x3a5840u: goto label_3a5840;
        case 0x3a5844u: goto label_3a5844;
        case 0x3a5848u: goto label_3a5848;
        case 0x3a584cu: goto label_3a584c;
        case 0x3a5850u: goto label_3a5850;
        case 0x3a5854u: goto label_3a5854;
        case 0x3a5858u: goto label_3a5858;
        case 0x3a585cu: goto label_3a585c;
        case 0x3a5860u: goto label_3a5860;
        case 0x3a5864u: goto label_3a5864;
        case 0x3a5868u: goto label_3a5868;
        case 0x3a586cu: goto label_3a586c;
        default: break;
    }

    ctx->pc = 0x3a5810u;

label_3a5810:
    // 0x3a5810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a5810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a5814:
    // 0x3a5814: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a5814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5818:
    // 0x3a5818: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3a5818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3a581c:
    // 0x3a581c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a5820:
    // 0x3a5820: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_3a5824:
    if (ctx->pc == 0x3A5824u) {
        ctx->pc = 0x3A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5820u;
        // 0x3a5824: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5828u;
        goto label_3a5828;
    }
    ctx->pc = 0x3A5820u;
    {
        const bool branch_taken_0x3a5820 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5820u;
        // 0x3a5824: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5820) {
            ctx->pc = 0x3A5830u;
            goto label_3a5830;
        }
    }
    ctx->pc = 0x3A5828u;
label_3a5828:
    // 0x3a5828: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a582c:
    if (ctx->pc == 0x3A582Cu) {
        ctx->pc = 0x3A582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5828u;
        // 0x3a582c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5830u;
        goto label_3a5830;
    }
    ctx->pc = 0x3A5828u;
    {
        const bool branch_taken_0x3a5828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5828u;
        // 0x3a582c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5828) {
            ctx->pc = 0x3A5854u;
            goto label_3a5854;
        }
    }
    ctx->pc = 0x3A5830u;
label_3a5830:
    // 0x3a5830: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a5830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a5834:
    // 0x3a5834: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3a5834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3a5838:
    // 0x3a5838: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3a583c:
    // 0x3a583c: 0x40f809  jalr        $v0
label_3a5840:
    if (ctx->pc == 0x3A5840u) {
        ctx->pc = 0x3A5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A583Cu;
        // 0x3a5840: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5844u;
        goto label_3a5844;
    }
    ctx->pc = 0x3A583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5844u);
        ctx->pc = 0x3A5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A583Cu;
        // 0x3a5840: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A583Cu, 0x3A5844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5844u;
label_3a5844:
    // 0x3a5844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a5848:
    // 0x3a5848: 0xc0e59b2  jal         func_3966C8
label_3a584c:
    if (ctx->pc == 0x3A584Cu) {
        ctx->pc = 0x3A584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5848u;
        // 0x3a584c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5850u;
        goto label_3a5850;
    }
    ctx->pc = 0x3A5848u;
    SET_GPR_U32(ctx, 31, 0x3A5850u);
    ctx->pc = 0x3A584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5848u;
    // 0x3a584c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3966C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3966C8u, 0x3A5848u, 0x3A5850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5850u;
label_3a5850:
    // 0x3a5850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a5854:
    // 0x3a5854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5858:
    // 0x3a5858: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3a5858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a585c:
    // 0x3a585c: 0x3e00008  jr          $ra
label_3a5860:
    if (ctx->pc == 0x3A5860u) {
        ctx->pc = 0x3A5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A585Cu;
        // 0x3a5860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5864u;
        goto label_3a5864;
    }
    ctx->pc = 0x3A585Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A585Cu;
        // 0x3a5860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A585Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5864u;
label_3a5864:
    // 0x3a5864: 0x0  nop
    ctx->pc = 0x3a5864u;
    // NOP
label_3a5868:
    // 0x3a5868: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a5868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a586c:
    // 0x3a586c: 0x0  nop
    ctx->pc = 0x3a586cu;
    // NOP
    ctx->pc = 0x3a5870u;
}
