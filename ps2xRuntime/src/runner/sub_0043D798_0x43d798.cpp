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

// Function: sub_0043D798
// Address: 0x43d798 - 0x43d848
void sub_0043D798_0x43d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D798_0x43d798");
#endif

    switch (ctx->pc) {
        case 0x43d7c0u: goto label_43d7c0;
        case 0x43d7f0u: goto label_43d7f0;
        case 0x43d804u: goto label_43d804;
        default: break;
    }

    ctx->pc = 0x43d798u;

    // 0x43d798: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43d79c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43d7a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x43d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x43d7a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43d7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43d7ac: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x43d7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x43d7b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43d7b4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x43d7b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x43d7b8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x43D7B8u;
    {
        const bool branch_taken_0x43d7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D7B8u;
        // 0x43d7bc: 0x3c120052  lui         $s2, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d7b8) {
            ctx->pc = 0x43D7E4u;
            goto label_43d7e4;
        }
    }
    ctx->pc = 0x43D7C0u;
label_43d7c0:
    // 0x43d7c0: 0x42000039  di
    ctx->pc = 0x43d7c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x43d7c4: 0x40f  sync.p
    ctx->pc = 0x43d7c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43d7c8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x43d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x43d7cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x43d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x43d7d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x43d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x43d7d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43D7D4u;
    {
        const bool branch_taken_0x43d7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43d7d4) {
            ctx->pc = 0x43D7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d7c0;
        }
    }
    ctx->pc = 0x43D7DCu;
    // 0x43d7dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43D7DCu;
    {
        const bool branch_taken_0x43d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D7DCu;
        // 0x43d7e0: 0x8e428e54  lw          $v0, -0x71AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d7dc) {
            ctx->pc = 0x43D7E8u;
            goto label_43d7e8;
        }
    }
    ctx->pc = 0x43D7E4u;
label_43d7e4:
    // 0x43d7e4: 0x8e428e54  lw          $v0, -0x71AC($s2)
    ctx->pc = 0x43d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938196)));
label_43d7e8:
    // 0x43d7e8: 0xc10f420  jal         func_43D080
    ctx->pc = 0x43D7E8u;
    SET_GPR_U32(ctx, 31, 0x43D7F0u);
    ctx->pc = 0x43D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D7E8u;
    // 0x43d7ec: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D080u, 0x43D7E8u, 0x43D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D7F0u;
label_43d7f0:
    // 0x43d7f0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x43d7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x43d7f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x43D7F4u;
    {
        const bool branch_taken_0x43d7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D7F4u;
        // 0x43d7f8: 0x8e428e54  lw          $v0, -0x71AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d7f4) {
            ctx->pc = 0x43D820u;
            goto label_43d820;
        }
    }
    ctx->pc = 0x43D7FCu;
    // 0x43d7fc: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x43D7FCu;
    SET_GPR_U32(ctx, 31, 0x43D804u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x43D7FCu, 0x43D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D804u;
label_43d804:
    // 0x43d804: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x43d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x43d808: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x43D808u;
    {
        const bool branch_taken_0x43d808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D808u;
        // 0x43d80c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d808) {
            ctx->pc = 0x43D814u;
            goto label_43d814;
        }
    }
    ctx->pc = 0x43D810u;
    // 0x43d810: 0x42000038  ei
    ctx->pc = 0x43d810u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_43d814:
    // 0x43d814: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x43d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43d818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43D818u;
    {
        const bool branch_taken_0x43d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D818u;
        // 0x43d81c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d818) {
            ctx->pc = 0x43D82Cu;
            goto label_43d82c;
        }
    }
    ctx->pc = 0x43D820u;
label_43d820:
    // 0x43d820: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x43D820u;
    {
        const bool branch_taken_0x43d820 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D820u;
        // 0x43d824: 0xae508e54  sw          $s0, -0x71AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294938196), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d820) {
            ctx->pc = 0x43D82Cu;
            goto label_43d82c;
        }
    }
    ctx->pc = 0x43D828u;
    // 0x43d828: 0x42000038  ei
    ctx->pc = 0x43d828u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_43d82c:
    // 0x43d82c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43d82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43d830: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43d830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43d834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43d834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43d838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43d838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43d83c: 0x3e00008  jr          $ra
    ctx->pc = 0x43D83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D83Cu;
        // 0x43d840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D844u;
    // 0x43d844: 0x0  nop
    ctx->pc = 0x43d844u;
    // NOP
    ctx->pc = 0x43d848u;
}
