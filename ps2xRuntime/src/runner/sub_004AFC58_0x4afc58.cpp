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

// Function: sub_004AFC58
// Address: 0x4afc58 - 0x4afcc8
void sub_004AFC58_0x4afc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFC58_0x4afc58");
#endif

    switch (ctx->pc) {
        case 0x4afc6cu: goto label_4afc6c;
        case 0x4afc9cu: goto label_4afc9c;
        case 0x4afcb0u: goto label_4afcb0;
        default: break;
    }

    ctx->pc = 0x4afc58u;

    // 0x4afc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4afc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4afc5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4afc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4afc60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4afc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4afc64: 0xc12c5a8  jal         func_4B16A0
    ctx->pc = 0x4AFC64u;
    SET_GPR_U32(ctx, 31, 0x4AFC6Cu);
    ctx->pc = 0x4AFC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFC64u;
    // 0x4afc68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B16A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B16A0u, 0x4AFC64u, 0x4AFC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFC6Cu;
label_4afc6c:
    // 0x4afc6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4afc6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afc70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4afc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afc74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4afc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afc78: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFC78u;
        // 0x4afc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFC80u;
    // 0x4afc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4afc84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4afc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4afc88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4afc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4afc8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4afc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afc90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4afc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4afc94: 0xc12c5c6  jal         func_4B1718
    ctx->pc = 0x4AFC94u;
    SET_GPR_U32(ctx, 31, 0x4AFC9Cu);
    ctx->pc = 0x4AFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFC94u;
    // 0x4afc98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1718u, 0x4AFC94u, 0x4AFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFC9Cu;
label_4afc9c:
    // 0x4afc9c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x4afc9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4afca0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFCA0u;
    {
        const bool branch_taken_0x4afca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFCA0u;
        // 0x4afca4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afca0) {
            ctx->pc = 0x4AFCB4u;
            goto label_4afcb4;
        }
    }
    ctx->pc = 0x4AFCA8u;
    // 0x4afca8: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AFCA8u;
    SET_GPR_U32(ctx, 31, 0x4AFCB0u);
    ctx->pc = 0x4AFCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFCA8u;
    // 0x4afcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AFCA8u, 0x4AFCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFCB0u;
label_4afcb0:
    // 0x4afcb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4afcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4afcb4:
    // 0x4afcb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4afcb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afcb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4afcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFCBCu;
        // 0x4afcc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFCC4u;
    // 0x4afcc4: 0x0  nop
    ctx->pc = 0x4afcc4u;
    // NOP
    ctx->pc = 0x4afcc8u;
}
