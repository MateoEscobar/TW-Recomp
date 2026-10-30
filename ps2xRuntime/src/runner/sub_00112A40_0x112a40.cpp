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

// Function: sub_00112A40
// Address: 0x112a40 - 0x112a90
void sub_00112A40_0x112a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A40_0x112a40");
#endif

    switch (ctx->pc) {
        case 0x112a5cu: goto label_112a5c;
        case 0x112a68u: goto label_112a68;
        case 0x112a70u: goto label_112a70;
        default: break;
    }

    ctx->pc = 0x112a40u;

    // 0x112a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112a44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x112a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x112a48: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x112A48u;
    {
        const bool branch_taken_0x112a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A48u;
        // 0x112a4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a48) {
            ctx->pc = 0x112A78u;
            goto label_112a78;
        }
    }
    ctx->pc = 0x112A50u;
    // 0x112a50: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x112a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x112a54: 0xc044674  jal         func_1119D0
    ctx->pc = 0x112A54u;
    SET_GPR_U32(ctx, 31, 0x112A5Cu);
    ctx->pc = 0x112A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A54u;
    // 0x112a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1119D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1119D0u, 0x112A54u, 0x112A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A5Cu;
label_112a5c:
    // 0x112a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a60: 0xc0446a8  jal         func_111AA0
    ctx->pc = 0x112A60u;
    SET_GPR_U32(ctx, 31, 0x112A68u);
    ctx->pc = 0x112A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A60u;
    // 0x112a64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AA0u, 0x112A60u, 0x112A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A68u;
label_112a68:
    // 0x112a68: 0xc043c7a  jal         func_10F1E8
    ctx->pc = 0x112A68u;
    SET_GPR_U32(ctx, 31, 0x112A70u);
    ctx->pc = 0x112A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A68u;
    // 0x112a6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E8u, 0x112A68u, 0x112A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A70u;
label_112a70:
    // 0x112a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112A70u;
    {
        const bool branch_taken_0x112a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A70u;
        // 0x112a74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a70) {
            ctx->pc = 0x112A80u;
            goto label_112a80;
        }
    }
    ctx->pc = 0x112A78u;
label_112a78:
    // 0x112a78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x112a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112a7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x112a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_112a80:
    // 0x112a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112a84: 0x3e00008  jr          $ra
    ctx->pc = 0x112A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A84u;
        // 0x112a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A8Cu;
    // 0x112a8c: 0x0  nop
    ctx->pc = 0x112a8cu;
    // NOP
    ctx->pc = 0x112a90u;
}
