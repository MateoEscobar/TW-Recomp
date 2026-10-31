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

// Function: sub_0043F8F0
// Address: 0x43f8f0 - 0x43f970
void sub_0043F8F0_0x43f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F8F0_0x43f8f0");
#endif

    switch (ctx->pc) {
        case 0x43f928u: goto label_43f928;
        case 0x43f94cu: goto label_43f94c;
        case 0x43f95cu: goto label_43f95c;
        default: break;
    }

    ctx->pc = 0x43f8f0u;

    // 0x43f8f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x43f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x43f8f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x43f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x43f8f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x43f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x43f8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43f8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f900: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43f904: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x43f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x43f908: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x43f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x43f90c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x43f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x43f910: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x43f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x43f914: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x43f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x43f918: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x43f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x43f91c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x43f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x43f920: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43F920u;
    SET_GPR_U32(ctx, 31, 0x43F928u);
    ctx->pc = 0x43F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43F920u;
    // 0x43f924: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43F920u, 0x43F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F928u;
label_43f928:
    // 0x43f928: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x43f928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x43f92c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x43f92cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x43f930: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43f930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f934: 0x2484f7b0  addiu       $a0, $a0, -0x850
    ctx->pc = 0x43f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965168));
    // 0x43f938: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x43f938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f93c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x43f93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f940: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x43f940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x43f944: 0xc10fa86  jal         func_43EA18
    ctx->pc = 0x43F944u;
    SET_GPR_U32(ctx, 31, 0x43F94Cu);
    ctx->pc = 0x43F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43F944u;
    // 0x43f948: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43EA18u, 0x43F944u, 0x43F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F94Cu;
label_43f94c:
    // 0x43f94c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x43F94Cu;
    {
        const bool branch_taken_0x43f94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F94Cu;
        // 0x43f950: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f94c) {
            ctx->pc = 0x43F960u;
            goto label_43f960;
        }
    }
    ctx->pc = 0x43F954u;
    // 0x43f954: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43F954u;
    SET_GPR_U32(ctx, 31, 0x43F95Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43F954u, 0x43F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F95Cu;
label_43f95c:
    // 0x43f95c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43f95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_43f960:
    // 0x43f960: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x43f960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43f964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x43f964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43f968: 0x3e00008  jr          $ra
    ctx->pc = 0x43F968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F968u;
        // 0x43f96c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F970u;
}
