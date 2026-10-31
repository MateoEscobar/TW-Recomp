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

// Function: sub_0032F5F0
// Address: 0x32f5f0 - 0x32f698
void sub_0032F5F0_0x32f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F5F0_0x32f5f0");
#endif

    switch (ctx->pc) {
        case 0x32f624u: goto label_32f624;
        case 0x32f634u: goto label_32f634;
        case 0x32f63cu: goto label_32f63c;
        case 0x32f644u: goto label_32f644;
        case 0x32f64cu: goto label_32f64c;
        case 0x32f654u: goto label_32f654;
        case 0x32f660u: goto label_32f660;
        case 0x32f674u: goto label_32f674;
        case 0x32f684u: goto label_32f684;
        default: break;
    }

    ctx->pc = 0x32f5f0u;

    // 0x32f5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f5f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32f5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32f5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f5fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32f600: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x32f600u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f604: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F604u;
    {
        const bool branch_taken_0x32f604 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F604u;
        // 0x32f608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f604) {
            ctx->pc = 0x32F614u;
            goto label_32f614;
        }
    }
    ctx->pc = 0x32F60Cu;
    // 0x32f60c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32F60Cu;
    {
        const bool branch_taken_0x32f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F60Cu;
        // 0x32f610: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f60c) {
            ctx->pc = 0x32F618u;
            goto label_32f618;
        }
    }
    ctx->pc = 0x32F614u;
label_32f614:
    // 0x32f614: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x32f614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_32f618:
    // 0x32f618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f61c: 0xc0cc7e6  jal         func_331F98
    ctx->pc = 0x32F61Cu;
    SET_GPR_U32(ctx, 31, 0x32F624u);
    ctx->pc = 0x32F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F61Cu;
    // 0x32f620: 0x24050dac  addiu       $a1, $zero, 0xDAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F98u, 0x32F61Cu, 0x32F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F624u;
label_32f624:
    // 0x32f624: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x32f624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x32f628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32f628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f62c: 0xc0ca1c2  jal         func_328708
    ctx->pc = 0x32F62Cu;
    SET_GPR_U32(ctx, 31, 0x32F634u);
    ctx->pc = 0x32F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F62Cu;
    // 0x32f630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328708u, 0x32F62Cu, 0x32F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F634u;
label_32f634:
    // 0x32f634: 0xc0cbe1c  jal         func_32F870
    ctx->pc = 0x32F634u;
    SET_GPR_U32(ctx, 31, 0x32F63Cu);
    ctx->pc = 0x32F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F634u;
    // 0x32f638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F870u, 0x32F634u, 0x32F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F63Cu;
label_32f63c:
    // 0x32f63c: 0xc0ca870  jal         func_32A1C0
    ctx->pc = 0x32F63Cu;
    SET_GPR_U32(ctx, 31, 0x32F644u);
    ctx->pc = 0x32F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F63Cu;
    // 0x32f640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1C0u, 0x32F63Cu, 0x32F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F644u;
label_32f644:
    // 0x32f644: 0xc0cc95c  jal         func_332570
    ctx->pc = 0x32F644u;
    SET_GPR_U32(ctx, 31, 0x32F64Cu);
    ctx->pc = 0x32F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F644u;
    // 0x32f648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332570u, 0x32F644u, 0x32F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F64Cu;
label_32f64c:
    // 0x32f64c: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x32F64Cu;
    SET_GPR_U32(ctx, 31, 0x32F654u);
    ctx->pc = 0x32F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F64Cu;
    // 0x32f650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x32F64Cu, 0x32F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F654u;
label_32f654:
    // 0x32f654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f658: 0xc0c9006  jal         func_324018
    ctx->pc = 0x32F658u;
    SET_GPR_U32(ctx, 31, 0x32F660u);
    ctx->pc = 0x32F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F658u;
    // 0x32f65c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324018u, 0x32F658u, 0x32F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F660u;
label_32f660:
    // 0x32f660: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32f660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32f664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f668: 0x24a5f5a0  addiu       $a1, $a1, -0xA60
    ctx->pc = 0x32f668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964640));
    // 0x32f66c: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x32F66Cu;
    SET_GPR_U32(ctx, 31, 0x32F674u);
    ctx->pc = 0x32F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F66Cu;
    // 0x32f670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x32F66Cu, 0x32F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F674u;
label_32f674:
    // 0x32f674: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32f674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32f678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f67c: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x32F67Cu;
    SET_GPR_U32(ctx, 31, 0x32F684u);
    ctx->pc = 0x32F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F67Cu;
    // 0x32f680: 0x24a55ee8  addiu       $a1, $a1, 0x5EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x32F67Cu, 0x32F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F684u;
label_32f684:
    // 0x32f684: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32f684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32f688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f690: 0x3e00008  jr          $ra
    ctx->pc = 0x32F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F690u;
        // 0x32f694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F698u;
}
