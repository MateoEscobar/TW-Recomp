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

// Function: sub_003421D0
// Address: 0x3421d0 - 0x342230
void sub_003421D0_0x3421d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003421D0_0x3421d0");
#endif

    switch (ctx->pc) {
        case 0x3421f4u: goto label_3421f4;
        case 0x34220cu: goto label_34220c;
        default: break;
    }

    ctx->pc = 0x3421d0u;

    // 0x3421d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3421d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3421d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3421d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3421d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3421d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3421dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3421dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3421e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3421e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3421e4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3421E4u;
    {
        const bool branch_taken_0x3421e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3421E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421E4u;
        // 0x3421e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421e4) {
            ctx->pc = 0x342214u;
            goto label_342214;
        }
    }
    ctx->pc = 0x3421ECu;
    // 0x3421ec: 0xc089a76  jal         func_2269D8
    ctx->pc = 0x3421ECu;
    SET_GPR_U32(ctx, 31, 0x3421F4u);
    ctx->pc = 0x3421F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421ECu;
    // 0x3421f0: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x3421ECu, 0x3421F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421F4u;
label_3421f4:
    // 0x3421f4: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3421F4u;
    {
        const bool branch_taken_0x3421f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3421F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421F4u;
        // 0x3421f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421f4) {
            ctx->pc = 0x342204u;
            goto label_342204;
        }
    }
    ctx->pc = 0x3421FCu;
    // 0x3421fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3421FCu;
    {
        const bool branch_taken_0x3421fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421FCu;
        // 0x342200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421fc) {
            ctx->pc = 0x342218u;
            goto label_342218;
        }
    }
    ctx->pc = 0x342204u;
label_342204:
    // 0x342204: 0xc0d06ba  jal         func_341AE8
    ctx->pc = 0x342204u;
    SET_GPR_U32(ctx, 31, 0x34220Cu);
    ctx->pc = 0x342208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342204u;
    // 0x342208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341AE8u, 0x342204u, 0x34220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34220Cu;
label_34220c:
    // 0x34220c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34220Cu;
    {
        const bool branch_taken_0x34220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34220Cu;
        // 0x342210: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34220c) {
            ctx->pc = 0x34221Cu;
            goto label_34221c;
        }
    }
    ctx->pc = 0x342214u;
label_342214:
    // 0x342214: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x342214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_342218:
    // 0x342218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x342218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34221c:
    // 0x34221c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34221cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342224: 0x3e00008  jr          $ra
    ctx->pc = 0x342224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342224u;
        // 0x342228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34222Cu;
    // 0x34222c: 0x0  nop
    ctx->pc = 0x34222cu;
    // NOP
    ctx->pc = 0x342230u;
}
