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

// Function: sub_00330748
// Address: 0x330748 - 0x3307c8
void sub_00330748_0x330748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330748_0x330748");
#endif

    switch (ctx->pc) {
        case 0x33079cu: goto label_33079c;
        case 0x3307acu: goto label_3307ac;
        default: break;
    }

    ctx->pc = 0x330748u;

    // 0x330748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33074c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x33074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x330750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330754: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x330754u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x330758: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x330758u;
    {
        const bool branch_taken_0x330758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330758u;
        // 0x33075c: 0x2862002f  slti        $v0, $v1, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330758) {
            ctx->pc = 0x33078Cu;
            goto label_33078c;
        }
    }
    ctx->pc = 0x330760u;
    // 0x330760: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330760u;
    {
        const bool branch_taken_0x330760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330760u;
        // 0x330764: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330760) {
            ctx->pc = 0x330778u;
            goto label_330778;
        }
    }
    ctx->pc = 0x330768u;
    // 0x330768: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x330768u;
    {
        const bool branch_taken_0x330768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x330768) {
            ctx->pc = 0x330794u;
            goto label_330794;
        }
    }
    ctx->pc = 0x330770u;
    // 0x330770: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x330770u;
    {
        const bool branch_taken_0x330770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330770u;
        // 0x330774: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330770) {
            ctx->pc = 0x3307B4u;
            goto label_3307b4;
        }
    }
    ctx->pc = 0x330778u;
label_330778:
    // 0x330778: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x330778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x33077c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33077Cu;
    {
        const bool branch_taken_0x33077c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33077c) {
            ctx->pc = 0x3307A4u;
            goto label_3307a4;
        }
    }
    ctx->pc = 0x330784u;
    // 0x330784: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x330784u;
    {
        const bool branch_taken_0x330784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330784u;
        // 0x330788: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330784) {
            ctx->pc = 0x3307B4u;
            goto label_3307b4;
        }
    }
    ctx->pc = 0x33078Cu;
label_33078c:
    // 0x33078c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33078Cu;
    {
        const bool branch_taken_0x33078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33078Cu;
        // 0x330790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33078c) {
            ctx->pc = 0x3307BCu;
            goto label_3307bc;
        }
    }
    ctx->pc = 0x330794u;
label_330794:
    // 0x330794: 0xc0cc142  jal         func_330508
    ctx->pc = 0x330794u;
    SET_GPR_U32(ctx, 31, 0x33079Cu);
    ctx->pc = 0x330798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330794u;
    // 0x330798: 0x90a50001  lbu         $a1, 0x1($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330508u, 0x330794u, 0x33079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33079Cu;
label_33079c:
    // 0x33079c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33079Cu;
    {
        const bool branch_taken_0x33079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33079Cu;
        // 0x3307a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33079c) {
            ctx->pc = 0x3307C0u;
            goto label_3307c0;
        }
    }
    ctx->pc = 0x3307A4u;
label_3307a4:
    // 0x3307a4: 0xc0cc190  jal         func_330640
    ctx->pc = 0x3307A4u;
    SET_GPR_U32(ctx, 31, 0x3307ACu);
    ctx->pc = 0x3307A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3307A4u;
    // 0x3307a8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330640u, 0x3307A4u, 0x3307ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307ACu;
label_3307ac:
    // 0x3307ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3307ACu;
    {
        const bool branch_taken_0x3307ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3307B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307ACu;
        // 0x3307b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3307ac) {
            ctx->pc = 0x3307C0u;
            goto label_3307c0;
        }
    }
    ctx->pc = 0x3307B4u;
label_3307b4:
    // 0x3307b4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3307b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3307b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3307b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3307bc:
    // 0x3307bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3307bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3307c0:
    // 0x3307c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3307C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3307C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3307C0u;
        // 0x3307c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3307C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3307C8u;
}
