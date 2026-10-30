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

// Function: sub_0027BC48
// Address: 0x27bc48 - 0x27bcc8
void sub_0027BC48_0x27bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BC48_0x27bc48");
#endif

    switch (ctx->pc) {
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc9cu: goto label_27bc9c;
        default: break;
    }

    ctx->pc = 0x27bc48u;

    // 0x27bc48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bc4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27bc50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27bc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bc58: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BC58u;
    SET_GPR_U32(ctx, 31, 0x27BC60u);
    ctx->pc = 0x27BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC58u;
    // 0x27bc5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BC58u, 0x27BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC60u;
label_27bc60:
    // 0x27bc60: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27bc64: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27BC64u;
    {
        const bool branch_taken_0x27bc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC64u;
        // 0x27bc68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc64) {
            ctx->pc = 0x27BCA8u;
            goto label_27bca8;
        }
    }
    ctx->pc = 0x27BC6Cu;
    // 0x27bc6c: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BC6Cu;
    SET_GPR_U32(ctx, 31, 0x27BC74u);
    ctx->pc = 0x27BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC6Cu;
    // 0x27bc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BC6Cu, 0x27BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC74u;
label_27bc74:
    // 0x27bc74: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x27bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x27bc78: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27BC78u;
    {
        const bool branch_taken_0x27bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27bc78) {
            ctx->pc = 0x27BC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BC78u;
            // 0x27bc7c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BCACu;
            goto label_27bcac;
        }
    }
    ctx->pc = 0x27BC80u;
    // 0x27bc80: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BC80u;
    SET_GPR_U32(ctx, 31, 0x27BC88u);
    ctx->pc = 0x27BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC80u;
    // 0x27bc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BC80u, 0x27BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC88u;
label_27bc88:
    // 0x27bc88: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x27bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x27bc8c: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BC8Cu;
    {
        const bool branch_taken_0x27bc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27bc8c) {
            ctx->pc = 0x27BC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BC8Cu;
            // 0x27bc90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BCACu;
            goto label_27bcac;
        }
    }
    ctx->pc = 0x27BC94u;
    // 0x27bc94: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BC94u;
    SET_GPR_U32(ctx, 31, 0x27BC9Cu);
    ctx->pc = 0x27BC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BC94u;
    // 0x27bc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BC94u, 0x27BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC9Cu;
label_27bc9c:
    // 0x27bc9c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x27bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27bca0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BCA0u;
    {
        const bool branch_taken_0x27bca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCA0u;
        // 0x27bca4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bca0) {
            ctx->pc = 0x27BCB0u;
            goto label_27bcb0;
        }
    }
    ctx->pc = 0x27BCA8u;
label_27bca8:
    // 0x27bca8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27bca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bcac:
    // 0x27bcac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27bcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bcb0:
    // 0x27bcb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27bcb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bcb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27bcb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bcb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCBCu;
        // 0x27bcc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BCC4u;
    // 0x27bcc4: 0x0  nop
    ctx->pc = 0x27bcc4u;
    // NOP
    ctx->pc = 0x27bcc8u;
}
