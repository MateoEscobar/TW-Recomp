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

// Function: sub_00359CB0
// Address: 0x359cb0 - 0x359d28
void sub_00359CB0_0x359cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359CB0_0x359cb0");
#endif

    switch (ctx->pc) {
        case 0x359cd8u: goto label_359cd8;
        case 0x359ce0u: goto label_359ce0;
        case 0x359cf4u: goto label_359cf4;
        case 0x359cfcu: goto label_359cfc;
        case 0x359d08u: goto label_359d08;
        default: break;
    }

    ctx->pc = 0x359cb0u;

    // 0x359cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x359cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x359cb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359cb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x359cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x359cbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x359cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x359cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359cc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x359cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359cc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x359cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x359ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359cd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359CD0u;
    SET_GPR_U32(ctx, 31, 0x359CD8u);
    ctx->pc = 0x359CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CD0u;
    // 0x359cd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359CD0u, 0x359CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CD8u;
label_359cd8:
    // 0x359cd8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359CD8u;
    SET_GPR_U32(ctx, 31, 0x359CE0u);
    ctx->pc = 0x359CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CD8u;
    // 0x359cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359CD8u, 0x359CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CE0u;
label_359ce0:
    // 0x359ce0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x359ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ce4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359ce8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x359ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359cec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359CECu;
    SET_GPR_U32(ctx, 31, 0x359CF4u);
    ctx->pc = 0x359CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CECu;
    // 0x359cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359CECu, 0x359CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CF4u;
label_359cf4:
    // 0x359cf4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x359CF4u;
    SET_GPR_U32(ctx, 31, 0x359CFCu);
    ctx->pc = 0x359CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CF4u;
    // 0x359cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x359CF4u, 0x359CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CFCu;
label_359cfc:
    // 0x359cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d00: 0xc08d80e  jal         func_236038
    ctx->pc = 0x359D00u;
    SET_GPR_U32(ctx, 31, 0x359D08u);
    ctx->pc = 0x359D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D00u;
    // 0x359d04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236038u, 0x359D00u, 0x359D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D08u;
label_359d08:
    // 0x359d08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x359d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x359d0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x359d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359d14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x359d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x359D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D1Cu;
        // 0x359d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359D24u;
    // 0x359d24: 0x0  nop
    ctx->pc = 0x359d24u;
    // NOP
    ctx->pc = 0x359d28u;
}
