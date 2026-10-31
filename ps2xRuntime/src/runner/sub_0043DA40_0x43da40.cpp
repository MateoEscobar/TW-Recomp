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

// Function: sub_0043DA40
// Address: 0x43da40 - 0x43dac8
void sub_0043DA40_0x43da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DA40_0x43da40");
#endif

    switch (ctx->pc) {
        case 0x43da78u: goto label_43da78;
        case 0x43da8cu: goto label_43da8c;
        default: break;
    }

    ctx->pc = 0x43da40u;

    // 0x43da40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43da40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43da44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x43da44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x43da48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43da4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43da4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43da50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43da54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43da54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43da58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43da5c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x43da5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x43da60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43da60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43da64: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x43da64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x43da68: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43DA68u;
    {
        const bool branch_taken_0x43da68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43da68) {
            ctx->pc = 0x43DA78u;
            goto label_43da78;
        }
    }
    ctx->pc = 0x43DA70u;
    // 0x43da70: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43DA70u;
    SET_GPR_U32(ctx, 31, 0x43DA78u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43DA70u, 0x43DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DA78u;
label_43da78:
    // 0x43da78: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x43da78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x43da7c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x43da7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x43da80: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x43da80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x43da84: 0xc10f666  jal         func_43D998
    ctx->pc = 0x43DA84u;
    SET_GPR_U32(ctx, 31, 0x43DA8Cu);
    ctx->pc = 0x43DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DA84u;
    // 0x43da88: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D998u, 0x43DA84u, 0x43DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DA8Cu;
label_43da8c:
    // 0x43da8c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43DA8Cu;
    {
        const bool branch_taken_0x43da8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DA8Cu;
        // 0x43da90: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43da8c) {
            ctx->pc = 0x43DAA8u;
            goto label_43daa8;
        }
    }
    ctx->pc = 0x43DA94u;
    // 0x43da94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43da94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43da98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43da98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43da9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43da9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43daa0: 0x8110cc4  j           func_443310
    ctx->pc = 0x43DAA0u;
    ctx->pc = 0x43DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DAA0u;
    // 0x43daa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    sub_00443310_0x443310(rdram, ctx, runtime); return;
    ctx->pc = 0x43DAA8u;
label_43daa8:
    // 0x43daa8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43daa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43daac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43daacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43dab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43dab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43dab4: 0x3e00008  jr          $ra
    ctx->pc = 0x43DAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DAB4u;
        // 0x43dab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43DAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43DABCu;
    // 0x43dabc: 0x0  nop
    ctx->pc = 0x43dabcu;
    // NOP
    // 0x43dac0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x43dac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43dac4: 0x0  nop
    ctx->pc = 0x43dac4u;
    // NOP
    ctx->pc = 0x43dac8u;
}
