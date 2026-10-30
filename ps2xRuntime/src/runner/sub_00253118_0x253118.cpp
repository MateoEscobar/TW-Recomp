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

// Function: sub_00253118
// Address: 0x253118 - 0x253170
void sub_00253118_0x253118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253118_0x253118");
#endif

    switch (ctx->pc) {
        case 0x25313cu: goto label_25313c;
        case 0x253148u: goto label_253148;
        case 0x253154u: goto label_253154;
        case 0x253160u: goto label_253160;
        default: break;
    }

    ctx->pc = 0x253118u;

    // 0x253118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25311c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x253120: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x253120u;
    {
        const bool branch_taken_0x253120 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x253124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253120u;
        // 0x253124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253120) {
            ctx->pc = 0x253160u;
            goto label_253160;
        }
    }
    ctx->pc = 0x253128u;
    // 0x253128: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x253128u;
    {
        const bool branch_taken_0x253128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253128u;
        // 0x25312c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253128) {
            ctx->pc = 0x253164u;
            goto label_253164;
        }
    }
    ctx->pc = 0x253130u;
    // 0x253130: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x253130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x253134: 0xc094c64  jal         func_253190
    ctx->pc = 0x253134u;
    SET_GPR_U32(ctx, 31, 0x25313Cu);
    ctx->pc = 0x253138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253134u;
    // 0x253138: 0x24847320  addiu       $a0, $a0, 0x7320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253190u, 0x253134u, 0x25313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25313Cu;
label_25313c:
    // 0x25313c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x25313cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x253140: 0xc094d20  jal         func_253480
    ctx->pc = 0x253140u;
    SET_GPR_U32(ctx, 31, 0x253148u);
    ctx->pc = 0x253144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253140u;
    // 0x253144: 0x24847af0  addiu       $a0, $a0, 0x7AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253480u, 0x253140u, 0x253148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253148u;
label_253148:
    // 0x253148: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x253148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x25314c: 0xc094d4e  jal         func_253538
    ctx->pc = 0x25314Cu;
    SET_GPR_U32(ctx, 31, 0x253154u);
    ctx->pc = 0x253150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25314Cu;
    // 0x253150: 0x24849268  addiu       $a0, $a0, -0x6D98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253538u, 0x25314Cu, 0x253154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253154u;
label_253154:
    // 0x253154: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x253154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x253158: 0xc094d66  jal         func_253598
    ctx->pc = 0x253158u;
    SET_GPR_U32(ctx, 31, 0x253160u);
    ctx->pc = 0x25315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253158u;
    // 0x25315c: 0x24849a40  addiu       $a0, $a0, -0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253598u, 0x253158u, 0x253160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253160u;
label_253160:
    // 0x253160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253164:
    // 0x253164: 0x3e00008  jr          $ra
    ctx->pc = 0x253164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253164u;
        // 0x253168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25316Cu;
    // 0x25316c: 0x0  nop
    ctx->pc = 0x25316cu;
    // NOP
    ctx->pc = 0x253170u;
}
