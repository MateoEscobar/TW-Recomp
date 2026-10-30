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

// Function: sub_00327358
// Address: 0x327358 - 0x3273c0
void sub_00327358_0x327358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327358_0x327358");
#endif

    switch (ctx->pc) {
        case 0x327394u: goto label_327394;
        case 0x3273a4u: goto label_3273a4;
        case 0x3273b4u: goto label_3273b4;
        default: break;
    }

    ctx->pc = 0x327358u;

    // 0x327358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32735c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32735cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327364: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x327364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327368: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x327368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32736c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x32736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x327370: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327370u;
    {
        const bool branch_taken_0x327370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x327374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327370u;
        // 0x327374: 0x8ce40028  lw          $a0, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327370) {
            ctx->pc = 0x32738Cu;
            goto label_32738c;
        }
    }
    ctx->pc = 0x327378u;
    // 0x327378: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x327378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x32737c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32737Cu;
    {
        const bool branch_taken_0x32737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32737c) {
            ctx->pc = 0x32739Cu;
            goto label_32739c;
        }
    }
    ctx->pc = 0x327384u;
    // 0x327384: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x327384u;
    {
        const bool branch_taken_0x327384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327384u;
        // 0x327388: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327384) {
            ctx->pc = 0x3273ACu;
            goto label_3273ac;
        }
    }
    ctx->pc = 0x32738Cu;
label_32738c:
    // 0x32738c: 0xc0c9c0c  jal         func_327030
    ctx->pc = 0x32738Cu;
    SET_GPR_U32(ctx, 31, 0x327394u);
    ctx->pc = 0x327390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32738Cu;
    // 0x327390: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327030u, 0x32738Cu, 0x327394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327394u;
label_327394:
    // 0x327394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327394u;
    {
        const bool branch_taken_0x327394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327394u;
        // 0x327398: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327394) {
            ctx->pc = 0x3273B8u;
            goto label_3273b8;
        }
    }
    ctx->pc = 0x32739Cu;
label_32739c:
    // 0x32739c: 0xc0c9c16  jal         func_327058
    ctx->pc = 0x32739Cu;
    SET_GPR_U32(ctx, 31, 0x3273A4u);
    ctx->pc = 0x3273A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32739Cu;
    // 0x3273a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327058u, 0x32739Cu, 0x3273A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273A4u;
label_3273a4:
    // 0x3273a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3273A4u;
    {
        const bool branch_taken_0x3273a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3273A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273A4u;
        // 0x3273a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273a4) {
            ctx->pc = 0x3273B8u;
            goto label_3273b8;
        }
    }
    ctx->pc = 0x3273ACu;
label_3273ac:
    // 0x3273ac: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x3273ACu;
    SET_GPR_U32(ctx, 31, 0x3273B4u);
    ctx->pc = 0x3273B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3273ACu;
    // 0x3273b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x3273ACu, 0x3273B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273B4u;
label_3273b4:
    // 0x3273b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3273b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3273b8:
    // 0x3273b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3273B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3273BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273B8u;
        // 0x3273bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3273B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3273C0u;
}
