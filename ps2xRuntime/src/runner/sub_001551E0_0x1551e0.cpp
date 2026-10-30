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

// Function: sub_001551E0
// Address: 0x1551e0 - 0x155228
void sub_001551E0_0x1551e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001551E0_0x1551e0");
#endif

    switch (ctx->pc) {
        case 0x1551f4u: goto label_1551f4;
        case 0x155208u: goto label_155208;
        case 0x155214u: goto label_155214;
        default: break;
    }

    ctx->pc = 0x1551e0u;

    // 0x1551e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1551e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1551e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1551e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1551e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1551ec: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1551ECu;
    SET_GPR_U32(ctx, 31, 0x1551F4u);
    ctx->pc = 0x1551F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551ECu;
    // 0x1551f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1551ECu, 0x1551F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551F4u;
label_1551f4:
    // 0x1551f4: 0x38420013  xori        $v0, $v0, 0x13
    ctx->pc = 0x1551f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)19);
    // 0x1551f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1551F8u;
    {
        const bool branch_taken_0x1551f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1551f8) {
            ctx->pc = 0x1551FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1551F8u;
            // 0x1551fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155218u;
            goto label_155218;
        }
    }
    ctx->pc = 0x155200u;
    // 0x155200: 0xc056538  jal         func_1594E0
    ctx->pc = 0x155200u;
    SET_GPR_U32(ctx, 31, 0x155208u);
    ctx->pc = 0x155204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155200u;
    // 0x155204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1594E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594E0u, 0x155200u, 0x155208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155208u;
label_155208:
    // 0x155208: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15520c: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x15520Cu;
    SET_GPR_U32(ctx, 31, 0x155214u);
    ctx->pc = 0x155210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15520Cu;
    // 0x155210: 0x248456f0  addiu       $a0, $a0, 0x56F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x15520Cu, 0x155214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155214u;
label_155214:
    // 0x155214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x155214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155218:
    // 0x155218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15521c: 0x3e00008  jr          $ra
    ctx->pc = 0x15521Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15521Cu;
        // 0x155220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15521Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155224u;
    // 0x155224: 0x0  nop
    ctx->pc = 0x155224u;
    // NOP
    ctx->pc = 0x155228u;
}
