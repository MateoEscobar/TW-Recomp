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

// Function: sub_0043F870
// Address: 0x43f870 - 0x43f8f0
void sub_0043F870_0x43f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F870_0x43f870");
#endif

    switch (ctx->pc) {
        case 0x43f8a8u: goto label_43f8a8;
        case 0x43f8ccu: goto label_43f8cc;
        case 0x43f8dcu: goto label_43f8dc;
        default: break;
    }

    ctx->pc = 0x43f870u;

    // 0x43f870: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x43f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x43f874: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x43f874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x43f878: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x43f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x43f87c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43f87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f880: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43f884: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x43f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x43f888: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x43f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x43f88c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x43f88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x43f890: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x43f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x43f894: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x43f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x43f898: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x43f898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x43f89c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x43f89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x43f8a0: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43F8A0u;
    SET_GPR_U32(ctx, 31, 0x43F8A8u);
    ctx->pc = 0x43F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43F8A0u;
    // 0x43f8a4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43F8A0u, 0x43F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F8A8u;
label_43f8a8:
    // 0x43f8a8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x43f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x43f8ac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x43f8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x43f8b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43f8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f8b4: 0x2484f788  addiu       $a0, $a0, -0x878
    ctx->pc = 0x43f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965128));
    // 0x43f8b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x43f8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f8bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x43f8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f8c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x43f8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x43f8c4: 0xc10fa86  jal         func_43EA18
    ctx->pc = 0x43F8C4u;
    SET_GPR_U32(ctx, 31, 0x43F8CCu);
    ctx->pc = 0x43F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43F8C4u;
    // 0x43f8c8: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43EA18u, 0x43F8C4u, 0x43F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F8CCu;
label_43f8cc:
    // 0x43f8cc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x43F8CCu;
    {
        const bool branch_taken_0x43f8cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F8CCu;
        // 0x43f8d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f8cc) {
            ctx->pc = 0x43F8E0u;
            goto label_43f8e0;
        }
    }
    ctx->pc = 0x43F8D4u;
    // 0x43f8d4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43F8D4u;
    SET_GPR_U32(ctx, 31, 0x43F8DCu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43F8D4u, 0x43F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F8DCu;
label_43f8dc:
    // 0x43f8dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43f8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_43f8e0:
    // 0x43f8e0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x43f8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43f8e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x43f8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43f8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x43F8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F8E8u;
        // 0x43f8ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F8F0u;
}
