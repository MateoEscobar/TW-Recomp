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

// Function: sub_00157930
// Address: 0x157930 - 0x1579a8
void sub_00157930_0x157930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157930_0x157930");
#endif

    switch (ctx->pc) {
        case 0x157958u: goto label_157958;
        case 0x157974u: goto label_157974;
        case 0x157984u: goto label_157984;
        case 0x157994u: goto label_157994;
        default: break;
    }

    ctx->pc = 0x157930u;

    // 0x157930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x157934: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x157934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157938: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x157938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15793c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157948: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157948u;
    {
        const bool branch_taken_0x157948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x15794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157948u;
        // 0x15794c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157948) {
            ctx->pc = 0x157960u;
            goto label_157960;
        }
    }
    ctx->pc = 0x157950u;
    // 0x157950: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x157950u;
    SET_GPR_U32(ctx, 31, 0x157958u);
    ctx->pc = 0x157954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157950u;
    // 0x157954: 0x2404017d  addiu       $a0, $zero, 0x17D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x157950u, 0x157958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157958u;
label_157958:
    // 0x157958: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157958u;
    {
        const bool branch_taken_0x157958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157958u;
        // 0x15795c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157958) {
            ctx->pc = 0x157988u;
            goto label_157988;
        }
    }
    ctx->pc = 0x157960u;
label_157960:
    // 0x157960: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x157960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x157964: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157964u;
    {
        const bool branch_taken_0x157964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x157964) {
            ctx->pc = 0x15797Cu;
            goto label_15797c;
        }
    }
    ctx->pc = 0x15796Cu;
    // 0x15796c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15796Cu;
    SET_GPR_U32(ctx, 31, 0x157974u);
    ctx->pc = 0x157970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15796Cu;
    // 0x157970: 0x2404017e  addiu       $a0, $zero, 0x17E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15796Cu, 0x157974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157974u;
label_157974:
    // 0x157974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157974u;
    {
        const bool branch_taken_0x157974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157974u;
        // 0x157978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157974) {
            ctx->pc = 0x157988u;
            goto label_157988;
        }
    }
    ctx->pc = 0x15797Cu;
label_15797c:
    // 0x15797c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15797Cu;
    SET_GPR_U32(ctx, 31, 0x157984u);
    ctx->pc = 0x157980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15797Cu;
    // 0x157980: 0x2404017f  addiu       $a0, $zero, 0x17F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15797Cu, 0x157984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157984u;
label_157984:
    // 0x157984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157988:
    // 0x157988: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x157988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15798c: 0xc055e6a  jal         func_1579A8
    ctx->pc = 0x15798Cu;
    SET_GPR_U32(ctx, 31, 0x157994u);
    ctx->pc = 0x157990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15798Cu;
    // 0x157990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1579A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1579A8u, 0x15798Cu, 0x157994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157994u;
label_157994:
    // 0x157994: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x157994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15799c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15799cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1579a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1579A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579A0u;
        // 0x1579a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1579A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1579A8u;
}
