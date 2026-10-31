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

// Function: sub_0035F5C0
// Address: 0x35f5c0 - 0x35f630
void sub_0035F5C0_0x35f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F5C0_0x35f5c0");
#endif

    switch (ctx->pc) {
        case 0x35f5e0u: goto label_35f5e0;
        case 0x35f5e8u: goto label_35f5e8;
        case 0x35f600u: goto label_35f600;
        case 0x35f60cu: goto label_35f60c;
        case 0x35f618u: goto label_35f618;
        default: break;
    }

    ctx->pc = 0x35f5c0u;

    // 0x35f5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f5c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f5cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35f5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35f5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f5d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F5D8u;
    SET_GPR_U32(ctx, 31, 0x35F5E0u);
    ctx->pc = 0x35F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F5D8u;
    // 0x35f5dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F5D8u, 0x35F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F5E0u;
label_35f5e0:
    // 0x35f5e0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F5E0u;
    SET_GPR_U32(ctx, 31, 0x35F5E8u);
    ctx->pc = 0x35F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F5E0u;
    // 0x35f5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F5E0u, 0x35F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F5E8u;
label_35f5e8:
    // 0x35f5e8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f5ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f5f0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f5f0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5f8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35F5F8u;
    SET_GPR_U32(ctx, 31, 0x35F600u);
    ctx->pc = 0x35F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F5F8u;
    // 0x35f5fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35F5F8u, 0x35F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F600u;
label_35f600:
    // 0x35f600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f604: 0xc05ad60  jal         func_16B580
    ctx->pc = 0x35F604u;
    SET_GPR_U32(ctx, 31, 0x35F60Cu);
    ctx->pc = 0x35F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F604u;
    // 0x35f608: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B580u, 0x35F604u, 0x35F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F60Cu;
label_35f60c:
    // 0x35f60c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f610: 0xc102562  jal         func_409588
    ctx->pc = 0x35F610u;
    SET_GPR_U32(ctx, 31, 0x35F618u);
    ctx->pc = 0x35F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F610u;
    // 0x35f614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35F610u, 0x35F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F618u;
label_35f618:
    // 0x35f618: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35f618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f61c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f628: 0x3e00008  jr          $ra
    ctx->pc = 0x35F628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F628u;
        // 0x35f62c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F630u;
}
